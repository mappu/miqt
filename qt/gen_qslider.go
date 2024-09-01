package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qslider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSlider struct {
	h *C.QSlider
	*QAbstractSlider
}

func (this *QSlider) cPointer() *C.QSlider {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSlider(h *C.QSlider) *QSlider {
	if h == nil {
		return nil
	}
	return &QSlider{h: h, QAbstractSlider: newQAbstractSlider_U(unsafe.Pointer(h))}
}

func newQSlider_U(h unsafe.Pointer) *QSlider {
	return newQSlider((*C.QSlider)(h))
}

// NewQSlider constructs a new QSlider object.
func NewQSlider() *QSlider {
	ret := C.QSlider_new()
	return newQSlider(ret)
}

// NewQSlider2 constructs a new QSlider object.
func NewQSlider2(orientation uintptr) *QSlider {
	ret := C.QSlider_new2((C.uintptr_t)(orientation))
	return newQSlider(ret)
}

// NewQSlider3 constructs a new QSlider object.
func NewQSlider3(parent *QWidget) *QSlider {
	ret := C.QSlider_new3(parent.cPointer())
	return newQSlider(ret)
}

// NewQSlider4 constructs a new QSlider object.
func NewQSlider4(orientation uintptr, parent *QWidget) *QSlider {
	ret := C.QSlider_new4((C.uintptr_t)(orientation), parent.cPointer())
	return newQSlider(ret)
}

func (this *QSlider) MetaObject() *QMetaObject {
	ret := C.QSlider_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSlider_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSlider_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSlider_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSlider) SizeHint() *QSize {
	ret := C.QSlider_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSlider) MinimumSizeHint() *QSize {
	ret := C.QSlider_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSlider) SetTickPosition(position uintptr) {
	C.QSlider_SetTickPosition(this.h, (C.uintptr_t)(position))
}

func (this *QSlider) TickPosition() uintptr {
	ret := C.QSlider_TickPosition(this.h)
	return (uintptr)(ret)
}

func (this *QSlider) SetTickInterval(ti int) {
	C.QSlider_SetTickInterval(this.h, (C.int)(ti))
}

func (this *QSlider) TickInterval() int {
	ret := C.QSlider_TickInterval(this.h)
	return (int)(ret)
}

func (this *QSlider) Event(event *QEvent) bool {
	ret := C.QSlider_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func QSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSlider_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSlider_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSlider_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSlider_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSlider_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSlider_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSlider) Delete() {
	C.QSlider_Delete(this.h)
}
