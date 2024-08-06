package main

import (
	"fmt"
	"strings"
)

func emitParametersCpp(params []nativeParameter) string {
	tmp := make([]string, 0, len(params))
	for _, p := range params {
		tmp = append(tmp, p.name+" "+p.typ)
	}
	return strings.Join(tmp, ", ")
}

func emitParametersGo(params []nativeParameter) string {
	tmp := make([]string, 0, len(params))
	for _, p := range params {
		tmp = append(tmp, p.typ+" "+p.name)
	}
	return strings.Join(tmp, ", ")
}

func emitBindingHeader(src *parsedHeader, filename string) (string, error) {
	ret := strings.Builder{}

	includeGuard := strings.ToUpper(strings.Replace(filename, `.`, `_`, -1)) + "_H"

	ret.WriteString(`#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#ifdef __cplusplus
extern "C" {
#endif

`)

	for _, c := range src.classes {
		ret.WriteString(`typedef void* P` + c.className + ";\n\n")

		for i, ctor := range c.ctors {
			suffix := ""
			if i > 0 {
				suffix = fmt.Sprintf("%d", i+1)
			}
			// TODO fixup parameters
			ret.WriteString(fmt.Sprintf("P%s %s_new%s(%s);\n", c.className, suffix, emitParametersCpp(ctor.parameters)))
		}

		for _, m := range c.methods {
			ret.WriteString(fmt.Sprintf("%s %s_%s(%s);\n", m.returnType, c.className, m.methodName, emitParametersCpp(m.parameters)))
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

func emitBindingCpp(src *parsedHeader) (string, error) {
	ret := strings.Builder{}
	return ret.String(), nil
}

func emitGo(src *parsedHeader) (string, error) {

	ret := strings.Builder{}
	ret.WriteString("package miqt\n\n")

	// CGO block

	// Pure-Go block
	for _, c := range src.classes {
		_ = c
	}

	return ret.String(), nil
}
