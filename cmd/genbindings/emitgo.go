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

func (p CppParameter) RenderTypeGo(gfs *goFileState) string {
	if p.Pointer && p.ParameterType == "char" {
		return "string"
	}
	if p.ParameterType == "QString" {
		return "string"
	}

	if t, ok := p.QListOf(); ok {
		return "[]" + t.RenderTypeGo(gfs)
	}

	if t, ok := p.QSetOf(); ok {
		return "map[" + t.RenderTypeGo(gfs) + "]struct{}"
	}

	if p.ParameterType == "void" && p.Pointer {
		return "unsafe.Pointer"
	}

	ret := ""
	switch p.ParameterType {
	case "unsigned char", "uchar", "quint8":
		// Go byte is unsigned
		ret += "byte"
	case "char", "qint8", "signed char":
		ret += "int8" // Signed
	case "short", "qint16", "int16_t":
		ret += "int16"
	case "ushort", "quint16", "unsigned short", "uint16_t":
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
	case "size_t": // size_t is unsigned
		if C.sizeof_size_t == 4 {
			ret += "uint32"
		} else {
			ret += "uint64"
		}
	case "qsizetype", "QIntegerForSizeof<std::size_t>::Signed", "qptrdiff", "ptrdiff_t": // all signed
		if C.sizeof_size_t == 4 {
			ret += "int32"
		} else {
			ret += "int64"
		}

	case "qintptr", "uintptr_t", "intptr_t", "quintptr", "QIntegerForSizeof<void *>::Unsigned", "QIntegerForSizeof<void *>::Signed":
		ret += "uintptr"
	default:

		if ft, ok := p.QFlagsOf(); ok {

			if enumInfo, ok := KnownEnums[ft.ParameterType]; ok && enumInfo.PackageName != gfs.currentPackageName {
				// Cross-package
				ret += enumInfo.PackageName + "." + cabiClassName(ft.ParameterType)
				gfs.imports[importPathForQtPackage(enumInfo.PackageName)] = struct{}{}
			} else {
				// Same package
				ret += cabiClassName(ft.ParameterType)
			}

		} else if enumInfo, ok := KnownEnums[p.ParameterType]; ok {
			if enumInfo.PackageName != gfs.currentPackageName {
				// Cross-package
				ret += enumInfo.PackageName + "." + cabiClassName(p.ParameterType)
				gfs.imports[importPathForQtPackage(enumInfo.PackageName)] = struct{}{}
			} else {
				// Same package
				ret += cabiClassName(p.ParameterType)
			}

		} else if strings.Contains(p.ParameterType, `::`) {
			// Inner class
			ret += cabiClassName(p.ParameterType)

		} else {
			// Do not transform this type
			ret += p.ParameterType
		}

	}

	if pkg, ok := KnownClassnames[p.ParameterType]; ok && pkg.PackageName != gfs.currentPackageName {
		ret = pkg.PackageName + "." + ret
		gfs.imports[importPathForQtPackage(pkg.PackageName)] = struct{}{}
	}

	if p.ByRef || p.Pointer {
		ret = "*" + ret
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

	if _, ok := p.QSetOf(); ok {
		return "*C.struct_miqt_array"
	}

	tmp := strings.Replace(p.RenderTypeCabi(), `*`, "", -1)

	if strings.HasPrefix(tmp, "const ") && tmp != "const char" { // Special typedef to make this work for const char* signal parameters
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

func (gfs *goFileState) emitParametersGo(params []CppParameter) string {
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
			tmp = append(tmp, p.ParameterName+" "+p.RenderTypeGo(gfs))

		}
	}
	return strings.Join(tmp, ", ")
}

type goFileState struct {
	imports            map[string]struct{}
	currentPackageName string
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
			// This transformation only affects the Go side. The CABI side is
			// projected naturally

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

		} else {
			addPreamble, rvalue := gfs.emitParameterGo2CABIForwarding(p)

			preamble += addPreamble
			tmp = append(tmp, rvalue)

		}
	}

	return preamble, strings.Join(tmp, ", ")
}

