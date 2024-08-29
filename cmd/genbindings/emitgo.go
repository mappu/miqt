package main

import (
	"C"
	"go/format"
	"log"
	"sort"
	"strings"
)

func goReservedWord(s string) bool {
	switch s {
	case "default", "const", "func", "var", "type", "len", "new", "copy", "import", "range", "string", "map", "int", "select",
		"ret": // not a language-reserved word, but a binding-reserved word
		return true
	default:
		return false
	}
}

func (p CppParameter) RenderTypeGo() string {
	if p.Pointer && p.ParameterType == "char" {
		return "string"
	}
	if p.ParameterType == "QString" {
		return "string"
	}

	if t, ok := p.QListOf(); ok {
		return "[]" + t.RenderTypeGo()
	}

	ret := ""
	if p.ByRef || p.Pointer {
		ret += "*"
	}

	switch p.ParameterType {
	case "char", "qint8", "signed char", "unsigned char", "uchar", "quint8":
		ret += "byte" // Strictly speaking, Go byte is unsigned and char may be signed
	case "short", "qint16":
		ret += "int16"
	case "ushort", "quint16", "unsigned short":
		ret += "uint16"
	case "long":
		// Windows ILP32 - 32-bits
		// Linux LP64 - 64-bits
		if C.sizeof_long == 4 {
			ret += "int32"
		} else {
			ret += "int64"
		}
	case "ulong", "unsigned long":
		if C.sizeof_long == 4 {
			ret += "uint32"
		} else {
			ret += "uint64"
		}

	case "unsigned int":
		ret += "uint"
	case "qint32":
		ret += "int32"
	case "quint32":
		ret += "uint32"
	case "qlonglong", "qint64", "long long":
		ret += "int64"
	case "qulonglong", "quint64", "unsigned long long":
		ret += "uint64"
	case "float":
		ret += "float32"
	case "double", "qreal":
		ret += "float64"
	case "qsizetype", "size_t", "qptrdiff", "ptrdiff_t":
		if C.sizeof_size_t == 4 {
			ret += "uint32"
		} else {
			ret += "uint64"
		}
	case "qintptr", "uintptr_t", "intptr_t", "quintptr":
		ret += "uintptr"
	default:

		if p.IsFlagType() {
			ret += "int"

		} else if strings.Contains(p.ParameterType, `::`) {
			if p.IsEnum() {
				ret += "uintptr"
			} else {
				// Inner class
				ret += cabiClassName(p.ParameterType)
			}
		} else {
			// Do not transform this type
			ret += p.ParameterType
		}

	}

	return ret // ignore const
}

func (p CppParameter) parameterTypeCgo() string {
	if p.ParameterType == "QString" {
		return "C.char"
	}
	tmp := strings.Replace(p.RenderTypeCabi(), `*`, "", -1)
	if strings.HasPrefix(tmp, "const ") {
		tmp = tmp[6:] // Constness doesn't survive the CABI boundary
	}
	if strings.HasPrefix(tmp, "unsigned ") {
		tmp = "u" + tmp[9:] // Cgo uses uchar, uint instead of full name
	}
	if strings.HasPrefix(tmp, "signed ") {
		tmp = "s" + tmp[7:] // Cgo uses schar
	}
	tmp = strings.Replace(tmp, `long long`, `longlong`, -1)
	return "C." + strings.Replace(tmp, " ", "_", -1)
}

func emitParametersGo(params []CppParameter) string {
	tmp := make([]string, 0, len(params))

	skipNext := false

	for i, p := range params {

		if IsArgcArgv(params, i) {
			skipNext = true
			tmp = append(tmp, "args []string")

		} else if skipNext {
			// Skip this parameter, already handled
			skipNext = false

		} else {
			// Ordinary parameter
			tmp = append(tmp, p.ParameterName+" "+p.RenderTypeGo())

		}
	}
	return strings.Join(tmp, ", ")
}

type goFileState struct {
	imports map[string]struct{}
}

