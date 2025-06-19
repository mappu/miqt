package main

import (
	"fmt"
	"sort"
	"strings"
)

// cppComment renders a string safely in a C++ block comment.
// It strips interior nested comments.
func cppComment(s string) string {
	// Remove nested comments
	uncomment := strings.NewReplacer("/*", "", "*/", "")
	return "/* " + uncomment.Replace(s) + " */ "
}

func cReservedWord(s string) bool {
	// parameter names that appear as properties in Qt, for example
	switch s {
	case "default": // not language-reserved words, but a binding-reserved words
		return true
	default:
		return false
	}
}

func (p CppParameter) cParameterName() string {
	// Also make the first letter uppercase so it becomes public in Go
	parmName := p.ParameterName
	if cReservedWord(parmName) {
		parmName += "Val"
	}

	return parmName
}

func cabiCallbackName(c CppClass, m CppMethod) string {
	return "miqt_exec_callback_" + cabiClassName(c.ClassName) + "_" + m.SafeMethodName()
}

func cabiNewName(c CppClass, i int) string {
	return cabiClassName(c.ClassName) + `_new` + maybeSuffix(i)
}

func cabiDeleteName(c CppClass) string {
	return cabiClassName(c.ClassName) + `_delete`
}

func cabiVirtBaseName(c CppClass) string {
	return cabiClassName(c.ClassName) + `_virtbase`
}

func cabiMethodName(c CppClass, m CppMethod) string {
	return cabiClassName(c.ClassName) + `_` + m.SafeMethodName()
}

func cabiConnectName(c CppClass, m CppMethod) string {
	return cabiClassName(c.ClassName) + `_connect_` + m.SafeMethodName()
}

func cabiVirtualBaseName(c CppClass, m CppMethod) string {
	return cabiClassName(c.ClassName) + `_virtualbase_` + m.SafeMethodName()
}

func cabiProtectedBaseName(c CppClass, m CppMethod) string {
	return cabiClassName(c.ClassName) + `_protectedbase_` + m.SafeMethodName()
}

func cabiOverrideVirtualName(c CppClass, m CppMethod) string {
	return cabiClassName(c.ClassName) + `_override_virtual_` + m.SafeMethodName()
}

func cppSubclassName(c CppClass) string {
	return "MiqtVirtual" + strings.Replace(c.ClassName, `::`, ``, -1)
}

func (p CppParameter) RenderTypeCabi() string {

	if p.ParameterType == "QString" {
		return "struct miqt_string"

	} else if p.ParameterType == "QByteArray" {
		return "struct miqt_string"

	} else if inner, _, ok := p.QListOf(); ok {
		return "struct miqt_array " + cppComment("of "+inner.RenderTypeCabi())

	} else if inner, ok := p.QSetOf(); ok {
		return "struct miqt_array " + cppComment("set of "+inner.RenderTypeCabi())

	} else if inner1, inner2, _, ok := p.QMapOf(); ok {
		return "struct miqt_map " + cppComment("of "+inner1.RenderTypeCabi()+" to "+inner2.RenderTypeCabi())

	} else if inner1, inner2, ok := p.QPairOf(); ok {
		return "struct miqt_map " + cppComment("tuple of "+inner1.RenderTypeCabi()+" and "+inner2.RenderTypeCabi())

	} else if (p.Pointer || p.ByRef) && p.QtClassType() {
		if p.PointerCount > 1 {
			return cabiClassName(p.ParameterType) + strings.Repeat("*", p.PointerCount)
		}
		return cabiClassName(p.ParameterType) + "*"

	} else if p.QtClassType() && !p.Pointer {
		// Even if C++ returns by value, CABI is returning a heap copy (new'd, not malloc'd)
		return cabiClassName(p.ParameterType) + "*"
	}

	// https://github.com/qt/qtbase/blob/v5.15.16-lts-lgpl/src/corelib/global/qglobal.h#L233
	// https://github.com/qt/qtbase/blob/v6.9.0/src/corelib/global/qtypes.h#L50
	ret := p.ParameterType
	switch p.ParameterType {
	case "uchar":
		ret = "unsigned char"
	case "ushort":
		ret = "unsigned short"
	case "uint":
		ret = "unsigned int"
	case "ulong":
		ret = "unsigned long"
	case "qint8":
		ret = "int8_t"
	case "quint8":
		ret = "uint8_t"
	case "qint16":
		ret = "int16_t"
	case "quint16":
		ret = "uint16_t"
	case "qint32":
		ret = "int32_t"
	case "quint32":
		ret = "uint32_t"
	case "qlonglong":
		ret = "long long"
	case "qint64":
		ret = "int64_t"
	case "quint64":
		ret = "uint64_t"
	case "qulonglong":
		ret = "unsigned long long"
	case "qfloat16":
		ret = "_Float16" // No idea where this typedef comes from, but it exists
	case "qreal":
		ret = "double"
	case "qintptr", "QIntegerForSizeof<void *>::Signed": // long long int
		ret = "intptr_t" // long int
	case "quintptr", "uintptr", "QIntegerForSizeof<void *>::Unsigned":
		ret = "uintptr_t"
	case "qsizetype", "qptrdiff", "QIntegerForSizeof<std::size_t>::Signed":
		ret = "ptrdiff_t"
	}

	if p.Const {
		// This is needed for const-correctness for calling some overloads
		// e.g. QShortcut ctor taking (QWidget* parent, const char* member) signal -
		// the signal/slot requires that member is const, not just plain char*
		ret = "const " + ret
	}

	if ft, ok := p.QFlagsOf(); ok {
		if e, ok := KnownEnums[ft.ParameterType]; ok {
			ret = e.Enum.UnderlyingType.RenderTypeCabi()
		} else {
			ret = "int"
		}

	} else if e, ok := KnownEnums[p.ParameterType]; ok {
		ret = e.Enum.UnderlyingType.RenderTypeCabi()

	}

	if p.Pointer {
		ret += strings.Repeat("*", p.PointerCount)
	} else if p.ByRef {
		ret += "*"
	}

	return ret
}

// RenderTypeQtCpp renders the Qt C++ type in the original form from the function
// definition, before any typedefs or transformations were applied.
func (p CppParameter) RenderTypeQtCpp() string {
	return p.GetQtCppType().RenderTypeIntermediateCpp()
}

// RenderTypeIntermediateCpp renders the Qt C++ type WITHOUT resolving the
// interior QtCppOriginalType. This is used for intermediate const_cast<>s.
func (p CppParameter) RenderTypeIntermediateCpp() string {
	cppType := p.ParameterType

	if p.Const {
		cppType = "const " + cppType
	}
	if p.Pointer {
		cppType += strings.Repeat("*", p.PointerCount)
	}
	if p.ByRef {
		cppType += "&"
	}

	return cppType
}

// emitParametersCpp emits the parameter definitions exactly how Qt C++ defines them.
func emitParametersCpp(m CppMethod) string {
	tmp := make([]string, 0, len(m.Parameters))
	for _, p := range m.Parameters {
		tmp = append(tmp, p.RenderTypeQtCpp()+" "+p.cParameterName())
	}

	return strings.Join(tmp, `, `)
}

func emitParameterNames(m CppMethod) string {
	tmp := make([]string, 0, len(m.Parameters))
	for _, p := range m.Parameters {
		tmp = append(tmp, p.cParameterName())
	}

	return strings.Join(tmp, `, `)
}

