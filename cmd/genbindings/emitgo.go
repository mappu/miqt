package main

import (
	"C"
	"fmt"
	"go/format"
	"log"
	"path"
	"sort"
	"strings"
)

func goReservedWord(s string) bool {
	switch s {
	case "default", "const", "func", "var", "type", "len", "new", "copy", "import", "range", "string", "map", "int", "select",
		"super", "ret": // not language-reserved words, but a binding-reserved words
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
	if p.ParameterType == "QByteArray" {
		return "[]byte"
	}

	if t, ok := p.QListOf(); ok {
		return "[]" + t.RenderTypeGo(gfs)
	}

	if t, ok := p.QSetOf(); ok {
		return "map[" + t.RenderTypeGo(gfs) + "]struct{}"
	}

	if t1, t2, ok := p.QMapOf(); ok {
		return "map[" + t1.RenderTypeGo(gfs) + "]" + t2.RenderTypeGo(gfs)
	}

	if t1, t2, ok := p.QPairOf(); ok {
		// Design QPair using capital-named members, in case it gets passed
		// across packages
		return "struct { First " + t1.RenderTypeGo(gfs) + " ; Second " + t2.RenderTypeGo(gfs) + " }"
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
				ret += path.Base(enumInfo.PackageName) + "." + cabiClassName(ft.ParameterType)
				gfs.imports[importPathForQtPackage(enumInfo.PackageName)] = struct{}{}
			} else {
				// Same package
				ret += cabiClassName(ft.ParameterType)
			}

		} else if enumInfo, ok := KnownEnums[p.ParameterType]; ok {
			if enumInfo.PackageName != gfs.currentPackageName {
				// Cross-package
				ret += path.Base(enumInfo.PackageName) + "." + cabiClassName(p.ParameterType)
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
		ret = path.Base(pkg.PackageName) + "." + ret
		gfs.imports[importPathForQtPackage(pkg.PackageName)] = struct{}{}
	}

	if p.ByRef || p.Pointer {
		ret = "*" + ret
	}

	return ret // ignore const
}

func (p CppParameter) renderReturnTypeGo(gfs *goFileState) string {
	ret := p.RenderTypeGo(gfs)
	if ret == "void" {
		ret = ""
	}

	if p.QtClassType() && p.ParameterType != "QString" && p.ParameterType != "QByteArray" && !(p.Pointer || p.ByRef) {
		// FIXME normalize this part
		ret = "*" + ret
	}

	return ret
}

func (p CppParameter) parameterTypeCgo() string {
	if p.ParameterType == "QString" {
		return "C.struct_miqt_string"
	}

	if p.ParameterType == "QByteArray" {
		return "C.struct_miqt_string"
	}

	if _, ok := p.QListOf(); ok {
		return "C.struct_miqt_array"
	}

	if _, ok := p.QSetOf(); ok {
		return "C.struct_miqt_array"
	}

	if _, _, ok := p.QMapOf(); ok {
		return "C.struct_miqt_map"
	}

	if _, _, ok := p.QPairOf(); ok {
		return "C.struct_miqt_map"
	}

	// Cgo internally binds void* as unsafe.Pointer{}
	if p.ParameterType == "void" && p.Pointer {
		return "unsafe.Pointer"
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

func (p CppParameter) mallocSizeCgoExpression() string {
	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" {
		return "int(unsafe.Sizeof(C.struct_miqt_string{}))"
	}

	// Default (sizeof pointer)
	return "8"
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

			// Additional quirk for QApplication constructor: bind to OS thread
			gfs.imports["runtime"] = struct{}{}
			preamble += "\n"
			preamble += "runtime.LockOSThread() // Prevent Go from migrating the main Qt thread\n"
			preamble += "\n"

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

		gfs.imports["unsafe"] = struct{}{}
		preamble += nameprefix + "_ms := C.struct_miqt_string{}\n"
		preamble += nameprefix + "_ms.data = C.CString(" + p.ParameterName + ")\n"
		preamble += nameprefix + "_ms.len = C.size_t(len(" + p.ParameterName + "))\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_ms.data))\n"

		rvalue = nameprefix + "_ms"

	} else if p.ParameterType == "QByteArray" {
		// Go: convert []byte -> miqt_string
		// CABI: convert miqt_string -> QByteArray
		// n.b. This can ALIAS the existing []byte data

		gfs.imports["unsafe"] = struct{}{}
		preamble += nameprefix + "_alias := C.struct_miqt_string{}\n"
		preamble += nameprefix + "_alias.data = (*C.char)(unsafe.Pointer(&" + p.ParameterName + "[0]))\n"
		preamble += nameprefix + "_alias.len = C.size_t(len(" + p.ParameterName + "))\n"

		rvalue = nameprefix + "_alias"

	} else if listType, ok := p.QListOf(); ok {
		// QList<T>
		// Go: convert T[] -> t* and len
		// CABI: create a real QList<>

		gfs.imports["unsafe"] = struct{}{}

		mallocSize := listType.mallocSizeCgoExpression()

		preamble += nameprefix + "_CArray := (*[0xffff]" + listType.parameterTypeCgo() + ")(C.malloc(C.size_t(" + mallocSize + " * len(" + p.ParameterName + "))))\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_CArray))\n"

		preamble += "for i := range " + p.ParameterName + "{\n"

		listType.ParameterName = p.ParameterName + "[i]"
		addPreamble, innerRvalue := gfs.emitParameterGo2CABIForwarding(listType)
		preamble += addPreamble
		preamble += nameprefix + "_CArray[i] = " + innerRvalue + "\n"
		preamble += "}\n"

		preamble += nameprefix + "_ma := C.struct_miqt_array{len: C.size_t(len(" + p.ParameterName + ")), data: unsafe.Pointer(" + nameprefix + "_CArray)}\n"

		rvalue = nameprefix + "_ma"

	} else if _, ok := p.QSetOf(); ok {
		panic("QSet<> arguments are not yet implemented") // n.b. doesn't seem to exist in QtCore/QtGui/QtWidgets at all

	} else if kType, vType, ok := p.QMapOf(); ok {
		// QMap<T>

		gfs.imports["unsafe"] = struct{}{}

		preamble += nameprefix + "_Keys_CArray := (*[0xffff]" + kType.parameterTypeCgo() + ")(C.malloc(C.size_t(" + kType.mallocSizeCgoExpression() + " * len(" + p.ParameterName + "))))\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_Keys_CArray))\n"

		preamble += nameprefix + "_Values_CArray := (*[0xffff]" + vType.parameterTypeCgo() + ")(C.malloc(C.size_t(" + vType.mallocSizeCgoExpression() + " * len(" + p.ParameterName + "))))\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_Values_CArray))\n"

		preamble += nameprefix + "_ctr := 0\n"

		preamble += "for " + nameprefix + "_k, " + nameprefix + "_v := range " + p.ParameterName + "{\n"

		kType.ParameterName = nameprefix + "_k"
		addPreamble, innerRvalue := gfs.emitParameterGo2CABIForwarding(kType)
		preamble += addPreamble
		preamble += nameprefix + "_Keys_CArray[" + nameprefix + "_ctr] = " + innerRvalue + "\n"

		vType.ParameterName = nameprefix + "_v"
		addPreamble, innerRvalue = gfs.emitParameterGo2CABIForwarding(vType)
		preamble += addPreamble
		preamble += nameprefix + "_Values_CArray[" + nameprefix + "_ctr] = " + innerRvalue + "\n"

		preamble += nameprefix + "_ctr++\n"

		preamble += "}\n"

		preamble += nameprefix + "_mm := C.struct_miqt_map{\nlen: C.size_t(len(" + p.ParameterName + ")),\nkeys: unsafe.Pointer(" + nameprefix + "_Keys_CArray),\nvalues: unsafe.Pointer(" + nameprefix + "_Values_CArray),\n}\n"

		rvalue = nameprefix + "_mm"

	} else if kType, vType, ok := p.QPairOf(); ok {
		// QPair<T>

		gfs.imports["unsafe"] = struct{}{}

		preamble += nameprefix + "_First_CArray := (*[0xffff]" + kType.parameterTypeCgo() + ")(C.malloc(C.size_t(" + kType.mallocSizeCgoExpression() + ")))\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_First_CArray))\n"

		preamble += nameprefix + "_Second_CArray := (*[0xffff]" + vType.parameterTypeCgo() + ")(C.malloc(C.size_t(" + vType.mallocSizeCgoExpression() + ")))\n"
		preamble += "defer C.free(unsafe.Pointer(" + nameprefix + "_Second_CArray))\n"

		kType.ParameterName = p.ParameterName + ".First"
		addPreamble, innerRvalue := gfs.emitParameterGo2CABIForwarding(kType)
		preamble += addPreamble
		preamble += nameprefix + "_First_CArray[0] = " + innerRvalue + "\n"

		vType.ParameterName = p.ParameterName + ".Second"
		addPreamble, innerRvalue = gfs.emitParameterGo2CABIForwarding(vType)
		preamble += addPreamble
		preamble += nameprefix + "_Second_CArray[0] = " + innerRvalue + "\n"

		preamble += nameprefix + "_pair := C.struct_miqt_map{\nlen: 1,\nkeys: unsafe.Pointer(" + nameprefix + "_First_CArray),\nvalues: unsafe.Pointer(" + nameprefix + "_Second_CArray),\n}\n"

		rvalue = nameprefix + "_pair"

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

	if rt.Void() {
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

		shouldReturn = "var " + namePrefix + "_ms C.struct_miqt_string = "
		afterword += namePrefix + "_ret := C.GoStringN(" + namePrefix + "_ms.data, C.int(int64(" + namePrefix + "_ms.len)))\n"
		afterword += "C.free(unsafe.Pointer(" + namePrefix + "_ms.data))\n"
		afterword += assignExpr + namePrefix + "_ret"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if rt.ParameterType == "QByteArray" {
		// We receive the CABI type of a miqt_string. Convert it into []byte
		// We must free the miqt_string data pointer - this is a data copy,
		// not an alias

		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_bytearray C.struct_miqt_string = "
		afterword += namePrefix + "_ret := C.GoBytes(unsafe.Pointer(" + namePrefix + "_bytearray.data), C.int(int64(" + namePrefix + "_bytearray.len)))\n"
		afterword += "C.free(unsafe.Pointer(" + namePrefix + "_bytearray.data))\n"
		afterword += assignExpr + namePrefix + "_ret"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if t, ok := rt.QListOf(); ok {
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_ma C.struct_miqt_array = "

		afterword += namePrefix + "_ret := make([]" + t.RenderTypeGo(gfs) + ", int(" + namePrefix + "_ma.len))\n"
		afterword += namePrefix + "_outCast := (*[0xffff]" + t.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_ma.data)) // hey ya\n"
		afterword += "for i := 0; i < int(" + namePrefix + "_ma.len); i++ {\n"

		afterword += gfs.emitCabiToGo(namePrefix+"_ret[i] = ", t, namePrefix+"_outCast[i]")

		afterword += "}\n"

		afterword += assignExpr + " " + namePrefix + "_ret\n"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if t, ok := rt.QSetOf(); ok {

		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_ma C.struct_miqt_array = "

		afterword += namePrefix + "_ret := make(map[" + t.RenderTypeGo(gfs) + "]struct{}, int(" + namePrefix + "_ma.len))\n"
		afterword += namePrefix + "_outCast := (*[0xffff]" + t.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_ma.data)) // hey ya\n"
		afterword += "for i := 0; i < int(" + namePrefix + "_ma.len); i++ {\n"

		afterword += gfs.emitCabiToGo(namePrefix+"_element := ", t, namePrefix+"_outCast[i]") + "\n"
		afterword += namePrefix + "_ret[" + namePrefix + "_element] = struct{}{}\n"

		afterword += "}\n"
		afterword += assignExpr + " " + namePrefix + "_ret\n"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if kType, vType, ok := rt.QMapOf(); ok {
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_mm C.struct_miqt_map = "

		afterword += namePrefix + "_ret := make(map[" + kType.RenderTypeGo(gfs) + "]" + vType.RenderTypeGo(gfs) + ", int(" + namePrefix + "_mm.len))\n"
		afterword += namePrefix + "_Keys := (*[0xffff]" + kType.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_mm.keys))\n"
		afterword += namePrefix + "_Values := (*[0xffff]" + vType.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_mm.values))\n"
		afterword += "for i := 0; i < int(" + namePrefix + "_mm.len); i++ {\n"

		afterword += gfs.emitCabiToGo(namePrefix+"_entry_Key := ", kType, namePrefix+"_Keys[i]") + "\n"
		afterword += gfs.emitCabiToGo(namePrefix+"_entry_Value := ", vType, namePrefix+"_Values[i]") + "\n"
		afterword += namePrefix + "_ret[" + namePrefix + "_entry_Key] = " + namePrefix + "_entry_Value\n"

		afterword += "}\n"
		afterword += assignExpr + " " + namePrefix + "_ret\n"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if kType, vType, ok := rt.QPairOf(); ok {
		gfs.imports["unsafe"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_mm C.struct_miqt_map = "

		afterword += namePrefix + "_First_CArray := (*[0xffff]" + kType.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_mm.keys))\n"
		afterword += namePrefix + "_Second_CArray := (*[0xffff]" + vType.parameterTypeCgo() + ")(unsafe.Pointer(" + namePrefix + "_mm.values))\n"

		afterword += gfs.emitCabiToGo(namePrefix+"_entry_First := ", kType, namePrefix+"_First_CArray[0]") + "\n"
		afterword += gfs.emitCabiToGo(namePrefix+"_entry_Second := ", vType, namePrefix+"_Second_CArray[0]") + "\n"

		afterword += assignExpr + " " + rt.RenderTypeGo(gfs) + " { First: " + namePrefix + "_entry_First , Second: " + namePrefix + "_entry_Second }\n"
		return shouldReturn + " " + rvalue + "\n" + afterword

	} else if rt.QtClassType() {
		// Construct our Go type based on this inner CABI type
		shouldReturn = "" + namePrefix + "_ret := "

		crossPackage := ""
		pkg, ok := KnownClassnames[rt.ParameterType]
		if !ok {
			panic("emitCabiToGo: Encountered an unknown Qt class")
		}

		if pkg.PackageName != gfs.currentPackageName {
			crossPackage = path.Base(pkg.PackageName) + "."
			gfs.imports[importPathForQtPackage(pkg.PackageName)] = struct{}{}
		}

		// FIXME This needs to somehow figure out the real child pointers
		extraConstructArgs := strings.Repeat(", nil", len(pkg.Class.AllInherits()))

		if rt.Pointer || rt.ByRef {
			gfs.imports["unsafe"] = struct{}{}
			return assignExpr + " " + crossPackage + "UnsafeNew" + cabiClassName(rt.ParameterType) + "(unsafe.Pointer(" + rvalue + ")" + extraConstructArgs + ")"

		} else {
			// This is return by value, but CABI has new'd it into a
			// heap type for us
			// To preserve Qt's approximate semantics, add a runtime
			// finalizer to automatically Delete once the type goes out
			// of Go scope

			if crossPackage == "" {
				afterword += namePrefix + "_goptr := new" + cabiClassName(rt.ParameterType) + "(" + namePrefix + "_ret" + extraConstructArgs + ")\n"
			} else {
				gfs.imports["unsafe"] = struct{}{}
				afterword += namePrefix + "_goptr := " + crossPackage + "UnsafeNew" + cabiClassName(rt.ParameterType) + "(unsafe.Pointer(" + namePrefix + "_ret)" + extraConstructArgs + ")\n"

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

		if rt.Pointer || rt.ByRef {
			// Cast must go via unsafe.Pointer
			gfs.imports["unsafe"] = struct{}{}
			return assignExpr + "(" + rt.RenderTypeGo(gfs) + ")(unsafe.Pointer(" + rvalue + "))\n"

		}

		// Need to cast Cgo type to Go int type
		// Optimize assignment to avoid temporary
		return assignExpr + "(" + rt.RenderTypeGo(gfs) + ")(" + rvalue + ")\n"

	} else {
		panic(fmt.Sprintf("emitgo::emitCabiToGo missing type handler for parameter %+v", rt))
	}

}

func emitGo(src *CppParsedHeader, headerName string, packageName string) (string, error) {

	ret := strings.Builder{}
	ret.WriteString(`package ` + path.Base(packageName) + `

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
				if _, ok := KnownEnums[shortEnumName+"::"+ee.EntryName]; ok {
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

		// Type definition

		ret.WriteString(`
		type ` + goClassName + ` struct {
			h *C.` + goClassName + `
			isSubclass bool
		`)

		// Embed all inherited types to directly allow calling inherited methods
		// Only include the direct inherits; the recursive inherits will exist
		// on these types already
		for _, base := range c.DirectInherits {

			if strings.HasPrefix(base, `QList<`) {
				ret.WriteString("/* Also inherits unprojectable " + base + " */\n")

			} else if pkg, ok := KnownClassnames[base]; ok && pkg.PackageName != gfs.currentPackageName {
				// Cross-package parent class
				ret.WriteString("*" + path.Base(pkg.PackageName) + "." + cabiClassName(base) + "\n")
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

		// CGO types only exist within the same Go file, so other Go files can't
		// call this same private ctor function, unless it goes through unsafe.Pointer{}.
		// This is probably because C types can possibly violate the ODR whereas
		// that never happens in Go's type system.

		gfs.imports["unsafe"] = struct{}{}

		localInit := "h: h"
		unsafeInit := "h: (*C." + goClassName + ")(h)"
		extraCArgs := ""
		extraUnsafeArgs := ""

		// We require arguments for all inherits, but we only embed the direct inherits
		// Any recursive inherits will be owned by the base
		for _, base := range c.AllInherits() {

			extraCArgs += ", h_" + cabiClassName(base) + " *C." + cabiClassName(base)
			extraUnsafeArgs += ", h_" + cabiClassName(base) + " unsafe.Pointer"
		}

		for _, pkg := range c.DirectInheritClassInfo() {
			ctorPrefix := ""
			base := pkg.Class.ClassName

			constructRequiresParams := pkg.Class.AllInherits()
			var ixxParams []string = make([]string, 0, len(constructRequiresParams)+1)
			ixxParams = append(ixxParams, "h_"+cabiClassName(base))
			for _, grandchildInheritedClass := range constructRequiresParams {
				ixxParams = append(ixxParams, "h_"+cabiClassName(grandchildInheritedClass))
			}

			if pkg.PackageName != gfs.currentPackageName {
				ctorPrefix = path.Base(pkg.PackageName) + "."

				localInit += ",\n" + cabiClassName(base) + ": " + ctorPrefix + "UnsafeNew" + cabiClassName(base) + "(unsafe.Pointer(" + strings.Join(ixxParams, "), unsafe.Pointer(") + "))"
			} else {
				localInit += ",\n" + cabiClassName(base) + ": new" + cabiClassName(base) + "(" + strings.Join(ixxParams, ", ") + ")"

			}

			unsafeInit += ",\n" + cabiClassName(base) + ": " + ctorPrefix + "UnsafeNew" + cabiClassName(base) + "(" + strings.Join(ixxParams, ", ") + ")"
		}

		ret.WriteString(`
			// new` + goClassName + ` constructs the type using only CGO pointers.
			func new` + goClassName + `(h *C.` + goClassName + extraCArgs + `) *` + goClassName + ` {
				if h == nil {
					return nil
				}
				return &` + goClassName + `{` + localInit + `}
			}
			
			// UnsafeNew` + goClassName + ` constructs the type using only unsafe pointers.
			func UnsafeNew` + goClassName + `(h unsafe.Pointer` + extraUnsafeArgs + `) *` + goClassName + ` {				
				if h == nil {
					return nil
				}
				
				return &` + goClassName + `{` + unsafeInit + `}
			}
			
		`)

		//

		for i, ctor := range c.Ctors {
			preamble, forwarding := gfs.emitParametersGo2CABIForwarding(ctor)

			ret.WriteString(`
			// New` + goClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + goClassName + maybeSuffix(i) + `(` + gfs.emitParametersGo(ctor.Parameters) + `) *` + goClassName + ` {
				`,
			)

			if ctor.LinuxOnly {
				gfs.imports["runtime"] = struct{}{}
				ret.WriteString(`
					if runtime.GOOS != "linux" {
						panic("Unsupported OS")
					}
				`)
			}

			ret.WriteString(preamble)

			// Outptr management

			outptrs := make([]string, 0, len(c.AllInherits())+1)
			ret.WriteString(`var outptr_` + cabiClassName(c.ClassName) + ` *C.` + goClassName + " = nil\n")
			outptrs = append(outptrs, "outptr_"+cabiClassName(c.ClassName))
			for _, baseClass := range c.AllInherits() {
				ret.WriteString(`var outptr_` + cabiClassName(baseClass) + ` *C.` + cabiClassName(baseClass) + " = nil\n")
				outptrs = append(outptrs, "outptr_"+cabiClassName(baseClass))
			}

			if len(forwarding) > 0 {
				forwarding += ", "
			}
			forwarding += "&" + strings.Join(outptrs, ", &")

			// Call Cgo constructor

			ret.WriteString(`
				C.` + goClassName + `_new` + maybeSuffix(i) + `(` + forwarding + `)
				ret := new` + goClassName + `(` + strings.Join(outptrs, `, `) + `)
				ret.isSubclass = true
				return ret
			}
			
			`)

		}

		for _, m := range c.Methods {

			if m.IsProtected {
				continue // Don't add a direct call for it
			}

			preamble, forwarding := gfs.emitParametersGo2CABIForwarding(m)

			returnTypeDecl := m.ReturnType.renderReturnTypeGo(&gfs)

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

				goCbType := `func(` + gfs.emitParametersGo(m.Parameters) + `)`

				ret.WriteString(`func (this *` + goClassName + `) On` + m.SafeMethodName() + `(slot ` + goCbType + `) {
					C.` + goClassName + `_connect_` + m.SafeMethodName() + `(this.h, C.intptr_t(cgo.NewHandle(slot)) )
				}
				
				//export miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `
				func miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `(cb C.intptr_t` + ifv(len(m.Parameters) > 0, ", ", "") + strings.Join(cgoNamedParams, `, `) + `) {
					gofunc, ok := cgo.Handle(cb).Value().(` + goCbType + `)
					if !ok {
						panic("miqt: callback of non-callback type (heap corruption?)")
					}
				
					` + conversion + `
						
					gofunc(` + strings.Join(paramNames, `, `) + ` )
				}

				`)
			}
		}

		for _, m := range c.VirtualMethods() {
			gfs.imports["unsafe"] = struct{}{}
			gfs.imports["runtime/cgo"] = struct{}{}

			// Add a package-private function to call the C++ base class method
			// QWidget_virtualbase_PaintEvent
			// This is only possible if the function is not pure-virtual

			if !m.IsPureVirtual {
				preamble, forwarding := gfs.emitParametersGo2CABIForwarding(m)

				forwarding = "unsafe.Pointer(this.h)" + strings.TrimPrefix(forwarding, `this.h`) // TODO integrate properly

				returnTypeDecl := m.ReturnType.renderReturnTypeGo(&gfs)

				ret.WriteString(`
				func (this *` + goClassName + `) callVirtualBase_` + m.SafeMethodName() + `(` + gfs.emitParametersGo(m.Parameters) + `) ` + returnTypeDecl + ` {
					` + preamble + `
					` + gfs.emitCabiToGo("return ", m.ReturnType, `C.`+goClassName+`_virtualbase_`+m.SafeMethodName()+`(`+forwarding+`)`) + `
				}
			`)

			}

			// Add a function to set the virtual override handle
			// It must be possible to call the base class version, so pass
			// that a as a 'super' callback as an extra parameter

			{

				var cgoNamedParams []string
				var paramNames []string
				if !m.IsPureVirtual {
					paramNames = append(paramNames, "(&"+goClassName+"{h: self}).callVirtualBase_"+m.SafeMethodName())
				}
				conversion := ""

				if len(m.Parameters) > 0 {
					conversion = "// Convert all CABI parameters to Go parameters\n"
				}
				for i, pp := range m.Parameters {
					cgoNamedParams = append(cgoNamedParams, pp.ParameterName+" "+pp.parameterTypeCgo())

					paramNames = append(paramNames, fmt.Sprintf("slotval%d", i+1))
					conversion += gfs.emitCabiToGo(fmt.Sprintf("slotval%d := ", i+1), pp, pp.ParameterName) + "\n"
				}

				cabiReturnType := m.ReturnType.parameterTypeCgo()
				if cabiReturnType == "C.void" {
					cabiReturnType = ""
				}

				superCbType := `func(` + gfs.emitParametersGo(m.Parameters) + `) ` + m.ReturnType.renderReturnTypeGo(&gfs)

				goCbType := `func(`
				if !m.IsPureVirtual {
					goCbType += `super ` + superCbType
					if len(m.Parameters) > 0 {
						goCbType += `, `
					}
				}
				goCbType += gfs.emitParametersGo(m.Parameters)
				goCbType += `) ` + m.ReturnType.renderReturnTypeGo(&gfs)

				ret.WriteString(`func (this *` + goClassName + `) On` + m.SafeMethodName() + `(slot ` + goCbType + `) {
					if ! this.isSubclass {
						panic("miqt: can only override virtual methods for directly constructed types")
					}
					C.` + goClassName + `_override_virtual_` + m.SafeMethodName() + `(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)) )
				}
				
				//export miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `
				func miqt_exec_callback_` + goClassName + `_` + m.SafeMethodName() + `(self *C.` + goClassName + `, cb C.intptr_t` + ifv(len(m.Parameters) > 0, ", ", "") + strings.Join(cgoNamedParams, `, `) + `) ` + cabiReturnType + `{
					gofunc, ok := cgo.Handle(cb).Value().(` + goCbType + `)
					if !ok {
						panic("miqt: callback of non-callback type (heap corruption?)")
					}
				
			`)
				ret.WriteString(conversion + "\n")
				if cabiReturnType == "" {
					ret.WriteString(`gofunc(` + strings.Join(paramNames, `, `) + " )\n")
				} else {
					ret.WriteString(`virtualReturn := gofunc(` + strings.Join(paramNames, `, `) + " )\n")
					virtualRetP := m.ReturnType // copy
					virtualRetP.ParameterName = "virtualReturn"
					binding, rvalue := gfs.emitParameterGo2CABIForwarding(virtualRetP)
					ret.WriteString(binding + "\n")
					ret.WriteString("return " + rvalue + "\n")
				}
				ret.WriteString(`
				}
			`)

			}

		}

		if c.CanDelete {
			gfs.imports["runtime"] = struct{}{} // Finalizer

			ret.WriteString(`
			// Delete this object from C++ memory.
			func (this *` + goClassName + `) Delete() {
				C.` + goClassName + `_Delete(this.h, C.bool(this.isSubclass))
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
		for k := range gfs.imports {
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