func (gfs *goFileState) emitParametersGo2CABIForwarding(m CppMethod) (preamble string, forwarding string) {
	tmp := make([]string, 0, len(m.Parameters)+2)

	if !m.IsStatic {
		tmp = append(tmp, "this.h")
	}

	skipNext := false

	for i, p := range m.Parameters {

		if IsArgcArgv(m.Parameters, i) {
			skipNext = true
			// QApplication constructor. Convert 'args' into Qt's wanted types
			// Qt has a warning in the docs saying these pointers must be valid
			// for the entire lifetype of QApplication, so, malloc + never free

			preamble += "// Convert []string to long-lived int& argc, char** argv, never call free()\n"
			preamble += "argc := (*C.int)(C.malloc(8))\n"
			preamble += "*argc = C.int(len(args))\n"
			preamble += "argv := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(args))))\n"
			preamble += "for i := range args {\n"
			preamble += "argv[i] = C.CString(args[i])\n"
			preamble += "}\n"

			tmp = append(tmp, "argc, &argv[0]")

		} else if skipNext {
			// Skip this parameter, already handled
			skipNext = false

		} else if p.ParameterType == "QString" {
			// Go: convert string -> char* and len
			// CABI: convert char* and len -> real QString
			gfs.imports["unsafe"] = struct{}{}

			preamble += p.ParameterName + "_Cstring := C.CString(" + p.ParameterName + ")\n"
			preamble += "defer C.free(unsafe.Pointer(" + p.ParameterName + "_Cstring))\n"
			tmp = append(tmp, p.ParameterName+"_Cstring, C.ulong(len("+p.ParameterName+"))") // Second parameter cast to size_t projected type

		} else if listType, ok := p.QListOf(); ok {
			// QList<T>
			// Go: convert T[] -> t* and len
			// CABI: create a real QList<>

			if listType.ParameterType == "QString" {
				// Combo
				gfs.imports["unsafe"] = struct{}{}

				preamble += "// For the C ABI, malloc two C arrays; raw char* pointers and their lengths\n"
				preamble += p.ParameterName + "_CArray := (*[0xffff]*" + listType.parameterTypeCgo() + ")(C.malloc(C.ulong(8 * len(" + p.ParameterName + "))))\n"
				preamble += p.ParameterName + "_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(" + p.ParameterName + "))))\n"
				preamble += "defer C.free(unsafe.Pointer(" + p.ParameterName + "_CArray))\n"
				preamble += "defer C.free(unsafe.Pointer(" + p.ParameterName + "_Lengths))\n"
				preamble += "for i := range " + p.ParameterName + "{\n"
				preamble += "single_cstring := C.CString(" + p.ParameterName + "[i])\n"
				preamble += "defer C.free(unsafe.Pointer(single_cstring))\n"
				preamble += p.ParameterName + "_CArray[i] = single_cstring\n"
				preamble += p.ParameterName + "_Lengths[i] = (C.size_t)(len(" + p.ParameterName + "[i]))\n"
				preamble += "}\n"

				tmp = append(tmp, "&"+p.ParameterName+"_CArray[0], &"+p.ParameterName+"_Lengths[0], C.ulong(len("+p.ParameterName+"))")

			} else {

				preamble += "// For the C ABI, malloc a C array of raw pointers\n"
				if listType.QtClassType() {
					preamble += p.ParameterName + "_CArray := (*[0xffff]*" + listType.parameterTypeCgo() + ")(C.malloc(C.ulong(8 * len(" + p.ParameterName + "))))\n"
				} else {
					preamble += p.ParameterName + "_CArray := (*[0xffff]" + listType.parameterTypeCgo() + ")(C.malloc(C.ulong(8 * len(" + p.ParameterName + "))))\n"
				}
				preamble += "defer C.free(unsafe.Pointer(" + p.ParameterName + "_CArray))\n"
				preamble += "for i := range " + p.ParameterName + "{\n"
				if listType.QtClassType() {
					preamble += p.ParameterName + "_CArray[i] = " + p.ParameterName + "[i].cPointer()\n"
				} else {
					preamble += p.ParameterName + "_CArray[i] = (" + listType.parameterTypeCgo() + ")(" + p.ParameterName + "[i])\n"
				}
				preamble += "}\n"

				tmp = append(tmp, "&"+p.ParameterName+"_CArray[0], C.ulong(len("+p.ParameterName+"))")
			}

		} else if p.Pointer && p.ParameterType == "char" {
			// Single char* argument
			gfs.imports["unsafe"] = struct{}{}
			preamble += p.ParameterName + "_Cstring := C.CString(" + p.ParameterName + ")\n"
			preamble += "defer C.free(unsafe.Pointer(" + p.ParameterName + "_Cstring))\n"
			tmp = append(tmp, p.ParameterName+"_Cstring")

		} else if /*(p.Pointer || p.ByRef) &&*/ p.QtClassType() {
			// The C++ type is a pointer to Qt class
			// We want our functions to accept the Go wrapper type, and forward as cPointer()
			tmp = append(tmp, p.ParameterName+".cPointer()")

		} else if p.IntType() || p.ParameterType == "bool" {
			if p.Pointer || p.ByRef {
				gfs.imports["unsafe"] = struct{}{}
				tmp = append(tmp, "(*"+p.parameterTypeCgo()+")(unsafe.Pointer("+p.ParameterName+"))") // n.b. This may not work if the integer type conversion was wrong
			} else {
				tmp = append(tmp, "("+p.parameterTypeCgo()+")("+p.ParameterName+")")
			}

		} else {
			// Default
			tmp = append(tmp, p.ParameterName)
		}
	}

	if m.ReturnType.ParameterType == "QString" {
		tmp = append(tmp, "&_out, &_out_Strlen")
	} else if t, ok := m.ReturnType.QListOf(); ok {

		if t.ParameterType == "QString" {
			// Combo
			tmp = append(tmp, "&_out, &_out_Lengths, &_out_len")
		} else {
			tmp = append(tmp, "&_out, &_out_len")
		}
	}

	return preamble, strings.Join(tmp, ", ")
}

