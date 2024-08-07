package main

import (
	"go/format"
	"log"
	"strings"
)

func emitParametersGo(params []CppParameter) string {
	tmp := make([]string, 0, len(params))
	for _, p := range params {
		tmp = append(tmp, p.ParameterType+" "+p.ParameterName)
	}
	return strings.Join(tmp, ", ")
}

func emitGo(src *CppParsedHeader) (string, error) {

	ret := strings.Builder{}
	ret.WriteString(`package miqt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "binding.h"

*/
import "C"

`)

	for _, c := range src.Classes {

		ret.WriteString(`
		type ` + c.ClassName + ` struct {
			h C.P` + c.ClassName + `
		}
		
		func (this *` + c.ClassName + `) cPointer() C.P` + c.ClassName + ` {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		`)

		for i, ctor := range c.Ctors {
			ret.WriteString(`
			// New` + c.ClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + c.ClassName + maybeSuffix(i) + `(` + emitParametersGo(ctor.Parameters) + `) {
				ret := C.` + c.ClassName + `_new` + maybeSuffix(i) + `(` + emitParametersNames(ctor.Parameters, "") + `)
				return &` + c.ClassName + `{h: ret}
			}
			
			`)
		}

		for _, m := range c.Methods {
			// TODO for any known pointer type, call its cPointer() method instead of passing it directly

			shouldReturn := "return "
			returnTypeDecl := m.ReturnType
			if returnTypeDecl == "void" {
				shouldReturn = ""
				returnTypeDecl = ""
			}

			ret.WriteString(`
			func (this *` + c.ClassName + `) ` + m.MethodName + `(` + emitParametersGo(m.Parameters) + `) ` + returnTypeDecl + ` {
				` + shouldReturn + ` C.` + c.ClassName + `_` + m.SafeMethodName() + `(` + emitParametersNames(m.Parameters, c.ClassName) + `)
			}
			
			`)
		}

	}

	// Run gofmt over the result
	formattedSrc, err := format.Source([]byte(ret.String()))
	if err != nil {
		log.Printf("gofmt failure: %v", err)
		formattedSrc = []byte(ret.String())
	}

	return string(formattedSrc), nil
}
