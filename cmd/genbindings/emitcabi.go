package main

import (
	"fmt"
	"sort"
	"strings"
)

func (p CppParameter) RenderTypeCpp() string {
	ret := p.ParameterType
	if p.Pointer || p.ByRef {
		ret += "*"
	}
	return ret // ignore const
}

func emitReturnTypeCabi(p CppParameter) string {
	if p.ParameterType == "QString" {
		return "void" // Will be handled separately

	} else if (p.Pointer || p.ByRef) && p.QtClassType() {
		return "P" + p.ParameterType // CABI type

	} else if p.QtClassType() && !p.Pointer {
		// Even if C++ returns by value, CABI is returning a heap copy (new'd, not malloc'd)
		return "P" + p.ParameterType // CABI type
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

		} else if (p.ByRef || p.Pointer) && p.QtClassType() {
			// Pointer to Qt type
			// Replace with taking our PQ typedef by value
			tmp = append(tmp, "P"+p.ParameterType+" "+p.ParameterName)

		} else if p.QtClassType() {
			// Qt type passed by value
			// The CABI will unconditionally take these by pointer and dereference them
			// when passing to C++
			tmp = append(tmp, "P"+p.ParameterType+" "+p.ParameterName)

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
		/*
			} else if m.ReturnType.QtClassType() && !m.ReturnType.Pointer {
				tmp = append(tmp, "P"+m.ReturnType.ParameterType+" _out")
		*/
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

		} else if p.ByRef {
			// We changed RenderTypeCpp() to render this as a pointer
			// Need to dereference so we can pass as reference to the actual Qt C++ function
			//tmp = append(tmp, "*"+p.ParameterName)
			tmp = append(tmp, "*static_cast<"+p.ParameterType+"*>("+p.ParameterName+")")

		} else if p.QtClassType() && !p.Pointer {
			// CABI takes all Qt types by pointer, even if C++ wants them by value
			// Dereference the passed-in pointer
			tmp = append(tmp, "*static_cast<"+p.ParameterType+"*>("+p.ParameterName+")")

		} else {
			tmp = append(tmp, p.ParameterName)
		}
	}

	return preamble, strings.Join(tmp, ", ")
}

func emitBindingHeader(src *CppParsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

	includeGuard := "GEN_" + strings.ToUpper(strings.Replace(filename, `.`, `_`, -1))

	ret.WriteString(`#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

`)

	// Find all referenced Qt types in this file, and generate PVoid typedefs
	// for them
	foundTypes := map[string]struct{}{}
	for _, c := range src.Classes {
		foundTypes[c.ClassName] = struct{}{}
		for _, ctor := range c.Ctors {
			for _, p := range ctor.Parameters {
				if p.QtClassType() {
					foundTypes[p.ParameterType] = struct{}{}
				}
			}
		}
		for _, m := range c.Methods {
			for _, p := range m.Parameters {
				if p.QtClassType() {
					foundTypes[p.ParameterType] = struct{}{}
				}
			}
			if m.ReturnType.QtClassType() {
				foundTypes[m.ReturnType.ParameterType] = struct{}{}
			}
		}
	}
	foundTypesList := make([]string, 0, len(foundTypes))
	for ft := range foundTypes {
		foundTypesList = append(foundTypesList, ft)
	}
	sort.Strings(foundTypesList)
	for _, ft := range foundTypesList {
		ret.WriteString(`typedef void* P` + ft + ";\n")
	}

	ret.WriteString("\n")

	for _, c := range src.Classes {

		for i, ctor := range c.Ctors {
			ret.WriteString(fmt.Sprintf("P%s %s_new%s(%s);\n", c.ClassName, maybeSuffix(i), emitParametersCabi(ctor, "")))
		}

		for _, m := range c.Methods {
			ret.WriteString(fmt.Sprintf("%s %s_%s(%s);\n", emitReturnTypeCabi(m.ReturnType), c.ClassName, m.SafeMethodName(), emitParametersCabi(m, "P"+c.ClassName)))
		}

		// delete
		ret.WriteString(fmt.Sprintf("void %s_Delete(P%s self);\n", c.ClassName, c.ClassName))

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

	for _, c := range src.Classes {

		for i, ctor := range c.Ctors {
			preamble, forwarding := emitParametersCABI2CppForwarding(ctor.Parameters)
			ret.WriteString(fmt.Sprintf(
				"P%s %s_new%s(%s) {\n"+
					"%s"+
					"\treturn new %s(%s);\n"+
					"}\n"+
					"\n",
				c.ClassName, maybeSuffix(i), emitParametersCabi(ctor, ""),
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

			} else if m.ReturnType.QtClassType() && !m.ReturnType.Pointer {
				shouldReturn = m.ReturnType.ParameterType + " ret = "
				// afterCall = "\t// Copy-construct value returned type into Go-allocated POCO\n"
				// afterCall += "\t_*out = ret;\n"
				afterCall = "\t// Copy-construct value returned type into heap-allocated copy\n"
				afterCall += "\treturn static_cast<P" + m.ReturnType.ParameterType + ">(new " + m.ReturnType.ParameterType + "(ret));\n"

			}

			preamble, forwarding := emitParametersCABI2CppForwarding(m.Parameters)

			ret.WriteString(fmt.Sprintf(
				"%s %s_%s(%s) {\n"+
					"%s"+
					"\t%sstatic_cast<%s*>(self)->%s(%s);\n"+
					"%s"+
					"}\n"+
					"\n",
				emitReturnTypeCabi(m.ReturnType), c.ClassName, m.SafeMethodName(), emitParametersCabi(m, "P"+c.ClassName),
				preamble,
				shouldReturn, c.ClassName, m.MethodName, forwarding,
				afterCall,
			))
		}

		// Delete
		ret.WriteString(fmt.Sprintf(
			"void %s_Delete(P%s self) {\n"+
				"\tdelete static_cast<%s*>(self);\n"+
				"}\n"+
				"\n",
			c.ClassName, c.ClassName,
			c.ClassName,
		))
	}

	return ret.String(), nil
}
