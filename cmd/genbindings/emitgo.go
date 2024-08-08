package main

import (
	"go/format"
	"log"
	"strings"
)

func (p CppParameter) RenderTypeGo() string {
	if p.Pointer && p.ParameterType == "char" {
		return "string"
	}
	if p.ParameterType == "QString" {
		return "string"
	}

	ret := ""
	if p.ByRef || p.Pointer {
		ret += "*"
	}
	ret += p.ParameterType
	return ret // ignore const
}

func emitParametersGo(params []CppParameter) string {
	tmp := make([]string, 0, len(params))
	for _, p := range params {
		tmp = append(tmp, p.ParameterName+" "+p.RenderTypeGo())
	}
	return strings.Join(tmp, ", ")
}

func emitParametersGo2CABIForwarding(params []CppParameter) (preamble string, fowarding string) {
	tmp := make([]string, 0, len(params))
	for _, p := range params {
		if p.ParameterType == "QString" {
			// Go: convert string -> char* and len
			// CABI: convert char* and len -> real QString
			preamble += p.ParameterName + "_Cstring := C.CString(" + p.ParameterName + ")\n"
			preamble += "defer C.free(" + p.ParameterName + "_Cstring)\n"
			tmp = append(tmp, p.ParameterName+"_Cstring, len("+p.ParameterName+")")

			// TODO handle the return type as a pointer parameter

		} else if p.Pointer && p.ParameterType == "char" {
			// Single char* argument
			preamble += p.ParameterName + "_Cstring := C.CString(" + p.ParameterName + ")\n"
			preamble += "defer C.free(" + p.ParameterName + "_Cstring)\n"
			tmp = append(tmp, p.ParameterName+"_Cstring")

		} else if (p.Pointer || p.ByRef) && p.ParameterType[0] == 'Q' {
			// The C++ type is a pointer to Qt class
			// We want our functions to accept the Go wrapper type, and forward as cPointer()
			tmp = append(tmp, p.ParameterName+".cPointer()")

		} else {
			// Default
			tmp = append(tmp, p.ParameterName)
		}
	}

	return preamble, strings.Join(tmp, ", ")
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
			preamble, forwarding := emitParametersGo2CABIForwarding(ctor.Parameters)
			ret.WriteString(`
			// New` + c.ClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + c.ClassName + maybeSuffix(i) + `(` + emitParametersGo(ctor.Parameters) + `) {
				` + preamble + ` ret := C.` + c.ClassName + `_new` + maybeSuffix(i) + `(` + forwarding + `)
				return &` + c.ClassName + `{h: ret}
			}
			
			`)
		}

		for _, m := range c.Methods {
			// TODO for any known pointer type, call its cPointer() method instead of passing it directly

			shouldReturn := "return "
			returnTypeDecl := m.ReturnType.ParameterType // FIXME handle byRef/const here too
			if returnTypeDecl == "void" {
				shouldReturn = ""
				returnTypeDecl = ""
			}

			preamble, forwarding := emitParametersGo2CABIForwarding(m.Parameters)

			ret.WriteString(`
			func (this *` + c.ClassName + `) ` + m.SafeMethodName() + `(` + emitParametersGo(m.Parameters) + `) ` + returnTypeDecl + ` {
				` + preamble + shouldReturn + ` C.` + c.ClassName + `_` + m.SafeMethodName() + `(` + forwarding + `)
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
