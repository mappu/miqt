package main

import (
	"C"
	"fmt"
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
			if p.IsKnownEnum() {
				ret += cabiClassName(p.ParameterType)

			} else if p.IsEnum() {
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
		return "*C.struct_miqt_string"
	}

	if _, ok := p.QListOf(); ok {
		return "*C.struct_miqt_array"
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
	tmp = "C." + strings.Replace(tmp, " ", "_", -1)

	if p.QtClassType() || p.Pointer || p.ByRef {
		return "*" + tmp
	} else {
		return tmp
	}
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
			preamble += "argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))\n"
			preamble += "for i := range args {\n"
			preamble += "argv[i] = C.CString(args[i])\n"
			preamble += "}\n"

			tmp = append(tmp, "argc, &argv[0]")

		} else if skipNext {
			// Skip this parameter, already handled
			skipNext = false

		} else if p.ParameterType == "QString" {
			// Go: convert string -> miqt_string*
			// CABI: convert miqt_string* -> real QString

			preamble += p.ParameterName + "_ms := miqt_strdupg(" + p.ParameterName + ")\n"
			preamble += "defer C.free(" + p.ParameterName + "_ms)\n"
			tmp = append(tmp, "(*C.struct_miqt_string)("+p.ParameterName+"_ms)")

		} else if listType, ok := p.QListOf(); ok {
			// QList<T>
			// Go: convert T[] -> t* and len
			// CABI: create a real QList<>

			gfs.imports["runtime"] = struct{}{}
			gfs.imports["unsafe"] = struct{}{}

			if listType.ParameterType == "QString" {
				// Combo

				preamble += "// For the C ABI, malloc two C arrays; raw char* pointers and their lengths\n"
				preamble += p.ParameterName + "_CArray := (*[0xffff]" + listType.parameterTypeCgo() + ")(C.malloc(C.size_t(8 * len(" + p.ParameterName + "))))\n"
				preamble += "defer C.free(unsafe.Pointer(" + p.ParameterName + "_CArray))\n"

				preamble += "for i := range " + p.ParameterName + "{\n"
				preamble += "single_ms := miqt_strdupg(" + p.ParameterName + "[i])\n"
				preamble += "defer C.free(single_ms)\n"
				preamble += p.ParameterName + "_CArray[i] = (*C.struct_miqt_string)(single_ms)\n"
				preamble += "}\n"

				preamble += p.ParameterName + "_ma := &C.struct_miqt_array{len: C.size_t(len(" + p.ParameterName + ")), data: unsafe.Pointer(" + p.ParameterName + "_CArray)}\n"
				preamble += "defer runtime.KeepAlive(unsafe.Pointer(" + p.ParameterName + "_ma))\n"

				tmp = append(tmp, p.ParameterName+"_ma")

			} else {

				preamble += "// For the C ABI, malloc a C array of raw pointers\n"
				preamble += p.ParameterName + "_CArray := (*[0xffff]" + listType.parameterTypeCgo() + ")(C.malloc(C.size_t(8 * len(" + p.ParameterName + "))))\n"
				preamble += "defer C.free(unsafe.Pointer(" + p.ParameterName + "_CArray))\n"

				preamble += "for i := range " + p.ParameterName + "{\n"
				if listType.QtClassType() {
					preamble += p.ParameterName + "_CArray[i] = " + p.ParameterName + "[i].cPointer()\n"
				} else {
					preamble += p.ParameterName + "_CArray[i] = (" + listType.parameterTypeCgo() + ")(" + p.ParameterName + "[i])\n"
				}
				preamble += "}\n"

				preamble += p.ParameterName + "_ma := &C.struct_miqt_array{len: C.size_t(len(" + p.ParameterName + ")), data: unsafe.Pointer(" + p.ParameterName + "_CArray)}\n"
				preamble += "defer runtime.KeepAlive(unsafe.Pointer(" + p.ParameterName + "_ma))\n"

				tmp = append(tmp, p.ParameterName+"_ma")
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
				tmp = append(tmp, "("+p.parameterTypeCgo()+")(unsafe.Pointer("+p.ParameterName+"))") // n.b. This may not work if the integer type conversion was wrong
			} else {
				tmp = append(tmp, "("+p.parameterTypeCgo()+")("+p.ParameterName+")")
			}

		} else {
			// Default
			tmp = append(tmp, p.ParameterName)
		}
	}

	return preamble, strings.Join(tmp, ", ")
}

