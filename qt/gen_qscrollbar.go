package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qscrollbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScrollBar struct {
	h *C.QScrollBar
	*QAbstractSlider
}

func (this *QScrollBar) cPointer() *C.QScrollBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScrollBar(h *C.QScrollBar) *QScrollBar {
	if h == nil {
		return nil
	}
	return &QScrollBar{h: h, QAbstractSlider: newQAbstractSlider_U(unsafe.Pointer(h))}
}

func newQScrollBar_U(h unsafe.Pointer) *QScrollBar {
	return newQScrollBar((*C.QScrollBar)(h))
}

// NewQScrollBar constructs a new QScrollBar object.
func NewQScrollBar() *QScrollBar {
	ret := C.QScrollBar_new()
	return newQScrollBar(ret)
}

// NewQScrollBar2 constructs a new QScrollBar object.
func NewQScrollBar2(param1 uintptr) *QScrollBar {
	ret := C.QScrollBar_new2((C.uintptr_t)(param1))
	return newQScrollBar(ret)
}

// NewQScrollBar3 constructs a new QScrollBar object.
func NewQScrollBar3(parent *QWidget) *QScrollBar {
	ret := C.QScrollBar_new3(parent.cPointer())
	return newQScrollBar(ret)
}

// NewQScrollBar4 constructs a new QScrollBar object.
func NewQScrollBar4(param1 uintptr, parent *QWidget) *QScrollBar {
	ret := C.QScrollBar_new4((C.uintptr_t)(param1), parent.cPointer())
	return newQScrollBar(ret)
}

func (this *QScrollBar) MetaObject() *QMetaObject {
	ret := C.QScrollBar_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QScrollBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScrollBar_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScrollBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScrollBar_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScrollBar) SizeHint() *QSize {
	ret := C.QScrollBar_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollBar) Event(event *QEvent) bool {
	ret := C.QScrollBar_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func QScrollBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScrollBar_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScrollBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScrollBar_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScrollBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScrollBar_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScrollBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScrollBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScrollBar) Delete() {
	C.QScrollBar_Delete(this.h)
}
