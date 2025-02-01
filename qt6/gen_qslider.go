package qt6

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
	return newQMetaObject(C.QSlider_metaObject(this.h))
}

func (this *QSlider) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSlider_metacast(this.h, param1_Cstring))
}

func QSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSlider) SizeHint() *QSize {
	_goptr := newQSize(C.QSlider_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSlider) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QSlider_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSlider) SetTickPosition(position QSlider__TickPosition) {
	C.QSlider_setTickPosition(this.h, (C.int)(position))
}

func (this *QSlider) TickPosition() QSlider__TickPosition {
	return (QSlider__TickPosition)(C.QSlider_tickPosition(this.h))
}

func (this *QSlider) SetTickInterval(ti int) {
	C.QSlider_setTickInterval(this.h, (C.int)(ti))
}

func (this *QSlider) TickInterval() int {
	return (int)(C.QSlider_tickInterval(this.h))
}

func (this *QSlider) Event(event *QEvent) bool {
	return (bool)(C.QSlider_event(this.h, event.cPointer()))
}

func QSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSlider_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSlider) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSlider_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSlider_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_sizeHint
func miqt_exec_callback_QSlider_sizeHint(self *C.QSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSlider_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSlider_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_minimumSizeHint
func miqt_exec_callback_QSlider_minimumSizeHint(self *C.QSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSlider_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSlider) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSlider_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_event
func miqt_exec_callback_QSlider_event(self *C.QSlider, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QSlider_virtualbase_paintEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnpaintEvent(slot func(super func(ev *QPaintEvent), ev *QPaintEvent)) {
	ok := C.QSlider_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_paintEvent
func miqt_exec_callback_QSlider_paintEvent(self *C.QSlider, cb C.intptr_t, ev *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QPaintEvent), ev *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MousePressEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_mousePressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnmousePressEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QSlider_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_mousePressEvent
func miqt_exec_callback_QSlider_mousePressEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MouseReleaseEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnmouseReleaseEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QSlider_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_mouseReleaseEvent
func miqt_exec_callback_QSlider_mouseReleaseEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MouseMoveEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnmouseMoveEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QSlider_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_mouseMoveEvent
func miqt_exec_callback_QSlider_mouseMoveEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_InitStyleOption(option *QStyleOptionSlider) {

	C.QSlider_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QSlider) OninitStyleOption(slot func(super func(option *QStyleOptionSlider), option *QStyleOptionSlider)) {
	ok := C.QSlider_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_initStyleOption
func miqt_exec_callback_QSlider_initStyleOption(self *C.QSlider, cb C.intptr_t, option *C.QStyleOptionSlider) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSlider), option *QStyleOptionSlider))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSlider(option)

	gofunc((&QSlider{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QSlider) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QSlider_virtualbase_sliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QSlider) OnsliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	ok := C.QSlider_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_sliderChange
func miqt_exec_callback_QSlider_sliderChange(self *C.QSlider, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QSlider{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QSlider) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QSlider_virtualbase_keyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnkeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QSlider_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_keyPressEvent
func miqt_exec_callback_QSlider_keyPressEvent(self *C.QSlider, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QSlider{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSlider) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QSlider_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSlider) OntimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QSlider_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_timerEvent
func miqt_exec_callback_QSlider_timerEvent(self *C.QSlider, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QSlider{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSlider) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QSlider_virtualbase_wheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QSlider) OnwheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QSlider_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_wheelEvent
func miqt_exec_callback_QSlider_wheelEvent(self *C.QSlider, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QSlider{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QSlider_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QSlider) OnchangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QSlider_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_changeEvent
func miqt_exec_callback_QSlider_changeEvent(self *C.QSlider, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QSlider{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DevType() int {

	return (int)(C.QSlider_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSlider) OndevType(slot func(super func() int) int) {
	ok := C.QSlider_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_devType
func miqt_exec_callback_QSlider_devType(self *C.QSlider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSlider) callVirtualBase_SetVisible(visible bool) {

	C.QSlider_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSlider) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSlider_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_setVisible
func miqt_exec_callback_QSlider_setVisible(self *C.QSlider, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSlider{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSlider) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSlider_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSlider) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSlider_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_heightForWidth
func miqt_exec_callback_QSlider_heightForWidth(self *C.QSlider, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QSlider_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSlider) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSlider_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_hasHeightForWidth
func miqt_exec_callback_QSlider_hasHeightForWidth(self *C.QSlider, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSlider_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QSlider) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSlider_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_paintEngine
func miqt_exec_callback_QSlider_paintEngine(self *C.QSlider, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSlider_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSlider_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_mouseDoubleClickEvent
func miqt_exec_callback_QSlider_mouseDoubleClickEvent(self *C.QSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSlider) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSlider_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSlider_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_keyReleaseEvent
func miqt_exec_callback_QSlider_keyReleaseEvent(self *C.QSlider, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSlider) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSlider_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSlider_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_focusInEvent
func miqt_exec_callback_QSlider_focusInEvent(self *C.QSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSlider) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSlider_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSlider_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_focusOutEvent
func miqt_exec_callback_QSlider_focusOutEvent(self *C.QSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSlider) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QSlider_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QSlider_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_enterEvent
func miqt_exec_callback_QSlider_enterEvent(self *C.QSlider, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSlider) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSlider_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSlider_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_leaveEvent
func miqt_exec_callback_QSlider_leaveEvent(self *C.QSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSlider_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSlider_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_moveEvent
func miqt_exec_callback_QSlider_moveEvent(self *C.QSlider, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QSlider_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QSlider_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_resizeEvent
func miqt_exec_callback_QSlider_resizeEvent(self *C.QSlider, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSlider) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSlider_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSlider_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_closeEvent
func miqt_exec_callback_QSlider_closeEvent(self *C.QSlider, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSlider_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSlider_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_contextMenuEvent
func miqt_exec_callback_QSlider_contextMenuEvent(self *C.QSlider, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSlider) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSlider_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSlider_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_tabletEvent
func miqt_exec_callback_QSlider_tabletEvent(self *C.QSlider, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSlider_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSlider_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_actionEvent
func miqt_exec_callback_QSlider_actionEvent(self *C.QSlider, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSlider_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSlider_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_dragEnterEvent
func miqt_exec_callback_QSlider_dragEnterEvent(self *C.QSlider, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSlider_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSlider_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_dragMoveEvent
func miqt_exec_callback_QSlider_dragMoveEvent(self *C.QSlider, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSlider_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSlider_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_dragLeaveEvent
func miqt_exec_callback_QSlider_dragLeaveEvent(self *C.QSlider, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSlider_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSlider_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_dropEvent
func miqt_exec_callback_QSlider_dropEvent(self *C.QSlider, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSlider_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSlider_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_showEvent
func miqt_exec_callback_QSlider_showEvent(self *C.QSlider, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSlider) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSlider_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSlider_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_hideEvent
func miqt_exec_callback_QSlider_hideEvent(self *C.QSlider, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSlider) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSlider_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QSlider) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QSlider_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_nativeEvent
func miqt_exec_callback_QSlider_nativeEvent(self *C.QSlider, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSlider_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSlider) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSlider_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_metric
func miqt_exec_callback_QSlider_metric(self *C.QSlider, cb C.intptr_t, param1 C.int) C.int {
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

	C.QSlider_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSlider) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSlider_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_initPainter
func miqt_exec_callback_QSlider_initPainter(self *C.QSlider, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSlider{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSlider) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSlider_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSlider) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSlider_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_redirected
func miqt_exec_callback_QSlider_redirected(self *C.QSlider, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QSlider_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSlider) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSlider_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_sharedPainter
func miqt_exec_callback_QSlider_sharedPainter(self *C.QSlider, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSlider) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSlider_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSlider) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSlider_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_inputMethodEvent
func miqt_exec_callback_QSlider_inputMethodEvent(self *C.QSlider, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSlider{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSlider) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSlider_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSlider_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_inputMethodQuery
func miqt_exec_callback_QSlider_inputMethodQuery(self *C.QSlider, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QSlider_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSlider) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSlider_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_focusNextPrevChild
func miqt_exec_callback_QSlider_focusNextPrevChild(self *C.QSlider, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QSlider_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSlider) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSlider_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_eventFilter
func miqt_exec_callback_QSlider_eventFilter(self *C.QSlider, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QSlider_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSlider_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_childEvent
func miqt_exec_callback_QSlider_childEvent(self *C.QSlider, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSlider) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSlider_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSlider) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSlider_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_customEvent
func miqt_exec_callback_QSlider_customEvent(self *C.QSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSlider{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSlider_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSlider) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSlider_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_connectNotify
func miqt_exec_callback_QSlider_connectNotify(self *C.QSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSlider{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSlider) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSlider_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSlider) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSlider_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSlider_disconnectNotify
func miqt_exec_callback_QSlider_disconnectNotify(self *C.QSlider, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QSlider_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
