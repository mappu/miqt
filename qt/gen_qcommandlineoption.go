package qt

/*

#include "gen_qcommandlineoption.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QCommandLineOption struct {
	h *C.QCommandLineOption
}

func (this *QCommandLineOption) cPointer() *C.QCommandLineOption {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCommandLineOption(h *C.QCommandLineOption) *QCommandLineOption {
	if h == nil {
		return nil
	}
	return &QCommandLineOption{h: h}
}

func newQCommandLineOption_U(h unsafe.Pointer) *QCommandLineOption {
	return newQCommandLineOption((*C.QCommandLineOption)(h))
}

// NewQCommandLineOption constructs a new QCommandLineOption object.
func NewQCommandLineOption(name string) *QCommandLineOption {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QCommandLineOption_new(name_Cstring, C.ulong(len(name)))
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption2 constructs a new QCommandLineOption object.
func NewQCommandLineOption2(names []string) *QCommandLineOption {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	names_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(names))))
	names_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	defer C.free(unsafe.Pointer(names_Lengths))
	for i := range names {
		single_cstring := C.CString(names[i])
		defer C.free(unsafe.Pointer(single_cstring))
		names_CArray[i] = single_cstring
		names_Lengths[i] = (C.size_t)(len(names[i]))
	}
	ret := C.QCommandLineOption_new2(&names_CArray[0], &names_Lengths[0], C.ulong(len(names)))
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption3 constructs a new QCommandLineOption object.
func NewQCommandLineOption3(name string, description string) *QCommandLineOption {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	ret := C.QCommandLineOption_new3(name_Cstring, C.ulong(len(name)), description_Cstring, C.ulong(len(description)))
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption4 constructs a new QCommandLineOption object.
func NewQCommandLineOption4(names []string, description string) *QCommandLineOption {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	names_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(names))))
	names_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	defer C.free(unsafe.Pointer(names_Lengths))
	for i := range names {
		single_cstring := C.CString(names[i])
		defer C.free(unsafe.Pointer(single_cstring))
		names_CArray[i] = single_cstring
		names_Lengths[i] = (C.size_t)(len(names[i]))
	}
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	ret := C.QCommandLineOption_new4(&names_CArray[0], &names_Lengths[0], C.ulong(len(names)), description_Cstring, C.ulong(len(description)))
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption5 constructs a new QCommandLineOption object.
func NewQCommandLineOption5(other *QCommandLineOption) *QCommandLineOption {
	ret := C.QCommandLineOption_new5(other.cPointer())
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption6 constructs a new QCommandLineOption object.
func NewQCommandLineOption6(name string, description string, valueName string) *QCommandLineOption {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	valueName_Cstring := C.CString(valueName)
	defer C.free(unsafe.Pointer(valueName_Cstring))
	ret := C.QCommandLineOption_new6(name_Cstring, C.ulong(len(name)), description_Cstring, C.ulong(len(description)), valueName_Cstring, C.ulong(len(valueName)))
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption7 constructs a new QCommandLineOption object.
func NewQCommandLineOption7(name string, description string, valueName string, defaultValue string) *QCommandLineOption {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	valueName_Cstring := C.CString(valueName)
	defer C.free(unsafe.Pointer(valueName_Cstring))
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	ret := C.QCommandLineOption_new7(name_Cstring, C.ulong(len(name)), description_Cstring, C.ulong(len(description)), valueName_Cstring, C.ulong(len(valueName)), defaultValue_Cstring, C.ulong(len(defaultValue)))
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption8 constructs a new QCommandLineOption object.
func NewQCommandLineOption8(names []string, description string, valueName string) *QCommandLineOption {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	names_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(names))))
	names_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	defer C.free(unsafe.Pointer(names_Lengths))
	for i := range names {
		single_cstring := C.CString(names[i])
		defer C.free(unsafe.Pointer(single_cstring))
		names_CArray[i] = single_cstring
		names_Lengths[i] = (C.size_t)(len(names[i]))
	}
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	valueName_Cstring := C.CString(valueName)
	defer C.free(unsafe.Pointer(valueName_Cstring))
	ret := C.QCommandLineOption_new8(&names_CArray[0], &names_Lengths[0], C.ulong(len(names)), description_Cstring, C.ulong(len(description)), valueName_Cstring, C.ulong(len(valueName)))
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption9 constructs a new QCommandLineOption object.
func NewQCommandLineOption9(names []string, description string, valueName string, defaultValue string) *QCommandLineOption {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	names_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(names))))
	names_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	defer C.free(unsafe.Pointer(names_Lengths))
	for i := range names {
		single_cstring := C.CString(names[i])
		defer C.free(unsafe.Pointer(single_cstring))
		names_CArray[i] = single_cstring
		names_Lengths[i] = (C.size_t)(len(names[i]))
	}
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	valueName_Cstring := C.CString(valueName)
	defer C.free(unsafe.Pointer(valueName_Cstring))
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	ret := C.QCommandLineOption_new9(&names_CArray[0], &names_Lengths[0], C.ulong(len(names)), description_Cstring, C.ulong(len(description)), valueName_Cstring, C.ulong(len(valueName)), defaultValue_Cstring, C.ulong(len(defaultValue)))
	return newQCommandLineOption(ret)
}

func (this *QCommandLineOption) OperatorAssign(other *QCommandLineOption) {
	C.QCommandLineOption_OperatorAssign(this.h, other.cPointer())
}

func (this *QCommandLineOption) Swap(other *QCommandLineOption) {
	C.QCommandLineOption_Swap(this.h, other.cPointer())
}

func (this *QCommandLineOption) Names() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCommandLineOption_Names(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineOption) SetValueName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QCommandLineOption_SetValueName(this.h, name_Cstring, C.ulong(len(name)))
}

func (this *QCommandLineOption) ValueName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineOption_ValueName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineOption) SetDescription(description string) {
	description_Cstring := C.CString(description)
	defer C.free(unsafe.Pointer(description_Cstring))
	C.QCommandLineOption_SetDescription(this.h, description_Cstring, C.ulong(len(description)))
}

func (this *QCommandLineOption) Description() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCommandLineOption_Description(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineOption) SetDefaultValue(defaultValue string) {
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	C.QCommandLineOption_SetDefaultValue(this.h, defaultValue_Cstring, C.ulong(len(defaultValue)))
}

func (this *QCommandLineOption) SetDefaultValues(defaultValues []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	defaultValues_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(defaultValues))))
	defaultValues_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(defaultValues))))
	defer C.free(unsafe.Pointer(defaultValues_CArray))
	defer C.free(unsafe.Pointer(defaultValues_Lengths))
	for i := range defaultValues {
		single_cstring := C.CString(defaultValues[i])
		defer C.free(unsafe.Pointer(single_cstring))
		defaultValues_CArray[i] = single_cstring
		defaultValues_Lengths[i] = (C.size_t)(len(defaultValues[i]))
	}
	C.QCommandLineOption_SetDefaultValues(this.h, &defaultValues_CArray[0], &defaultValues_Lengths[0], C.ulong(len(defaultValues)))
}

func (this *QCommandLineOption) DefaultValues() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCommandLineOption_DefaultValues(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCommandLineOption) Flags() int {
	ret := C.QCommandLineOption_Flags(this.h)
	return (int)(ret)
}

func (this *QCommandLineOption) SetFlags(aflags int) {
	C.QCommandLineOption_SetFlags(this.h, (C.int)(aflags))
}

func (this *QCommandLineOption) SetHidden(hidden bool) {
	C.QCommandLineOption_SetHidden(this.h, (C.bool)(hidden))
}

func (this *QCommandLineOption) IsHidden() bool {
	ret := C.QCommandLineOption_IsHidden(this.h)
	return (bool)(ret)
}

func (this *QCommandLineOption) Delete() {
	C.QCommandLineOption_Delete(this.h)
}
