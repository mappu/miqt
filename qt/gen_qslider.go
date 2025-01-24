package qt

/*

#include "gen_qslider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSlider__TickPosition int

const (
	QSlider__NoTicks        QSlider__TickPosition = 0
	QSlider__TicksAbove     QSlider__TickPosition = 1
	QSlider__TicksLeft      QSlider__TickPosition = 1
	QSlider__TicksBelow     QSlider__TickPosition = 2
	QSlider__TicksRight     QSlider__TickPosition = 2
	QSlider__TicksBothSides QSlider__TickPosition = 3
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

func (this *QSlider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSlider constructs the type using only CGO pointers.
func newQSlider(h *C.QSlider) *QSlider {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	C.QSlider_virtbase(h, &outptr_QAbstractSlider)

	return &QSlider{h: h,
		QAbstractSlider: newQAbstractSlider(outptr_QAbstractSlider)}
}

// UnsafeNewQSlider constructs the type using only unsafe pointers.
func UnsafeNewQSlider(h unsafe.Pointer) *QSlider {
	return newQSlider((*C.QSlider)(h))
}

// NewQSlider constructs a new QSlider object.
func NewQSlider(parent *QWidget) *QSlider {

	return newQSlider(C.QSlider_new(parent.cPointer()))
}

// NewQSlider2 constructs a new QSlider object.
func NewQSlider2() *QSlider {

	return newQSlider(C.QSlider_new2())
}

// NewQSlider3 constructs a new QSlider object.
func NewQSlider3(orientation Orientation) *QSlider {

	return newQSlider(C.QSlider_new3((C.int)(orientation)))
}

// NewQSlider4 constructs a new QSlider object.
func NewQSlider4(orientation Orientation, parent *QWidget) *QSlider {

	return newQSlider(C.QSlider_new4((C.int)(orientation), parent.cPointer()))
}

func (this *QSlider) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSlider_MetaObject(this.h))
}

func (this *QSlider) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSlider_Metacast(this.h, param1_Cstring))
}

func QSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSlider_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSlider) SizeHint() *QSize {
	_goptr := newQSize(C.QSlider_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSlider) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QSlider_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSlider) SetTickPosition(position QSlider__TickPosition) {
	C.QSlider_SetTickPosition(this.h, (C.int)(position))
}

func (this *QSlider) TickPosition() QSlider__TickPosition {
	return (QSlider__TickPosition)(C.QSlider_TickPosition(this.h))
}

func (this *QSlider) SetTickInterval(ti int) {
	C.QSlider_SetTickInterval(this.h, (C.int)(ti))
}

func (this *QSlider) TickInterval() int {
	return (int)(C.QSlider_TickInterval(this.h))
}

func (this *QSlider) Event(event *QEvent) bool {
	return (bool)(C.QSlider_Event(this.h, event.cPointer()))
}

func QSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSlider_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSlider_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSlider) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSlider_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSlider_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_SizeHint
func miqt_exec_callback_QSlider_SizeHint(self *C.QSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSlider_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSlider_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_MinimumSizeHint
func miqt_exec_callback_QSlider_MinimumSizeHint(self *C.QSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSlider_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSlider) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSlider_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_Event
func miqt_exec_callback_QSlider_Event(self *C.QSlider, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_PaintEvent(ev *QPaintEvent) {

	C.QSlider_virtualbase_PaintEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnPaintEvent(slot func(super func(ev *QPaintEvent), ev *QPaintEvent)) {
	ok := C.QSlider_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_PaintEvent
func miqt_exec_callback_QSlider_PaintEvent(self *C.QSlider, cb C.intptr_t, ev *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QPaintEvent), ev *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MousePressEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_MousePressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnMousePressEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QSlider_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_MousePressEvent
func miqt_exec_callback_QSlider_MousePressEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MouseReleaseEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnMouseReleaseEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QSlider_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_MouseReleaseEvent
func miqt_exec_callback_QSlider_MouseReleaseEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MouseMoveEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnMouseMoveEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QSlider_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_MouseMoveEvent
func miqt_exec_callback_QSlider_MouseMoveEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QSlider_virtualbase_SliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QSlider) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	ok := C.QSlider_override_virtual_SliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_SliderChange
func miqt_exec_callback_QSlider_SliderChange(self *C.QSlider, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QSlider{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QSlider) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QSlider_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QSlider_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_KeyPressEvent
func miqt_exec_callback_QSlider_KeyPressEvent(self *C.QSlider, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSlider) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QSlider_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSlider) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QSlider_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_TimerEvent
func miqt_exec_callback_QSlider_TimerEvent(self *C.QSlider, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QSlider{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSlider) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QSlider_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QSlider) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QSlider_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_WheelEvent
func miqt_exec_callback_QSlider_WheelEvent(self *C.QSlider, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QSlider{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QSlider_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QSlider) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QSlider_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_ChangeEvent
func miqt_exec_callback_QSlider_ChangeEvent(self *C.QSlider, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QSlider{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DevType() int {

	return (int)(C.QSlider_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QSlider) OnDevType(slot func(super func() int) int) {
	ok := C.QSlider_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_DevType
func miqt_exec_callback_QSlider_DevType(self *C.QSlider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSlider) callVirtualBase_SetVisible(visible bool) {

	C.QSlider_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSlider) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSlider_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_SetVisible
func miqt_exec_callback_QSlider_SetVisible(self *C.QSlider, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSlider{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSlider) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSlider_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSlider) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSlider_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_HeightForWidth
func miqt_exec_callback_QSlider_HeightForWidth(self *C.QSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSlider) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSlider_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSlider) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSlider_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_HasHeightForWidth
func miqt_exec_callback_QSlider_HasHeightForWidth(self *C.QSlider, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSlider_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QSlider) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSlider_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_PaintEngine
func miqt_exec_callback_QSlider_PaintEngine(self *C.QSlider, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSlider_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSlider_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_MouseDoubleClickEvent
func miqt_exec_callback_QSlider_MouseDoubleClickEvent(self *C.QSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSlider) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSlider_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSlider_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_KeyReleaseEvent
func miqt_exec_callback_QSlider_KeyReleaseEvent(self *C.QSlider, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSlider) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSlider_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSlider_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_FocusInEvent
func miqt_exec_callback_QSlider_FocusInEvent(self *C.QSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSlider) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSlider_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSlider_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_FocusOutEvent
func miqt_exec_callback_QSlider_FocusOutEvent(self *C.QSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSlider) callVirtualBase_EnterEvent(event *QEvent) {

	C.QSlider_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSlider_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_EnterEvent
func miqt_exec_callback_QSlider_EnterEvent(self *C.QSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSlider) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSlider_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSlider_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_LeaveEvent
func miqt_exec_callback_QSlider_LeaveEvent(self *C.QSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSlider_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSlider_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_MoveEvent
func miqt_exec_callback_QSlider_MoveEvent(self *C.QSlider, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QSlider_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QSlider_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_ResizeEvent
func miqt_exec_callback_QSlider_ResizeEvent(self *C.QSlider, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSlider) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSlider_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSlider_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_CloseEvent
func miqt_exec_callback_QSlider_CloseEvent(self *C.QSlider, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSlider_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSlider_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_ContextMenuEvent
func miqt_exec_callback_QSlider_ContextMenuEvent(self *C.QSlider, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSlider) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSlider_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSlider_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_TabletEvent
func miqt_exec_callback_QSlider_TabletEvent(self *C.QSlider, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSlider_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSlider_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_ActionEvent
func miqt_exec_callback_QSlider_ActionEvent(self *C.QSlider, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSlider_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSlider_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_DragEnterEvent
func miqt_exec_callback_QSlider_DragEnterEvent(self *C.QSlider, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSlider_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSlider_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_DragMoveEvent
func miqt_exec_callback_QSlider_DragMoveEvent(self *C.QSlider, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSlider_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSlider_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_DragLeaveEvent
func miqt_exec_callback_QSlider_DragLeaveEvent(self *C.QSlider, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSlider_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSlider_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_DropEvent
func miqt_exec_callback_QSlider_DropEvent(self *C.QSlider, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSlider_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSlider_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_ShowEvent
func miqt_exec_callback_QSlider_ShowEvent(self *C.QSlider, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSlider) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSlider_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSlider_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_HideEvent
func miqt_exec_callback_QSlider_HideEvent(self *C.QSlider, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSlider) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSlider_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QSlider) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QSlider_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_NativeEvent
func miqt_exec_callback_QSlider_NativeEvent(self *C.QSlider, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSlider_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSlider) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSlider_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_Metric
func miqt_exec_callback_QSlider_Metric(self *C.QSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSlider) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSlider_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSlider) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSlider_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_InitPainter
func miqt_exec_callback_QSlider_InitPainter(self *C.QSlider, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSlider{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSlider) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSlider_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSlider) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSlider_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_Redirected
func miqt_exec_callback_QSlider_Redirected(self *C.QSlider, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSlider_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSlider) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSlider_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_SharedPainter
func miqt_exec_callback_QSlider_SharedPainter(self *C.QSlider, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSlider_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSlider) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSlider_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_InputMethodEvent
func miqt_exec_callback_QSlider_InputMethodEvent(self *C.QSlider, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSlider{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSlider) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSlider_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSlider_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_InputMethodQuery
func miqt_exec_callback_QSlider_InputMethodQuery(self *C.QSlider, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSlider_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSlider) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSlider_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_FocusNextPrevChild
func miqt_exec_callback_QSlider_FocusNextPrevChild(self *C.QSlider, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSlider_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSlider) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSlider_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_EventFilter
func miqt_exec_callback_QSlider_EventFilter(self *C.QSlider, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSlider_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSlider_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_ChildEvent
func miqt_exec_callback_QSlider_ChildEvent(self *C.QSlider, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSlider) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSlider_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSlider_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_CustomEvent
func miqt_exec_callback_QSlider_CustomEvent(self *C.QSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSlider_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSlider) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSlider_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_ConnectNotify
func miqt_exec_callback_QSlider_ConnectNotify(self *C.QSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSlider{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSlider) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSlider_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSlider) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSlider_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_DisconnectNotify
func miqt_exec_callback_QSlider_DisconnectNotify(self *C.QSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSlider{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSlider) Delete() {
	C.QSlider_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
