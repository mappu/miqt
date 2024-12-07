package qt6

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
	h          *C.QScrollBar
	isSubclass bool
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

	ret := newQScrollBar(C.QScrollBar_new(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQScrollBar2 constructs a new QScrollBar object.
func NewQScrollBar2() *QScrollBar {

	ret := newQScrollBar(C.QScrollBar_new2())
	ret.isSubclass = true
	return ret
}

// NewQScrollBar3 constructs a new QScrollBar object.
func NewQScrollBar3(param1 Orientation) *QScrollBar {

	ret := newQScrollBar(C.QScrollBar_new3((C.int)(param1)))
	ret.isSubclass = true
	return ret
}

// NewQScrollBar4 constructs a new QScrollBar object.
func NewQScrollBar4(param1 Orientation, parent *QWidget) *QScrollBar {

	ret := newQScrollBar(C.QScrollBar_new4((C.int)(param1), parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QScrollBar) MetaObject() *QMetaObject {
	return newQMetaObject(C.QScrollBar_MetaObject(this.h))
}

func (this *QScrollBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScrollBar_Metacast(this.h, param1_Cstring))
}

func QScrollBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollBar) SizeHint() *QSize {
	_goptr := newQSize(C.QScrollBar_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollBar) Event(event *QEvent) bool {
	return (bool)(C.QScrollBar_Event(this.h, event.cPointer()))
}

func QScrollBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollBar) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QScrollBar_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScrollBar) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_SizeHint
func miqt_exec_callback_QScrollBar_SizeHint(self *C.QScrollBar, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QScrollBar{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QScrollBar) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QScrollBar_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QScrollBar) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_Event
func miqt_exec_callback_QScrollBar_Event(self *C.QScrollBar, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QScrollBar_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_WheelEvent
func miqt_exec_callback_QScrollBar_WheelEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QScrollBar_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_PaintEvent
func miqt_exec_callback_QScrollBar_PaintEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QScrollBar_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_MousePressEvent
func miqt_exec_callback_QScrollBar_MousePressEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QScrollBar_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_MouseReleaseEvent
func miqt_exec_callback_QScrollBar_MouseReleaseEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QScrollBar_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_MouseMoveEvent
func miqt_exec_callback_QScrollBar_MouseMoveEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QScrollBar_virtualbase_HideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_HideEvent
func miqt_exec_callback_QScrollBar_HideEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QScrollBar_virtualbase_SliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QScrollBar) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_SliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_SliderChange
func miqt_exec_callback_QScrollBar_SliderChange(self *C.QScrollBar, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QScrollBar{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QScrollBar) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QScrollBar_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_ContextMenuEvent
func miqt_exec_callback_QScrollBar_ContextMenuEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_InitStyleOption(option *QStyleOptionSlider) {

	C.QScrollBar_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QScrollBar) OnInitStyleOption(slot func(super func(option *QStyleOptionSlider), option *QStyleOptionSlider)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_InitStyleOption
func miqt_exec_callback_QScrollBar_InitStyleOption(self *C.QScrollBar, cb C.intptr_t, option *C.QStyleOptionSlider) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSlider), option *QStyleOptionSlider))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionSlider(option)

	gofunc((&QScrollBar{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QScrollBar) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QScrollBar_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QScrollBar) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_KeyPressEvent
func miqt_exec_callback_QScrollBar_KeyPressEvent(self *C.QScrollBar, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QScrollBar{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QScrollBar_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QScrollBar) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_TimerEvent
func miqt_exec_callback_QScrollBar_TimerEvent(self *C.QScrollBar, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QScrollBar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScrollBar) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QScrollBar_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QScrollBar) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QScrollBar_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScrollBar_ChangeEvent
func miqt_exec_callback_QScrollBar_ChangeEvent(self *C.QScrollBar, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QScrollBar{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QScrollBar) Delete() {
	C.QScrollBar_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
