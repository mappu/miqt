package main

import (
	"go/format"
	"log"
	"sort"
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

func emitParametersGo2CABIForwarding(m CppMethod) (preamble string, fowarding string) {
	tmp := make([]string, 0, len(m.Parameters))

	for _, p := range m.Parameters {
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

		} else if (p.Pointer || p.ByRef) && p.QtClassType() {
			// The C++ type is a pointer to Qt class
			// We want our functions to accept the Go wrapper type, and forward as cPointer()
			tmp = append(tmp, p.ParameterName+".cPointer()")

		} else {
			// Default
			tmp = append(tmp, p.ParameterName)
		}
	}

	if m.ReturnType.ParameterType == "QString" {
		tmp = append(tmp, "&_out, &_out_Strlen")
	}

	return preamble, strings.Join(tmp, ", ")
}

func emitGo(src *CppParsedHeader, headerName string) (string, error) {

	ret := strings.Builder{}
	ret.WriteString(`package miqt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_` + headerName + `"
#include <stdlib.h>

*/
import "C"

%%_IMPORTLIBS_%%
`)

	imports := map[string]struct{}{}

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
			preamble, forwarding := emitParametersGo2CABIForwarding(ctor)
			ret.WriteString(`
			// New` + c.ClassName + maybeSuffix(i) + ` constructs a new ` + c.ClassName + ` object.
			func New` + c.ClassName + maybeSuffix(i) + `(` + emitParametersGo(ctor.Parameters) + `) {
				` + preamble + ` ret := C.` + c.ClassName + `_new` + maybeSuffix(i) + `(` + forwarding + `)
				return &` + c.ClassName + `{h: ret}
			}
			
			`)
		}

		for _, m := range c.Methods {
			preamble, forwarding := emitParametersGo2CABIForwarding(m)

			shouldReturn := "return "
			afterword := ""
			returnTypeDecl := m.ReturnType.ParameterType // FIXME handle byRef/const here too

			if m.ReturnType.ParameterType == "void" {
				shouldReturn = ""
				returnTypeDecl = ""

			} else if m.ReturnType.ParameterType == "QString" {
				shouldReturn = ""
				returnTypeDecl = "string"

				preamble += "var _out *C.char = nil\n"
				preamble += "var _out_Strlen C.size_t = 0\n"
				afterword += "ret := C.GoStringN(_out, _out_Strlen)\n"
				afterword += "C.free(_out)\n"
				afterword += "return ret"
			}

			ret.WriteString(`
			func (this *` + c.ClassName + `) ` + m.SafeMethodName() + `(` + emitParametersGo(m.Parameters) + `) ` + returnTypeDecl + ` {
				` + preamble +
				shouldReturn + ` C.` + c.ClassName + `_` + m.SafeMethodName() + `(` + forwarding + `)
` + afterword + `}
			
			`)
		}

		ret.WriteString(`
		func (this *` + c.ClassName + `) Delete() {
			C.` + c.ClassName + `_Delete(this.h)
		}
		`)

	}

	goSrc := ret.String()

	// Fixup imports
	if len(imports) > 0 {
		allImports := make([]string, 0, len(imports))
		for k, _ := range imports {
			allImports = append(allImports, `"`+k+`"`)
		}
		sort.Strings(allImports)
		goSrc = strings.Replace(goSrc, `%%_IMPORTLIBS_%%`, "import (\n\t"+strings.Join(allImports, "\n\t")+"\n)", 1)

	} else {
		goSrc = strings.Replace(goSrc, `%%_IMPORTLIBS_%%`, "", 1)

	}

	// Run gofmt over the result
	formattedSrc, err := format.Source([]byte(goSrc))
	if err != nil {
		log.Printf("gofmt failure: %v", err)
		formattedSrc = []byte(ret.String())
	}

	return string(formattedSrc), nil
}
