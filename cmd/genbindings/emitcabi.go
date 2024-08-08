package main

import (
	"fmt"
	"strings"
)

func (p CppParameter) RenderTypeCpp() string {
	ret := p.ParameterType
	if p.Pointer || p.ByRef {
		ret += "*"
	}
	return ret // ignore const
}

func emitParametersCpp(params []CppParameter, selfType string) string {
	tmp := make([]string, 0, len(params)+1)

	if selfType != "" {
		tmp = append(tmp, "self "+selfType)
	}

	for _, p := range params {
		if p.ParameterType == "QString" {
			// The Go code has called this with two arguments: char* and len
			// Declare that we take two parameters
			tmp = append(tmp, "const char* "+p.ParameterName+", size_t "+p.ParameterName+"_Strlen")

		} else if (p.ByRef || p.Pointer) && p.ParameterType[0] == 'Q' {
			// Pointer to Qt type
			// Replace with taking our PQ typedef by value
			tmp = append(tmp, "P"+p.ParameterType+" "+p.ParameterName)
		} else {
			// RenderTypeCpp renders both pointer+reference as pointers
			tmp = append(tmp, p.RenderTypeCpp()+" "+p.ParameterName)
		}
	}
	return strings.Join(tmp, ", ")
}

func emitParametersCABI2CppForwarding(params []CppParameter, selfType string) (preamble string, forwarding string) {
	tmp := make([]string, 0, len(params)+1)

	if selfType != "" {
		tmp = append(tmp, "self")
	}

	for _, p := range params {
		if p.ParameterType == "QString" {
			// The CABI has accepted two parameters - need to convert to one real QString
			// Create it on the stack
			preamble += "\tQString " + p.ParameterName + "_QString(" + p.ParameterName + ", " + p.ParameterName + "_Strlen);\n"
			tmp = append(tmp, p.ParameterName+"_QString")

		} else if p.ByRef {
			// We changed RenderTypeCpp() to render this as a pointer
			// Need to dereference so we can pass as reference to the actual Qt C++ function
			tmp = append(tmp, "*"+p.ParameterName)
		} else {
			tmp = append(tmp, p.ParameterName)
		}
	}

	return preamble, strings.Join(tmp, ", ")
}

func emitBindingHeader(src *CppParsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

	includeGuard := strings.ToUpper(strings.Replace(filename, `.`, `_`, -1)) + "_H"

	ret.WriteString(`#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

`)

	for _, c := range src.Classes {
		ret.WriteString(`typedef void* P` + c.ClassName + ";\n\n")

		for i, ctor := range c.Ctors {
			ret.WriteString(fmt.Sprintf("P%s %s_new%s(%s);\n", c.ClassName, maybeSuffix(i), emitParametersCpp(ctor.Parameters, "")))
		}

		for _, m := range c.Methods {
			ret.WriteString(fmt.Sprintf("%s %s_%s(%s);\n", m.ReturnType.RenderTypeCpp(), c.ClassName, m.SafeMethodName(), emitParametersCpp(m.Parameters, "P"+c.ClassName)))
		}

		ret.WriteString("\n")
	}

	ret.WriteString(`

#ifdef __cplusplus
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
			preamble, forwarding := emitParametersCABI2CppForwarding(ctor.Parameters, "")
			ret.WriteString(fmt.Sprintf(
				"P%s %s_new%s(%s) {\n"+
					"%s"+
					"\treturn new %s(%s);\n"+
					"}\n"+
					"\n",
				c.ClassName, maybeSuffix(i), emitParametersCpp(ctor.Parameters, ""),
				preamble,
				c.ClassName, forwarding,
			))
		}

		for _, m := range c.Methods {
			// Need to take an extra 'self' parameter

			shouldReturn := "return "
			if m.ReturnType.ParameterType == "void" {
				shouldReturn = ""
			}

			preamble, forwarding := emitParametersCABI2CppForwarding(m.Parameters, c.ClassName)

			ret.WriteString(fmt.Sprintf(
				"%s %s_%s(%s) {\n"+
					"%s"+
					"\t%sstatic_cast<%s*>(self)->%s(%s);\n"+
					"}\n"+
					"\n",
				m.ReturnType.RenderTypeCpp(), c.ClassName, m.SafeMethodName(), emitParametersCpp(m.Parameters, "P"+c.ClassName),
				preamble,
				shouldReturn, c.ClassName, m.MethodName, forwarding,
			))
		}
	}

	return ret.String(), nil
}
