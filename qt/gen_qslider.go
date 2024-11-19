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
	h          *C.QSlider
	isSubclass bool
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
func newQSlider(h *C.QSlider, h_QAbstractSlider *C.QAbstractSlider, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QSlider {
	if h == nil {
		return nil
	}
	return &QSlider{h: h,
		QAbstractSlider: newQAbstractSlider(h_QAbstractSlider, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQSlider constructs the type using only unsafe pointers.
func UnsafeNewQSlider(h unsafe.Pointer, h_QAbstractSlider unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QSlider {
	if h == nil {
		return nil
	}

	return &QSlider{h: (*C.QSlider)(h),
		QAbstractSlider: UnsafeNewQAbstractSlider(h_QAbstractSlider, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQSlider constructs a new QSlider object.
func NewQSlider(parent *QWidget) *QSlider {
	var outptr_QSlider *C.QSlider = nil
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSlider_new(parent.cPointer(), &outptr_QSlider, &outptr_QAbstractSlider, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSlider(outptr_QSlider, outptr_QAbstractSlider, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSlider2 constructs a new QSlider object.
func NewQSlider2() *QSlider {
	var outptr_QSlider *C.QSlider = nil
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSlider_new2(&outptr_QSlider, &outptr_QAbstractSlider, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSlider(outptr_QSlider, outptr_QAbstractSlider, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSlider3 constructs a new QSlider object.
func NewQSlider3(orientation Orientation) *QSlider {
	var outptr_QSlider *C.QSlider = nil
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSlider_new3((C.int)(orientation), &outptr_QSlider, &outptr_QAbstractSlider, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSlider(outptr_QSlider, outptr_QAbstractSlider, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSlider4 constructs a new QSlider object.
func NewQSlider4(orientation Orientation, parent *QWidget) *QSlider {
	var outptr_QSlider *C.QSlider = nil
	var outptr_QAbstractSlider *C.QAbstractSlider = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSlider_new4((C.int)(orientation), parent.cPointer(), &outptr_QSlider, &outptr_QAbstractSlider, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSlider(outptr_QSlider, outptr_QAbstractSlider, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QSlider) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSlider_MetaObject(this.h)))
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
	_ret := C.QSlider_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSlider) MinimumSizeHint() *QSize {
	_ret := C.QSlider_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
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

	_ret := C.QSlider_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QSlider_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QSlider_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSlider) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	C.QSlider_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QSlider_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_Event
func miqt_exec_callback_QSlider_Event(self *C.QSlider, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSlider{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSlider) callVirtualBase_PaintEvent(ev *QPaintEvent) {

	C.QSlider_virtualbase_PaintEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnPaintEvent(slot func(super func(ev *QPaintEvent), ev *QPaintEvent)) {
	C.QSlider_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_PaintEvent
func miqt_exec_callback_QSlider_PaintEvent(self *C.QSlider, cb C.intptr_t, ev *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QPaintEvent), ev *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(ev), nil)

	gofunc((&QSlider{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MousePressEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_MousePressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnMousePressEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	C.QSlider_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_MousePressEvent
func miqt_exec_callback_QSlider_MousePressEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(ev), nil, nil)

	gofunc((&QSlider{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MouseReleaseEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnMouseReleaseEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	C.QSlider_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_MouseReleaseEvent
func miqt_exec_callback_QSlider_MouseReleaseEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(ev), nil, nil)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSlider) callVirtualBase_MouseMoveEvent(ev *QMouseEvent) {

	C.QSlider_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QSlider) OnMouseMoveEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	C.QSlider_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_MouseMoveEvent
func miqt_exec_callback_QSlider_MouseMoveEvent(self *C.QSlider, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(ev), nil, nil)

	gofunc((&QSlider{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSlider) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QSlider_virtualbase_SliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QSlider) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	C.QSlider_override_virtual_SliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QSlider_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_KeyPressEvent
func miqt_exec_callback_QSlider_KeyPressEvent(self *C.QSlider, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(ev), nil, nil)

	gofunc((&QSlider{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSlider) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QSlider_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSlider) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	C.QSlider_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_TimerEvent
func miqt_exec_callback_QSlider_TimerEvent(self *C.QSlider, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(param1), nil)

	gofunc((&QSlider{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSlider) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QSlider_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QSlider) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	C.QSlider_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_WheelEvent
func miqt_exec_callback_QSlider_WheelEvent(self *C.QSlider, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QSlider{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSlider) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QSlider_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QSlider) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	C.QSlider_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSlider_ChangeEvent
func miqt_exec_callback_QSlider_ChangeEvent(self *C.QSlider, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QSlider{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QSlider) Delete() {
	C.QSlider_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
