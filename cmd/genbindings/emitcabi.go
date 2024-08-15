package main

import (
	"fmt"
	"sort"
	"strings"
)

func (p CppParameter) RenderTypeCpp() string {
	ret := p.ParameterType
	switch p.ParameterType {
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
	}

	if p.Pointer || p.ByRef {
		ret += "*"
	}

	return ret // ignore const
}

func emitReturnTypeCabi(p CppParameter) string {
	if p.ParameterType == "QString" {
		return "void" // Will be handled separately

	} else if _, ok := p.QListOf(); ok {
		return "void" // Will be handled separately

	} else if (p.Pointer || p.ByRef) && p.QtClassType() {
		return p.ParameterType + "*" // CABI type

	} else if p.QtClassType() && !p.Pointer {
		// Even if C++ returns by value, CABI is returning a heap copy (new'd, not malloc'd)
		return p.ParameterType + "*" // CABI type
		// return "void" // Handled separately with an _out pointer

	} else {
		return p.RenderTypeCpp()
	}
}

func emitParametersCabi(m CppMethod, selfType string) string {
	tmp := make([]string, 0, len(m.Parameters)+1)

	if selfType != "" {
		tmp = append(tmp, selfType+" self")
	}

	for _, p := range m.Parameters {
		if p.ParameterType == "QString" {
			// The Go code has called this with two arguments: char* and len
			// Declare that we take two parameters
			tmp = append(tmp, "const char* "+p.ParameterName+", size_t "+p.ParameterName+"_Strlen")

		} else if t, ok := p.QListOf(); ok {

			if t.ParameterType == "QString" {
				// Combov
				tmp = append(tmp, "char** "+p.ParameterName+", int64_t* "+p.ParameterName+"_Lengths, size_t "+p.ParameterName+"_len")

			} else {
				// The Go code has called this with two arguments: T* and len
				// Declare that we take two parameters
				// TODO support QList<int>
				tmp = append(tmp, t.ParameterType+"* "+p.ParameterName+", size_t "+p.ParameterName+"_len")
			}

		} else if (p.ByRef || p.Pointer) && p.QtClassType() {
			// Pointer to Qt type
			// Replace with taking our PQ typedef by value
			tmp = append(tmp, p.ParameterType+"* "+p.ParameterName)

		} else if p.QtClassType() {
			// Qt type passed by value
			// The CABI will unconditionally take these by pointer and dereference them
			// when passing to C++
			tmp = append(tmp, p.ParameterType+"* "+p.ParameterName)

		} else {
			// RenderTypeCpp renders both pointer+reference as pointers
			tmp = append(tmp, p.RenderTypeCpp()+" "+p.ParameterName)
		}
	}

	// If the return type is QString, we need to handle returns via extra CABI
	// parameters
	// Qt C++: memory is in QString RAII
	// CABI: memory is moved into C.malloc/C.free
	// Go: converted to native Go string
	if m.ReturnType.ParameterType == "QString" {
		tmp = append(tmp, "char** _out, size_t* _out_Strlen")

	} else if t, ok := m.ReturnType.QListOf(); ok {
		tmp = append(tmp, t.ParameterType+"** _out, size_t* _out_len")

	}

	return strings.Join(tmp, ", ")
}

