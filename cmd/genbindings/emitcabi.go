package main

import (
	"fmt"
	"sort"
	"strings"
)

func (p CppParameter) RenderTypeCabi() string {

	if p.ParameterType == "QString" {
		return "struct miqt_string"

	} else if _, ok := p.QListOf(); ok {
		return "struct miqt_array*"

	} else if _, ok := p.QSetOf(); ok {
		return "struct miqt_array*"

	} else if (p.Pointer || p.ByRef) && p.QtClassType() {
		return cabiClassName(p.ParameterType) + "*"

	} else if p.QtClassType() && !p.Pointer {
		// Even if C++ returns by value, CABI is returning a heap copy (new'd, not malloc'd)
		return cabiClassName(p.ParameterType) + "*"
	}

	ret := p.ParameterType
	switch p.ParameterType {
	case "uchar":
		ret = "unsigned char"
	case "uint":
		ret = "unsigned int"
	case "ulong":
		ret = "unsigned long"
	case "qint8":
		ret = "int8_t"
	case "quint8":
		ret = "uint8_t"
	case "qint16", "short":
		ret = "int16_t"
	case "quint16", "ushort", "unsigned short":
		ret = "uint16_t"
	case "qint32":
		ret = "int32_t"
	case "quint32":
		ret = "uint32_t"
	case "qlonglong", "qint64":
		ret = "int64_t"
	case "qulonglong", "quint64":
		ret = "uint64_t"
	case "qfloat16":
		ret = "_Float16" // No idea where this typedef comes from, but it exists
	case "qreal":
		ret = "double"
	case "qintptr", "QIntegerForSizeof<void *>::Signed":
		ret = "intptr_t"
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
		tmp = append(tmp, p.RenderTypeQtCpp()+" "+p.ParameterName)
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
		if p.ParameterType == "QString" {
			tmp = append(tmp, "struct miqt_string "+p.ParameterName)

		} else if t, ok := p.QListOf(); ok {
			tmp = append(tmp, "struct miqt_array* /* of "+t.RenderTypeCabi()+" */ "+p.ParameterName)

		} else if t, ok := p.QSetOf(); ok {
			tmp = append(tmp, "struct miqt_array* /* Set of "+t.RenderTypeCabi()+" */ "+p.ParameterName)

		} else if p.QtClassType() {
			if p.ByRef || p.Pointer {

				// Pointer to Qt type
				// Replace with taking our PQ typedef by value
				tmp = append(tmp, cabiClassName(p.ParameterType)+"* "+p.ParameterName)
			} else {
				// Qt type passed by value
				// The CABI will unconditionally take these by pointer and dereference them
				// when passing to C++
				tmp = append(tmp, cabiClassName(p.ParameterType)+"* "+p.ParameterName)
			}

		} else {
			// RenderTypeCabi renders both pointer+reference as pointers
			tmp = append(tmp, p.RenderTypeCabi()+" "+p.ParameterName)
		}
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
	return strings.Replace(strings.Replace(in, `[`, `_`, -1), `]`, "", -1)
}

func emitCABI2CppForwarding(p CppParameter, indent string) (preamble string, forwarding string) {

	nameprefix := makeNamePrefix(p.ParameterName)

	if p.ParameterType == "QString" {
		// The CABI received parameter is a struct miqt_string, passed by value
		// C++ needs it as a QString. Create one on the stack for automatic cleanup
		// The caller will free the miqt_string
		preamble += indent + "QString " + nameprefix + "_QString = QString::fromUtf8(" + p.ParameterName + ".data, " + p.ParameterName + ".len);\n"
		return preamble, nameprefix + "_QString"

	} else if listType, ok := p.QListOf(); ok {

		preamble += indent + p.GetQtCppType().ParameterType + " " + nameprefix + "_QList;\n"
		preamble += indent + nameprefix + "_QList.reserve(" + p.ParameterName + "->len);\n"

		preamble += indent + listType.RenderTypeCabi() + "* " + nameprefix + "_arr = static_cast<" + listType.RenderTypeCabi() + "*>(" + p.ParameterName + "->data);\n"
		preamble += indent + "for(size_t i = 0; i < " + p.ParameterName + "->len; ++i) {\n"

		listType.ParameterName = nameprefix + "_arr[i]"
		addPre, addFwd := emitCABI2CppForwarding(listType, indent+"\t")
		preamble += addPre
		preamble += indent + "\t" + nameprefix + "_QList.push_back(" + addFwd + ");\n"

		preamble += indent + "}\n"
		return preamble, nameprefix + "_QList"

	} else if p.IsFlagType() || p.IntType() || p.IsKnownEnum() {
		castSrc := p.ParameterName
		castType := p.RenderTypeQtCpp()

		if p.ByRef { // e.g. QDataStream::operator>>() overloads
			castSrc = "*" + castSrc
		}

		if p.QtCppOriginalType != nil && p.QtCppOriginalType.Const != p.Const {
			return preamble, "static_cast<" + p.RenderTypeQtCpp() + ">(const_cast<" + p.RenderTypeIntermediateCpp() + ">(" + p.ParameterName + "))"
		}

		if p.ParameterType == "qint64" ||
			p.ParameterType == "quint64" ||
			p.ParameterType == "qlonglong" ||
			p.ParameterType == "qulonglong" ||
			p.GetQtCppType().ParameterType == "qintptr" ||
			p.GetQtCppType().ParameterType == "qsizetype" || // Qt 6 qversionnumber.h: invalid ‘static_cast’ from type ‘ptrdiff_t*’ {aka ‘long int*’} to type ‘qsizetype*’ {aka ‘long long int*’}
			p.ParameterType == "qint8" {
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
			return preamble, p.ParameterName
		} else {
			// By ref and not by pointer
			// We changed RenderTypeCabi() to render this as a pointer
			// Need to dereference so we can pass as reference to the actual Qt C++ function
			//tmp = append(tmp, "*"+p.ParameterName)
			return preamble, "*" + p.ParameterName
		}

	} else if p.QtClassType() && !p.Pointer {
		// CABI takes all Qt types by pointer, even if C++ wants them by value
		// Dereference the passed-in pointer
		if strings.Contains(p.ParameterName, `[`) {
			return preamble, "*(" + p.ParameterName + ")" // Extra brackets aren't necessary, just nice
		}
		return preamble, "*" + p.ParameterName

	} else {
		return preamble, p.ParameterName
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

	namePrefix := makeNamePrefix(p.ParameterName)

	if p.ParameterType == "void" && !p.Pointer {
		shouldReturn = ""

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
			shouldReturn = ifv(p.Const, "const ", "") + "QString " + p.ParameterName + "_ret = "
			afterCall = indent + "// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory\n"
			afterCall += indent + "QByteArray " + namePrefix + "_b = " + namePrefix + "_ret.toUtf8();\n"
		}

		afterCall += indent + "struct miqt_string " + namePrefix + "_ms;\n"
		afterCall += indent + namePrefix + "_ms.len = " + namePrefix + "_b.length();\n"
		afterCall += indent + namePrefix + "_ms.data = static_cast<char*>(malloc(" + namePrefix + "_ms.len));\n"
		afterCall += indent + "memcpy(" + namePrefix + "_ms.data, " + namePrefix + "_b.data(), " + namePrefix + "_ms.len);\n"
		afterCall += indent + assignExpression + namePrefix + "_ms;\n"

	} else if t, ok := p.QListOf(); ok {

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

		afterCall += indent + "struct miqt_array* " + namePrefix + "_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));\n"
		afterCall += indent + "" + namePrefix + "_out->len = " + namePrefix + "_ret.length();\n"
		afterCall += indent + "" + namePrefix + "_out->data = static_cast<void*>(" + namePrefix + "_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"

	} else if t, ok := p.QSetOf(); ok {

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QSet<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + t.RenderTypeCabi() + "* " + namePrefix + "_arr = static_cast<" + t.RenderTypeCabi() + "*>(malloc(sizeof(" + t.RenderTypeCabi() + ") * " + namePrefix + "_ret.size()));\n"
		afterCall += indent + "int " + namePrefix + "_ctr = 0;\n"
		afterCall += indent + "QSetIterator<" + t.RenderTypeQtCpp() + "> " + namePrefix + "_itr(" + namePrefix + "_ret);\n"
		afterCall += indent + "while (" + namePrefix + "_itr.hasNext()) {\n"
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_arr["+namePrefix+"_ctr++] = ", t, namePrefix+"_itr.next()")
		afterCall += indent + "}\n"

		afterCall += indent + "struct miqt_array* " + namePrefix + "_out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));\n"
		afterCall += indent + "" + namePrefix + "_out->len = " + namePrefix + "_ret.size();\n"
		afterCall += indent + "" + namePrefix + "_out->data = static_cast<void*>(" + namePrefix + "_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"

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

	} else if p.QtClassType() && !p.Pointer {

		// Elide temporary and emit directly from the rvalue
		return indent + assignExpression + "new " + p.ParameterType + "(" + rvalue + ");\n"

	} else if p.IsFlagType() || p.IsKnownEnum() || p.QtCppOriginalType != nil {
		// Needs an explicit cast
		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		if p.QtCppOriginalType != nil && p.QtCppOriginalType.Const != p.Const {
			afterCall += indent + "" + assignExpression + "const_cast<" + p.RenderTypeCabi() + ">(static_cast<" + p.RenderTypeIntermediateCpp() + ">(" + namePrefix + "_ret));\n"
		} else {
			afterCall += indent + "" + assignExpression + "static_cast<" + p.RenderTypeCabi() + ">(" + namePrefix + "_ret);\n"
		}

	} else if p.Const {
		shouldReturn += "(" + p.RenderTypeCabi() + ") "

	}

	return indent + shouldReturn + rvalue + ";\n" + afterCall
}

// getReferencedTypes finds all referenced Qt types in this file.
func getReferencedTypes(src *CppParsedHeader) []string {

	foundTypes := map[string]struct{}{}
	for _, c := range src.Classes {

		foundTypes[c.ClassName] = struct{}{}

		for _, ctor := range c.Ctors {
			for _, p := range ctor.Parameters {
				if p.QtClassType() {
					foundTypes[p.ParameterType] = struct{}{}
				}
				if t, ok := p.QListOf(); ok {
					foundTypes["QList"] = struct{}{} // FIXME or QVector?
					if t.QtClassType() {
						foundTypes[t.ParameterType] = struct{}{}
					}
				}
			}
		}
		for _, m := range c.Methods {
			for _, p := range m.Parameters {
				if p.QtClassType() {
					foundTypes[p.ParameterType] = struct{}{}
				}
				if t, ok := p.QListOf(); ok {
					foundTypes["QList"] = struct{}{} // FIXME or QVector?
					if t.QtClassType() {
						foundTypes[t.ParameterType] = struct{}{}
					}
				}
			}
			if m.ReturnType.QtClassType() {
				foundTypes[m.ReturnType.ParameterType] = struct{}{}
			}
			if t, ok := m.ReturnType.QListOf(); ok {
				foundTypes["QList"] = struct{}{} // FIXME or QVector?
				if t.QtClassType() {
					foundTypes[t.ParameterType] = struct{}{}
				}
			}
		}
	}

	// Some types (e.g. QRgb) are found but are typedefs, not classes
	for _, td := range src.Typedefs {
		delete(foundTypes, td.Alias)
	}

	// Convert to sorted list
	foundTypesList := make([]string, 0, len(foundTypes))
	for ft := range foundTypes {
		if strings.HasPrefix(ft, "QList<") || strings.HasPrefix(ft, "QVector<") { // TODO properly exclude via the QListOf() check above
			continue
		}
		if strings.HasSuffix(ft, "Private") { // qbrush.h finds QGradientPrivate
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

func emitBindingHeader(src *CppParsedHeader, filename string, packageName string) (string, error) {
	ret := strings.Builder{}

	includeGuard := "GEN_" + strings.ToUpper(strings.Replace(filename, `.`, `_`, -1))

	bindingInclude := "../libmiqt/libmiqt.h"
	if packageName != "qt" {
		bindingInclude = "../" + bindingInclude
	}

	ret.WriteString(`#ifndef ` + includeGuard + `
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

	foundTypesList := getReferencedTypes(src)

	ret.WriteString("#ifdef __cplusplus\n")

	for _, ft := range foundTypesList {
		if ft == "QList" || ft == "QString" { // These types are reprojected
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
		if ft == "QList" || ft == "QString" { // These types are reprojected
			continue
		}
		ret.WriteString(`typedef struct ` + cabiClassName(ft) + " " + cabiClassName(ft) + ";\n")
	}

	ret.WriteString("#endif\n")

	ret.WriteString("\n")

	for _, c := range src.Classes {

		cClassName := cabiClassName(c.ClassName)

		for i, ctor := range c.Ctors {
			ret.WriteString(fmt.Sprintf("%s %s_new%s(%s);\n", cClassName+"*", cClassName, maybeSuffix(i), emitParametersCabi(ctor, "")))
		}

		for _, m := range c.Methods {
			ret.WriteString(fmt.Sprintf("%s %s_%s(%s);\n", m.ReturnType.RenderTypeCabi(), cClassName, m.SafeMethodName(), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+cClassName+"*")))

			if m.IsSignal {
				ret.WriteString(fmt.Sprintf("%s %s_connect_%s(%s* self, intptr_t slot);\n", m.ReturnType.RenderTypeCabi(), cClassName, m.SafeMethodName(), cClassName))
			}
		}

		// delete
		if c.CanDelete {
			ret.WriteString(fmt.Sprintf("void %s_Delete(%s* self);\n", cClassName, cClassName))
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

func emitBindingCpp(src *CppParsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

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

		ret.WriteString(`#include <` + ref + ">\n")
	}

	ret.WriteString(`#include <` + filename + ">\n")
	ret.WriteString(`#include "gen_` + filename + "\"\n")
	ret.WriteString("#include \"_cgo_export.h\"\n\n")

	for _, c := range src.Classes {

		cClassName := cabiClassName(c.ClassName)

		for i, ctor := range c.Ctors {

			preamble, forwarding := emitParametersCABI2CppForwarding(ctor.Parameters, "\t")

			if ctor.LinuxOnly {

				ret.WriteString(fmt.Sprintf(
					"%s* %s_new%s(%s) {\n"+
						"#ifdef Q_OS_LINUX\n"+
						"%s"+
						"\treturn new %s(%s);\n"+
						"#else\n"+
						"\treturn nullptr;\n"+
						"#endif\n"+
						"}\n"+
						"\n",
					cClassName, cClassName, maybeSuffix(i), emitParametersCabi(ctor, ""),
					preamble,
					c.ClassName, forwarding,
				))

			} else {
				ret.WriteString(fmt.Sprintf(
					"%s* %s_new%s(%s) {\n"+
						"%s"+
						"\treturn new %s(%s);\n"+
						"}\n"+
						"\n",
					cClassName, cClassName, maybeSuffix(i), emitParametersCabi(ctor, ""),
					preamble,
					c.ClassName, forwarding,
				))

			}

		}

		for _, m := range c.Methods {
			// Need to take an extra 'self' parameter

			preamble, forwarding := emitParametersCABI2CppForwarding(m.Parameters, "\t")

			// callTarget is an rvalue representing the full C++ function call.
			callTarget := "self->"
			if m.IsStatic {
				callTarget = c.ClassName + "::"
			}

			callTarget += m.CppCallTarget() + "(" + forwarding + ")"

			if m.LinuxOnly {
				ret.WriteString(fmt.Sprintf(
					"%s %s_%s(%s) {\n"+
						"#ifdef Q_OS_LINUX\n"+
						"%s"+
						"%s"+
						"#else\n"+
						"\t%s _ret_invalidOS;\n"+
						"\treturn _ret_invalidOS;\n"+
						"#endif\n"+
						"}\n"+
						"\n",
					m.ReturnType.RenderTypeCabi(), cClassName, m.SafeMethodName(), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+cClassName+"*"),
					preamble,
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget),
					m.ReturnType.RenderTypeCabi(),
				))

			} else {

				ret.WriteString(fmt.Sprintf(
					"%s %s_%s(%s) {\n"+
						"%s"+
						"%s"+
						"}\n"+
						"\n",
					m.ReturnType.RenderTypeCabi(), cClassName, m.SafeMethodName(), emitParametersCabi(m, ifv(m.IsConst, "const ", "")+cClassName+"*"),
					preamble,
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget),
				))

			}

			if m.IsSignal {

				bindingFunc := "miqt_exec_callback_" + cabiClassName(c.ClassName) + "_" + m.SafeMethodName()

				// If there are hidden parameters, the type of the signal itself
				// needs to include them
				exactSignal := `static_cast<void (` + c.ClassName + `::*)(` + emitParameterTypesCpp(m, true) + `)` + ifv(m.IsConst, ` const`, ``) + `>(&` + c.ClassName + `::` + m.CppCallTarget() + `)`

				paramArgs := []string{"slot"}
				paramArgDefs := []string{"intptr_t cb"}

				var signalCode string

				for i, p := range m.Parameters {
					signalCode += emitAssignCppToCabi(fmt.Sprintf("\t\t%s sigval%d = ", p.RenderTypeCabi(), i+1), p, p.ParameterName)
					paramArgs = append(paramArgs, fmt.Sprintf("sigval%d", i+1))
					paramArgDefs = append(paramArgDefs, p.RenderTypeCabi()+" "+p.ParameterName)
				}

				signalCode += "\t\t" + bindingFunc + "(" + strings.Join(paramArgs, `, `) + ");\n"

				ret.WriteString(
					`void ` + cClassName + `_connect_` + m.SafeMethodName() + `(` + cClassName + `* self, intptr_t slot) {` + "\n" +
						"\t" + c.ClassName + `::connect(self, ` + exactSignal + `, self, [=](` + emitParametersCpp(m) + `) {` + "\n" +
						signalCode +
						"\t});\n" +
						"}\n" +
						"\n",
				)
			}

		}

		// Delete
		if c.CanDelete {
			ret.WriteString(fmt.Sprintf(
				"void %s_Delete(%s* self) {\n"+
					"\tdelete self;\n"+
					"}\n"+
					"\n",
				cClassName, cClassName,
			))
		}
	}

	return ret.String(), nil
}
