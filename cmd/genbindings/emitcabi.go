package main

import (
	"fmt"
	"strings"
)

func emitParametersCpp(params []CppParameter, selfType string) string {
	tmp := make([]string, 0, len(params)+1)

	if selfType != "" {
		tmp = append(tmp, "self "+selfType)
	}

	for _, p := range params {
		tmp = append(tmp, p.RenderTypeCpp()+" "+p.ParameterName)
	}
	return strings.Join(tmp, ", ")
}

func emitParametersNames(params []CppParameter, selfType string) string {
	tmp := make([]string, 0, len(params)+1)

	if selfType != "" {
		tmp = append(tmp, "self")
	}

	for _, p := range params {
		tmp = append(tmp, p.ParameterName)
	}
	return strings.Join(tmp, ", ")
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
			ret.WriteString(fmt.Sprintf(
				"P%s %s_new%s(%s) {\n\treturn new %s(%s);\n}\n\n", c.ClassName, maybeSuffix(i), emitParametersCpp(ctor.Parameters, ""),
				c.ClassName, emitParametersNames(ctor.Parameters, ""),
			))
		}

		for _, m := range c.Methods {
			// Need to take an extra 'self' parameter

			shouldReturn := "return "
			if m.ReturnType.ParameterType == "void" {
				shouldReturn = ""
			}

			ret.WriteString(fmt.Sprintf("%s %s_%s(%s) {\n\t%sstatic_cast<%s*>(self)->%s(%s);\n}\n\n", m.ReturnType.RenderTypeCpp(), c.ClassName, m.SafeMethodName(), emitParametersCpp(m.Parameters, "P"+c.ClassName),
				shouldReturn, c.ClassName, m.MethodName, emitParametersNames(m.Parameters, c.ClassName),
			))
		}
	}

	return ret.String(), nil
}
