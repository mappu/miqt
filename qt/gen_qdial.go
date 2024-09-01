package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdial.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDial struct {
	h *C.QDial
	*QAbstractSlider
}

func (this *QDial) cPointer() *C.QDial {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDial(h *C.QDial) *QDial {
	if h == nil {
		return nil
	}
	return &QDial{h: h, QAbstractSlider: newQAbstractSlider_U(unsafe.Pointer(h))}
}

func newQDial_U(h unsafe.Pointer) *QDial {
	return newQDial((*C.QDial)(h))
}

// NewQDial constructs a new QDial object.
func NewQDial() *QDial {
	ret := C.QDial_new()
	return newQDial(ret)
}

// NewQDial2 constructs a new QDial object.
func NewQDial2(parent *QWidget) *QDial {
	ret := C.QDial_new2(parent.cPointer())
	return newQDial(ret)
}

func (this *QDial) MetaObject() *QMetaObject {
	ret := C.QDial_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDial_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDial_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDial_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDial_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDial) Wrapping() bool {
	ret := C.QDial_Wrapping(this.h)
	return (bool)(ret)
}

func (this *QDial) NotchSize() int {
	ret := C.QDial_NotchSize(this.h)
	return (int)(ret)
}

func (this *QDial) SetNotchTarget(target float64) {
	C.QDial_SetNotchTarget(this.h, (C.double)(target))
}

func (this *QDial) NotchTarget() float64 {
	ret := C.QDial_NotchTarget(this.h)
	return (float64)(ret)
}

func (this *QDial) NotchesVisible() bool {
	ret := C.QDial_NotchesVisible(this.h)
	return (bool)(ret)
}

func (this *QDial) SizeHint() *QSize {
	ret := C.QDial_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDial) MinimumSizeHint() *QSize {
	ret := C.QDial_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDial) SetNotchesVisible(visible bool) {
	C.QDial_SetNotchesVisible(this.h, (C.bool)(visible))
}

func (this *QDial) SetWrapping(on bool) {
	C.QDial_SetWrapping(this.h, (C.bool)(on))
}

func QDial_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDial_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDial_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDial_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDial_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDial_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDial_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDial_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDial) Delete() {
	C.QDial_Delete(this.h)
}
