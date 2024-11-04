package qt6

/*

#include "gen_qcommandlineoption.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCommandLineOption__Flag int

const (
	QCommandLineOption__HiddenFromHelp   QCommandLineOption__Flag = 1
	QCommandLineOption__ShortOptionStyle QCommandLineOption__Flag = 2
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

func (this *QCommandLineOption) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCommandLineOption(h *C.QCommandLineOption) *QCommandLineOption {
	if h == nil {
		return nil
	}
	return &QCommandLineOption{h: h}
}

func UnsafeNewQCommandLineOption(h unsafe.Pointer) *QCommandLineOption {
	return newQCommandLineOption((*C.QCommandLineOption)(h))
}

// NewQCommandLineOption constructs a new QCommandLineOption object.
func NewQCommandLineOption(name string) *QCommandLineOption {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QCommandLineOption_new(name_ms)
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption2 constructs a new QCommandLineOption object.
func NewQCommandLineOption2(names []string) *QCommandLineOption {
	names_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_i_ms := C.struct_miqt_string{}
		names_i_ms.data = C.CString(names[i])
		names_i_ms.len = C.size_t(len(names[i]))
		defer C.free(unsafe.Pointer(names_i_ms.data))
		names_CArray[i] = names_i_ms
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	ret := C.QCommandLineOption_new2(names_ma)
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption3 constructs a new QCommandLineOption object.
func NewQCommandLineOption3(name string, description string) *QCommandLineOption {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	ret := C.QCommandLineOption_new3(name_ms, description_ms)
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption4 constructs a new QCommandLineOption object.
func NewQCommandLineOption4(names []string, description string) *QCommandLineOption {
	names_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_i_ms := C.struct_miqt_string{}
		names_i_ms.data = C.CString(names[i])
		names_i_ms.len = C.size_t(len(names[i]))
		defer C.free(unsafe.Pointer(names_i_ms.data))
		names_CArray[i] = names_i_ms
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	ret := C.QCommandLineOption_new4(names_ma, description_ms)
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption5 constructs a new QCommandLineOption object.
func NewQCommandLineOption5(other *QCommandLineOption) *QCommandLineOption {
	ret := C.QCommandLineOption_new5(other.cPointer())
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption6 constructs a new QCommandLineOption object.
func NewQCommandLineOption6(name string, description string, valueName string) *QCommandLineOption {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	valueName_ms := C.struct_miqt_string{}
	valueName_ms.data = C.CString(valueName)
	valueName_ms.len = C.size_t(len(valueName))
	defer C.free(unsafe.Pointer(valueName_ms.data))
	ret := C.QCommandLineOption_new6(name_ms, description_ms, valueName_ms)
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption7 constructs a new QCommandLineOption object.
func NewQCommandLineOption7(name string, description string, valueName string, defaultValue string) *QCommandLineOption {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	valueName_ms := C.struct_miqt_string{}
	valueName_ms.data = C.CString(valueName)
	valueName_ms.len = C.size_t(len(valueName))
	defer C.free(unsafe.Pointer(valueName_ms.data))
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	ret := C.QCommandLineOption_new7(name_ms, description_ms, valueName_ms, defaultValue_ms)
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption8 constructs a new QCommandLineOption object.
func NewQCommandLineOption8(names []string, description string, valueName string) *QCommandLineOption {
	names_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_i_ms := C.struct_miqt_string{}
		names_i_ms.data = C.CString(names[i])
		names_i_ms.len = C.size_t(len(names[i]))
		defer C.free(unsafe.Pointer(names_i_ms.data))
		names_CArray[i] = names_i_ms
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	valueName_ms := C.struct_miqt_string{}
	valueName_ms.data = C.CString(valueName)
	valueName_ms.len = C.size_t(len(valueName))
	defer C.free(unsafe.Pointer(valueName_ms.data))
	ret := C.QCommandLineOption_new8(names_ma, description_ms, valueName_ms)
	return newQCommandLineOption(ret)
}

// NewQCommandLineOption9 constructs a new QCommandLineOption object.
func NewQCommandLineOption9(names []string, description string, valueName string, defaultValue string) *QCommandLineOption {
	names_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	for i := range names {
		names_i_ms := C.struct_miqt_string{}
		names_i_ms.data = C.CString(names[i])
		names_i_ms.len = C.size_t(len(names[i]))
		defer C.free(unsafe.Pointer(names_i_ms.data))
		names_CArray[i] = names_i_ms
	}
	names_ma := C.struct_miqt_array{len: C.size_t(len(names)), data: unsafe.Pointer(names_CArray)}
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	valueName_ms := C.struct_miqt_string{}
	valueName_ms.data = C.CString(valueName)
	valueName_ms.len = C.size_t(len(valueName))
	defer C.free(unsafe.Pointer(valueName_ms.data))
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	ret := C.QCommandLineOption_new9(names_ma, description_ms, valueName_ms, defaultValue_ms)
	return newQCommandLineOption(ret)
}

func (this *QCommandLineOption) OperatorAssign(other *QCommandLineOption) {
	C.QCommandLineOption_OperatorAssign(this.h, other.cPointer())
}

func (this *QCommandLineOption) Swap(other *QCommandLineOption) {
	C.QCommandLineOption_Swap(this.h, other.cPointer())
}

func (this *QCommandLineOption) Names() []string {
	var _ma C.struct_miqt_array = C.QCommandLineOption_Names(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QCommandLineOption) SetValueName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QCommandLineOption_SetValueName(this.h, name_ms)
}

func (this *QCommandLineOption) ValueName() string {
	var _ms C.struct_miqt_string = C.QCommandLineOption_ValueName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLineOption) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QCommandLineOption_SetDescription(this.h, description_ms)
}

func (this *QCommandLineOption) Description() string {
	var _ms C.struct_miqt_string = C.QCommandLineOption_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLineOption) SetDefaultValue(defaultValue string) {
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	C.QCommandLineOption_SetDefaultValue(this.h, defaultValue_ms)
}

func (this *QCommandLineOption) SetDefaultValues(defaultValues []string) {
	defaultValues_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(defaultValues))))
	defer C.free(unsafe.Pointer(defaultValues_CArray))
	for i := range defaultValues {
		defaultValues_i_ms := C.struct_miqt_string{}
		defaultValues_i_ms.data = C.CString(defaultValues[i])
		defaultValues_i_ms.len = C.size_t(len(defaultValues[i]))
		defer C.free(unsafe.Pointer(defaultValues_i_ms.data))
		defaultValues_CArray[i] = defaultValues_i_ms
	}
	defaultValues_ma := C.struct_miqt_array{len: C.size_t(len(defaultValues)), data: unsafe.Pointer(defaultValues_CArray)}
	C.QCommandLineOption_SetDefaultValues(this.h, defaultValues_ma)
}

func (this *QCommandLineOption) DefaultValues() []string {
	var _ma C.struct_miqt_array = C.QCommandLineOption_DefaultValues(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QCommandLineOption) Flags() QCommandLineOption__Flag {
	return (QCommandLineOption__Flag)(C.QCommandLineOption_Flags(this.h))
}

func (this *QCommandLineOption) SetFlags(aflags QCommandLineOption__Flag) {
	C.QCommandLineOption_SetFlags(this.h, (C.int)(aflags))
}

// Delete this object from C++ memory.
func (this *QCommandLineOption) Delete() {
	C.QCommandLineOption_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCommandLineOption) GoGC() {
	runtime.SetFinalizer(this, func(this *QCommandLineOption) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
