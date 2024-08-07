package main

import (
	"go/format"
	"log"
	"strings"
)

func emitParametersGo(params []nativeParameter) string {
	tmp := make([]string, 0, len(params))
	for _, p := range params {
		tmp = append(tmp, p.typ+" "+p.name)
	}
	return strings.Join(tmp, ", ")
}

func emitGo(src *parsedHeader) (string, error) {

	ret := strings.Builder{}
	ret.WriteString(`package miqt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "binding.h"

*/
import "C"

`)

	for _, c := range src.classes {

		ret.WriteString(`
		type ` + c.className + ` struct {
			h C.P` + c.className + `
		}
		
		func (this *` + c.className + `) cPointer() C.P` + c.className + ` {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		`)

		for i, ctor := range c.ctors {
			ret.WriteString(`
			// New` + c.className + maybeSuffix(i) + ` constructs a new ` + c.className + ` object.
			func New` + c.className + maybeSuffix(i) + `(` + emitParametersGo(ctor.parameters) + `) {
				ret := C.` + c.className + `_new` + maybeSuffix(i) + `(` + emitParametersNames(ctor.parameters, "") + `)
				return &` + c.className + `{h: ret}
			}
			
			`)
		}

		for _, m := range c.methods {
			// TODO for any known pointer type, call its cPointer() method instead of passing it directly

			shouldReturn := "return "
			returnTypeDecl := m.returnType
			if returnTypeDecl == "void" {
				shouldReturn = ""
				returnTypeDecl = ""
			}

			ret.WriteString(`
			func (this *` + c.className + `) ` + m.methodName + `(` + emitParametersGo(m.parameters) + `) ` + returnTypeDecl + ` {
				` + shouldReturn + ` C.` + c.className + `_` + m.SafeMethodName() + `(` + emitParametersNames(m.parameters, c.className) + `)
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