func (gfs *goFileState) emitCabiToGo(assignExpr string, rt CppParameter, rvalue string) string {

	shouldReturn := "return "
	afterword := ""
	namePrefix := rt.ParameterName

	if rt.ParameterType == "void" && !rt.Pointer {
		shouldReturn = ""

	} else if rt.ParameterType == "void" && rt.Pointer {
		// ...

	} else if rt.ParameterType == "char" && rt.Pointer {
		// Qt functions normally return QString - anything returning char*
		// is something like QByteArray.Data() where it returns an unsafe
		// internal pointer
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = namePrefix + "_ret := "
		afterword += assignExpr + " (unsafe.Pointer)(" + namePrefix + "_ret)\n"

	} else if rt.ParameterType == "QString" {
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_ms *C.struct_miqt_string = "
		afterword += namePrefix + "_ret := C.GoStringN(&" + namePrefix + "_ms.data, C.int(int64(" + namePrefix + "_ms.len)))\n"
		afterword += "C.free(unsafe.Pointer(" + namePrefix + "_ms))\n"
		afterword += assignExpr + namePrefix + "_ret"

	} else if t, ok := rt.QListOf(); ok {
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_ma *C.struct_miqt_array = "
		if t.ParameterType == "QString" {
			// Combo

			afterword += namePrefix + "_ret := make([]string, int(" + namePrefix + "_ma.len))\n"
			afterword += "_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(" + namePrefix + "_ma.data)) // hey ya\n"
			afterword += "for i := 0; i < int(" + namePrefix + "_ma.len); i++ {\n"
			afterword += namePrefix + "_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))\n"
			afterword += "C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*\n"
			afterword += "}\n"
			afterword += "C.free(unsafe.Pointer(" + namePrefix + "_ma))\n"
			afterword += assignExpr + " " + namePrefix + "_ret\n"

		} else {

			afterword += "" + namePrefix + "_ret := make([]" + t.RenderTypeGo() + ", int(" + namePrefix + "_ma.len))\n"
			afterword += "_outCast := (*[0xffff]" + t.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_ma.data)) // mrs jackson\n"
			afterword += "for i := 0; i < int(" + namePrefix + "_ma.len); i++ {\n"
			if t.QtClassType() {
				if !t.Pointer {
					// new, but then dereference it
					afterword += "" + namePrefix + "_ret[i] = *new" + cabiClassName(t.ParameterType) + "(_outCast[i])\n"
				} else {
					afterword += "" + namePrefix + "_ret[i] = new" + cabiClassName(t.ParameterType) + "(_outCast[i])\n"
				}
			} else { // plain int type
				afterword += "" + namePrefix + "_ret[i] = (" + t.RenderTypeGo() + ")(_outCast[i])\n"
			}
			afterword += "}\n"
			afterword += "C.free(unsafe.Pointer(" + namePrefix + "_ma))\n"
			afterword += assignExpr + " " + namePrefix + "_ret\n"
		}

	} else if rt.QtClassType() {
		// Construct our Go type based on this inner CABI type
		shouldReturn = "" + namePrefix + "_ret := "

		if rt.Pointer || rt.ByRef {
			gfs.imports["unsafe"] = struct{}{}
			afterword = assignExpr + " new" + cabiClassName(rt.ParameterType) + "_U(unsafe.Pointer(" + namePrefix + "_ret))"

		} else {
			// This is return by value, but CABI has new'd it into a
			// heap type for us
			// To preserve Qt's approximate semantics, add a runtime
			// finalizer to automatically Delete once the type goes out
			// of Go scope

			afterword += namePrefix + "_goptr := new" + cabiClassName(rt.ParameterType) + "(" + namePrefix + "_ret)\n"
			afterword += namePrefix + "_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer\n"

			// If this is a function return, we have converted value-returned Qt types to pointers
			// If this is a slot return, we haven't
			// TODO standardize this
			if strings.Contains(assignExpr, `return`) {
				afterword += assignExpr + "" + namePrefix + "_goptr\n"
			} else {
				afterword += assignExpr + " *" + namePrefix + "_goptr\n"
			}
		}

	} else if rt.IntType() || rt.ParameterType == "bool" {
		// Need to cast Cgo type to Go int type
		shouldReturn = "" + namePrefix + "_ret := "
		afterword += assignExpr + "(" + rt.RenderTypeGo() + ")(" + namePrefix + "_ret)\n"

	}

	return shouldReturn + " " + rvalue + "\n" + afterword
}

