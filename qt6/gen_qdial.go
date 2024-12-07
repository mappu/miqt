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
	h          *C.QDial
	isSubclass bool
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
func newQDial(h *C.QDial, h_QAbstractSlider *C.QAbstractSlider, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QDial {
	if h == nil {
		return nil
	}
	return &QDial{h: h,
		QAbstractSlider: newQAbstractSlider(h_QAbstractSlider, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQDial constructs the type using only unsafe pointers.
func UnsafeNewQDial(h unsafe.Pointer, h_QAbstractSlider unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QDial {
	if h == nil {
		return nil
	}

	return &QDial{h: (*C.QDial)(h),
		QAbstractSlider: UnsafeNewQAbstractSlider(h_QAbstractSlider, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQDial constructs a new QDial object.
func NewQDial(parent *QWidget) *QDial {
	var outptr_QDial *C.QDial = nil
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QDial_new(parent.cPointer(), &outptr_QDial, &outptr_QAbstractSlider, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQDial(outptr_QDial, outptr_QAbstractSlider, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQDial2 constructs a new QDial object.
func NewQDial2() *QDial {
	var outptr_QDial *C.QDial = nil
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QDial_new2(&outptr_QDial, &outptr_QAbstractSlider, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQDial(outptr_QDial, outptr_QAbstractSlider, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QDial) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDial_MetaObject(this.h)))
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
	_ret := C.QDial_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDial) MinimumSizeHint() *QSize {
	_ret := C.QDial_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
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

	_ret := C.QDial_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QDial_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDial) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_Event
func miqt_exec_callback_QDial_Event(self *C.QDial, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QDial{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDial) callVirtualBase_ResizeEvent(re *QResizeEvent) {

	C.QDial_virtualbase_ResizeEvent(unsafe.Pointer(this.h), re.cPointer())

}
func (this *QDial) OnResizeEvent(slot func(super func(re *QResizeEvent), re *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_ResizeEvent
func miqt_exec_callback_QDial_ResizeEvent(self *C.QDial, cb C.intptr_t, re *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(re *QResizeEvent), re *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(re), nil)

	gofunc((&QDial{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDial) callVirtualBase_PaintEvent(pe *QPaintEvent) {

	C.QDial_virtualbase_PaintEvent(unsafe.Pointer(this.h), pe.cPointer())

}
func (this *QDial) OnPaintEvent(slot func(super func(pe *QPaintEvent), pe *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_PaintEvent
func miqt_exec_callback_QDial_PaintEvent(self *C.QDial, cb C.intptr_t, pe *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pe *QPaintEvent), pe *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(pe), nil)

	gofunc((&QDial{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDial) callVirtualBase_MousePressEvent(me *QMouseEvent) {

	C.QDial_virtualbase_MousePressEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnMousePressEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_MousePressEvent
func miqt_exec_callback_QDial_MousePressEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(me), nil, nil, nil, nil)

	gofunc((&QDial{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDial) callVirtualBase_MouseReleaseEvent(me *QMouseEvent) {

	C.QDial_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnMouseReleaseEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_MouseReleaseEvent
func miqt_exec_callback_QDial_MouseReleaseEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(me), nil, nil, nil, nil)

	gofunc((&QDial{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDial) callVirtualBase_MouseMoveEvent(me *QMouseEvent) {

	C.QDial_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), me.cPointer())

}
func (this *QDial) OnMouseMoveEvent(slot func(super func(me *QMouseEvent), me *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_MouseMoveEvent
func miqt_exec_callback_QDial_MouseMoveEvent(self *C.QDial, cb C.intptr_t, me *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(me *QMouseEvent), me *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(me), nil, nil, nil, nil)

	gofunc((&QDial{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDial) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QDial_virtualbase_SliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QDial) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_SliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_InitStyleOption
func miqt_exec_callback_QDial_InitStyleOption(self *C.QDial, cb C.intptr_t, option *C.QStyleOptionSlider) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionSlider), option *QStyleOptionSlider))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOptionSlider(unsafe.Pointer(option), nil, nil)

	gofunc((&QDial{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QDial) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QDial_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QDial) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_KeyPressEvent
func miqt_exec_callback_QDial_KeyPressEvent(self *C.QDial, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(ev), nil, nil)

	gofunc((&QDial{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDial) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QDial_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDial) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_TimerEvent
func miqt_exec_callback_QDial_TimerEvent(self *C.QDial, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(param1), nil)

	gofunc((&QDial{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDial) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QDial_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDial) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_WheelEvent
func miqt_exec_callback_QDial_WheelEvent(self *C.QDial, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QDial{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDial) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QDial_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDial) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDial_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDial_ChangeEvent
func miqt_exec_callback_QDial_ChangeEvent(self *C.QDial, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QDial{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QDial) Delete() {
	C.QDial_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDial) GoGC() {
	runtime.SetFinalizer(this, func(this *QDial) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