func emitParametersCABI2CppForwarding(params []CppParameter) (preamble string, forwarding string) {
	tmp := make([]string, 0, len(params)+1)

	for _, p := range params {
		if p.ParameterType == "QString" {
			// The CABI has accepted two parameters - need to convert to one real QString
			// Create it on the stack
			preamble += "\tQString " + p.ParameterName + "_QString = QString::fromUtf8(" + p.ParameterName + ", " + p.ParameterName + "_Strlen);\n"
			tmp = append(tmp, p.ParameterName+"_QString")

		} else if listType, ok := p.QListOf(); ok {

			if listType.ParameterType == "QString" {

				// Combo (3 parameters)
				preamble += "\t" + p.ParameterType + " " + p.ParameterName + "_QList;\n"
				preamble += "\t" + p.ParameterName + "_QList.reserve(" + p.ParameterName + "_len);\n"
				preamble += "\tfor(size_t i = 0; i < " + p.ParameterName + "_len; ++i) {\n"
				preamble += "\t\t" + p.ParameterName + "_QList.push_back(QString::fromUtf8(*" + p.ParameterName + ", *" + p.ParameterName + "_Lengths));\n"
				preamble += "\t\t" + p.ParameterName + "++;\n"
				preamble += "\t\t" + p.ParameterName + "_Lengths++;\n"
				preamble += "\t}\n"
				tmp = append(tmp, p.ParameterName+"_QList")

			} else {

				// The CABI has accepted two parameters - need to convert to one real QList<>
				// Create it on the stack
				preamble += "\t" + p.ParameterType + " " + p.ParameterName + "_QList;\n"
				preamble += "\t" + p.ParameterName + "_QList.reserve(" + p.ParameterName + "_len);\n"
				preamble += "\tfor(size_t i = 0; i < " + p.ParameterName + "_len; ++i) {\n"
				preamble += "\t\t" + p.ParameterName + "_QList.push_back(" + p.ParameterName + "++);\n"
				preamble += "\t}\n"
				tmp = append(tmp, p.ParameterName+"_QList")
			}

		} else if p.IntType() {
			// Use the raw ParameterType to select an explicit integer overload
			// Don't use RenderTypeCpp() since it canonicalizes some int types for CABI
			castSrc := p.ParameterName
			castType := p.ParameterType
			if p.Pointer {
				castType += "*"
			}
			if p.ByRef { // e.g. QDataStream::operator>>() overloads
				castSrc = "*" + castSrc
				castType += "&" // believe it or not, this is legal

				if p.ParameterType == "qint64" || p.ParameterType == "quint64" {
					// QDataStream::operator>>()
					// CABI has these as int64_t* (long int) which fails a static_cast to qint64& (long long int&)
					// Hack a hard C-style cast
					castSrc = "(" + castType + ")(" + castSrc + ")"
				}
			}
			tmp = append(tmp, "static_cast<"+castType+">("+castSrc+")")

		} else if p.ByRef {
			// We changed RenderTypeCpp() to render this as a pointer
			// Need to dereference so we can pass as reference to the actual Qt C++ function
			//tmp = append(tmp, "*"+p.ParameterName)
			tmp = append(tmp, "*"+p.ParameterName)

		} else if p.QtClassType() && !p.Pointer {
			// CABI takes all Qt types by pointer, even if C++ wants them by value
			// Dereference the passed-in pointer
			tmp = append(tmp, "*"+p.ParameterName)

			// } else if p.QtClassType() && p.Pointer {
			// We need this static_cast<> anyway to convert from PQt (void*) to
			// the real Qt type
			// tmp = append(tmp, "static_cast<"+p.ParameterType+"*>("+p.ParameterName+")")

		} else {
			tmp = append(tmp, p.ParameterName)
		}
	}

	return preamble, strings.Join(tmp, ", ")
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
				if t, ok := p.QListOf(); ok && t.QtClassType() {
					foundTypes["QList"] = struct{}{}
					foundTypes[t.ParameterType] = struct{}{}
				}
			}
		}
		for _, m := range c.Methods {
			for _, p := range m.Parameters {
				if p.QtClassType() {
					foundTypes[p.ParameterType] = struct{}{}
				}
				if t, ok := p.QListOf(); ok && t.QtClassType() {
					foundTypes["QList"] = struct{}{}
					foundTypes[t.ParameterType] = struct{}{}
				}
			}
			if m.ReturnType.QtClassType() {
				foundTypes[m.ReturnType.ParameterType] = struct{}{}
			}
			if t, ok := m.ReturnType.QListOf(); ok && t.QtClassType() {
				foundTypes["QList"] = struct{}{}
				foundTypes[t.ParameterType] = struct{}{}
			}
		}
	}

	foundTypesList := make([]string, 0, len(foundTypes))
	for ft := range foundTypes {
		if strings.HasPrefix(ft, "QList<") {
			continue
		}

		foundTypesList = append(foundTypesList, ft)
	}
	sort.Strings(foundTypesList)

	return foundTypesList
}

