package qt

/*

#include "gen_qsizegrip.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSizeGrip struct {
	h *C.QSizeGrip
	*QWidget
}

func (this *QSizeGrip) cPointer() *C.QSizeGrip {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSizeGrip(h *C.QSizeGrip) *QSizeGrip {
	if h == nil {
		return nil
	}
	return &QSizeGrip{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQSizeGrip_U(h unsafe.Pointer) *QSizeGrip {
	return newQSizeGrip((*C.QSizeGrip)(h))
}

// NewQSizeGrip constructs a new QSizeGrip object.
func NewQSizeGrip(parent *QWidget) *QSizeGrip {
	ret := C.QSizeGrip_new(parent.cPointer())
	return newQSizeGrip(ret)
}

func (this *QSizeGrip) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QSizeGrip_MetaObject(this.h)))
}

func (this *QSizeGrip) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSizeGrip_Metacast(this.h, param1_Cstring)
}

func QSizeGrip_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSizeGrip_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSizeGrip_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSizeGrip_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSizeGrip) SizeHint() *QSize {
	_ret := C.QSizeGrip_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSizeGrip) SetVisible(visible bool) {
	C.QSizeGrip_SetVisible(this.h, (C.bool)(visible))
}

func QSizeGrip_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSizeGrip_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSizeGrip_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSizeGrip_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSizeGrip_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSizeGrip_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSizeGrip_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSizeGrip_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSizeGrip) Delete() {
	C.QSizeGrip_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSizeGrip) GoGC() {
	runtime.SetFinalizer(this, func(this *QSizeGrip) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
