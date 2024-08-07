package main

import (
	"fmt"
	"strings"
)

func emitParametersCpp(params []nativeParameter, selfType string) string {
	tmp := make([]string, 0, len(params)+1)

	if selfType != "" {
		tmp = append(tmp, "self "+selfType)
	}

	for _, p := range params {
		tmp = append(tmp, p.name+" "+p.typ)
	}
	return strings.Join(tmp, ", ")
}

func emitParametersNames(params []nativeParameter, selfType string) string {
	tmp := make([]string, 0, len(params)+1)

	if selfType != "" {
		tmp = append(tmp, "self")
	}

	for _, p := range params {
		tmp = append(tmp, p.name)
	}
	return strings.Join(tmp, ", ")
}

func emitBindingHeader(src *parsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

	includeGuard := strings.ToUpper(strings.Replace(filename, `.`, `_`, -1)) + "_H"

	ret.WriteString(`#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

`)

	for _, c := range src.classes {
		ret.WriteString(`typedef void* P` + c.className + ";\n\n")

		for i, ctor := range c.ctors {
			ret.WriteString(fmt.Sprintf("P%s %s_new%s(%s);\n", c.className, maybeSuffix(i), emitParametersCpp(ctor.parameters, "")))
		}

		for _, m := range c.methods {
			ret.WriteString(fmt.Sprintf("%s %s_%s(%s);\n", m.returnType, c.className, m.SafeMethodName(), emitParametersCpp(m.parameters, "P"+c.className)))
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

func emitBindingCpp(src *parsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

	ret.WriteString(`#include "gen_` + filename + `"
#include "` + filename + `"

`)

	for _, c := range src.classes {

		for i, ctor := range c.ctors {
			ret.WriteString(fmt.Sprintf(
				"P%s %s_new%s(%s) {\n\treturn new %s(%s);\n}\n\n", c.className, maybeSuffix(i), emitParametersCpp(ctor.parameters, ""),
				c.className, emitParametersNames(ctor.parameters, ""),
			))
		}

		for _, m := range c.methods {
			// Need to take an extra 'self' parameter

			shouldReturn := "return "
			if m.returnType == "void" {
				shouldReturn = ""
			}

			ret.WriteString(fmt.Sprintf("%s %s_%s(%s) {\n\t%sstatic_cast<%s*>(self)->%s(%s);\n}\n\n", m.returnType, c.className, m.SafeMethodName(), emitParametersCpp(m.parameters, "P"+c.className),
				shouldReturn, c.className, m.methodName, emitParametersNames(m.parameters, c.className),
			))
		}
	}

	return ret.String(), nil
}