func emitGo(src *CppParsedHeader, headerName string) (string, error) {

	ret := strings.Builder{}
	ret.WriteString(`package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_` + headerName + `"
#include <stdlib.h>

*/
import "C"

%%_IMPORTLIBS_%%
`)

	gfs := goFileState{
		imports: map[string]struct{}{},
	}

	for _, c := range src.Classes {

		goClassName := cabiClassName(c.ClassName)

		ret.WriteString(`
		type ` + goClassName + ` struct {
			h *C.` + goClassName + `
		`)

		// Embed all inherited types to directly allow calling inherited methods
		for _, base := range c.Inherits {
			ret.WriteString("*" + base + "\n")
		}

		ret.WriteString(`
		}
		
		func (this *` + goClassName + `) cPointer() *C.` + goClassName + ` {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		`)

		localInit := "h: h"
		for _, base := range c.Inherits {
			gfs.imports["unsafe"] = struct{}{}
			localInit += ", " + base + ": new" + cabiClassName(base) + "_U(unsafe.Pointer(h))"
		}

		ret.WriteString(`
			func new` + goClassName + `(h *C.` + goClassName + `) *` + goClassName + ` {
				return &` + goClassName + `{` + localInit + `}
			}
			
		`)

		// CGO types only exist within the same Go file, so other Go files can't
		// call this same private ctor function, unless it goes through unsafe.Pointer{}.
		// This is probably because C types can possibly violate the ODR whereas
		// that never happens in Go's type system.
		gfs.imports["unsafe"] = struct{}{}
		ret.WriteString(`
			func new` + goClassName + `_U(h unsafe.Pointer) *` + goClassName + ` {
				return new` + goClassName + `( (*C.` + goClassName + `)(h) )
			}
			
		`)

		for i, ctor := range c.Ctors {
			preamble, forwarding := gfs.emitParametersGo2CABIForwarding(ctor)
			ret.WriteString(`
			// New` + goClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + goClassName + maybeSuffix(i) + `(` + emitParametersGo(ctor.Parameters) + `) *` + goClassName + ` {
				` + preamble + ` ret := C.` + goClassName + `_new` + maybeSuffix(i) + `(` + forwarding + `)
				return new` + goClassName + `(ret)
			}
			
			`)
		}

		for _, m := range c.Methods {
			preamble, forwarding := gfs.emitParametersGo2CABIForwarding(m)

			shouldReturn := "return "
			afterword := ""
			returnTypeDecl := m.ReturnType.RenderTypeGo() // FIXME handle byRef/const here too

			if m.ReturnType.ParameterType == "void" && !m.ReturnType.Pointer {
				shouldReturn = ""
				returnTypeDecl = ""

			} else if m.ReturnType.ParameterType == "void" && m.ReturnType.Pointer {
				returnTypeDecl = "interface{}"

			} else if m.ReturnType.ParameterType == "char" && m.ReturnType.Pointer {
				// Qt functions normally return QString - anything returning char*
				// is something like QByteArray.Data() where it returns an unsafe
				// internal pointer
				gfs.imports["unsafe"] = struct{}{}
				returnTypeDecl = "unsafe.Pointer"
				shouldReturn = "ret := "
				afterword += "return (unsafe.Pointer)(ret)\n"

			} else if m.ReturnType.ParameterType == "QString" {
				shouldReturn = ""
				returnTypeDecl = "string"
				gfs.imports["unsafe"] = struct{}{}

				preamble += "var _out *C.char = nil\n"
				preamble += "var _out_Strlen C.int = 0\n" // I think size_t is "better" but GoStringN() requires C.int
				afterword += "ret := C.GoStringN(_out, _out_Strlen)\n"
				afterword += "C.free(unsafe.Pointer(_out))\n"
				afterword += "return ret"

			} else if t, ok := m.ReturnType.QListOf(); ok {
				gfs.imports["unsafe"] = struct{}{}
				shouldReturn = ""
				returnTypeDecl = "[]" + t.RenderTypeGo()

				if t.ParameterType == "QString" {
					// Combo

					preamble += "var _out **C.char = nil\n"
					preamble += "var _out_Lengths *C.int = nil\n"
					preamble += "var _out_len C.size_t = 0\n"
					afterword += "ret := make([]string, int(_out_len))\n"
					afterword += "_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya\n"
					afterword += "_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))\n"
					afterword += "for i := 0; i < int(_out_len); i++ {\n"
					afterword += "ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])\n"
					afterword += "}\n"
					afterword += "C.free(unsafe.Pointer(_out))\n"
					afterword += "return ret\n"

				} else {
					if t.QtClassType() {
						preamble += "var _out **" + t.parameterTypeCgo() + " = nil\n"
					} else {
						preamble += "var _out *" + t.parameterTypeCgo() + " = nil\n"
					}
					preamble += "var _out_len C.size_t = 0\n"
					afterword += "ret := make([]" + t.RenderTypeGo() + ", int(_out_len))\n"
					if t.QtClassType() {
						afterword += "_outCast := (*[0xffff]*" + t.parameterTypeCgo() + ")(unsafe.Pointer(_out)) // so fresh so clean\n"
					} else {
						afterword += "_outCast := (*[0xffff]" + t.parameterTypeCgo() + ")(unsafe.Pointer(_out)) // mrs jackson\n"
					}
					afterword += "for i := 0; i < int(_out_len); i++ {\n"
					if t.QtClassType() {
						if !t.Pointer {
							// new, but then dereference it
							afterword += "ret[i] = *new" + cabiClassName(t.ParameterType) + "(_outCast[i])\n"
						} else {
							afterword += "ret[i] = new" + cabiClassName(t.ParameterType) + "(_outCast[i])\n"
						}
					} else { // plain int type
						afterword += "ret[i] = (" + t.RenderTypeGo() + ")(_outCast[i])\n"
					}
					afterword += "}\n"
					afterword += "C.free(unsafe.Pointer(_out))\n"
					afterword += "return ret\n"
				}

			} else if m.ReturnType.QtClassType() {
				// Construct our Go type based on this inner CABI type
				shouldReturn = "ret := "

				if m.ReturnType.Pointer || m.ReturnType.ByRef {
					gfs.imports["unsafe"] = struct{}{}
					afterword = "return new" + cabiClassName(m.ReturnType.ParameterType) + "_U(unsafe.Pointer(ret))"

				} else {
					// This is return by value, but CABI has new'd it into a
					// heap type for us
					// To preserve Qt's approximate semantics, add a runtime
					// finalizer to automatically Delete once the type goes out
					// of Go scope
					returnTypeDecl = "*" + returnTypeDecl

					gfs.imports["runtime"] = struct{}{}
					afterword = "// Qt uses pass-by-value semantics for this type. Mimic with finalizer\n"
					afterword += "ret1 := new" + cabiClassName(m.ReturnType.ParameterType) + "(ret)\n"
					afterword += "runtime.SetFinalizer(ret1, func(ret2 *" + cabiClassName(m.ReturnType.ParameterType) + ") {\n"
					afterword += "ret2.Delete()\n"
					afterword += "runtime.KeepAlive(ret2.h)\n"
					afterword += "})\n"
					afterword += "return ret1\n"
				}

			} else if m.ReturnType.IntType() || m.ReturnType.ParameterType == "bool" {
				// Need to cast Cgo type to Go int type
				shouldReturn = "ret := "
				afterword += "return (" + m.ReturnType.RenderTypeGo() + ")(ret)\n"

			}

			receiverAndMethod := `(this *` + goClassName + `) ` + m.SafeMethodName()
			if m.IsStatic {
				receiverAndMethod = goClassName + `_` + m.SafeMethodName()
			}

			ret.WriteString(`
			func ` + receiverAndMethod + `(` + emitParametersGo(m.Parameters) + `) ` + returnTypeDecl + ` {
				` + preamble +
				shouldReturn + ` C.` + goClassName + `_` + m.SafeMethodName() + `(` + forwarding + `)
` + afterword + `}
			
			`)

			// Add Connect() wrappers for signal functions
			if m.IsSignal && !m.HasHiddenParams {
				gfs.imports["unsafe"] = struct{}{}
				gfs.imports["runtime/cgo"] = struct{}{}
				ret.WriteString(`func (this *` + goClassName + `) On` + m.SafeMethodName() + `(slot func()) {
					var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
						slot()
					}
				
					C.` + goClassName + `_connect_` + m.SafeMethodName() + `(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
				}
				`)
			}
		}

		if c.CanDelete {
			ret.WriteString(`
			func (this *` + goClassName + `) Delete() {
				C.` + goClassName + `_Delete(this.h)
			}
			`)
		}

	}

	goSrc := ret.String()

	// Fixup imports
	if len(gfs.imports) > 0 {
		allImports := make([]string, 0, len(gfs.imports))
		for k, _ := range gfs.imports {
			allImports = append(allImports, `"`+k+`"`)
		}
		sort.Strings(allImports)
		goSrc = strings.Replace(goSrc, `%%_IMPORTLIBS_%%`, "import (\n\t"+strings.Join(allImports, "\n\t")+"\n)", 1)

	} else {
		goSrc = strings.Replace(goSrc, `%%_IMPORTLIBS_%%`, "", 1)

	}

	// Run gofmt over the result
	formattedSrc, err := format.Source([]byte(goSrc))
	if err != nil {
		log.Printf("gofmt failure: %v", err)
		formattedSrc = []byte(goSrc)
	}

	return string(formattedSrc), nil
}
