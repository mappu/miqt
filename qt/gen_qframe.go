package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFrame struct {
	h *C.QFrame
	*QWidget
}

func (this *QFrame) cPointer() *C.QFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFrame(h *C.QFrame) *QFrame {
	return &QFrame{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQFrame_U(h unsafe.Pointer) *QFrame {
	return newQFrame((*C.QFrame)(h))
}

// NewQFrame constructs a new QFrame object.
func NewQFrame() *QFrame {
	ret := C.QFrame_new()
	return newQFrame(ret)
}

// NewQFrame2 constructs a new QFrame object.
func NewQFrame2(parent *QWidget) *QFrame {
	ret := C.QFrame_new2(parent.cPointer())
	return newQFrame(ret)
}

// NewQFrame3 constructs a new QFrame object.
func NewQFrame3(parent *QWidget, f int) *QFrame {
	ret := C.QFrame_new3(parent.cPointer(), (C.int)(f))
	return newQFrame(ret)
}

func (this *QFrame) MetaObject() *QMetaObject {
	ret := C.QFrame_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFrame_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFrame_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFrame) FrameStyle() int {
	ret := C.QFrame_FrameStyle(this.h)
	return (int)(ret)
}

func (this *QFrame) SetFrameStyle(frameStyle int) {
	C.QFrame_SetFrameStyle(this.h, (C.int)(frameStyle))
}

func (this *QFrame) FrameWidth() int {
	ret := C.QFrame_FrameWidth(this.h)
	return (int)(ret)
}

func (this *QFrame) SizeHint() *QSize {
	ret := C.QFrame_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFrame) FrameShape() uintptr {
	ret := C.QFrame_FrameShape(this.h)
	return (uintptr)(ret)
}

func (this *QFrame) SetFrameShape(frameShape uintptr) {
	C.QFrame_SetFrameShape(this.h, (C.uintptr_t)(frameShape))
}

func (this *QFrame) FrameShadow() uintptr {
	ret := C.QFrame_FrameShadow(this.h)
	return (uintptr)(ret)
}

func (this *QFrame) SetFrameShadow(frameShadow uintptr) {
	C.QFrame_SetFrameShadow(this.h, (C.uintptr_t)(frameShadow))
}

func (this *QFrame) LineWidth() int {
	ret := C.QFrame_LineWidth(this.h)
	return (int)(ret)
}

func (this *QFrame) SetLineWidth(lineWidth int) {
	C.QFrame_SetLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QFrame) MidLineWidth() int {
	ret := C.QFrame_MidLineWidth(this.h)
	return (int)(ret)
}

func (this *QFrame) SetMidLineWidth(midLineWidth int) {
	C.QFrame_SetMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QFrame) FrameRect() *QRect {
	ret := C.QFrame_FrameRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFrame) SetFrameRect(frameRect *QRect) {
	C.QFrame_SetFrameRect(this.h, frameRect.cPointer())
}

func QFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFrame_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFrame_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFrame_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFrame_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFrame) Delete() {
	C.QFrame_Delete(this.h)
}