func (gfs *goFileState) emitParameterGo2CABIForwarding(p CppParameter) (preamble string, rvalue string) {

	nameprefix := makeNamePrefix(p.ParameterName)

	if p.ParameterType == "QString" {
		// Go: convert string -> miqt_string*
		// CABI: convert miqt_string* -> real QString

		gfs.imports["libmiqt"] = struct{}{}
		preamble += nameprefix + "_ms := libmiqt.Strdupg(" + p.ParameterName + ")\n"
		preamble += "defer C.free(" + nameprefix + "_ms)\n"

		rvalue = "(*C.struct_miqt_string)(" + nameprefix + "_ms)"

	} else if listType, ok := p.QListOf(); ok {
		// QList<T>
		// Go: convert T[] -> t* and len
		// CABI: create a real QList<>

		gfs.imports["runtime"] = struct{}{}
		gfs.imports["unsafe"] = struct{}{}

		preamble += "// For the C ABI, malloc a C array of raw pointers\n"
		preamble += nameprefix + "_CArray := (*[0xffff]" + listType.parameterTypeCgo() + ")(C.malloc(C.size_t(8 * len(" + p.ParameterName + "))))\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_CArray))\n"

		preamble += "for i := range " + p.ParameterName + "{\n"

		listType.ParameterName = p.ParameterName + "[i]"
		addPreamble, innerRvalue := gfs.emitParameterGo2CABIForwarding(listType)
		preamble += addPreamble
		preamble += nameprefix + "_CArray[i] = " + innerRvalue + "\n"
		preamble += "}\n"

		preamble += p.ParameterName + "_ma := &C.struct_miqt_array{len: C.size_t(len(" + p.ParameterName + ")), data: unsafe.Pointer(" + nameprefix + "_CArray)}\n"
		preamble += "defer runtime.KeepAlive(unsafe.Pointer(" + nameprefix + "_ma))\n"

		rvalue = p.ParameterName + "_ma"

	} else if _, ok := p.QSetOf(); ok {
		panic("QSet<> arguments are not yet implemented") // n.b. doesn't seem to exist in QtCore/QtGui/QtWidgets at all

	} else if p.Pointer && p.ParameterType == "char" {
		// Single char* argument
		gfs.imports["unsafe"] = struct{}{}
		preamble += nameprefix + "_Cstring := C.CString(" + p.ParameterName + ")\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_Cstring))\n"
		rvalue = nameprefix + "_Cstring"

	} else if /*(p.Pointer || p.ByRef) &&*/ p.QtClassType() {
		// The C++ type is a pointer to Qt class
		// We want our functions to accept the Go wrapper type, and forward as cPointer()
		// cPointer() returns the cgo pointer which only works in the same package -
		// anything cross-package needs to go via unsafe.Pointer

		if classInfo, ok := KnownClassnames[p.ParameterType]; ok && gfs.currentPackageName != classInfo.PackageName {
			// Cross-package
			rvalue = "(" + p.parameterTypeCgo() + ")(" + p.ParameterName + ".UnsafePointer())"
		} else {
			// Same package
			rvalue = p.ParameterName + ".cPointer()"
		}

	} else if p.IntType() || p.IsFlagType() || p.IsKnownEnum() || p.ParameterType == "bool" {
		if p.Pointer || p.ByRef {
			gfs.imports["unsafe"] = struct{}{}
			rvalue = "(" + p.parameterTypeCgo() + ")(unsafe.Pointer(" + p.ParameterName + "))" // n.b. This may not work if the integer type conversion was wrong
		} else {
			rvalue = "(" + p.parameterTypeCgo() + ")(" + p.ParameterName + ")"
		}

	} else {
		// Default
		rvalue = p.ParameterName
	}

	return preamble, rvalue
}

