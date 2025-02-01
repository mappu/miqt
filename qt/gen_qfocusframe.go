package qt

/*

#include "gen_qfocusframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFocusFrame struct {
	h *C.QFocusFrame
	*QWidget
}

func (this *QFocusFrame) cPointer() *C.QFocusFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFocusFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFocusFrame constructs the type using only CGO pointers.
func newQFocusFrame(h *C.QFocusFrame) *QFocusFrame {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QFocusFrame_virtbase(h, &outptr_QWidget)

	return &QFocusFrame{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQFocusFrame constructs the type using only unsafe pointers.
func UnsafeNewQFocusFrame(h unsafe.Pointer) *QFocusFrame {
	return newQFocusFrame((*C.QFocusFrame)(h))
}

// NewQFocusFrame constructs a new QFocusFrame object.
func NewQFocusFrame(parent *QWidget) *QFocusFrame {

	return newQFocusFrame(C.QFocusFrame_new(parent.cPointer()))
}

// NewQFocusFrame2 constructs a new QFocusFrame object.
func NewQFocusFrame2() *QFocusFrame {

	return newQFocusFrame(C.QFocusFrame_new2())
}

func (this *QFocusFrame) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFocusFrame_metaObject(this.h))
}

func (this *QFocusFrame) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFocusFrame_metacast(this.h, param1_Cstring))
}

func QFocusFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFocusFrame) SetWidget(widget *QWidget) {
	C.QFocusFrame_setWidget(this.h, widget.cPointer())
}

func (this *QFocusFrame) Widget() *QWidget {
	return newQWidget(C.QFocusFrame_widget(this.h))
}

func QFocusFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFocusFrame) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QFocusFrame_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QFocusFrame) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QFocusFrame_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_event
func miqt_exec_callback_QFocusFrame_event(self *C.QFocusFrame, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QFocusFrame_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QFocusFrame) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QFocusFrame_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_eventFilter
func miqt_exec_callback_QFocusFrame_eventFilter(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QFocusFrame_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFocusFrame) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QFocusFrame_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_paintEvent
func miqt_exec_callback_QFocusFrame_paintEvent(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DevType() int {

	return (int)(C.QFocusFrame_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnDevType(slot func(super func() int) int) {
	ok := C.QFocusFrame_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_devType
func miqt_exec_callback_QFocusFrame_devType(self *C.QFocusFrame, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_SetVisible(visible bool) {

	C.QFocusFrame_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFocusFrame) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFocusFrame_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_setVisible
func miqt_exec_callback_QFocusFrame_setVisible(self *C.QFocusFrame, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFocusFrame) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFocusFrame_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFocusFrame) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFocusFrame_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_sizeHint
func miqt_exec_callback_QFocusFrame_sizeHint(self *C.QFocusFrame, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFocusFrame_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFocusFrame) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFocusFrame_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_minimumSizeHint
func miqt_exec_callback_QFocusFrame_minimumSizeHint(self *C.QFocusFrame, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFocusFrame_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFocusFrame) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFocusFrame_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_heightForWidth
func miqt_exec_callback_QFocusFrame_heightForWidth(self *C.QFocusFrame, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QFocusFrame_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFocusFrame_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_hasHeightForWidth
func miqt_exec_callback_QFocusFrame_hasHeightForWidth(self *C.QFocusFrame, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFocusFrame_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFocusFrame_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_paintEngine
func miqt_exec_callback_QFocusFrame_paintEngine(self *C.QFocusFrame, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFocusFrame_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_mousePressEvent
func miqt_exec_callback_QFocusFrame_mousePressEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFocusFrame_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_mouseReleaseEvent
func miqt_exec_callback_QFocusFrame_mouseReleaseEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFocusFrame_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_mouseDoubleClickEvent
func miqt_exec_callback_QFocusFrame_mouseDoubleClickEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFocusFrame_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_mouseMoveEvent
func miqt_exec_callback_QFocusFrame_mouseMoveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QFocusFrame_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QFocusFrame_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_wheelEvent
func miqt_exec_callback_QFocusFrame_wheelEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QFocusFrame_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFocusFrame_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_keyPressEvent
func miqt_exec_callback_QFocusFrame_keyPressEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QFocusFrame_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFocusFrame_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_keyReleaseEvent
func miqt_exec_callback_QFocusFrame_keyReleaseEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QFocusFrame_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFocusFrame_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_focusInEvent
func miqt_exec_callback_QFocusFrame_focusInEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QFocusFrame_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFocusFrame_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_focusOutEvent
func miqt_exec_callback_QFocusFrame_focusOutEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_EnterEvent(event *QEvent) {

	C.QFocusFrame_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFocusFrame_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_enterEvent
func miqt_exec_callback_QFocusFrame_enterEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFocusFrame_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFocusFrame_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_leaveEvent
func miqt_exec_callback_QFocusFrame_leaveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFocusFrame_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFocusFrame_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_moveEvent
func miqt_exec_callback_QFocusFrame_moveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QFocusFrame_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QFocusFrame_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_resizeEvent
func miqt_exec_callback_QFocusFrame_resizeEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QFocusFrame_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QFocusFrame_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_closeEvent
func miqt_exec_callback_QFocusFrame_closeEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QFocusFrame_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QFocusFrame_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_contextMenuEvent
func miqt_exec_callback_QFocusFrame_contextMenuEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFocusFrame_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFocusFrame_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_tabletEvent
func miqt_exec_callback_QFocusFrame_tabletEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFocusFrame_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFocusFrame_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_actionEvent
func miqt_exec_callback_QFocusFrame_actionEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFocusFrame_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFocusFrame_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_dragEnterEvent
func miqt_exec_callback_QFocusFrame_dragEnterEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFocusFrame_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFocusFrame_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_dragMoveEvent
func miqt_exec_callback_QFocusFrame_dragMoveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFocusFrame_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFocusFrame_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_dragLeaveEvent
func miqt_exec_callback_QFocusFrame_dragLeaveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFocusFrame_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFocusFrame_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_dropEvent
func miqt_exec_callback_QFocusFrame_dropEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QFocusFrame_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QFocusFrame_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_showEvent
func miqt_exec_callback_QFocusFrame_showEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QFocusFrame_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QFocusFrame_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_hideEvent
func miqt_exec_callback_QFocusFrame_hideEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFocusFrame_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QFocusFrame) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QFocusFrame_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_nativeEvent
func miqt_exec_callback_QFocusFrame_nativeEvent(self *C.QFocusFrame, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QFocusFrame_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFocusFrame) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QFocusFrame_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_changeEvent
func miqt_exec_callback_QFocusFrame_changeEvent(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFocusFrame_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFocusFrame) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFocusFrame_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_metric
func miqt_exec_callback_QFocusFrame_metric(self *C.QFocusFrame, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_InitPainter(painter *QPainter) {

	C.QFocusFrame_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFocusFrame) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFocusFrame_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_initPainter
func miqt_exec_callback_QFocusFrame_initPainter(self *C.QFocusFrame, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFocusFrame) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFocusFrame_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFocusFrame) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFocusFrame_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_redirected
func miqt_exec_callback_QFocusFrame_redirected(self *C.QFocusFrame, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QFocusFrame_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFocusFrame_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_sharedPainter
func miqt_exec_callback_QFocusFrame_sharedPainter(self *C.QFocusFrame, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFocusFrame_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFocusFrame) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFocusFrame_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_inputMethodEvent
func miqt_exec_callback_QFocusFrame_inputMethodEvent(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFocusFrame_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFocusFrame) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFocusFrame_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_inputMethodQuery
func miqt_exec_callback_QFocusFrame_inputMethodQuery(self *C.QFocusFrame, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QFocusFrame_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFocusFrame) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFocusFrame_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_focusNextPrevChild
func miqt_exec_callback_QFocusFrame_focusNextPrevChild(self *C.QFocusFrame, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFocusFrame_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFocusFrame_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_timerEvent
func miqt_exec_callback_QFocusFrame_timerEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFocusFrame_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFocusFrame_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_childEvent
func miqt_exec_callback_QFocusFrame_childEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFocusFrame_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFocusFrame_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_customEvent
func miqt_exec_callback_QFocusFrame_customEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFocusFrame_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFocusFrame) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFocusFrame_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_connectNotify
func miqt_exec_callback_QFocusFrame_connectNotify(self *C.QFocusFrame, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFocusFrame_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFocusFrame) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFocusFrame_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFocusFrame_disconnectNotify
func miqt_exec_callback_QFocusFrame_disconnectNotify(self *C.QFocusFrame, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QFocusFrame) Delete() {
	C.QFocusFrame_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFocusFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QFocusFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
