package qt

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
	return newQMetaObject(C.QDial_metaObject(this.h))
}

func (this *QDial) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDial_metacast(this.h, param1_Cstring))
}

func QDial_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDial_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDial_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDial_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDial) Wrapping() bool {
	return (bool)(C.QDial_wrapping(this.h))
}

func (this *QDial) NotchSize() int {
	return (int)(C.QDial_notchSize(this.h))
}

func (this *QDial) SetNotchTarget(target float64) {
	C.QDial_setNotchTarget(this.h, (C.double)(target))
}

func (this *QDial) NotchTarget() float64 {
	return (float64)(C.QDial_notchTarget(this.h))
}

func (this *QDial) NotchesVisible() bool {
	return (bool)(C.QDial_notchesVisible(this.h))
}

func (this *QDial) SizeHint() *QSize {
	_goptr := newQSize(C.QDial_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDial) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QDial_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDial) SetNotchesVisible(visible bool) {
	C.QDial_setNotchesVisible(this.h, (C.bool)(visible))
}

func (this *QDial) SetWrapping(on bool) {
	C.QDial_setWrapping(this.h, (C.bool)(on))
}

func QDial_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDial_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDial_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDial_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDial_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDial_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDial_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDial_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDial) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDial_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDial_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_sizeHint
func miqt_exec_callback_QDial_sizeHint(self *C.QDial, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDial_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDial_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_minimumSizeHint
func miqt_exec_callback_QDial_minimumSizeHint(self *C.QDial, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QDial_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QDial) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QDial_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_event
func miqt_exec_callback_QDial_event(self *C.QDial, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QDial_virtualbase_resizeEvent(unsafe.Pointer(this.h), re.cPointer())

}
func (this *QDial) OnresizeEvent(slot func(super func(re *QResizeEvent), re *QResizeEvent)) {
	ok := C.QDial_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_resizeEvent
func miqt_exec_callback_QDial_resizeEvent(self *C.QDial, cb C.intptr_t, re *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(re *QResizeEvent), re *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(re)

	gofunc((&QDial{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDial) callVirtualBase_PaintEvent(pe *QPaintEvent) {

	C.QDial_virtualbase_paintEvent(unsafe.Pointer(this.h), pe.cPointer())

}
func (this *QDial) OnpaintEvent(slot func(super func(pe *QPaintEvent), pe *QPaintEvent)) {
	ok := C.QDial_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_paintEvent
func miqt_exec_callback_QDial_paintEvent(self *C.QDial, cb C.intptr_t, pe *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pe *QPaintEvent), pe *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(pe)

	gofunc((&QDial{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDial) callVirtualBase_MousePressEvent(me *QMouseEvent) {

	C.QDial_virtualbase_mousePressEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnmousePressEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	ok := C.QDial_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_mousePressEvent
func miqt_exec_callback_QDial_mousePressEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(me)

	gofunc((&QDial{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDial) callVirtualBase_MouseReleaseEvent(me *QMouseEvent) {

	C.QDial_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnmouseReleaseEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	ok := C.QDial_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_mouseReleaseEvent
func miqt_exec_callback_QDial_mouseReleaseEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(me)

	gofunc((&QDial{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDial) callVirtualBase_MouseMoveEvent(me *QMouseEvent) {

	C.QDial_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnmouseMoveEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	ok := C.QDial_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_mouseMoveEvent
func miqt_exec_callback_QDial_mouseMoveEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(me)

	gofunc((&QDial{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDial) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QDial_virtualbase_sliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QDial) OnsliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	ok := C.QDial_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_sliderChange
func miqt_exec_callback_QDial_sliderChange(self *C.QDial, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QDial{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QDial) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QDial_virtualbase_keyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QDial) OnkeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QDial_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_keyPressEvent
func miqt_exec_callback_QDial_keyPressEvent(self *C.QDial, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QDial{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDial) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QDial_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDial) OntimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QDial_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_timerEvent
func miqt_exec_callback_QDial_timerEvent(self *C.QDial, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QDial{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDial) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QDial_virtualbase_wheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDial) OnwheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QDial_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_wheelEvent
func miqt_exec_callback_QDial_wheelEvent(self *C.QDial, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QDial{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDial) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QDial_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDial) OnchangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QDial_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_changeEvent
func miqt_exec_callback_QDial_changeEvent(self *C.QDial, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QDial{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDial) callVirtualBase_DevType() int {

	return (int)(C.QDial_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDial) OndevType(slot func(super func() int) int) {
	ok := C.QDial_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_devType
func miqt_exec_callback_QDial_devType(self *C.QDial, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDial) callVirtualBase_SetVisible(visible bool) {

	C.QDial_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDial) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDial_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_setVisible
func miqt_exec_callback_QDial_setVisible(self *C.QDial, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDial{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDial) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDial_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDial) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDial_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_heightForWidth
func miqt_exec_callback_QDial_heightForWidth(self *C.QDial, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QDial_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDial) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDial_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_hasHeightForWidth
func miqt_exec_callback_QDial_hasHeightForWidth(self *C.QDial, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDial_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDial) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDial_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_paintEngine
func miqt_exec_callback_QDial_paintEngine(self *C.QDial, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDial_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDial_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_mouseDoubleClickEvent
func miqt_exec_callback_QDial_mouseDoubleClickEvent(self *C.QDial, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDial) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDial_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDial_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_keyReleaseEvent
func miqt_exec_callback_QDial_keyReleaseEvent(self *C.QDial, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDial) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDial_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDial_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_focusInEvent
func miqt_exec_callback_QDial_focusInEvent(self *C.QDial, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDial) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDial_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDial_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_focusOutEvent
func miqt_exec_callback_QDial_focusOutEvent(self *C.QDial, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDial) callVirtualBase_EnterEvent(event *QEvent) {

	C.QDial_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDial_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_enterEvent
func miqt_exec_callback_QDial_enterEvent(self *C.QDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDial) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDial_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDial_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_leaveEvent
func miqt_exec_callback_QDial_leaveEvent(self *C.QDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDial) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDial_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDial_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_moveEvent
func miqt_exec_callback_QDial_moveEvent(self *C.QDial, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDial) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDial_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDial_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_closeEvent
func miqt_exec_callback_QDial_closeEvent(self *C.QDial, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDial) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDial_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDial_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_contextMenuEvent
func miqt_exec_callback_QDial_contextMenuEvent(self *C.QDial, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDial) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDial_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDial_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_tabletEvent
func miqt_exec_callback_QDial_tabletEvent(self *C.QDial, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDial) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDial_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDial_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_actionEvent
func miqt_exec_callback_QDial_actionEvent(self *C.QDial, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDial) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDial_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDial_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_dragEnterEvent
func miqt_exec_callback_QDial_dragEnterEvent(self *C.QDial, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDial) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDial_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDial_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_dragMoveEvent
func miqt_exec_callback_QDial_dragMoveEvent(self *C.QDial, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDial) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDial_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDial_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_dragLeaveEvent
func miqt_exec_callback_QDial_dragLeaveEvent(self *C.QDial, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDial) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDial_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDial_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_dropEvent
func miqt_exec_callback_QDial_dropEvent(self *C.QDial, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDial) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDial_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDial_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_showEvent
func miqt_exec_callback_QDial_showEvent(self *C.QDial, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDial) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDial_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDial_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_hideEvent
func miqt_exec_callback_QDial_hideEvent(self *C.QDial, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDial) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDial_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QDial) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QDial_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_nativeEvent
func miqt_exec_callback_QDial_nativeEvent(self *C.QDial, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDial_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDial) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDial_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_metric
func miqt_exec_callback_QDial_metric(self *C.QDial, cb C.intptr_t, param1 C.int) C.int {
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

	C.QDial_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDial) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDial_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_initPainter
func miqt_exec_callback_QDial_initPainter(self *C.QDial, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDial{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDial) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDial_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDial) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDial_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_redirected
func miqt_exec_callback_QDial_redirected(self *C.QDial, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QDial_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDial) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDial_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_sharedPainter
func miqt_exec_callback_QDial_sharedPainter(self *C.QDial, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDial) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDial_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDial) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDial_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_inputMethodEvent
func miqt_exec_callback_QDial_inputMethodEvent(self *C.QDial, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDial{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDial) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDial_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDial_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_inputMethodQuery
func miqt_exec_callback_QDial_inputMethodQuery(self *C.QDial, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QDial_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDial) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDial_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_focusNextPrevChild
func miqt_exec_callback_QDial_focusNextPrevChild(self *C.QDial, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QDial_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDial) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDial_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_eventFilter
func miqt_exec_callback_QDial_eventFilter(self *C.QDial, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QDial_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDial_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_childEvent
func miqt_exec_callback_QDial_childEvent(self *C.QDial, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDial) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDial_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDial) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDial_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_customEvent
func miqt_exec_callback_QDial_customEvent(self *C.QDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDial{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDial) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDial_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDial) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDial_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_connectNotify
func miqt_exec_callback_QDial_connectNotify(self *C.QDial, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDial{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDial) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDial_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDial) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDial_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDial_disconnectNotify
func miqt_exec_callback_QDial_disconnectNotify(self *C.QDial, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QDial_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDial) GoGC() {
	runtime.SetFinalizer(this, func(this *QDial) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
