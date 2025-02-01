package qt6

/*

#include "gen_qframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFrame__Shape int

const (
	QFrame__NoFrame     QFrame__Shape = 0
	QFrame__Box         QFrame__Shape = 1
	QFrame__Panel       QFrame__Shape = 2
	QFrame__WinPanel    QFrame__Shape = 3
	QFrame__HLine       QFrame__Shape = 4
	QFrame__VLine       QFrame__Shape = 5
	QFrame__StyledPanel QFrame__Shape = 6
)

type QFrame__Shadow int

const (
	QFrame__Plain  QFrame__Shadow = 16
	QFrame__Raised QFrame__Shadow = 32
	QFrame__Sunken QFrame__Shadow = 48
)

type QFrame__StyleMask int

const (
	QFrame__Shadow_Mask QFrame__StyleMask = 240
	QFrame__Shape_Mask  QFrame__StyleMask = 15
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

func (this *QFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFrame constructs the type using only CGO pointers.
func newQFrame(h *C.QFrame) *QFrame {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QFrame_virtbase(h, &outptr_QWidget)

	return &QFrame{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQFrame constructs the type using only unsafe pointers.
func UnsafeNewQFrame(h unsafe.Pointer) *QFrame {
	return newQFrame((*C.QFrame)(h))
}

// NewQFrame constructs a new QFrame object.
func NewQFrame(parent *QWidget) *QFrame {

	return newQFrame(C.QFrame_new(parent.cPointer()))
}

// NewQFrame2 constructs a new QFrame object.
func NewQFrame2() *QFrame {

	return newQFrame(C.QFrame_new2())
}

// NewQFrame3 constructs a new QFrame object.
func NewQFrame3(parent *QWidget, f WindowType) *QFrame {

	return newQFrame(C.QFrame_new3(parent.cPointer(), (C.int)(f)))
}

func (this *QFrame) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFrame_metaObject(this.h))
}

func (this *QFrame) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFrame_metacast(this.h, param1_Cstring))
}

func QFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFrame_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFrame) FrameStyle() int {
	return (int)(C.QFrame_frameStyle(this.h))
}

func (this *QFrame) SetFrameStyle(frameStyle int) {
	C.QFrame_setFrameStyle(this.h, (C.int)(frameStyle))
}

func (this *QFrame) FrameWidth() int {
	return (int)(C.QFrame_frameWidth(this.h))
}

func (this *QFrame) SizeHint() *QSize {
	_goptr := newQSize(C.QFrame_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFrame) FrameShape() QFrame__Shape {
	return (QFrame__Shape)(C.QFrame_frameShape(this.h))
}

func (this *QFrame) SetFrameShape(frameShape QFrame__Shape) {
	C.QFrame_setFrameShape(this.h, (C.int)(frameShape))
}

func (this *QFrame) FrameShadow() QFrame__Shadow {
	return (QFrame__Shadow)(C.QFrame_frameShadow(this.h))
}

func (this *QFrame) SetFrameShadow(frameShadow QFrame__Shadow) {
	C.QFrame_setFrameShadow(this.h, (C.int)(frameShadow))
}

func (this *QFrame) LineWidth() int {
	return (int)(C.QFrame_lineWidth(this.h))
}

func (this *QFrame) SetLineWidth(lineWidth int) {
	C.QFrame_setLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QFrame) MidLineWidth() int {
	return (int)(C.QFrame_midLineWidth(this.h))
}

func (this *QFrame) SetMidLineWidth(midLineWidth int) {
	C.QFrame_setMidLineWidth(this.h, (C.int)(midLineWidth))
}

func (this *QFrame) FrameRect() *QRect {
	_goptr := newQRect(C.QFrame_frameRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFrame) SetFrameRect(frameRect *QRect) {
	C.QFrame_setFrameRect(this.h, frameRect.cPointer())
}

func QFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFrame_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFrame_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFrame) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFrame_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFrame) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFrame_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_sizeHint
func miqt_exec_callback_QFrame_sizeHint(self *C.QFrame, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFrame) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QFrame_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QFrame) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QFrame_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_event
func miqt_exec_callback_QFrame_event(self *C.QFrame, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFrame) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QFrame_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFrame) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QFrame_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_paintEvent
func miqt_exec_callback_QFrame_paintEvent(self *C.QFrame, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QFrame{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFrame) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QFrame_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFrame) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QFrame_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_changeEvent
func miqt_exec_callback_QFrame_changeEvent(self *C.QFrame, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QFrame{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFrame) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QFrame_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QFrame) OninitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QFrame_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_initStyleOption
func miqt_exec_callback_QFrame_initStyleOption(self *C.QFrame, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QFrame{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QFrame) callVirtualBase_DevType() int {

	return (int)(C.QFrame_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QFrame) OndevType(slot func(super func() int) int) {
	ok := C.QFrame_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_devType
func miqt_exec_callback_QFrame_devType(self *C.QFrame, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFrame) callVirtualBase_SetVisible(visible bool) {

	C.QFrame_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFrame) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFrame_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_setVisible
func miqt_exec_callback_QFrame_setVisible(self *C.QFrame, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFrame{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFrame) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFrame_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFrame) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFrame_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_minimumSizeHint
func miqt_exec_callback_QFrame_minimumSizeHint(self *C.QFrame, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFrame) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFrame_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFrame) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFrame_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_heightForWidth
func miqt_exec_callback_QFrame_heightForWidth(self *C.QFrame, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFrame) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QFrame_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFrame) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFrame_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_hasHeightForWidth
func miqt_exec_callback_QFrame_hasHeightForWidth(self *C.QFrame, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFrame) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFrame_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QFrame) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFrame_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_paintEngine
func miqt_exec_callback_QFrame_paintEngine(self *C.QFrame, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFrame) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QFrame_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFrame_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_mousePressEvent
func miqt_exec_callback_QFrame_mousePressEvent(self *C.QFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFrame) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QFrame_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFrame_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_mouseReleaseEvent
func miqt_exec_callback_QFrame_mouseReleaseEvent(self *C.QFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFrame) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFrame_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFrame_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_mouseDoubleClickEvent
func miqt_exec_callback_QFrame_mouseDoubleClickEvent(self *C.QFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFrame) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFrame_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFrame_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_mouseMoveEvent
func miqt_exec_callback_QFrame_mouseMoveEvent(self *C.QFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFrame) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QFrame_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QFrame_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_wheelEvent
func miqt_exec_callback_QFrame_wheelEvent(self *C.QFrame, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFrame) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QFrame_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFrame_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_keyPressEvent
func miqt_exec_callback_QFrame_keyPressEvent(self *C.QFrame, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFrame) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QFrame_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFrame_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_keyReleaseEvent
func miqt_exec_callback_QFrame_keyReleaseEvent(self *C.QFrame, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFrame) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QFrame_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFrame_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_focusInEvent
func miqt_exec_callback_QFrame_focusInEvent(self *C.QFrame, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFrame) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QFrame_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFrame_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_focusOutEvent
func miqt_exec_callback_QFrame_focusOutEvent(self *C.QFrame, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFrame) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QFrame_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QFrame_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_enterEvent
func miqt_exec_callback_QFrame_enterEvent(self *C.QFrame, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFrame) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFrame_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFrame_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_leaveEvent
func miqt_exec_callback_QFrame_leaveEvent(self *C.QFrame, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFrame) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFrame_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFrame_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_moveEvent
func miqt_exec_callback_QFrame_moveEvent(self *C.QFrame, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFrame) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QFrame_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QFrame_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_resizeEvent
func miqt_exec_callback_QFrame_resizeEvent(self *C.QFrame, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFrame) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QFrame_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QFrame_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_closeEvent
func miqt_exec_callback_QFrame_closeEvent(self *C.QFrame, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFrame) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QFrame_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QFrame_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_contextMenuEvent
func miqt_exec_callback_QFrame_contextMenuEvent(self *C.QFrame, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFrame) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFrame_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFrame_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_tabletEvent
func miqt_exec_callback_QFrame_tabletEvent(self *C.QFrame, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFrame) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFrame_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFrame_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_actionEvent
func miqt_exec_callback_QFrame_actionEvent(self *C.QFrame, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFrame) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFrame_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFrame_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_dragEnterEvent
func miqt_exec_callback_QFrame_dragEnterEvent(self *C.QFrame, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFrame) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFrame_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFrame_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_dragMoveEvent
func miqt_exec_callback_QFrame_dragMoveEvent(self *C.QFrame, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFrame) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFrame_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFrame_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_dragLeaveEvent
func miqt_exec_callback_QFrame_dragLeaveEvent(self *C.QFrame, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFrame) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFrame_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFrame_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_dropEvent
func miqt_exec_callback_QFrame_dropEvent(self *C.QFrame, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFrame) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QFrame_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QFrame_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_showEvent
func miqt_exec_callback_QFrame_showEvent(self *C.QFrame, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFrame) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QFrame_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QFrame_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_hideEvent
func miqt_exec_callback_QFrame_hideEvent(self *C.QFrame, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFrame) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFrame_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QFrame) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QFrame_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_nativeEvent
func miqt_exec_callback_QFrame_nativeEvent(self *C.QFrame, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFrame) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFrame_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFrame) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFrame_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_metric
func miqt_exec_callback_QFrame_metric(self *C.QFrame, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFrame) callVirtualBase_InitPainter(painter *QPainter) {

	C.QFrame_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFrame) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFrame_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_initPainter
func miqt_exec_callback_QFrame_initPainter(self *C.QFrame, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFrame{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFrame) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFrame_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFrame) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFrame_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_redirected
func miqt_exec_callback_QFrame_redirected(self *C.QFrame, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFrame) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QFrame_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFrame) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFrame_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_sharedPainter
func miqt_exec_callback_QFrame_sharedPainter(self *C.QFrame, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFrame) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFrame_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFrame) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFrame_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_inputMethodEvent
func miqt_exec_callback_QFrame_inputMethodEvent(self *C.QFrame, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFrame{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFrame) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFrame_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFrame) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFrame_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_inputMethodQuery
func miqt_exec_callback_QFrame_inputMethodQuery(self *C.QFrame, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFrame) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QFrame_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFrame) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFrame_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_focusNextPrevChild
func miqt_exec_callback_QFrame_focusNextPrevChild(self *C.QFrame, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFrame) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QFrame_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFrame) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFrame_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_eventFilter
func miqt_exec_callback_QFrame_eventFilter(self *C.QFrame, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QFrame{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFrame) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFrame_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFrame_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_timerEvent
func miqt_exec_callback_QFrame_timerEvent(self *C.QFrame, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFrame) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFrame_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFrame_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_childEvent
func miqt_exec_callback_QFrame_childEvent(self *C.QFrame, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFrame) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFrame_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFrame) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFrame_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_customEvent
func miqt_exec_callback_QFrame_customEvent(self *C.QFrame, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFrame{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFrame) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFrame_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFrame) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFrame_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_connectNotify
func miqt_exec_callback_QFrame_connectNotify(self *C.QFrame, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFrame{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFrame) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFrame_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFrame) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFrame_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFrame_disconnectNotify
func miqt_exec_callback_QFrame_disconnectNotify(self *C.QFrame, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFrame{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QFrame) Delete() {
	C.QFrame_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
