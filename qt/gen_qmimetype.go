package qt

/*

#include "gen_qmimetype.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMimeType struct {
	h *C.QMimeType
}

func (this *QMimeType) cPointer() *C.QMimeType {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMimeType) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMimeType(h *C.QMimeType) *QMimeType {
	if h == nil {
		return nil
	}
	return &QMimeType{h: h}
}

func UnsafeNewQMimeType(h unsafe.Pointer) *QMimeType {
	return newQMimeType((*C.QMimeType)(h))
}

// NewQMimeType constructs a new QMimeType object.
func NewQMimeType() *QMimeType {
	ret := C.QMimeType_new()
	return newQMimeType(ret)
}

// NewQMimeType2 constructs a new QMimeType object.
func NewQMimeType2(other *QMimeType) *QMimeType {
	ret := C.QMimeType_new2(other.cPointer())
	return newQMimeType(ret)
}

func (this *QMimeType) OperatorAssign(other *QMimeType) {
	C.QMimeType_OperatorAssign(this.h, other.cPointer())
}

func (this *QMimeType) Swap(other *QMimeType) {
	C.QMimeType_Swap(this.h, other.cPointer())
}

func (this *QMimeType) OperatorEqual(other *QMimeType) bool {
	return (bool)(C.QMimeType_OperatorEqual(this.h, other.cPointer()))
}

func (this *QMimeType) OperatorNotEqual(other *QMimeType) bool {
	return (bool)(C.QMimeType_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QMimeType) IsValid() bool {
	return (bool)(C.QMimeType_IsValid(this.h))
}

func (this *QMimeType) IsDefault() bool {
	return (bool)(C.QMimeType_IsDefault(this.h))
}

func (this *QMimeType) Name() string {
	var _ms C.struct_miqt_string = C.QMimeType_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeType) Comment() string {
	var _ms C.struct_miqt_string = C.QMimeType_Comment(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeType) GenericIconName() string {
	var _ms C.struct_miqt_string = C.QMimeType_GenericIconName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeType) IconName() string {
	var _ms C.struct_miqt_string = C.QMimeType_IconName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeType) GlobPatterns() []string {
	var _ma *C.struct_miqt_array = C.QMimeType_GlobPatterns(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeType) ParentMimeTypes() []string {
	var _ma *C.struct_miqt_array = C.QMimeType_ParentMimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeType) AllAncestors() []string {
	var _ma *C.struct_miqt_array = C.QMimeType_AllAncestors(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeType) Aliases() []string {
	var _ma *C.struct_miqt_array = C.QMimeType_Aliases(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeType) Suffixes() []string {
	var _ma *C.struct_miqt_array = C.QMimeType_Suffixes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeType) PreferredSuffix() string {
	var _ms C.struct_miqt_string = C.QMimeType_PreferredSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeType) Inherits(mimeTypeName string) bool {
	mimeTypeName_ms := C.struct_miqt_string{}
	mimeTypeName_ms.data = C.CString(mimeTypeName)
	mimeTypeName_ms.len = C.size_t(len(mimeTypeName))
	defer C.free(unsafe.Pointer(mimeTypeName_ms.data))
	return (bool)(C.QMimeType_Inherits(this.h, mimeTypeName_ms))
}

func (this *QMimeType) FilterString() string {
	var _ms C.struct_miqt_string = C.QMimeType_FilterString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMimeType) Delete() {
	C.QMimeType_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMimeType) GoGC() {
	runtime.SetFinalizer(this, func(this *QMimeType) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
