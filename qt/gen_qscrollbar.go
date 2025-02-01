package qt

/*

#include "gen_qscrollbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

func (this *QScrollBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScrollBar constructs the type using only CGO pointers.
func newQScrollBar(h *C.QScrollBar) *QScrollBar {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	C.QScrollBar_virtbase(h, &outptr_QAbstractSlider)

	return &QScrollBar{h: h,
		QAbstractSlider: newQAbstractSlider(outptr_QAbstractSlider)}
}

// UnsafeNewQScrollBar constructs the type using only unsafe pointers.
func UnsafeNewQScrollBar(h unsafe.Pointer) *QScrollBar {
	return newQScrollBar((*C.QScrollBar)(h))
}

// NewQScrollBar constructs a new QScrollBar object.
func NewQScrollBar(parent *QWidget) *QScrollBar {

	return newQScrollBar(C.QScrollBar_new(parent.cPointer()))
}

// NewQScrollBar2 constructs a new QScrollBar object.
func NewQScrollBar2() *QScrollBar {

	return newQScrollBar(C.QScrollBar_new2())
}

// NewQScrollBar3 constructs a new QScrollBar object.
func NewQScrollBar3(param1 Orientation) *QScrollBar {

	return newQScrollBar(C.QScrollBar_new3((C.int)(param1)))
}

// NewQScrollBar4 constructs a new QScrollBar object.
func NewQScrollBar4(param1 Orientation, parent *QWidget) *QScrollBar {

	return newQScrollBar(C.QScrollBar_new4((C.int)(param1), parent.cPointer()))
}

func (this *QScrollBar) MetaObject() *QMetaObject {
	return newQMetaObject(C.QScrollBar_metaObject(this.h))
}

func (this *QScrollBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScrollBar_metacast(this.h, param1_Cstring))
}

func QScrollBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollBar) SizeHint() *QSize {
	_goptr := newQSize(C.QScrollBar_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollBar) Event(event *QEvent) bool {
	return (bool)(C.QScrollBar_event(this.h, event.cPointer()))
}

func QScrollBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollBar) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QScrollBar_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QScrollBar_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_sizeHint
func miqt_exec_callback_QScrollBar_sizeHint(self *C.QScrollBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollBar) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QScrollBar_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QScrollBar) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QScrollBar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_event
func miqt_exec_callback_QScrollBar_event(self *C.QScrollBar, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QScrollBar_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QScrollBar_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_wheelEvent
func miqt_exec_callback_QScrollBar_wheelEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QScrollBar_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QScrollBar_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_paintEvent
func miqt_exec_callback_QScrollBar_paintEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QScrollBar_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QScrollBar_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_mousePressEvent
func miqt_exec_callback_QScrollBar_mousePressEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QScrollBar_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QScrollBar_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_mouseReleaseEvent
func miqt_exec_callback_QScrollBar_mouseReleaseEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QScrollBar_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QScrollBar_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_mouseMoveEvent
func miqt_exec_callback_QScrollBar_mouseMoveEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QScrollBar_virtualbase_hideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	ok := C.QScrollBar_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_hideEvent
func miqt_exec_callback_QScrollBar_hideEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QScrollBar_virtualbase_sliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QScrollBar) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	ok := C.QScrollBar_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_sliderChange
func miqt_exec_callback_QScrollBar_sliderChange(self *C.QScrollBar, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QScrollBar{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QScrollBar) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QScrollBar_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QScrollBar_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_contextMenuEvent
func miqt_exec_callback_QScrollBar_contextMenuEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QScrollBar_virtualbase_keyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QScrollBar) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QScrollBar_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_keyPressEvent
func miqt_exec_callback_QScrollBar_keyPressEvent(self *C.QScrollBar, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QScrollBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QScrollBar_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QScrollBar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_timerEvent
func miqt_exec_callback_QScrollBar_timerEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QScrollBar_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QScrollBar) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QScrollBar_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_changeEvent
func miqt_exec_callback_QScrollBar_changeEvent(self *C.QScrollBar, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_DevType() int {

	return (int)(C.QScrollBar_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QScrollBar) OnDevType(slot func(super func() int) int) {
	ok := C.QScrollBar_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_devType
func miqt_exec_callback_QScrollBar_devType(self *C.QScrollBar, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_SetVisible(visible bool) {

	C.QScrollBar_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QScrollBar) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QScrollBar_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_setVisible
func miqt_exec_callback_QScrollBar_setVisible(self *C.QScrollBar, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QScrollBar{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QScrollBar) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QScrollBar_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollBar) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QScrollBar_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_minimumSizeHint
func miqt_exec_callback_QScrollBar_minimumSizeHint(self *C.QScrollBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollBar) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QScrollBar_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QScrollBar) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QScrollBar_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_heightForWidth
func miqt_exec_callback_QScrollBar_heightForWidth(self *C.QScrollBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QScrollBar_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QScrollBar) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QScrollBar_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_hasHeightForWidth
func miqt_exec_callback_QScrollBar_hasHeightForWidth(self *C.QScrollBar, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QScrollBar_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QScrollBar) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QScrollBar_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_paintEngine
func miqt_exec_callback_QScrollBar_paintEngine(self *C.QScrollBar, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QScrollBar) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QScrollBar_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QScrollBar_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_mouseDoubleClickEvent
func miqt_exec_callback_QScrollBar_mouseDoubleClickEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QScrollBar_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QScrollBar_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_keyReleaseEvent
func miqt_exec_callback_QScrollBar_keyReleaseEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QScrollBar_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QScrollBar_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_focusInEvent
func miqt_exec_callback_QScrollBar_focusInEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QScrollBar_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QScrollBar_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_focusOutEvent
func miqt_exec_callback_QScrollBar_focusOutEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_EnterEvent(event *QEvent) {

	C.QScrollBar_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QScrollBar_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_enterEvent
func miqt_exec_callback_QScrollBar_enterEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QScrollBar_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QScrollBar_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_leaveEvent
func miqt_exec_callback_QScrollBar_leaveEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QScrollBar_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QScrollBar_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_moveEvent
func miqt_exec_callback_QScrollBar_moveEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QScrollBar_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QScrollBar_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_resizeEvent
func miqt_exec_callback_QScrollBar_resizeEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QScrollBar_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QScrollBar_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_closeEvent
func miqt_exec_callback_QScrollBar_closeEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QScrollBar_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QScrollBar_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_tabletEvent
func miqt_exec_callback_QScrollBar_tabletEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QScrollBar_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QScrollBar_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_actionEvent
func miqt_exec_callback_QScrollBar_actionEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QScrollBar_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QScrollBar_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_dragEnterEvent
func miqt_exec_callback_QScrollBar_dragEnterEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QScrollBar_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QScrollBar_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_dragMoveEvent
func miqt_exec_callback_QScrollBar_dragMoveEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QScrollBar_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QScrollBar_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_dragLeaveEvent
func miqt_exec_callback_QScrollBar_dragLeaveEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QScrollBar_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QScrollBar_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_dropEvent
func miqt_exec_callback_QScrollBar_dropEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QScrollBar_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QScrollBar_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_showEvent
func miqt_exec_callback_QScrollBar_showEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QScrollBar_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QScrollBar) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QScrollBar_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_nativeEvent
func miqt_exec_callback_QScrollBar_nativeEvent(self *C.QScrollBar, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QScrollBar_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QScrollBar) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QScrollBar_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_metric
func miqt_exec_callback_QScrollBar_metric(self *C.QScrollBar, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_InitPainter(painter *QPainter) {

	C.QScrollBar_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QScrollBar) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QScrollBar_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_initPainter
func miqt_exec_callback_QScrollBar_initPainter(self *C.QScrollBar, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QScrollBar{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QScrollBar) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QScrollBar_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QScrollBar) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QScrollBar_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_redirected
func miqt_exec_callback_QScrollBar_redirected(self *C.QScrollBar, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QScrollBar) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QScrollBar_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QScrollBar) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QScrollBar_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_sharedPainter
func miqt_exec_callback_QScrollBar_sharedPainter(self *C.QScrollBar, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QScrollBar) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QScrollBar_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QScrollBar_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_inputMethodEvent
func miqt_exec_callback_QScrollBar_inputMethodEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QScrollBar_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollBar) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QScrollBar_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_inputMethodQuery
func miqt_exec_callback_QScrollBar_inputMethodQuery(self *C.QScrollBar, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QScrollBar) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QScrollBar_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QScrollBar) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QScrollBar_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_focusNextPrevChild
func miqt_exec_callback_QScrollBar_focusNextPrevChild(self *C.QScrollBar, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QScrollBar_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QScrollBar) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QScrollBar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_eventFilter
func miqt_exec_callback_QScrollBar_eventFilter(self *C.QScrollBar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScrollBar) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QScrollBar_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QScrollBar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_childEvent
func miqt_exec_callback_QScrollBar_childEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_CustomEvent(event *QEvent) {

	C.QScrollBar_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QScrollBar) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QScrollBar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_customEvent
func miqt_exec_callback_QScrollBar_customEvent(self *C.QScrollBar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QScrollBar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QScrollBar_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QScrollBar) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QScrollBar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_connectNotify
func miqt_exec_callback_QScrollBar_connectNotify(self *C.QScrollBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScrollBar) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QScrollBar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QScrollBar) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QScrollBar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScrollBar_disconnectNotify
func miqt_exec_callback_QScrollBar_disconnectNotify(self *C.QScrollBar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QScrollBar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScrollBar) Delete() {
	C.QScrollBar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