func emitParameterTypesCpp(m CppMethod, includeHidden bool) string {
	tmp := make([]string, 0, len(m.Parameters))
	for _, p := range m.Parameters {
		tmp = append(tmp, p.RenderTypeQtCpp())
	}
	if includeHidden {
		for _, p := range m.HiddenParams {
			tmp = append(tmp, p.RenderTypeQtCpp())
		}
	}

	return strings.Join(tmp, `, `)
}

func emitParametersCabi(m CppMethod, selfType string) string {
	tmp := make([]string, 0, len(m.Parameters)+1)

	if !m.IsStatic && selfType != "" {
		tmp = append(tmp, selfType+" self")
	}

	for _, p := range m.Parameters {
		tmp = append(tmp, p.RenderTypeCabi()+" "+p.cParameterName())
	}

	return strings.Join(tmp, ", ")
}

func emitParametersCABI2CppForwarding(params []CppParameter, indent string) (preamble string, forwarding string) {
	tmp := make([]string, 0, len(params)+1)

	for _, p := range params {
		addPre, addFwd := emitCABI2CppForwarding(p, indent)
		preamble += addPre
		tmp = append(tmp, addFwd)
	}

	return preamble, strings.Join(tmp, ", ")
}

func makeNamePrefix(in string) string {
	replacer := strings.NewReplacer(`[`, `_`, `]`, "", `.`, `_`)
	return replacer.Replace(in)
}

func emitCABI2CppForwarding(p CppParameter, indent string) (preamble string, forwarding string) {

	nameprefix := makeNamePrefix(p.cParameterName())

	if p.ParameterType == "QString" {
		// The CABI received parameter is a struct miqt_string, passed by value
		// C++ needs it as a QString. Create one on the stack for automatic cleanup
		// The caller will free the miqt_string
		preamble += indent + "QString " + nameprefix + "_QString = QString::fromUtf8(" + p.cParameterName() + ".data, " + p.cParameterName() + ".len);\n"
		return preamble, nameprefix + "_QString"

	} else if p.ParameterType == "QByteArray" {
		// The caller will free the miqt_string data
		// This ctor makes a deep copy, on the stack which will be dtor'd by RAII
		preamble += indent + "QByteArray " + nameprefix + "_QByteArray(" + p.cParameterName() + ".data, " + p.cParameterName() + ".len);\n"
		return preamble, nameprefix + "_QByteArray"

	} else if listType, _, ok := p.QListOf(); ok {

		preamble += indent + p.GetQtCppType().ParameterType + " " + nameprefix + "_QList;\n"
		preamble += indent + nameprefix + "_QList.reserve(" + p.cParameterName() + ".len);\n"

		preamble += indent + listType.RenderTypeCabi() + "* " + nameprefix + "_arr = static_cast<" + listType.RenderTypeCabi() + "*>(" + p.cParameterName() + ".data);\n"
		preamble += indent + "for(size_t i = 0; i < " + p.cParameterName() + ".len; ++i) {\n"

		listType.ParameterName = nameprefix + "_arr[i]"
		addPre, addFwd := emitCABI2CppForwarding(listType, indent+"\t")
		preamble += addPre
		preamble += indent + "\t" + nameprefix + "_QList.push_back(" + addFwd + ");\n"

		preamble += indent + "}\n"

		// Support passing QList<>* (very rare, but used in qnetwork)
		if p.Pointer {
			return preamble, "&" + nameprefix + "_QList"
		} else {
			return preamble, nameprefix + "_QList"
		}

	} else if kType, vType, mapContainerType, ok := p.QMapOf(); ok {
		preamble += indent + p.GetQtCppType().ParameterType + " " + nameprefix + "_QMap;\n"

		// This container may be a QMap or a QHash
		// QHash supports .reserve(), but QMap doesn't
		if mapContainerType == "QHash" {
			preamble += indent + nameprefix + "_QMap.reserve(" + p.cParameterName() + ".len);\n"
		}

		preamble += indent + kType.RenderTypeCabi() + "* " + nameprefix + "_karr = static_cast<" + kType.RenderTypeCabi() + "*>(" + p.cParameterName() + ".keys);\n"
		preamble += indent + vType.RenderTypeCabi() + "* " + nameprefix + "_varr = static_cast<" + vType.RenderTypeCabi() + "*>(" + p.cParameterName() + ".values);\n"
		preamble += indent + "for(size_t i = 0; i < " + p.cParameterName() + ".len; ++i) {\n"

		kType.ParameterName = nameprefix + "_karr[i]"
		addPreK, addFwdK := emitCABI2CppForwarding(kType, indent+"\t")
		preamble += addPreK

		vType.ParameterName = nameprefix + "_varr[i]"
		addPreV, addFwdV := emitCABI2CppForwarding(vType, indent+"\t")
		preamble += addPreV

		preamble += indent + "\t" + nameprefix + "_QMap[" + addFwdK + "] = " + addFwdV + ";\n"

		preamble += indent + "}\n"
		return preamble, nameprefix + "_QMap"

	} else if kType, vType, ok := p.QPairOf(); ok {
		preamble += indent + p.GetQtCppType().ParameterType + " " + nameprefix + "_QPair;\n"

		preamble += indent + kType.RenderTypeCabi() + "* " + nameprefix + "_first_arr = static_cast<" + kType.RenderTypeCabi() + "*>(" + p.cParameterName() + ".keys);\n"
		preamble += indent + vType.RenderTypeCabi() + "* " + nameprefix + "_second_arr = static_cast<" + vType.RenderTypeCabi() + "*>(" + p.cParameterName() + ".values);\n"

		kType.ParameterName = nameprefix + "_first_arr[0]"
		addPreK, addFwdK := emitCABI2CppForwarding(kType, indent+"\t")
		preamble += addPreK

		vType.ParameterName = nameprefix + "_second_arr[0]"
		addPreV, addFwdV := emitCABI2CppForwarding(vType, indent+"\t")
		preamble += addPreV

		preamble += indent + nameprefix + "_QPair.first = " + addFwdK + ";\n"
		preamble += indent + nameprefix + "_QPair.second = " + addFwdV + ";\n"

		return preamble, nameprefix + "_QPair"

	} else if p.IsFlagType() || p.IntType() || p.IsKnownEnum() {
		castSrc := p.cParameterName()
		castType := p.RenderTypeQtCpp()

		if p.ByRef { // e.g. QDataStream::operator>>() overloads
			castSrc = "*" + castSrc
		}

		if p.QtCppOriginalType != nil && p.QtCppOriginalType.Const != p.Const {
			return preamble, "static_cast<" + p.RenderTypeQtCpp() + ">(const_cast<" + p.RenderTypeIntermediateCpp() + ">(" + p.cParameterName() + "))"
		}

		if p.GetQtCppType().ParameterType == "qintptr" ||
			p.GetQtCppType().ParameterType == "qsizetype" || // Qt 6 qversionnumber.h: invalid ‘static_cast’ from type ‘ptrdiff_t*’ {aka ‘long int*’} to type ‘qsizetype*’ {aka ‘long long int*’}
			p.ParameterType == "qint8" ||
			(p.IsFlagType() && p.ByRef) ||
			(p.IsKnownEnum() && p.ByRef) {
			// QDataStream::operator>>() by reference (qint64)
			// QLockFile::getLockInfo() by pointer
			// QTextStream::operator>>() by reference (qlonglong + qulonglong)
			// QDataStream::operator>>() qint8
			// CABI has these as int64_t* (long int) which fails a static_cast to qint64& (long long int&)
			// Hack a hard C-style cast
			return preamble, "(" + castType + ")(" + castSrc + ")"
		} else {
			// Use static_cast<> safely
			return preamble, "static_cast<" + castType + ">(" + castSrc + ")"
		}

	} else if _, ok := p.QSetOf(); ok {
		panic("QSet<> arguments are not yet implemented") // n.b. doesn't seem to exist in QtCore/QtGui/QtWidgets at all

	} else if p.ByRef {
		if p.Pointer {
			// By ref and by pointer
			// This happens for QDataStream &QDataStream::operator>>(char *&s)
			// We are only using one level of indirection
			return preamble, p.cParameterName()
		} else {
			// By ref and not by pointer
			// We changed RenderTypeCabi() to render this as a pointer
			// Need to dereference so we can pass as reference to the actual Qt C++ function
			//tmp = append(tmp, "*"+p.cParameterName())
			return preamble, "*" + p.cParameterName()
		}

	} else if p.QtClassType() && !p.Pointer {
		// CABI takes all Qt types by pointer, even if C++ wants them by value
		// Dereference the passed-in pointer
		if strings.Contains(p.cParameterName(), `[`) {
			return preamble, "*(" + p.cParameterName() + ")" // Extra brackets aren't necessary, just nice
		}
		return preamble, "*" + p.cParameterName()

	} else {
		return preamble, p.cParameterName()
	}

}