func emitGo(src *CppParsedHeader, headerName string) (string, error) {

	ret := strings.Builder{}
	ret.WriteString(`package qt

/*

#include "gen_` + headerName + `"
#include <stdlib.h>

*/
import "C"

%%_IMPORTLIBS_%%
`)

	gfs := goFileState{
		imports: map[string]struct{}{},
	}

	for _, e := range src.Enums {
		if e.EnumName == "" {
			continue // Removed by transformRedundant AST pass
		}

		goEnumName := cabiClassName(e.EnumName)

		ret.WriteString(`
		type ` + goEnumName + ` ` + parseSingleTypeString(e.UnderlyingType).RenderTypeGo() + `
		`)

		if len(e.Entries) > 0 {

			ret.WriteString("const (\n")

			for _, ee := range e.Entries {
				ret.WriteString(cabiClassName(goEnumName+"::"+ee.EntryName) + " " + goEnumName + " = " + ee.EntryValue + "\n")
			}

			ret.WriteString("\n)\n\n")
		}
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
				if h == nil {
					return nil
				}
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

			if ctor.LinuxOnly {
				gfs.imports["runtime"] = struct{}{}
				ret.WriteString(`
			// New` + goClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + goClassName + maybeSuffix(i) + `(` + emitParametersGo(ctor.Parameters) + `) *` + goClassName + ` {
				if runtime.GOOS == "linux" {
					` + preamble + ` ret := C.` + goClassName + `_new` + maybeSuffix(i) + `(` + forwarding + `)
					return new` + goClassName + `(ret)
				} else {
					panic("Unsupported OS")
				}
			}
			
			`)
			} else {
				ret.WriteString(`
			// New` + goClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + goClassName + maybeSuffix(i) + `(` + emitParametersGo(ctor.Parameters) + `) *` + goClassName + ` {
				` + preamble + ` ret := C.` + goClassName + `_new` + maybeSuffix(i) + `(` + forwarding + `)
				return new` + goClassName + `(ret)
			}
			
			`)
			}
		}

		for _, m := range c.Methods {
			preamble, forwarding := gfs.emitParametersGo2CABIForwarding(m)

			returnTypeDecl := m.ReturnType.RenderTypeGo()
			if returnTypeDecl == "void" {
				returnTypeDecl = ""
			}
			if m.ReturnType.QtClassType() && m.ReturnType.ParameterType != "QString" && !(m.ReturnType.Pointer || m.ReturnType.ByRef) {
				returnTypeDecl = "*" + returnTypeDecl
			}
			if (m.ReturnType.ParameterType == "char" || m.ReturnType.ParameterType == "void") && m.ReturnType.Pointer {
				gfs.imports["unsafe"] = struct{}{}
				returnTypeDecl = "unsafe.Pointer"
			}

			rvalue := `C.` + goClassName + `_` + m.SafeMethodName() + `(` + forwarding + `)`

			returnFunc := gfs.emitCabiToGo("return ", m.ReturnType, rvalue)

			receiverAndMethod := `(this *` + goClassName + `) ` + m.SafeMethodName()
			if m.IsStatic {
				receiverAndMethod = goClassName + `_` + m.SafeMethodName()
			}

			ret.WriteString(`
			func ` + receiverAndMethod + `(` + emitParametersGo(m.Parameters) + `) ` + returnTypeDecl + ` {`)
			if m.LinuxOnly {
				gfs.imports["runtime"] = struct{}{}
				ret.WriteString(`
				if runtime.GOOS != "linux" {
					panic("Unsupported OS")
				}
				`)
			}
			ret.WriteString(`
				` + preamble +
				returnFunc + `}
			`)

			// Add Connect() wrappers for signal functions
			if m.IsSignal {
				gfs.imports["unsafe"] = struct{}{}
				gfs.imports["runtime/cgo"] = struct{}{}

				var cgoNamedParams []string
				var paramNames []string
				conversion := ""

				if len(m.Parameters) > 0 {
					conversion = "// Convert all CABI parameters to Go parameters\n"
				}
				for i, pp := range m.Parameters {
					cgoNamedParams = append(cgoNamedParams, pp.ParameterName+" "+pp.parameterTypeCgo())

					paramNames = append(paramNames, fmt.Sprintf("slotval%d", i+1))
					conversion += gfs.emitCabiToGo(fmt.Sprintf("slotval%d := ", i+1), pp, pp.ParameterName) + "\n"
				}

				ret.WriteString(`func (this *` + goClassName + `) On` + m.SafeMethodName() + `(slot func(` + emitParametersGo(m.Parameters) + `)) {
					C.` + goClassName + `_connect_` + m.SafeMethodName() + `(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
				}
				
				//export miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `
				func miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `(cb *C.void` + ifv(len(m.Parameters) > 0, ", ", "") + strings.Join(cgoNamedParams, `, `) + `) {
					gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(` + emitParametersGo(m.Parameters) + `))
					if !ok {
						panic("miqt: callback of non-callback type (heap corruption?)")
					}
				
					` + conversion + `
						
					gofunc(` + strings.Join(paramNames, `, `) + ` )
				}

				`)
			}
		}

		if c.CanDelete {
			gfs.imports["runtime"] = struct{}{} // Finalizer

			ret.WriteString(`
			// Delete this object from C++ memory.
			func (this *` + goClassName + `) Delete() {
				C.` + goClassName + `_Delete(this.h)
			}
				
			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *` + goClassName + `) GoGC() {
				runtime.SetFinalizer(this, func(this *` + goClassName + `) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
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
