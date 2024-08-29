package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcommandlineparser.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCommandLineParser struct {
	h *C.QCommandLineParser
}

func (this *QCommandLineParser) cPointer() *C.QCommandLineParser {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCommandLineParser(h *C.QCommandLineParser) *QCommandLineParser {
	return &QCommandLineParser{h: h}
}

func newQCommandLineParser_U(h unsafe.Pointer) *QCommandLineParser {
	return newQCommandLineParser((*C.QCommandLineParser)(h))
}

// NewQCommandLineParser constructs a new QCommandLineParser object.
func NewQCommandLineParser() *QCommandLineParser {
	ret := C.QCommandLineParser_new()
	return newQCommandLineParser(ret)
}

func QCommandLineParser_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_Tr(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLineParser_TrUtf8(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_TrUtf8(sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) SetSingleDashWordOptionMode(parsingMode uintptr) {
	C.QCommandLineParser_SetSingleDashWordOptionMode(this.h, (C.uintptr_t)(parsingMode))
}

func (this *QCommandLineParser) SetOptionsAfterPositionalArgumentsMode(mode uintptr) {
	C.QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(this.h, (C.uintptr_t)(mode))
}

func (this *QCommandLineParser) AddOption(commandLineOption *QCommandLineOption) bool {
	ret := C.QCommandLineParser_AddOption(this.h, commandLineOption.cPointer())
	return (bool)(ret)
}

func (this *QCommandLineParser) AddOptions(options []QCommandLineOption) bool {
	// For the C ABI, malloc a C array of raw pointers
	options_CArray := (*[0xffff]*C.QCommandLineOption)(C.malloc(C.ulong(8 * len(options))))
	defer C.free(unsafe.Pointer(options_CArray))
	for i := range options {
		options_CArray[i] = options[i].cPointer()
	}
	ret := C.QCommandLineParser_AddOptions(this.h, &options_CArray[0], C.ulong(len(options)))
	return (bool)(ret)
}

func (this *QCommandLineParser) AddVersionOption() *QCommandLineOption {
	ret := C.QCommandLineParser_AddVersionOption(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCommandLineOption(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCommandLineOption) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCommandLineParser) AddHelpOption() *QCommandLineOption {
	ret := C.QCommandLineParser_AddHelpOption(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCommandLineOption(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCommandLineOption) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCommandLineParser) SetApplicationDescription(description string) {
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	C.QCommandLineParser_SetApplicationDescription(this.h, description_Cstring, C.ulong(len(description)))
}

func (this *QCommandLineParser) ApplicationDescription() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_ApplicationDescription(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) AddPositionalArgument(name string, description string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	C.QCommandLineParser_AddPositionalArgument(this.h, name_Cstring, C.ulong(len(name)), description_Cstring, C.ulong(len(description)))
}

func (this *QCommandLineParser) ClearPositionalArguments() {
	C.QCommandLineParser_ClearPositionalArguments(this.h)
}

func (this *QCommandLineParser) Process(arguments []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	arguments_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(arguments))))
	arguments_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	defer C.free(unsafe.Pointer(arguments_Lengths))
	for i := range arguments {
		single_cstring := C.CString(arguments[i])
		defer C.free(unsafe.Pointer(single_cstring))
		arguments_CArray[i] = single_cstring
		arguments_Lengths[i] = (C.size_t)(len(arguments[i]))
	}
	C.QCommandLineParser_Process(this.h, &arguments_CArray[0], &arguments_Lengths[0], C.ulong(len(arguments)))
}

func (this *QCommandLineParser) ProcessWithApp(app *QCoreApplication) {
	C.QCommandLineParser_ProcessWithApp(this.h, app.cPointer())
}

func (this *QCommandLineParser) Parse(arguments []string) bool {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	arguments_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(arguments))))
	arguments_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	defer C.free(unsafe.Pointer(arguments_Lengths))
	for i := range arguments {
		single_cstring := C.CString(arguments[i])
		defer C.free(unsafe.Pointer(single_cstring))
		arguments_CArray[i] = single_cstring
		arguments_Lengths[i] = (C.size_t)(len(arguments[i]))
	}
	ret := C.QCommandLineParser_Parse(this.h, &arguments_CArray[0], &arguments_Lengths[0], C.ulong(len(arguments)))
	return (bool)(ret)
}

func (this *QCommandLineParser) ErrorText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_ErrorText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) IsSet(name string) bool {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QCommandLineParser_IsSet(this.h, name_Cstring, C.ulong(len(name)))
	return (bool)(ret)
}

func (this *QCommandLineParser) Value(name string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_Value(this.h, name_Cstring, C.ulong(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) Values(name string) []string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCommandLineParser_Values(this.h, name_Cstring, C.ulong(len(name)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) IsSetWithOption(option *QCommandLineOption) bool {
	ret := C.QCommandLineParser_IsSetWithOption(this.h, option.cPointer())
	return (bool)(ret)
}

func (this *QCommandLineParser) ValueWithOption(option *QCommandLineOption) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_ValueWithOption(this.h, option.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) ValuesWithOption(option *QCommandLineOption) []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCommandLineParser_ValuesWithOption(this.h, option.cPointer(), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) PositionalArguments() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCommandLineParser_PositionalArguments(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) OptionNames() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCommandLineParser_OptionNames(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) UnknownOptionNames() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCommandLineParser_UnknownOptionNames(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) HelpText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_HelpText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLineParser_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_Tr2(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLineParser_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_Tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLineParser_TrUtf82(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_TrUtf82(sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCommandLineParser_TrUtf83(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineParser_TrUtf83(sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineParser) AddPositionalArgument3(name string, description string, syntax string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	syntax_Cstring := C.CString(syntax)
	defer C.free(unsafe.Pointer(syntax_Cstring))
	C.QCommandLineParser_AddPositionalArgument3(this.h, name_Cstring, C.ulong(len(name)), description_Cstring, C.ulong(len(description)), syntax_Cstring, C.ulong(len(syntax)))
}

func (this *QCommandLineParser) Delete() {
	C.QCommandLineParser_Delete(this.h)
}