// emitAssignCppToCabi transforms and assigns rvalue to the assignExpression.
// Sample assignExpression: `return `, `auto foo = `
// Sample rvalue: `foo`, `foo(xyz)`
// The return is a complete statement including trailing newline.
func emitAssignCppToCabi(assignExpression string, p CppParameter, rvalue string) string {

	shouldReturn := assignExpression // n.b. already has indent
	afterCall := ""
	assignExpression = strings.TrimLeft(assignExpression, " \t")
	indent := shouldReturn[0 : len(shouldReturn)-len(assignExpression)]

	shouldReturn = shouldReturn[len(indent):]

	namePrefix := makeNamePrefix(p.cParameterName())

	if p.Void() {
		shouldReturn = ""
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.ParameterType == "QString" {

		if p.Pointer {
			// e.g. QTextStream::String()
			// These are rare, and probably expected to be lightweight references
			// But, a copy is the best we can project it as
			// Un-pointer-ify
			shouldReturn = ifv(p.Const, "const ", "") + "QString* " + namePrefix + "_ret = "
			afterCall = indent + "// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory\n"
			afterCall += indent + "QByteArray " + namePrefix + "_b = " + namePrefix + "_ret->toUtf8();\n"

		} else {
			shouldReturn = ifv(p.Const, "const ", "") + "QString " + namePrefix + "_ret = "
			afterCall = indent + "// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory\n"
			afterCall += indent + "QByteArray " + namePrefix + "_b = " + namePrefix + "_ret.toUtf8();\n"
		}

		afterCall += indent + "struct miqt_string " + namePrefix + "_ms;\n"
		afterCall += indent + namePrefix + "_ms.len = " + namePrefix + "_b.length();\n"
		afterCall += indent + namePrefix + "_ms.data = static_cast<char*>(malloc(" + namePrefix + "_ms.len));\n"
		afterCall += indent + "memcpy(" + namePrefix + "_ms.data, " + namePrefix + "_b.data(), " + namePrefix + "_ms.len);\n"
		afterCall += indent + assignExpression + namePrefix + "_ms;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.ParameterType == "QByteArray" {
		// C++ has given us a QByteArray. CABI needs this as a struct miqt_string
		// Do not free the data, the caller will free it

		shouldReturn = ifv(p.Const, "const ", "") + "QByteArray " + namePrefix + "_qb = "

		afterCall += indent + "struct miqt_string " + namePrefix + "_ms;\n"
		afterCall += indent + namePrefix + "_ms.len = " + namePrefix + "_qb.length();\n"
		afterCall += indent + namePrefix + "_ms.data = static_cast<char*>(malloc(" + namePrefix + "_ms.len));\n"
		afterCall += indent + "memcpy(" + namePrefix + "_ms.data, " + namePrefix + "_qb.data(), " + namePrefix + "_ms.len);\n"
		afterCall += indent + assignExpression + namePrefix + "_ms;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if t, _, ok := p.QListOf(); ok {

		// In some cases rvalue is a function call and the temporary
		// is necessary; in some cases it's a literal and the temporary is
		// elided; but in some cases it's a Qt class and the temporary goes
		// through a copy constructor
		// TODO Detect safe cases where this can be optimized

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QList<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + t.RenderTypeCabi() + "* " + namePrefix + "_arr = static_cast<" + t.RenderTypeCabi() + "*>(malloc(sizeof(" + t.RenderTypeCabi() + ") * " + namePrefix + "_ret.length()));\n"
		afterCall += indent + "for (size_t i = 0, e = " + namePrefix + "_ret.length(); i < e; ++i) {\n"
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_arr[i] = ", t, namePrefix+"_ret[i]")
		afterCall += indent + "}\n"

		afterCall += indent + "struct miqt_array " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = " + namePrefix + "_ret.length();\n"
		afterCall += indent + "" + namePrefix + "_out.data = static_cast<void*>(" + namePrefix + "_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if t, ok := p.QSetOf(); ok {

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QSet<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + t.RenderTypeCabi() + "* " + namePrefix + "_arr = static_cast<" + t.RenderTypeCabi() + "*>(malloc(sizeof(" + t.RenderTypeCabi() + ") * " + namePrefix + "_ret.size()));\n"
		afterCall += indent + "int " + namePrefix + "_ctr = 0;\n"
		afterCall += indent + "QSetIterator<" + t.RenderTypeQtCpp() + "> " + namePrefix + "_itr(" + namePrefix + "_ret);\n"
		afterCall += indent + "while (" + namePrefix + "_itr.hasNext()) {\n"
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_arr["+namePrefix+"_ctr++] = ", t, namePrefix+"_itr.next()")
		afterCall += indent + "}\n"

		afterCall += indent + "struct miqt_array " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = " + namePrefix + "_ret.size();\n"
		afterCall += indent + "" + namePrefix + "_out.data = static_cast<void*>(" + namePrefix + "_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if kType, vType, _, ok := p.QMapOf(); ok {
		// QMap<K,V>

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QMap<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + kType.RenderTypeCabi() + "* " + namePrefix + "_karr = static_cast<" + kType.RenderTypeCabi() + "*>(malloc(sizeof(" + kType.RenderTypeCabi() + ") * " + namePrefix + "_ret.size()));\n"
		afterCall += indent + "" + vType.RenderTypeCabi() + "* " + namePrefix + "_varr = static_cast<" + vType.RenderTypeCabi() + "*>(malloc(sizeof(" + vType.RenderTypeCabi() + ") * " + namePrefix + "_ret.size()));\n"

		afterCall += indent + "int " + namePrefix + "_ctr = 0;\n"
		afterCall += indent + "for (auto " + namePrefix + "_itr = " + namePrefix + "_ret.keyValueBegin(); " + namePrefix + "_itr != " + namePrefix + "_ret.keyValueEnd(); ++" + namePrefix + "_itr) {\n"
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_karr["+namePrefix+"_ctr] = ", kType, namePrefix+"_itr->first")
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_varr["+namePrefix+"_ctr] = ", vType, namePrefix+"_itr->second")
		afterCall += indent + "\t" + namePrefix + "_ctr++;\n"

		afterCall += indent + "}\n"

		afterCall += indent + "struct miqt_map " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = " + namePrefix + "_ret.size();\n"
		afterCall += indent + "" + namePrefix + "_out.keys = static_cast<void*>(" + namePrefix + "_karr);\n"
		afterCall += indent + "" + namePrefix + "_out.values = static_cast<void*>(" + namePrefix + "_varr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if kType, vType, ok := p.QPairOf(); ok {
		// QPair<T1,T2>

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QPair<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + kType.RenderTypeCabi() + "* " + namePrefix + "_first_arr = static_cast<" + kType.RenderTypeCabi() + "*>(malloc(sizeof(" + kType.RenderTypeCabi() + ")));\n"
		afterCall += indent + "" + vType.RenderTypeCabi() + "* " + namePrefix + "_second_arr = static_cast<" + vType.RenderTypeCabi() + "*>(malloc(sizeof(" + vType.RenderTypeCabi() + ")));\n"

		afterCall += emitAssignCppToCabi(indent+namePrefix+"_first_arr[0] = ", kType, namePrefix+"_ret.first")
		afterCall += emitAssignCppToCabi(indent+namePrefix+"_second_arr[0] = ", vType, namePrefix+"_ret.second")

		afterCall += indent + "struct miqt_map " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = 1;\n"
		afterCall += indent + "" + namePrefix + "_out.keys = static_cast<void*>(" + namePrefix + "_first_arr);\n"
		afterCall += indent + "" + namePrefix + "_out.values = static_cast<void*>(" + namePrefix + "_second_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.QtClassType() && p.ByRef {
		// It's a pointer in disguise, just needs one cast
		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "
		afterCall += indent + "// Cast returned reference into pointer\n"
		if p.Const {
			nonConst := p // copy
			nonConst.Const = false
			nonConst.ByRef = false
			nonConst.Pointer = true
			nonConst.PointerCount = 1
			afterCall += indent + "" + assignExpression + "const_cast<" + nonConst.RenderTypeQtCpp() + ">(&" + namePrefix + "_ret);\n"
		} else {
			afterCall += indent + "" + assignExpression + "&" + namePrefix + "_ret;\n"
		}
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.QtClassType() && !p.Pointer {

		// Elide temporary and emit directly from the rvalue
		return indent + assignExpression + "new " + p.ParameterType + "(" + rvalue + ");\n"

	} else if p.IsFlagType() || p.IsKnownEnum() || p.QtCppOriginalType != nil {
		// Needs an explicit cast
		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		if p.QtCppOriginalType != nil && p.QtCppOriginalType.Const != p.Const {
			afterCall += indent + "" + assignExpression + "const_cast<" + p.RenderTypeCabi() + ">(static_cast<" + p.RenderTypeIntermediateCpp() + ">(" + namePrefix + "_ret));\n"
		} else if p.QtCppOriginalType != nil && p.QtCppOriginalType.ParameterType == "qintptr" {
			// Hard int cast
			afterCall += indent + "" + assignExpression + "(" + p.RenderTypeCabi() + ")(" + namePrefix + "_ret);\n"
		} else {
			afterCall += indent + "" + assignExpression + "static_cast<" + p.RenderTypeCabi() + ">(" + namePrefix + "_ret);\n"
		}
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.Const {
		shouldReturn += "(" + p.RenderTypeCabi() + ") "
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else {
		// Basic type
		if p.ByRef {
			// The C++ type is a reference, the CABI type is a pointer type
			shouldReturn += "&"
		}

		return indent + shouldReturn + rvalue + ";\n" + afterCall
	}

}

func getCppZeroValue(p CppParameter) string {
	if p.Pointer {
		return "nullptr"
	} else if p.IsKnownEnum() {
		return "(" + p.RenderTypeQtCpp() + ")(0)"
	} else if p.IntType() {
		return "0"
	} else if p.ParameterType == "bool" {
		return "false"
	} else if p.ParameterType == "void" {
		return ""
	} else {
		return p.RenderTypeQtCpp() + "()"
	}
}

func getCabiZeroValue(p CppParameter) string {
	// n.b. Identical to getCppZeroValue in most cases

	if p.Pointer && !(p.ParameterType == "QString") {
		return getCppZeroValue(p)

	} else if ev, ok := KnownEnums[p.ParameterType]; ok {
		// In CABI the zero value may be the underlying type of an enum instead
		return "(" + ev.Enum.UnderlyingType.RenderTypeCabi() + ")(0)"

	} else if p.IntType() {
		return getCppZeroValue(p) // default

	} else if p.ParameterType == "bool" {
		return getCppZeroValue(p)
	} else if p.ParameterType == "void" {
		return getCppZeroValue(p)

	} else if p.ParameterType == "QString" || p.ParameterType == "QByteArray" {
		return "(struct miqt_string){}"

	} else if _, _, ok := p.QListOf(); ok {
		return "(struct miqt_array){}"

	} else if _, ok := p.QSetOf(); ok {
		return "(struct miqt_array){}"

	} else if _, _, _, ok := p.QMapOf(); ok {
		return "(struct miqt_map){}"

	} else if _, _, ok := p.QPairOf(); ok {
		return "(struct miqt_map){}"

	} else {
		// Difference for Qt classes: Qt C++ can expect to return them by value,
		// but CABI always needs to return them by pointer

		return "nullptr"
	}

}

// getReferencedTypes finds all referenced Qt types in this file.
func getReferencedTypes(src *CppParsedHeader) []string {

	foundTypes := map[string]struct{}{}

	var maybeAddType func(p CppParameter)
	maybeAddType = func(p CppParameter) {
		if p.QtClassType() {
			foundTypes[p.ParameterType] = struct{}{}
		}
		if t, containerType, ok := p.QListOf(); ok {
			foundTypes[containerType] = struct{}{} // QList / QVector
			maybeAddType(t)
		}
		if kType, vType, containerType, ok := p.QMapOf(); ok {
			foundTypes[containerType] = struct{}{} // QMap / QHash
			maybeAddType(kType)
			maybeAddType(vType)
		}
		if kType, vType, ok := p.QPairOf(); ok {
			foundTypes["QPair"] = struct{}{}
			maybeAddType(kType)
			maybeAddType(vType)
		}
		if t, ok := p.QSetOf(); ok {
			foundTypes["QSet"] = struct{}{}
			maybeAddType(t)
		}
	}

	for _, c := range src.Classes {

		foundTypes[c.ClassName] = struct{}{}

		for _, ctor := range c.Ctors {
			for _, p := range ctor.Parameters {
				maybeAddType(p)
			}
		}
		for _, m := range c.Methods {
			for _, p := range m.Parameters {
				maybeAddType(p)
			}
			maybeAddType(m.ReturnType)
		}
		for _, vm := range c.VirtualMethods() {
			for _, p := range vm.Parameters {
				maybeAddType(p)
			}
			maybeAddType(vm.ReturnType)
		}
		for _, vm := range c.ProtectedMethods() {
			for _, p := range vm.Parameters {
				maybeAddType(p)
			}
			maybeAddType(vm.ReturnType)
		}
		for _, cn := range c.AllInheritsClassInfo() {
			maybeAddType(CppParameter{
				ParameterType: cn.Class.ClassName,
			})
		}
	}

	// Some types (e.g. QRgb) are found but are typedefs, not classes
	for _, td := range src.Typedefs {
		delete(foundTypes, td.Alias)
	}

	// Convert to sorted list
	foundTypesList := make([]string, 0, len(foundTypes))
	for ft := range foundTypes {
		if !AllowClass(ft) {
			continue
		}

		foundTypesList = append(foundTypesList, ft)
	}
	sort.Strings(foundTypesList)

	return foundTypesList
}

// cabiClassName returns the Go / CABI class name for a Qt C++ class.
// Normally this is the same, except for class types that are nested inside another class definition.
func cabiClassName(className string) string {

	// Many types are defined in qnamespace.h under Qt::
	// The Go implementation is always called qt.Foo, and these names don't
	// collide with anything, so strip the redundant prefix
	className = strings.TrimPrefix(className, `Qt::`)

	// Must use __ to avoid subclass/method name collision e.g. QPagedPaintDevice::Margins
	return strings.Replace(className, `::`, `__`, -1)
}

func cabiPreventStructDeclaration(className string) bool {
	switch className {
	case "QList", "QString", "QSet", "QMap", "QHash", "QPair", "QVector", "QByteArray":
		return true // These types are reprojected
	default:
		return false
	}
}

func emitBindingHeader(src *CppParsedHeader, filename string, packageName string) (string, error) {
	ret := strings.Builder{}

	includeGuard := "MIQT_" + strings.ToUpper(strings.Replace(strings.Replace(packageName, `/`, `_`, -1), `-`, `_`, -1)) + "_GEN_" + strings.ToUpper(strings.Replace(strings.Replace(filename, `.`, `_`, -1), `-`, `_`, -1))

	bindingInclude := strings.Repeat(`../`, strings.Count(packageName, `/`)) + "../libmiqt/libmiqt.h"

	ret.WriteString(`#pragma once
#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "` + bindingInclude + `"

#ifdef __cplusplus
extern "C" {
#endif

`)

	// We need this macro for QObjectData::dynamicMetaObject for Qt 6.9
	if filename == "qobject.h" && packageName == "qt6" {
		ret.WriteString("// Based on the macro from Qt (LGPL v3), see https://www.qt.io/qt-licensing\n" +
			"// Macro is trivial and used here under fair use\n" +
			"// Usage does not imply derivation\n" +
			"#ifndef QT_VERSION_CHECK\n" +
			"#define QT_VERSION_CHECK(major, minor, patch) ((major<<16)|(minor<<8)|(patch))\n" +
			"#endif\n" +
			"\n",
		)
	}

	foundTypesList := getReferencedTypes(src)

	ret.WriteString("#ifdef __cplusplus\n")

	for _, ft := range foundTypesList {
		if cabiPreventStructDeclaration(ft) {
			continue
		}

		if strings.Contains(ft, `::`) {
			// Forward declarations of inner classes are not yet supported in C++
			// @ref https://stackoverflow.com/q/1021793

			ret.WriteString(`#if defined(WORKAROUND_INNER_CLASS_DEFINITION_` + cabiClassName(ft) + ")\n")
			ret.WriteString(`typedef ` + ft + " " + cabiClassName(ft) + ";\n")
			ret.WriteString("#else\n")
			ret.WriteString(`class ` + cabiClassName(ft) + ";\n")
			ret.WriteString("#endif\n")

		} else {
			ret.WriteString(`class ` + ft + ";\n")
		}
	}

	ret.WriteString("#else\n")

	for _, ft := range foundTypesList {
		if cabiPreventStructDeclaration(ft) {
			continue
		}
		ret.WriteString(`typedef struct ` + cabiClassName(ft) + " " + cabiClassName(ft) + ";\n")
	}

	ret.WriteString("#endif\n")

	ret.WriteString("\n")

	for _, c := range src.Classes {

		className := cabiClassName(c.ClassName)
		virtualMethods := c.VirtualMethods()
		protectedMethods := c.ProtectedMethods()

		for i, ctor := range c.Ctors {
			ret.WriteString(fmt.Sprintf("%s* %s(%s);\n", className, cabiNewName(c, i), emitParametersCabiConstructor(&c, &ctor)))
		}

		if len(c.DirectInheritClassInfo()) > 0 {
			ret.WriteString(
				"void " + cabiVirtBaseName(c) + "(" + className + "* src",
			)
			for _, baseClass := range c.DirectInheritClassInfo() {
				ret.WriteString(", " + cabiClassName(baseClass.Class.ClassName) + "** outptr_" + cabiClassName(baseClass.Class.ClassName))
			}
			ret.WriteString(");\n")
		}

		for _, m := range c.Methods {
			if m.IsProtected && !m.IsVirtual {
				continue // Can't call directly, have to go through our wrapper
			}

			if m.ReturnType.BecomesConstInVersion != nil {
				ret.WriteString(fmt.Sprintf("// This method's return type was changed from non-const to const in Qt "+*m.ReturnType.BecomesConstInVersion) + "\n" +
					"#if QT_VERSION >= QT_VERSION_CHECK(" + strings.Replace(*m.ReturnType.BecomesConstInVersion, `.`, `,`, -1) + ",0)\n" +
					fmt.Sprintf("%s %s(%s);\n", "const "+m.ReturnType.RenderTypeCabi(), cabiMethodName(c, m), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*")) +
					"#else\n" +
					fmt.Sprintf("%s %s(%s);\n", m.ReturnType.RenderTypeCabi(), cabiMethodName(c, m), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*")) +
					"#endif\n")
			} else {
				ret.WriteString(fmt.Sprintf("%s %s(%s);\n", m.ReturnType.RenderTypeCabi(), cabiMethodName(c, m), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*")))
			}

			if m.IsSignal {
				ret.WriteString(fmt.Sprintf("%s %s(%s* self, intptr_t slot);\n", m.ReturnType.RenderTypeCabi(), cabiConnectName(c, m), className))
			}
		}

		if len(c.Methods) > 0 {
			ret.WriteString("\n")
		}

		for _, m := range virtualMethods {
			ret.WriteString(fmt.Sprintf("bool %s(%s* self, intptr_t slot);\n", cabiOverrideVirtualName(c, m), "void" /*methodPrefixName*/))

			ret.WriteString(fmt.Sprintf("%s %s(%s);\n", m.ReturnType.RenderTypeCabi(), cabiVirtualBaseName(c, m), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+"void" /*className*/ +"*")))
		}
		if len(virtualMethods) > 0 {
			ret.WriteString("\n")

			for _, m := range protectedMethods {
				ret.WriteString(fmt.Sprintf("%s %s(bool* _dynamic_cast_ok, %s);\n", m.ReturnType.RenderTypeCabi(), cabiProtectedBaseName(c, m), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+"void" /*className*/ +"*")))
			}
			if len(protectedMethods) > 0 {
				ret.WriteString("\n")
			}
		}

		for _, m := range c.PrivateSignals {
			ret.WriteString(fmt.Sprintf("%s %s(%s* self, intptr_t slot);\n", m.ReturnType.RenderTypeCabi(), cabiConnectName(c, m), className))
		}
		if len(c.PrivateSignals) > 0 {
			ret.WriteString("\n")
		}

		if c.CanDelete {
			ret.WriteString(fmt.Sprintf("void %s(%s* self);\n", cabiDeleteName(c), className))
		}

		ret.WriteString("\n")
	}

	ret.WriteString(
		`#ifdef __cplusplus
} /* extern C */
#endif

#endif
`)
	return ret.String(), nil
}

func emitParametersCabiConstructor(c *CppClass, ctor *CppMethod) string {

	slist := make([]string, 0, len(ctor.Parameters))
	for _, p := range ctor.Parameters {
		slist = append(slist, p.RenderTypeCabi()+" "+p.cParameterName())
	}

	return strings.Join(slist, `, `)
}

func emitBindingCpp(src *CppParsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

	importedHeaders := make(map[string]struct{})

	for _, ref := range getReferencedTypes(src) {

		if ref == "QString" {
			ret.WriteString("#include <QString>\n")
			ret.WriteString("#include <QByteArray>\n")
			ret.WriteString("#include <cstring>\n")
			continue
		}

		if strings.Contains(ref, `::`) {
			ret.WriteString(`#define WORKAROUND_INNER_CLASS_DEFINITION_` + cabiClassName(ref) + "\n")
			continue
		}

		if !ImportHeaderForClass(ref) {
			continue
		}

		if cinfo, ok := KnownClassnames[ref]; ok && len(cinfo.HeaderFile) > 0 {
			// We know exactly which header file we actually found it in
			// For core Qt classes, #include the <className> directly, as Qt
			// has helper mini-headers for almost all types which work even
			// if the headers are restructured in different Qt versions
			// But for some subpackages they don't offer this

			if cinfo.PackageName == "qt/qtermwidget" {
				// Wanted
				ref = cinfo.HeaderFile
			} else {
				// Not wanted
			}
		}

		// The transform above can cause duplicate imports. Only import them once
		// Headers usually have #pragma once or equivalent, but this is courteous
		if _, ok := importedHeaders[ref]; ok {
			continue
		}

		ret.WriteString(`#include <` + ref + ">\n")
		importedHeaders[ref] = struct{}{}
	}

	ret.WriteString(`#include <` + filename + ">\n")
	ret.WriteString(`#include "gen_` + filename + "\"\n")

	// Perform any platform checks
	// n.b. The Q_OS_ variable is defined usually indirectly from another Qt
	// header, so it should be checked only after all the other includes,
	// although that seems suboptimal

	platformRestriction := HeaderPlatformRestriction(filename)
	if platformRestriction != nil {
		ret.WriteString(`#if ` + platformRestriction.CxxIf() + "\n\n")
	}

	// Write prototypes for functions that the host language bindings should export
	// for virtual function overrides

	ret.WriteString(`
#ifdef __cplusplus
extern "C" {
#endif

`)

	for _, c := range src.Classes {
		methodsAndPrivateSignals := append(c.Methods, c.PrivateSignals...)

		for _, m := range methodsAndPrivateSignals {
			if m.IsSignal {
				callback := "void " + cabiCallbackName(c, m) + "(intptr_t"

				for _, p := range m.Parameters {
					callback += ", " + p.RenderTypeCabi()
				}
				callback += ");\n"
				ret.WriteString(callback)
			}
		}

		for _, m := range c.VirtualMethods() {
			callback := m.ReturnType.RenderTypeCabi() + " " + cabiCallbackName(c, m) + "(" + ifv(m.IsConst, "const ", "") + cabiClassName(c.ClassName) + "*, intptr_t"

			for _, p := range m.Parameters {
				callback += ", " + p.RenderTypeCabi()
			}
			callback += ");\n"
			ret.WriteString(callback)
		}
	}

	ret.WriteString(
		`#ifdef __cplusplus
} /* extern C */
#endif

`)

	for _, c := range src.Classes {
		className := cabiClassName(c.ClassName)
		virtualMethods := c.VirtualMethods()
		protectedMethods := c.ProtectedMethods()

		if len(virtualMethods) > 0 {
			subclassName := cppSubclassName(c)

			ret.WriteString("class " + subclassName + " final : public " + c.ClassName + " {\n" +
				"public:\n" +
				"\n",
			)

			for _, ctor := range c.Ctors {
				ret.WriteString("\t" + subclassName + "(" + emitParametersCpp(ctor) + "): " + c.ClassName + "(" + emitParameterNames(ctor) + ") {}\n")
			}
			ret.WriteString("\n")

			if !c.CanDelete {
				ret.WriteString(
					"private:\n" +
						"\tvirtual ~" + subclassName + "();\n" + //  = delete;\n" +
						"\n" +
						"public:\n" +
						"\n",
				)
			} else {
				ret.WriteString(
					"\tvirtual ~" + subclassName + "() override = default;\n" +
						"\n",
				)
			}

			for _, m := range virtualMethods {

				{
					var maybeReturn, maybeReturn2 string
					var returnTransformP, returnTransformF string
					if !m.ReturnType.Void() {
						maybeReturn = "return "

						maybeReturn2 = m.ReturnType.RenderTypeCabi() + " callback_return_value = "
						returnParam := m.ReturnType // copy
						returnParam.ParameterName = "callback_return_value"
						returnTransformP, returnTransformF = emitCABI2CppForwarding(returnParam, "\t\t")
					}

					handleVarname := "handle__" + m.SafeMethodName()

					ret.WriteString(
						"\t// cgo.Handle value for overwritten implementation\n" +
							"\tintptr_t " + handleVarname + " = 0;\n" +
							"\n",
					)

					// In the case of method overloads, we always need to use the
					// original method name (CppCallTarget), not the MethodName

					ret.WriteString(
						"\t// Subclass to allow providing a Go implementation\n" +
							"\tvirtual " + m.ReturnType.RenderTypeQtCpp() + " " + m.CppCallTarget() + "(" + emitParametersCpp(m) + ") " + ifv(m.IsConst, "const ", "") + ifv(m.IsNoExcept, "noexcept ", "") + "override {\n",
					)

					ret.WriteString("\t\tif (" + handleVarname + " == 0) {\n")
					if m.IsPureVirtual {
						if m.ReturnType.Void() {
							ret.WriteString("\t\t\treturn; // Pure virtual, there is no base we can call\n")
						} else {
							ret.WriteString("\t\t\treturn " + getCppZeroValue(m.ReturnType) + "; // Pure virtual, there is no base we can call\n")
						}
					} else {
						ret.WriteString("\t\t\t" + maybeReturn + c.ClassName + "::" + m.CppCallTarget() + "(" + emitParameterNames(m) + ");\n")

						if m.ReturnType.Void() {
							ret.WriteString("\t\t\treturn;\n")
						}
					}
					ret.WriteString("\t\t}\n")

					paramArgs := []string{}
					paramArgs = append(paramArgs, "this")
					paramArgs = append(paramArgs, handleVarname)

					var signalCode string

					for i, p := range m.Parameters {
						signalCode += emitAssignCppToCabi(fmt.Sprintf("\t\t%s sigval%d = ", p.RenderTypeCabi(), i+1), p, p.cParameterName())
						paramArgs = append(paramArgs, fmt.Sprintf("sigval%d", i+1))
					}

					ret.WriteString(
						"\n" +
							signalCode +
							"\t\t" + maybeReturn2 + cabiCallbackName(c, m) + "(" + strings.Join(paramArgs, `, `) + ");\n" +
							returnTransformP +
							ifv(maybeReturn == "", "", "\t\treturn "+returnTransformF+";") + "\n" +
							"\t}\n" +

							"\n",
					)
				}

				// If there is a base version of this method, add a helper to
				// allow calling it

				if !m.IsPureVirtual {

					// The virtualbase wrapper needs to take CABI parameters, not
					// real Qt parameters, in case there are protected enum types
					// (e.g. QAbstractItemView::CursorAction)

					// Because (in the Go projection) this is only exposed as a
					// super() argument to a real virtual override, we know that
					// the pointer type correctly points to our subclass and
					// therefore no dynamic_cast<> validation is required

					ret.WriteString(
						"\tfriend " + m.ReturnType.RenderTypeCabi() + " " + cabiVirtualBaseName(c, m) + "(" + emitParametersCabi(m, ifv(m.IsConst, "const ", "")+"void*") + ");\n\n",
					)

				}
			}

			if len(protectedMethods) > 0 {
				ret.WriteString("\t// Wrappers to allow calling protected methods:\n")
			}

			for _, m := range protectedMethods {

				// The protectedbase wrapper needs to take CABI parameters, not
				// real Qt parameters, in case there are protected enum types
				// (e.g. QAbstractItemView::CursorAction)

				ret.WriteString(
					"\tfriend " + m.ReturnType.RenderTypeCabi() + " " + cabiProtectedBaseName(c, m) + "(bool* _dynamic_cast_ok, " + emitParametersCabi(m, ifv(m.IsConst, "const ", "")+"void*") + ");\n",
				)
			}

			ret.WriteString(
				"};\n" +
					"\n")
		}

		for i, ctor := range c.Ctors {

			preamble, forwarding := emitParametersCABI2CppForwarding(ctor.Parameters, "\t")

			ret.WriteString(
				className + "* " + cabiNewName(c, i) + "(" + emitParametersCabi(ctor, "") + ") {\n",
			)

			if ctor.RequireCpp != nil {
				ret.WriteString(
					"#if " + *ctor.RequireCpp + "\n",
				)
			}

			ret.WriteString(
				preamble +
					"\treturn new (std::nothrow) " +
					ifv(len(virtualMethods) > 0, cppSubclassName(c), c.ClassName) +
					"(" + forwarding + ");\n",
			)

			if ctor.RequireCpp != nil {
				ret.WriteString(
					"#else\n" +
						"\treturn nullptr;\n" +
						"#endif\n",
				)
			}

			ret.WriteString(
				"}\n" +
					"\n",
			)

		}

		// Add a helper method to retrieve base class pointers
		// That's because C++ virtual inheritance shifts the pointer; we
		// need the base pointers to call base methods from CGO
		if len(c.DirectInheritClassInfo()) > 0 {
			ret.WriteString(
				"void " + cabiVirtBaseName(c) + "(" + className + "* src",
			)
			for _, baseClass := range c.DirectInheritClassInfo() {
				ret.WriteString(", " + baseClass.Class.ClassName + "** outptr_" + cabiClassName(baseClass.Class.ClassName))
			}
			ret.WriteString(") {\n")
			for _, baseClass := range c.DirectInheritClassInfo() {
				ret.WriteString("\t*outptr_" + cabiClassName(baseClass.Class.ClassName) + " = static_cast<" + baseClass.Class.ClassName + "*>(src);\n")
			}
			ret.WriteString(
				"}\n" +
					"\n",
			)

		}

		for _, m := range c.Methods {

			// Protected virtual methods will be bound separately (the only
			// useful thing is to expose calling the virtual base)
			// Protected non-virtual methods should always be hidden
			if m.IsProtected {
				continue
			}

			// Need to take an extra 'self' parameter

			preamble, forwarding := emitParametersCABI2CppForwarding(m.Parameters, "\t")

			// callTarget is an rvalue representing the full C++ function call.
			callTarget := "self->"
			if m.IsStatic {
				callTarget = c.ClassName + "::"
			}

			callTarget += m.CppCallTarget() + "(" + forwarding + ")"

			// Qt 6.8 moved many operator== implementations from class methods
			// into global operators.
			// By using infix syntax, either can be called
			if m.IsReadonlyOperator() && len(m.Parameters) == 1 {
				operator := m.CppCallTarget()[8:]
				callTarget = "(*self " + operator + " " + forwarding + ")"
			}

			if m.RequireCpp != nil {
				var unavailableRetn string
				if retnCabi := m.ReturnType.RenderTypeCabi(); retnCabi == "void" {
					unavailableRetn = "\treturn;\n"
				} else {
					unavailableRetn = "\t" + retnCabi + " _ret_unavailable;\n" +
						"\treturn _ret_unavailable;\n"
				}

				ret.WriteString(fmt.Sprintf(
					"%s %s_%s(%s) {\n"+
						"#if "+*m.RequireCpp+"\n"+
						"%s"+
						"%s"+
						"#else\n"+
						"%s"+
						"#endif\n"+
						"}\n"+
						"\n",
					m.ReturnType.RenderTypeCabi(), className, m.SafeMethodName(), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*"),
					preamble,
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget),
					unavailableRetn,
				))

			} else if m.BecomesNonConstInVersion != nil {

				nonConstCallTarget := "const_cast<" + c.ClassName + "*>(self)->" + m.CppCallTarget() + "(" + forwarding + ")"

				ret.WriteString("" +
					m.ReturnType.RenderTypeCabi() + " " + className + "_" + m.SafeMethodName() + "(" + emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*") + ") {\n" +
					preamble + "\n" +
					"// This method was changed from const to non-const in Qt " + *m.BecomesNonConstInVersion + "\n" +
					"#if QT_VERSION < QT_VERSION_CHECK(" + strings.Replace(*m.BecomesNonConstInVersion, `.`, `,`, -1) + ",0)\n" +
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget) +
					"#else\n" +
					emitAssignCppToCabi("\treturn ", m.ReturnType, nonConstCallTarget) +
					"#endif\n" +
					"}\n" +
					"\n",
				)

			} else if m.ReturnType.BecomesConstInVersion != nil {

				ret.WriteString("" +
					"// This method's return type was changed from non-const to const in Qt " + *m.ReturnType.BecomesConstInVersion + "\n" +
					"#if QT_VERSION >= QT_VERSION_CHECK(" + strings.Replace(*m.ReturnType.BecomesConstInVersion, `.`, `,`, -1) + ",0)\n" +
					"const " + m.ReturnType.RenderTypeCabi() + " " + className + "_" + m.SafeMethodName() + "(" + emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*") + ") {\n" +
					"#else\n" +
					m.ReturnType.RenderTypeCabi() + " " + className + "_" + m.SafeMethodName() + "(" + emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*") + ") {\n" +
					"#endif\n" +
					preamble + "\n" +
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget) +
					"}\n\n",
				)

			} else {

				ret.WriteString(fmt.Sprintf(
					"%s %s_%s(%s) {\n"+
						"%s"+
						"%s"+
						"}\n"+
						"\n",
					m.ReturnType.RenderTypeCabi(), className, m.SafeMethodName(), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+className+"*"),
					preamble,
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget),
				))

			}

			if m.IsSignal {
				// If there are hidden parameters, the type of the signal itself
				// needs to include them
				exactSignal := `static_cast<void (` + c.ClassName + `::*)(` + emitParameterTypesCpp(m, true) + `)` + ifv(m.IsConst, ` const`, ``) + `>(&` + c.ClassName + `::` + m.CppCallTarget() + `)`

				paramArgs := []string{"slot"}
				paramArgDefs := []string{"intptr_t cb"}

				var signalCode string

				for i, p := range m.Parameters {
					signalCode += emitAssignCppToCabi(fmt.Sprintf("\t\t%s sigval%d = ", p.RenderTypeCabi(), i+1), p, p.cParameterName())
					paramArgs = append(paramArgs, fmt.Sprintf("sigval%d", i+1))
					paramArgDefs = append(paramArgDefs, p.RenderTypeCabi()+" "+p.cParameterName())
				}

				signalCode += "\t\t" + cabiCallbackName(c, m) + "(" + strings.Join(paramArgs, `, `) + ");\n"

				ret.WriteString(
					`void ` + cabiConnectName(c, m) + `(` + className + `* self, intptr_t slot) {` + "\n" +
						"\t" + className + `::connect(self, ` + exactSignal + `, self, [=](` + emitParametersCpp(m) + `) {` + "\n" +
						signalCode +
						"\t});\n" +
						"}\n" +
						"\n",
				)
			}

		}

		// FIXME(hack): In some platforms (Android Qt 5), instantiating a
		// protected enum fails in friend context:
		//
		//     QAbstractItemView::State _ret = self_cast->state();
		//     error: 'State' is a protected member of 'QAbstractItemView'
		//
		// @ref https://stackoverflow.com/q/52191903
		// However, it works fine on most other platforms. Probably this
		// is a GCC vs Clang difference.
		fixupProtectedReferences := func(assignStmts string) string {

			// Work around it for this specific class (fingers-crossed) by
			// referencing the protected enum via its subclass name
			ret := strings.Replace(assignStmts, c.ClassName+`::`, cppSubclassName(c)+`::`, -1)

			// Also need to scan parent classes (e.g. QColumnView friend
			// functions refer to its parent QAbstractItemView::State)
			for _, classInherit := range c.AllInheritsClassInfo() {
				ret = strings.Replace(ret, classInherit.Class.ClassName+`::`, cppSubclassName(c)+`::`, -1)
			}

			// The first instance of this class name change affected the very
			// method we're going to call
			// Undo it, but only once
			ret = strings.Replace(ret, "->"+cppSubclassName(c), "->"+c.ClassName, 1)

			return ret
		}

		if len(virtualMethods) > 0 {
			// This is a subclassed class. In that case, we allow calling
			// protected methods
			// This is a standalone function, but it can access the protected
			// method via a friend declaration

			subclassName := cppSubclassName(c)

			// Virtual override helpers
			for _, m := range virtualMethods {

				// Virtual methods: Allow overriding
				// (Never use a const self*)
				// The pointer that we are passed is the base type, not the subclassed
				// type. First cast the void* to the base type, and only then,
				// upclass it

				ret.WriteString(
					`bool ` + cabiOverrideVirtualName(c, m) + `(void* self, intptr_t slot) {` + "\n" +
						"\t" + subclassName + "* self_cast = dynamic_cast<" + subclassName + "*>( (" + c.ClassName + "*)(self) );\n" +
						"\tif (self_cast == nullptr) {\n" +
						"\t\treturn false;\n" +
						"\t}\n" +
						"\n" +
						"\tself_cast->handle__" + m.SafeMethodName() + " = slot;\n" +
						"\treturn true;\n" +
						"}\n" +
						"\n",
				)

				// 2. Add CABI function to call the base method

				if !m.IsPureVirtual {
					// This is not generally exposed in the Go binding, but when overriding
					// the method, allows Go code to call super().

					// This calls the target Qt C++ method directly using fully
					// qualified syntax (`MiqtSubclass->QFoo::Bar()`). This method
					// takes and returns CABI types.

					vbpreamble, vbforwarding := emitParametersCABI2CppForwarding(m.Parameters, "\t")

					callTarget := "static_cast<" + ifv(m.IsConst, "const ", "") + subclassName + "*>(self)->" + c.ClassName + "::" + m.CppCallTarget() + "(" + vbforwarding + ")"

					ret.WriteString(
						m.ReturnType.RenderTypeCabi() + " " + cabiVirtualBaseName(c, m) + "(" + emitParametersCabi(m, ifv(m.IsConst, "const ", "")+"void*") + ") {\n" +
							vbpreamble +
							fixupProtectedReferences(emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget)) +
							"}\n" +
							"\n",
					)

				}
			}

			for _, m := range protectedMethods {

				vbpreamble, vbforwarding := emitParametersCABI2CppForwarding(m.Parameters, "\t\t")
				vbCallTarget := "self_cast->" + m.CppCallTarget() + "(" + vbforwarding + ")"

				ret.WriteString(
					m.ReturnType.RenderTypeCabi() + " " + cabiProtectedBaseName(c, m) + "(bool* _dynamic_cast_ok, " + emitParametersCabi(m, ifv(m.IsConst, "const ", "")+"void*") + ") {\n" +

						"\t" + subclassName + "* self_cast = dynamic_cast<" + subclassName + "*>( (" + c.ClassName + "*)(self) );\n" +
						"\tif (self_cast == nullptr) {\n" +
						"\t\t*_dynamic_cast_ok = false;\n" +
						"\t\treturn " + getCabiZeroValue(m.ReturnType) + ";\n" +
						"\t}\n" +
						"\n" +
						"\t*_dynamic_cast_ok = true;\n" +
						vbpreamble +
						fixupProtectedReferences(emitAssignCppToCabi("\treturn ", m.ReturnType, vbCallTarget)) +
						"}\n" +
						"\n",
				)

			}
		}

		for _, m := range c.PrivateSignals {
			exactSignal := `&` + c.ClassName + `::` + m.CppCallTarget()

			paramArgs := []string{"slot"}
			paramArgDefs := []string{"intptr_t cb"}

			var signalCode string

			for i, p := range m.Parameters {
				signalCode += emitAssignCppToCabi(fmt.Sprintf("\t\t%s sigval%d = ", p.RenderTypeCabi(), i+1), p, p.cParameterName())
				paramArgs = append(paramArgs, fmt.Sprintf("sigval%d", i+1))
				paramArgDefs = append(paramArgDefs, p.RenderTypeCabi()+" "+p.cParameterName())
			}

			signalCode += "\t\t" + cabiCallbackName(c, m) + "(" + strings.Join(paramArgs, `, `) + ");\n"

			ret.WriteString(
				`void ` + cabiConnectName(c, m) + `(` + className + `* self, intptr_t slot) {` + "\n" +
					"\t" + className + `::connect(self, ` + exactSignal + `, self, [=](` + emitParametersCpp(m) + `) {` + "\n" +
					signalCode +
					"\t});\n" +
					"}\n" +
					"\n",
			)
		}

		// Delete
		// If we subclassed, our class destructor is always virtual. Therefore
		// we can delete from the self ptr without any dynamic_cast<>
		if c.CanDelete {
			ret.WriteString(
				"void " + cabiDeleteName(c) + "(" + className + "* self) {\n" +
					"\tdelete self;\n" +
					"}\n" +
					"\n",
			)
		}
	}

	//

	if platformRestriction != nil {
		ret.WriteString(`#endif //` + platformRestriction.CxxIf() + "\n\n")
	}

	return ret.String(), nil
}
