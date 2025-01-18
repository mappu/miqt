package qt6

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
	h          *C.QFocusFrame
	isSubclass bool
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

	ret := newQFocusFrame(C.QFocusFrame_new(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQFocusFrame2 constructs a new QFocusFrame object.
func NewQFocusFrame2() *QFocusFrame {

	ret := newQFocusFrame(C.QFocusFrame_new2())
	ret.isSubclass = true
	return ret
}

func (this *QFocusFrame) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFocusFrame_MetaObject(this.h))
}

func (this *QFocusFrame) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFocusFrame_Metacast(this.h, param1_Cstring))
}

func QFocusFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFocusFrame) SetWidget(widget *QWidget) {
	C.QFocusFrame_SetWidget(this.h, widget.cPointer())
}

func (this *QFocusFrame) Widget() *QWidget {
	return newQWidget(C.QFocusFrame_Widget(this.h))
}

func QFocusFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFocusFrame) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QFocusFrame_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QFocusFrame) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_Event
func miqt_exec_callback_QFocusFrame_Event(self *C.QFocusFrame, cb C.intptr_t, e *C.QEvent) C.bool {
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

	return (bool)(C.QFocusFrame_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QFocusFrame) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_EventFilter
func miqt_exec_callback_QFocusFrame_EventFilter(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	C.QFocusFrame_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFocusFrame) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_PaintEvent
func miqt_exec_callback_QFocusFrame_PaintEvent(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_InitStyleOption(option *QStyleOption) {

	C.QFocusFrame_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QFocusFrame) OnInitStyleOption(slot func(super func(option *QStyleOption), option *QStyleOption)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_InitStyleOption
func miqt_exec_callback_QFocusFrame_InitStyleOption(self *C.QFocusFrame, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOption), option *QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOption(option)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DevType() int {

	return (int)(C.QFocusFrame_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_DevType
func miqt_exec_callback_QFocusFrame_DevType(self *C.QFocusFrame, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_SetVisible(visible bool) {

	C.QFocusFrame_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFocusFrame) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_SetVisible
func miqt_exec_callback_QFocusFrame_SetVisible(self *C.QFocusFrame, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFocusFrame) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFocusFrame_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFocusFrame) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_SizeHint
func miqt_exec_callback_QFocusFrame_SizeHint(self *C.QFocusFrame, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFocusFrame_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFocusFrame) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_MinimumSizeHint
func miqt_exec_callback_QFocusFrame_MinimumSizeHint(self *C.QFocusFrame, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFocusFrame_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFocusFrame) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_HeightForWidth
func miqt_exec_callback_QFocusFrame_HeightForWidth(self *C.QFocusFrame, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QFocusFrame_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_HasHeightForWidth
func miqt_exec_callback_QFocusFrame_HasHeightForWidth(self *C.QFocusFrame, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFocusFrame_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_PaintEngine
func miqt_exec_callback_QFocusFrame_PaintEngine(self *C.QFocusFrame, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_MousePressEvent
func miqt_exec_callback_QFocusFrame_MousePressEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_MouseReleaseEvent
func miqt_exec_callback_QFocusFrame_MouseReleaseEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_MouseDoubleClickEvent
func miqt_exec_callback_QFocusFrame_MouseDoubleClickEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFocusFrame_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_MouseMoveEvent
func miqt_exec_callback_QFocusFrame_MouseMoveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QFocusFrame_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_WheelEvent
func miqt_exec_callback_QFocusFrame_WheelEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QFocusFrame_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_KeyPressEvent
func miqt_exec_callback_QFocusFrame_KeyPressEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QFocusFrame_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_KeyReleaseEvent
func miqt_exec_callback_QFocusFrame_KeyReleaseEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QFocusFrame_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_FocusInEvent
func miqt_exec_callback_QFocusFrame_FocusInEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QFocusFrame_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_FocusOutEvent
func miqt_exec_callback_QFocusFrame_FocusOutEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QFocusFrame_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_EnterEvent
func miqt_exec_callback_QFocusFrame_EnterEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFocusFrame_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_LeaveEvent
func miqt_exec_callback_QFocusFrame_LeaveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFocusFrame_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_MoveEvent
func miqt_exec_callback_QFocusFrame_MoveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QFocusFrame_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_ResizeEvent
func miqt_exec_callback_QFocusFrame_ResizeEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QFocusFrame_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_CloseEvent
func miqt_exec_callback_QFocusFrame_CloseEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QFocusFrame_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_ContextMenuEvent
func miqt_exec_callback_QFocusFrame_ContextMenuEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFocusFrame_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_TabletEvent
func miqt_exec_callback_QFocusFrame_TabletEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFocusFrame_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_ActionEvent
func miqt_exec_callback_QFocusFrame_ActionEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFocusFrame_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_DragEnterEvent
func miqt_exec_callback_QFocusFrame_DragEnterEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFocusFrame_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_DragMoveEvent
func miqt_exec_callback_QFocusFrame_DragMoveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFocusFrame_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_DragLeaveEvent
func miqt_exec_callback_QFocusFrame_DragLeaveEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFocusFrame_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_DropEvent
func miqt_exec_callback_QFocusFrame_DropEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QFocusFrame_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_ShowEvent
func miqt_exec_callback_QFocusFrame_ShowEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QFocusFrame_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFocusFrame) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_HideEvent
func miqt_exec_callback_QFocusFrame_HideEvent(self *C.QFocusFrame, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFocusFrame_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QFocusFrame) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_NativeEvent
func miqt_exec_callback_QFocusFrame_NativeEvent(self *C.QFocusFrame, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFocusFrame) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QFocusFrame_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFocusFrame) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_ChangeEvent
func miqt_exec_callback_QFocusFrame_ChangeEvent(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFocusFrame_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFocusFrame) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_Metric
func miqt_exec_callback_QFocusFrame_Metric(self *C.QFocusFrame, cb C.intptr_t, param1 C.int) C.int {
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

	C.QFocusFrame_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFocusFrame) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_InitPainter
func miqt_exec_callback_QFocusFrame_InitPainter(self *C.QFocusFrame, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFocusFrame) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFocusFrame_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFocusFrame) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_Redirected
func miqt_exec_callback_QFocusFrame_Redirected(self *C.QFocusFrame, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QFocusFrame_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFocusFrame) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_SharedPainter
func miqt_exec_callback_QFocusFrame_SharedPainter(self *C.QFocusFrame, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFocusFrame) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFocusFrame_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFocusFrame) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_InputMethodEvent
func miqt_exec_callback_QFocusFrame_InputMethodEvent(self *C.QFocusFrame, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFocusFrame{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFocusFrame) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFocusFrame_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFocusFrame) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_InputMethodQuery
func miqt_exec_callback_QFocusFrame_InputMethodQuery(self *C.QFocusFrame, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QFocusFrame_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFocusFrame) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QFocusFrame_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFocusFrame_FocusNextPrevChild
func miqt_exec_callback_QFocusFrame_FocusNextPrevChild(self *C.QFocusFrame, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QFocusFrame{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QFocusFrame) Delete() {
	C.QFocusFrame_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFocusFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QFocusFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