func emitBindingHeader(src *CppParsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

	includeGuard := "GEN_" + strings.ToUpper(strings.Replace(filename, `.`, `_`, -1))

	ret.WriteString(`#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

`)

	foundTypesList := getReferencedTypes(src)

	ret.WriteString("#ifdef __cplusplus\n")

	for _, ft := range foundTypesList {
		if ft == "QList" {
			continue
		}
		ret.WriteString(`class ` + ft + ";\n")
	}

	ret.WriteString("#else\n")

	for _, ft := range foundTypesList {
		if ft == "QList" {
			continue
		}
		ret.WriteString(`typedef struct ` + ft + " " + ft + ";\n")
	}

	ret.WriteString("#endif\n")

	ret.WriteString("\n")

	for _, c := range src.Classes {

		for i, ctor := range c.Ctors {
			ret.WriteString(fmt.Sprintf("%s %s_new%s(%s);\n", c.ClassName+"*", c.ClassName, maybeSuffix(i), emitParametersCabi(ctor, "")))
		}

		for _, m := range c.Methods {
			ret.WriteString(fmt.Sprintf("%s %s_%s(%s);\n", emitReturnTypeCabi(m.ReturnType), c.ClassName, m.SafeMethodName(), emitParametersCabi(m, c.ClassName+"*")))
		}

		// delete
		ret.WriteString(fmt.Sprintf("void %s_Delete(%s* self);\n", c.ClassName, c.ClassName))

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

	ret.WriteString(`#include "gen_` + filename + `"
#include "` + filename + `"

`)

	for _, ref := range getReferencedTypes(src) {
		if ref[0] != 'Q' {
			continue
		}
		ret.WriteString(`#include <` + ref + ">\n")
	}

	ret.WriteString("\n")

	for _, c := range src.Classes {

		for i, ctor := range c.Ctors {
			preamble, forwarding := emitParametersCABI2CppForwarding(ctor.Parameters)
			ret.WriteString(fmt.Sprintf(
				"%s* %s_new%s(%s) {\n"+
					"%s"+
					"\treturn new %s(%s);\n"+
					"}\n"+
					"\n",
				c.ClassName, c.ClassName, maybeSuffix(i), emitParametersCabi(ctor, ""),
				preamble,
				c.ClassName, forwarding,
			))
		}

		for _, m := range c.Methods {
			// Need to take an extra 'self' parameter

			shouldReturn := "return "
			afterCall := ""

			if m.ReturnType.ParameterType == "void" && !m.ReturnType.Pointer {
				shouldReturn = ""

			} else if m.ReturnType.ParameterType == "QString" {
				shouldReturn = "QString ret = "
				afterCall = "\t// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory\n"
				afterCall += "\tQByteArray b = ret.toUtf8();\n"
				afterCall += "\t*_out = static_cast<char*>(malloc(b.length()));\n"
				afterCall += "\tmemcpy(*_out, b.data(), b.length());\n"
				afterCall += "\t*_out_Strlen = b.length();\n"

			} else if t, ok := m.ReturnType.QListOf(); ok {

				if !t.QtClassType() || (t.QtClassType() && t.Pointer) { // QList<int>, QList<QFoo*>

					shouldReturn = m.ReturnType.ParameterType + " ret = "
					afterCall += "\t// Convert QList<> from C++ memory to manually-managed C memory\n"
					afterCall += "\t*_out = static_cast<" + t.RenderTypeCpp() + ">(malloc(sizeof(" + t.RenderTypeCpp() + ") * ret.length()));\n"
					afterCall += "\tfor (int i = 0, e = ret.length(); i < e; ++i) {\n"
					afterCall += "\t\t_out[i] = ret[i];\n"
					afterCall += "\t}\n"
					afterCall += "\t*_out_len = ret.length();\n"

				} else { // QList<QFoo>

					shouldReturn = m.ReturnType.ParameterType + " ret = "
					afterCall += "\t// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers\n"
					afterCall += "\t*_out = static_cast<" + t.RenderTypeCpp() + "*>(malloc(sizeof(" + t.RenderTypeCpp() + "*) * ret.length()));\n"
					afterCall += "\tfor (int i = 0, e = ret.length(); i < e; ++i) {\n"
					afterCall += "\t\t_out[i] = new " + t.ParameterType + "(ret[i]);\n"
					afterCall += "\t}\n"
					afterCall += "\t*_out_len = ret.length();\n"

				}

			} else if m.ReturnType.QtClassType() && !m.ReturnType.Pointer {
				shouldReturn = m.ReturnType.ParameterType + " ret = "
				// afterCall = "\t// Copy-construct value returned type into Go-allocated POCO\n"
				// afterCall += "\t_*out = ret;\n"
				afterCall = "\t// Copy-construct value returned type into heap-allocated copy\n"
				afterCall += "\treturn static_cast<" + m.ReturnType.ParameterType + "*>(new " + m.ReturnType.ParameterType + "(ret));\n"

			} else if m.ReturnType.Const {
				shouldReturn += "(" + emitReturnTypeCabi(m.ReturnType) + ") "
			}

			preamble, forwarding := emitParametersCABI2CppForwarding(m.Parameters)

			nativeMethodName := m.MethodName
			if m.OverrideMethodName != "" {
				nativeMethodName = m.OverrideMethodName
			}

			ret.WriteString(fmt.Sprintf(
				"%s %s_%s(%s) {\n"+
					"%s"+
					"\t%sself->%s(%s);\n"+
					"%s"+
					"}\n"+
					"\n",
				emitReturnTypeCabi(m.ReturnType), c.ClassName, m.SafeMethodName(), emitParametersCabi(m, c.ClassName+"*"),
				preamble,
				shouldReturn, nativeMethodName, forwarding,
				afterCall,
			))
		}

		// Delete
		ret.WriteString(fmt.Sprintf(
			"void %s_Delete(%s* self) {\n"+
				"\tdelete self;\n"+
				"}\n"+
				"\n",
			c.ClassName, c.ClassName,
		))
	}

	return ret.String(), nil
}
