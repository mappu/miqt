package multimedia

/*

#include "gen_qmediacontainercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QMediaContainerControl struct {
	h *C.QMediaContainerControl
	*QMediaControl
}

func (this *QMediaContainerControl) cPointer() *C.QMediaContainerControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaContainerControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaContainerControl constructs the type using only CGO pointers.
func newQMediaContainerControl(h *C.QMediaContainerControl) *QMediaContainerControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QMediaContainerControl_virtbase(h, &outptr_QMediaControl)

	return &QMediaContainerControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQMediaContainerControl constructs the type using only unsafe pointers.
func UnsafeNewQMediaContainerControl(h unsafe.Pointer) *QMediaContainerControl {
	return newQMediaContainerControl((*C.QMediaContainerControl)(h))
}

func (this *QMediaContainerControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaContainerControl_MetaObject(this.h)))
}

func (this *QMediaContainerControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaContainerControl_Metacast(this.h, param1_Cstring))
}

func QMediaContainerControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaContainerControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaContainerControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaContainerControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaContainerControl) SupportedContainers() []string {
	var _ma C.struct_miqt_array = C.QMediaContainerControl_SupportedContainers(this.h)
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

func (this *QMediaContainerControl) ContainerFormat() string {
	var _ms C.struct_miqt_string = C.QMediaContainerControl_ContainerFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaContainerControl) SetContainerFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QMediaContainerControl_SetContainerFormat(this.h, format_ms)
}

func (this *QMediaContainerControl) ContainerDescription(formatMimeType string) string {
	formatMimeType_ms := C.struct_miqt_string{}
	formatMimeType_ms.data = C.CString(formatMimeType)
	formatMimeType_ms.len = C.size_t(len(formatMimeType))
	defer C.free(unsafe.Pointer(formatMimeType_ms.data))
	var _ms C.struct_miqt_string = C.QMediaContainerControl_ContainerDescription(this.h, formatMimeType_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaContainerControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaContainerControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaContainerControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaContainerControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaContainerControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaContainerControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaContainerControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaContainerControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaContainerControl) Delete() {
	C.QMediaContainerControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaContainerControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaContainerControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
