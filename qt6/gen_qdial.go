package qt6

/*

#include "gen_qdial.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

func (this *QDial) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDial constructs the type using only CGO pointers.
func newQDial(h *C.QDial) *QDial {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	C.QDial_virtbase(h, &outptr_QAbstractSlider)

	return &QDial{h: h,
		QAbstractSlider: newQAbstractSlider(outptr_QAbstractSlider)}
}

// UnsafeNewQDial constructs the type using only unsafe pointers.
func UnsafeNewQDial(h unsafe.Pointer) *QDial {
	return newQDial((*C.QDial)(h))
}

// NewQDial constructs a new QDial object.
func NewQDial(parent *QWidget) *QDial {

	return newQDial(C.QDial_new(parent.cPointer()))
}

// NewQDial2 constructs a new QDial object.
func NewQDial2() *QDial {

	return newQDial(C.QDial_new2())
}

func (this *QDial) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDial_MetaObject(this.h))
}

func (this *QDial) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDial_Metacast(this.h, param1_Cstring))
}

func QDial_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDial_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDial) Wrapping() bool {
	return (bool)(C.QDial_Wrapping(this.h))
}

func (this *QDial) NotchSize() int {
	return (int)(C.QDial_NotchSize(this.h))
}

func (this *QDial) SetNotchTarget(target float64) {
	C.QDial_SetNotchTarget(this.h, (C.double)(target))
}

func (this *QDial) NotchTarget() float64 {
	return (float64)(C.QDial_NotchTarget(this.h))
}

func (this *QDial) NotchesVisible() bool {
	return (bool)(C.QDial_NotchesVisible(this.h))
}

func (this *QDial) SizeHint() *QSize {
	_goptr := newQSize(C.QDial_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDial) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QDial_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	var _ms C.struct_miqt_string = C.QDial_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDial_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDial_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDial) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDial_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDial_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_SizeHint
func miqt_exec_callback_QDial_SizeHint(self *C.QDial, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDial_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDial_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_MinimumSizeHint
func miqt_exec_callback_QDial_MinimumSizeHint(self *C.QDial, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QDial_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QDial) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QDial_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_Event
func miqt_exec_callback_QDial_Event(self *C.QDial, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_ResizeEvent(re *QResizeEvent) {

	C.QDial_virtualbase_ResizeEvent(unsafe.Pointer(this.h), re.cPointer())

}
func (this *QDial) OnResizeEvent(slot func(super func(re *QResizeEvent), re *QResizeEvent)) {
	ok := C.QDial_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_ResizeEvent
func miqt_exec_callback_QDial_ResizeEvent(self *C.QDial, cb C.intptr_t, re *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(re *QResizeEvent), re *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(re)

	gofunc((&QDial{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDial) callVirtualBase_PaintEvent(pe *QPaintEvent) {

	C.QDial_virtualbase_PaintEvent(unsafe.Pointer(this.h), pe.cPointer())

}
func (this *QDial) OnPaintEvent(slot func(super func(pe *QPaintEvent), pe *QPaintEvent)) {
	ok := C.QDial_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_PaintEvent
func miqt_exec_callback_QDial_PaintEvent(self *C.QDial, cb C.intptr_t, pe *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pe *QPaintEvent), pe *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(pe)

	gofunc((&QDial{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDial) callVirtualBase_MousePressEvent(me *QMouseEvent) {

	C.QDial_virtualbase_MousePressEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnMousePressEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	ok := C.QDial_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_MousePressEvent
func miqt_exec_callback_QDial_MousePressEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(me)

	gofunc((&QDial{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDial) callVirtualBase_MouseReleaseEvent(me *QMouseEvent) {

	C.QDial_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnMouseReleaseEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	ok := C.QDial_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_MouseReleaseEvent
func miqt_exec_callback_QDial_MouseReleaseEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(me)

	gofunc((&QDial{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDial) callVirtualBase_MouseMoveEvent(me *QMouseEvent) {

	C.QDial_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnMouseMoveEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	ok := C.QDial_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_MouseMoveEvent
func miqt_exec_callback_QDial_MouseMoveEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(me)

	gofunc((&QDial{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDial) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QDial_virtualbase_SliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QDial) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	ok := C.QDial_override_virtual_SliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_SliderChange
func miqt_exec_callback_QDial_SliderChange(self *C.QDial, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QDial{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QDial) callVirtualBase_InitStyleOption(option *QStyleOptionSlider) {

	C.QDial_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QDial) OnInitStyleOption(slot func(super func(option *QStyleOptionSlider), option *QStyleOptionSlider)) {
	ok := C.QDial_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_InitStyleOption
func miqt_exec_callback_QDial_InitStyleOption(self *C.QDial, cb C.intptr_t, option *C.QStyleOptionSlider) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSlider), option *QStyleOptionSlider))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSlider(option)

	gofunc((&QDial{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QDial) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QDial_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QDial) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QDial_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_KeyPressEvent
func miqt_exec_callback_QDial_KeyPressEvent(self *C.QDial, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QDial{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDial) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QDial_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDial) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QDial_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_TimerEvent
func miqt_exec_callback_QDial_TimerEvent(self *C.QDial, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QDial{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDial) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QDial_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDial) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QDial_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_WheelEvent
func miqt_exec_callback_QDial_WheelEvent(self *C.QDial, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QDial{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDial) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QDial_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDial) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QDial_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_ChangeEvent
func miqt_exec_callback_QDial_ChangeEvent(self *C.QDial, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QDial{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDial) callVirtualBase_DevType() int {

	return (int)(C.QDial_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QDial) OnDevType(slot func(super func() int) int) {
	ok := C.QDial_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_DevType
func miqt_exec_callback_QDial_DevType(self *C.QDial, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDial) callVirtualBase_SetVisible(visible bool) {

	C.QDial_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDial) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDial_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_SetVisible
func miqt_exec_callback_QDial_SetVisible(self *C.QDial, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDial{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDial) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDial_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDial) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDial_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_HeightForWidth
func miqt_exec_callback_QDial_HeightForWidth(self *C.QDial, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDial) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDial_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDial) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDial_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_HasHeightForWidth
func miqt_exec_callback_QDial_HasHeightForWidth(self *C.QDial, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDial_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QDial) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDial_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_PaintEngine
func miqt_exec_callback_QDial_PaintEngine(self *C.QDial, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDial_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDial_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_MouseDoubleClickEvent
func miqt_exec_callback_QDial_MouseDoubleClickEvent(self *C.QDial, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDial) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDial_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDial_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_KeyReleaseEvent
func miqt_exec_callback_QDial_KeyReleaseEvent(self *C.QDial, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDial) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDial_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDial_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_FocusInEvent
func miqt_exec_callback_QDial_FocusInEvent(self *C.QDial, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDial) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDial_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDial_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_FocusOutEvent
func miqt_exec_callback_QDial_FocusOutEvent(self *C.QDial, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDial) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDial_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDial_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_EnterEvent
func miqt_exec_callback_QDial_EnterEvent(self *C.QDial, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDial) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDial_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDial_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_LeaveEvent
func miqt_exec_callback_QDial_LeaveEvent(self *C.QDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDial) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDial_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDial_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_MoveEvent
func miqt_exec_callback_QDial_MoveEvent(self *C.QDial, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDial) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDial_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDial_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_CloseEvent
func miqt_exec_callback_QDial_CloseEvent(self *C.QDial, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDial) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDial_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDial_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_ContextMenuEvent
func miqt_exec_callback_QDial_ContextMenuEvent(self *C.QDial, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDial) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDial_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDial_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_TabletEvent
func miqt_exec_callback_QDial_TabletEvent(self *C.QDial, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDial) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDial_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDial_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_ActionEvent
func miqt_exec_callback_QDial_ActionEvent(self *C.QDial, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDial) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDial_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDial_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_DragEnterEvent
func miqt_exec_callback_QDial_DragEnterEvent(self *C.QDial, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDial) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDial_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDial_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_DragMoveEvent
func miqt_exec_callback_QDial_DragMoveEvent(self *C.QDial, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDial) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDial_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDial_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_DragLeaveEvent
func miqt_exec_callback_QDial_DragLeaveEvent(self *C.QDial, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDial) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDial_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDial_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_DropEvent
func miqt_exec_callback_QDial_DropEvent(self *C.QDial, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDial) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDial_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDial_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_ShowEvent
func miqt_exec_callback_QDial_ShowEvent(self *C.QDial, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDial) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDial_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDial_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_HideEvent
func miqt_exec_callback_QDial_HideEvent(self *C.QDial, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDial) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDial_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDial) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDial_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_NativeEvent
func miqt_exec_callback_QDial_NativeEvent(self *C.QDial, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDial_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDial) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDial_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_Metric
func miqt_exec_callback_QDial_Metric(self *C.QDial, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDial) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDial_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDial) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDial_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_InitPainter
func miqt_exec_callback_QDial_InitPainter(self *C.QDial, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDial{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDial) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDial_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDial) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDial_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_Redirected
func miqt_exec_callback_QDial_Redirected(self *C.QDial, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDial_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDial) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDial_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_SharedPainter
func miqt_exec_callback_QDial_SharedPainter(self *C.QDial, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDial_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDial) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDial_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_InputMethodEvent
func miqt_exec_callback_QDial_InputMethodEvent(self *C.QDial, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDial{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDial) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDial_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDial_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_InputMethodQuery
func miqt_exec_callback_QDial_InputMethodQuery(self *C.QDial, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDial_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDial) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDial_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_FocusNextPrevChild
func miqt_exec_callback_QDial_FocusNextPrevChild(self *C.QDial, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDial_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDial) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDial_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_EventFilter
func miqt_exec_callback_QDial_EventFilter(self *C.QDial, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDial_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDial_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_ChildEvent
func miqt_exec_callback_QDial_ChildEvent(self *C.QDial, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDial) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDial_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDial_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_CustomEvent
func miqt_exec_callback_QDial_CustomEvent(self *C.QDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDial) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDial_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDial) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDial_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_ConnectNotify
func miqt_exec_callback_QDial_ConnectNotify(self *C.QDial, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDial{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDial) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDial_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDial) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDial_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_DisconnectNotify
func miqt_exec_callback_QDial_DisconnectNotify(self *C.QDial, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDial{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDial) Delete() {
	C.QDial_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDial) GoGC() {
	runtime.SetFinalizer(this, func(this *QDial) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