func (gfs *goFileState) emitCabiToGo(assignExpr string, rt CppParameter, rvalue string) string {

	shouldReturn := assignExpr // "return "
	afterword := ""
	namePrefix := makeNamePrefix(rt.ParameterName)

	if rt.ParameterType == "void" && !rt.Pointer {
		shouldReturn = ""
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if rt.ParameterType == "void" && rt.Pointer {
		gfs.imports["unsafe"] = struct{}{}
		return assignExpr + " (unsafe.Pointer)(" + rvalue + ")\n"

	} else if rt.ParameterType == "char" && rt.Pointer {
		// Qt functions normally return QString - anything returning char*
		// is something like QByteArray.Data() where it returns an unsafe
		// internal pointer
		// However in case this is a signal, we need to be able to marshal both
		// forwards and backwards with the same types, this has to be a string
		// in both cases
		// This is not a miqt_string and therefore MIQT did not allocate it,
		// and therefore we don't have to free it either
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = namePrefix + "_ret := "
		afterword += assignExpr + " C.GoString(" + namePrefix + "_ret)\n"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if rt.ParameterType == "QString" {
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_ms *C.struct_miqt_string = "
		afterword += namePrefix + "_ret := C.GoStringN(&" + namePrefix + "_ms.data, C.int(int64(" + namePrefix + "_ms.len)))\n"
		afterword += "C.free(unsafe.Pointer(" + namePrefix + "_ms))\n"
		afterword += assignExpr + namePrefix + "_ret"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if t, ok := rt.QListOf(); ok {
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_ma *C.struct_miqt_array = "

		afterword += namePrefix + "_ret := make([]" + t.RenderTypeGo(gfs) + ", int(" + namePrefix + "_ma.len))\n"
		afterword += namePrefix + "_outCast := (*[0xffff]" + t.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_ma.data)) // hey ya\n"
		afterword += "for i := 0; i < int(" + namePrefix + "_ma.len); i++ {\n"

		afterword += gfs.emitCabiToGo(namePrefix+"_ret[i] = ", t, namePrefix+"_outCast[i]")

		afterword += "}\n"
		afterword += "C.free(unsafe.Pointer(" + namePrefix + "_ma))\n"
		afterword += assignExpr + " " + namePrefix + "_ret\n"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if t, ok := rt.QSetOf(); ok {

		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_ma *C.struct_miqt_array = "

		afterword += namePrefix + "_ret := make(map[" + t.RenderTypeGo(gfs) + "]struct{}, int(" + namePrefix + "_ma.len))\n"
		afterword += namePrefix + "_outCast := (*[0xffff]" + t.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_ma.data)) // hey ya\n"
		afterword += "for i := 0; i < int(" + namePrefix + "_ma.len); i++ {\n"

		afterword += gfs.emitCabiToGo(namePrefix+"_element := ", t, namePrefix+"_outCast[i]") + "\n"
		afterword += namePrefix + "_ret[" + namePrefix + "_element] = struct{}{}\n"

		afterword += "}\n"
		afterword += "C.free(unsafe.Pointer(" + namePrefix + "_ma))\n"
		afterword += assignExpr + " " + namePrefix + "_ret\n"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if rt.QtClassType() {
		// Construct our Go type based on this inner CABI type
		shouldReturn = "" + namePrefix + "_ret := "

		crossPackage := ""
		if pkg, ok := KnownClassnames[rt.ParameterType]; ok && pkg.PackageName != gfs.currentPackageName {
			crossPackage = pkg.PackageName + "."
			gfs.imports[importPathForQtPackage(pkg.PackageName)] = struct{}{}
		}

		if rt.Pointer || rt.ByRef {
			gfs.imports["unsafe"] = struct{}{}
			return assignExpr + " " + crossPackage + "UnsafeNew" + cabiClassName(rt.ParameterType) + "(unsafe.Pointer(" + rvalue + "))"

		} else {
			// This is return by value, but CABI has new'd it into a
			// heap type for us
			// To preserve Qt's approximate semantics, add a runtime
			// finalizer to automatically Delete once the type goes out
			// of Go scope

			if crossPackage == "" {
				afterword += namePrefix + "_goptr := new" + cabiClassName(rt.ParameterType) + "(" + namePrefix + "_ret)\n"
			} else {
				gfs.imports["unsafe"] = struct{}{}
				afterword += namePrefix + "_goptr := " + crossPackage + "UnsafeNew" + cabiClassName(rt.ParameterType) + "(unsafe.Pointer(" + namePrefix + "_ret))\n"

			}
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
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if rt.IntType() || rt.IsKnownEnum() || rt.IsFlagType() || rt.ParameterType == "bool" || rt.QtCppOriginalType != nil {
		// Need to cast Cgo type to Go int type
		// Optimize assignment to avoid temporary
		return assignExpr + "(" + rt.RenderTypeGo(gfs) + ")(" + rvalue + ")\n"

	} else {
		panic(fmt.Sprintf("emitgo::emitCabiToGo missing type handler for parameter %+v", rt))
	}

}

func emitGo(src *CppParsedHeader, headerName string, packageName string) (string, error) {

	ret := strings.Builder{}
	ret.WriteString(`package ` + packageName + `

/*

#include "gen_` + headerName + `"
#include <stdlib.h>

*/
import "C"

%%_IMPORTLIBS_%%
`)

	gfs := goFileState{
		imports:            map[string]struct{}{},
		currentPackageName: packageName,
	}

	// Check if short-named enums are allowed.
	// We only allow short names if there are no conflicts anywhere in the whole
	// file. This doesn't fully defend against cross-file conflicts but those
	// should hopefully be rare enough
	preventShortNames := map[string]struct{}{}
	{
		nameTest := map[string]string{}
	nextEnum:
		for _, e := range src.Enums {

			shortEnumName := e.ShortEnumName()

			// Disallow entry<-->entry collisions
			for _, ee := range e.Entries {
				if other, ok := nameTest[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{} // Our full enum name
					preventShortNames[other] = struct{}{}      // Their full enum name
					continue nextEnum
				}
				nameTest[shortEnumName+"::"+ee.EntryName] = e.EnumName

				if _, ok := KnownClassnames[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{}
					continue nextEnum
				}

			}
		}
	}

	for _, e := range src.Enums {
		if e.EnumName == "" {
			continue // Removed by transformRedundant AST pass
		}

		goEnumName := cabiClassName(e.EnumName) // Fully qualified name of the enum itself

		goEnumShortName := goEnumName // Shorter name, so that enum elements are reachable from the surrounding namespace
		if _, ok := preventShortNames[e.EnumName]; !ok {
			goEnumShortName = cabiClassName(e.ShortEnumName())
		}

		ret.WriteString(`
		type ` + goEnumName + ` ` + e.UnderlyingType.RenderTypeGo(&gfs) + `
		`)

		if len(e.Entries) > 0 {

			ret.WriteString("const (\n")

			for _, ee := range e.Entries {
				ret.WriteString(titleCase(cabiClassName(goEnumShortName+"::"+ee.EntryName)) + " " + goEnumName + " = " + ee.EntryValue + "\n")
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

			if pkg, ok := KnownClassnames[base]; ok && pkg.PackageName != gfs.currentPackageName {
				// Cross-package parent class
				ret.WriteString("*" + pkg.PackageName + "." + cabiClassName(base) + "\n")
				gfs.imports[importPathForQtPackage(pkg.PackageName)] = struct{}{}
			} else {
				// Same-package parent class
				ret.WriteString("*" + cabiClassName(base) + "\n")
			}

		}

		ret.WriteString(`
		}
		
		func (this *` + goClassName + `) cPointer() *C.` + goClassName + ` {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *` + goClassName + `) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		`)
		gfs.imports["unsafe"] = struct{}{}

		localInit := "h: h"
		for _, base := range c.Inherits {
			gfs.imports["unsafe"] = struct{}{}

			ctorPrefix := ""
			if pkg, ok := KnownClassnames[base]; ok && pkg.PackageName != gfs.currentPackageName {
				ctorPrefix = pkg.PackageName + "."
			}

			localInit += ", " + cabiClassName(base) + ": " + ctorPrefix + "UnsafeNew" + cabiClassName(base) + "(unsafe.Pointer(h))"
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
			func UnsafeNew` + goClassName + `(h unsafe.Pointer) *` + goClassName + ` {
				return new` + goClassName + `( (*C.` + goClassName + `)(h) )
			}
			
		`)

		for i, ctor := range c.Ctors {
			preamble, forwarding := gfs.emitParametersGo2CABIForwarding(ctor)

			if ctor.LinuxOnly {
				gfs.imports["runtime"] = struct{}{}
				ret.WriteString(`
			// New` + goClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + goClassName + maybeSuffix(i) + `(` + gfs.emitParametersGo(ctor.Parameters) + `) *` + goClassName + ` {
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
			func New` + goClassName + maybeSuffix(i) + `(` + gfs.emitParametersGo(ctor.Parameters) + `) *` + goClassName + ` {
				` + preamble + ` ret := C.` + goClassName + `_new` + maybeSuffix(i) + `(` + forwarding + `)
				return new` + goClassName + `(ret)
			}
			
			`)
			}
		}

		for _, m := range c.Methods {
			preamble, forwarding := gfs.emitParametersGo2CABIForwarding(m)

			returnTypeDecl := m.ReturnType.RenderTypeGo(&gfs)
			if returnTypeDecl == "void" {
				returnTypeDecl = ""
			}
			if m.ReturnType.QtClassType() && m.ReturnType.ParameterType != "QString" && !(m.ReturnType.Pointer || m.ReturnType.ByRef) {
				returnTypeDecl = "*" + returnTypeDecl
			}

			rvalue := `C.` + goClassName + `_` + m.SafeMethodName() + `(` + forwarding + `)`

			returnFunc := gfs.emitCabiToGo("return ", m.ReturnType, rvalue)

			receiverAndMethod := `(this *` + goClassName + `) ` + m.SafeMethodName()
			if m.IsStatic {
				receiverAndMethod = goClassName + `_` + m.SafeMethodName()
			}

			ret.WriteString(`
			func ` + receiverAndMethod + `(` + gfs.emitParametersGo(m.Parameters) + `) ` + returnTypeDecl + ` {`)
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

				ret.WriteString(`func (this *` + goClassName + `) On` + m.SafeMethodName() + `(slot func(` + gfs.emitParametersGo(m.Parameters) + `)) {
					C.` + goClassName + `_connect_` + m.SafeMethodName() + `(this.h, C.intptr_t(cgo.NewHandle(slot)) )
				}
				
				//export miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `
				func miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `(cb C.intptr_t` + ifv(len(m.Parameters) > 0, ", ", "") + strings.Join(cgoNamedParams, `, `) + `) {
					gofunc, ok := cgo.Handle(cb).Value().(func(` + gfs.emitParametersGo(m.Parameters) + `))
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
			if k == "libmiqt" {
				allImports = append(allImports, `"`+BaseModule+`/libmiqt"`)
			} else {
				allImports = append(allImports, `"`+k+`"`)
			}
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
