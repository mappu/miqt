package qt

/*

#include "gen_qframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFrame__Shape int

const (
	QFrame__Shape__NoFrame     QFrame__Shape = 0
	QFrame__Shape__Box         QFrame__Shape = 1
	QFrame__Shape__Panel       QFrame__Shape = 2
	QFrame__Shape__WinPanel    QFrame__Shape = 3
	QFrame__Shape__HLine       QFrame__Shape = 4
	QFrame__Shape__VLine       QFrame__Shape = 5
	QFrame__Shape__StyledPanel QFrame__Shape = 6
)

type QFrame__Shadow int

const (
	QFrame__Shadow__Plain  QFrame__Shadow = 16
	QFrame__Shadow__Raised QFrame__Shadow = 32
	QFrame__Shadow__Sunken QFrame__Shadow = 48
)

type QFrame__StyleMask int

const (
	QFrame__StyleMask__Shadow_Mask QFrame__StyleMask = 240
	QFrame__StyleMask__Shape_Mask  QFrame__StyleMask = 15
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
	if h == nil {
		return nil
	}
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
	return newQMetaObject_U(unsafe.Pointer(C.QFrame_MetaObject(this.h)))
}

func QFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFrame_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFrame_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFrame) FrameStyle() int {
	return (int)(C.QFrame_FrameStyle(this.h))
}

func (this *QFrame) SetFrameStyle(frameStyle int) {
	C.QFrame_SetFrameStyle(this.h, (C.int)(frameStyle))
}

func (this *QFrame) FrameWidth() int {
	return (int)(C.QFrame_FrameWidth(this.h))
}

func (this *QFrame) SizeHint() *QSize {
	_ret := C.QFrame_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFrame) FrameShape() QFrame__Shape {
	return (QFrame__Shape)(C.QFrame_FrameShape(this.h))
}

func (this *QFrame) SetFrameShape(frameShape QFrame__Shape) {
	C.QFrame_SetFrameShape(this.h, (C.int)(frameShape))
}

func (this *QFrame) FrameShadow() QFrame__Shadow {
	return (QFrame__Shadow)(C.QFrame_FrameShadow(this.h))
}

func (this *QFrame) SetFrameShadow(frameShadow QFrame__Shadow) {
	C.QFrame_SetFrameShadow(this.h, (C.int)(frameShadow))
}

func (this *QFrame) LineWidth() int {
	return (int)(C.QFrame_LineWidth(this.h))
}

func (this *QFrame) SetLineWidth(lineWidth int) {
	C.QFrame_SetLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QFrame) MidLineWidth() int {
	return (int)(C.QFrame_MidLineWidth(this.h))
}

func (this *QFrame) SetMidLineWidth(midLineWidth int) {
	C.QFrame_SetMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QFrame) FrameRect() *QRect {
	_ret := C.QFrame_FrameRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFrame) SetFrameRect(frameRect *QRect) {
	C.QFrame_SetFrameRect(this.h, frameRect.cPointer())
}

func QFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFrame_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFrame_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFrame_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFrame_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFrame) Delete() {
	C.QFrame_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
