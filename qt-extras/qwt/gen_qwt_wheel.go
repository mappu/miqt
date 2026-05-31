package qwt

/*

#include "gen_qwt_wheel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtWheel struct {
	h *C.QwtWheel
	*qt.QWidget
}

func (this *QwtWheel) cPointer() *C.QwtWheel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtWheel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtWheel constructs the type using only CGO pointers.
func newQwtWheel(h *C.QwtWheel) *QwtWheel {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QwtWheel_virtbase(h, &outptr_QWidget)

	return &QwtWheel{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQwtWheel constructs the type using only unsafe pointers.
func UnsafeNewQwtWheel(h unsafe.Pointer) *QwtWheel {
	return newQwtWheel((*C.QwtWheel)(h))
}

// NewQwtWheel constructs a new QwtWheel object.
func NewQwtWheel(parent *qt.QWidget) *QwtWheel {

	return newQwtWheel(C.QwtWheel_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtWheel2 constructs a new QwtWheel object.
func NewQwtWheel2() *QwtWheel {

	return newQwtWheel(C.QwtWheel_new2())
}

func (this *QwtWheel) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtWheel_metaObject(this.h)))
}

func (this *QwtWheel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtWheel_metacast(this.h, param1_Cstring))
}

func QwtWheel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtWheel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtWheel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtWheel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtWheel) Value() float64 {
	return (float64)(C.QwtWheel_value(this.h))
}

func (this *QwtWheel) SetOrientation(orientation qt.Orientation) {
	C.QwtWheel_setOrientation(this.h, (C.int)(orientation))
}

func (this *QwtWheel) Orientation() qt.Orientation {
	return (qt.Orientation)(C.QwtWheel_orientation(this.h))
}

func (this *QwtWheel) TotalAngle() float64 {
	return (float64)(C.QwtWheel_totalAngle(this.h))
}

func (this *QwtWheel) ViewAngle() float64 {
	return (float64)(C.QwtWheel_viewAngle(this.h))
}

func (this *QwtWheel) SetTickCount(tickCount int) {
	C.QwtWheel_setTickCount(this.h, (C.int)(tickCount))
}

func (this *QwtWheel) TickCount() int {
	return (int)(C.QwtWheel_tickCount(this.h))
}

func (this *QwtWheel) SetWheelWidth(wheelWidth int) {
	C.QwtWheel_setWheelWidth(this.h, (C.int)(wheelWidth))
}

func (this *QwtWheel) WheelWidth() int {
	return (int)(C.QwtWheel_wheelWidth(this.h))
}

func (this *QwtWheel) SetWheelBorderWidth(wheelBorderWidth int) {
	C.QwtWheel_setWheelBorderWidth(this.h, (C.int)(wheelBorderWidth))
}

func (this *QwtWheel) WheelBorderWidth() int {
	return (int)(C.QwtWheel_wheelBorderWidth(this.h))
}

func (this *QwtWheel) SetBorderWidth(borderWidth int) {
	C.QwtWheel_setBorderWidth(this.h, (C.int)(borderWidth))
}

func (this *QwtWheel) BorderWidth() int {
	return (int)(C.QwtWheel_borderWidth(this.h))
}

func (this *QwtWheel) SetInverted(inverted bool) {
	C.QwtWheel_setInverted(this.h, (C.bool)(inverted))
}

func (this *QwtWheel) IsInverted() bool {
	return (bool)(C.QwtWheel_isInverted(this.h))
}

func (this *QwtWheel) SetWrapping(wrapping bool) {
	C.QwtWheel_setWrapping(this.h, (C.bool)(wrapping))
}

func (this *QwtWheel) Wrapping() bool {
	return (bool)(C.QwtWheel_wrapping(this.h))
}

func (this *QwtWheel) SetSingleStep(singleStep float64) {
	C.QwtWheel_setSingleStep(this.h, (C.double)(singleStep))
}

func (this *QwtWheel) SingleStep() float64 {
	return (float64)(C.QwtWheel_singleStep(this.h))
}

func (this *QwtWheel) SetPageStepCount(pageStepCount int) {
	C.QwtWheel_setPageStepCount(this.h, (C.int)(pageStepCount))
}

func (this *QwtWheel) PageStepCount() int {
	return (int)(C.QwtWheel_pageStepCount(this.h))
}

func (this *QwtWheel) SetStepAlignment(on bool) {
	C.QwtWheel_setStepAlignment(this.h, (C.bool)(on))
}

func (this *QwtWheel) StepAlignment() bool {
	return (bool)(C.QwtWheel_stepAlignment(this.h))
}

func (this *QwtWheel) SetRange(min float64, max float64) {
	C.QwtWheel_setRange(this.h, (C.double)(min), (C.double)(max))
}

func (this *QwtWheel) SetMinimum(minimum float64) {
	C.QwtWheel_setMinimum(this.h, (C.double)(minimum))
}

func (this *QwtWheel) Minimum() float64 {
	return (float64)(C.QwtWheel_minimum(this.h))
}

func (this *QwtWheel) SetMaximum(maximum float64) {
	C.QwtWheel_setMaximum(this.h, (C.double)(maximum))
}

func (this *QwtWheel) Maximum() float64 {
	return (float64)(C.QwtWheel_maximum(this.h))
}

func (this *QwtWheel) SetUpdateInterval(updateInterval int) {
	C.QwtWheel_setUpdateInterval(this.h, (C.int)(updateInterval))
}

func (this *QwtWheel) UpdateInterval() int {
	return (int)(C.QwtWheel_updateInterval(this.h))
}

func (this *QwtWheel) SetTracking(tracking bool) {
	C.QwtWheel_setTracking(this.h, (C.bool)(tracking))
}

func (this *QwtWheel) IsTracking() bool {
	return (bool)(C.QwtWheel_isTracking(this.h))
}

func (this *QwtWheel) Mass() float64 {
	return (float64)(C.QwtWheel_mass(this.h))
}

func (this *QwtWheel) SetValue(value float64) {
	C.QwtWheel_setValue(this.h, (C.double)(value))
}

func (this *QwtWheel) SetTotalAngle(totalAngle float64) {
	C.QwtWheel_setTotalAngle(this.h, (C.double)(totalAngle))
}

func (this *QwtWheel) SetViewAngle(viewAngle float64) {
	C.QwtWheel_setViewAngle(this.h, (C.double)(viewAngle))
}

func (this *QwtWheel) SetMass(mass float64) {
	C.QwtWheel_setMass(this.h, (C.double)(mass))
}

func (this *QwtWheel) ValueChanged(value float64) {
	C.QwtWheel_valueChanged(this.h, (C.double)(value))
}
func (this *QwtWheel) OnValueChanged(slot func(value float64)) {
	C.QwtWheel_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtWheel_valueChanged
func miqt_exec_callback_QwtWheel_valueChanged(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func (this *QwtWheel) WheelPressed() {
	C.QwtWheel_wheelPressed(this.h)
}
func (this *QwtWheel) OnWheelPressed(slot func()) {
	C.QwtWheel_connect_wheelPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtWheel_wheelPressed
func miqt_exec_callback_QwtWheel_wheelPressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QwtWheel) WheelReleased() {
	C.QwtWheel_wheelReleased(this.h)
}
func (this *QwtWheel) OnWheelReleased(slot func()) {
	C.QwtWheel_connect_wheelReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtWheel_wheelReleased
func miqt_exec_callback_QwtWheel_wheelReleased(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QwtWheel) WheelMoved(value float64) {
	C.QwtWheel_wheelMoved(this.h, (C.double)(value))
}
func (this *QwtWheel) OnWheelMoved(slot func(value float64)) {
	C.QwtWheel_connect_wheelMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtWheel_wheelMoved
func miqt_exec_callback_QwtWheel_wheelMoved(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func QwtWheel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtWheel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtWheel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtWheel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtWheel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtWheel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtWheel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtWheel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// StopFlying can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) StopFlying() {

	var _dynamic_cast_ok C.bool = false
	C.QwtWheel_protectedbase_stopFlying(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// WheelRect can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) WheelRect() qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtWheel_protectedbase_wheelRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtWheel_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtWheel_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtWheel_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtWheel_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtWheel_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtWheel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtWheel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtWheel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtWheel that was directly constructed.
func (this *QwtWheel) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtWheel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtWheel) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtWheel_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtWheel_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_paintEvent
func miqt_exec_callback_QwtWheel_paintEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtWheel_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtWheel_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_mousePressEvent
func miqt_exec_callback_QwtWheel_mousePressEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtWheel_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtWheel_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_mouseReleaseEvent
func miqt_exec_callback_QwtWheel_mouseReleaseEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtWheel_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtWheel_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_mouseMoveEvent
func miqt_exec_callback_QwtWheel_mouseMoveEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtWheel_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtWheel_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_keyPressEvent
func miqt_exec_callback_QwtWheel_keyPressEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QwtWheel_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtWheel_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_wheelEvent
func miqt_exec_callback_QwtWheel_wheelEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_TimerEvent(param1 *qt.QTimerEvent) {

	C.QwtWheel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnTimerEvent(slot func(super func(param1 *qt.QTimerEvent), param1 *qt.QTimerEvent)) {
	ok := C.QwtWheel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_timerEvent
func miqt_exec_callback_QwtWheel_timerEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QTimerEvent), param1 *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtWheel_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtWheel) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtWheel_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_sizeHint
func miqt_exec_callback_QwtWheel_sizeHint(self *C.QwtWheel, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtWheel) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtWheel_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtWheel) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtWheel_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_minimumSizeHint
func miqt_exec_callback_QwtWheel_minimumSizeHint(self *C.QwtWheel, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtWheel) callVirtualBase_DrawTicks(param1 *qt.QPainter, param2 *qt.QRectF) {

	C.QwtWheel_virtualbase_drawTicks(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))

}
func (this *QwtWheel) OnDrawTicks(slot func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF)) {
	ok := C.QwtWheel_override_virtual_drawTicks(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_drawTicks
func miqt_exec_callback_QwtWheel_drawTicks(self *C.QwtWheel, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(param2))

	gofunc((&QwtWheel{h: self}).callVirtualBase_DrawTicks, slotval1, slotval2)

}

func (this *QwtWheel) callVirtualBase_DrawWheelBackground(param1 *qt.QPainter, param2 *qt.QRectF) {

	C.QwtWheel_virtualbase_drawWheelBackground(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))

}
func (this *QwtWheel) OnDrawWheelBackground(slot func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF)) {
	ok := C.QwtWheel_override_virtual_drawWheelBackground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_drawWheelBackground
func miqt_exec_callback_QwtWheel_drawWheelBackground(self *C.QwtWheel, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(param2))

	gofunc((&QwtWheel{h: self}).callVirtualBase_DrawWheelBackground, slotval1, slotval2)

}

func (this *QwtWheel) callVirtualBase_ValueAt(param1 *qt.QPoint) float64 {

	return (float64)(C.QwtWheel_virtualbase_valueAt(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtWheel) OnValueAt(slot func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64) {
	ok := C.QwtWheel_override_virtual_valueAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_valueAt
func miqt_exec_callback_QwtWheel_valueAt(self *C.QwtWheel, cb C.intptr_t, param1 *C.QPoint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_ValueAt, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_DevType() int {

	return (int)(C.QwtWheel_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtWheel) OnDevType(slot func(super func() int) int) {
	ok := C.QwtWheel_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_devType
func miqt_exec_callback_QwtWheel_devType(self *C.QwtWheel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_SetVisible(visible bool) {

	C.QwtWheel_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtWheel) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtWheel_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_setVisible
func miqt_exec_callback_QwtWheel_setVisible(self *C.QwtWheel, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtWheel{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtWheel) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtWheel_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtWheel) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtWheel_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_heightForWidth
func miqt_exec_callback_QwtWheel_heightForWidth(self *C.QwtWheel, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtWheel_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtWheel) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtWheel_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_hasHeightForWidth
func miqt_exec_callback_QwtWheel_hasHeightForWidth(self *C.QwtWheel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtWheel_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtWheel) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtWheel_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_paintEngine
func miqt_exec_callback_QwtWheel_paintEngine(self *C.QwtWheel, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtWheel) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtWheel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtWheel) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtWheel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_event
func miqt_exec_callback_QwtWheel_event(self *C.QwtWheel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtWheel_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtWheel_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_mouseDoubleClickEvent
func miqt_exec_callback_QwtWheel_mouseDoubleClickEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtWheel_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtWheel_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_keyReleaseEvent
func miqt_exec_callback_QwtWheel_keyReleaseEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtWheel_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtWheel_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_focusInEvent
func miqt_exec_callback_QwtWheel_focusInEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtWheel_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtWheel_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_focusOutEvent
func miqt_exec_callback_QwtWheel_focusOutEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtWheel_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtWheel_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_enterEvent
func miqt_exec_callback_QwtWheel_enterEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtWheel_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtWheel_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_leaveEvent
func miqt_exec_callback_QwtWheel_leaveEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtWheel_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtWheel_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_moveEvent
func miqt_exec_callback_QwtWheel_moveEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtWheel_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtWheel_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_resizeEvent
func miqt_exec_callback_QwtWheel_resizeEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtWheel_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtWheel_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_closeEvent
func miqt_exec_callback_QwtWheel_closeEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtWheel_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtWheel_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_contextMenuEvent
func miqt_exec_callback_QwtWheel_contextMenuEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtWheel_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtWheel_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_tabletEvent
func miqt_exec_callback_QwtWheel_tabletEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtWheel_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtWheel_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_actionEvent
func miqt_exec_callback_QwtWheel_actionEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtWheel_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtWheel_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_dragEnterEvent
func miqt_exec_callback_QwtWheel_dragEnterEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtWheel_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtWheel_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_dragMoveEvent
func miqt_exec_callback_QwtWheel_dragMoveEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtWheel_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtWheel_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_dragLeaveEvent
func miqt_exec_callback_QwtWheel_dragLeaveEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtWheel_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtWheel_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_dropEvent
func miqt_exec_callback_QwtWheel_dropEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtWheel_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtWheel_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_showEvent
func miqt_exec_callback_QwtWheel_showEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtWheel_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtWheel_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_hideEvent
func miqt_exec_callback_QwtWheel_hideEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtWheel_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtWheel) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtWheel_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_nativeEvent
func miqt_exec_callback_QwtWheel_nativeEvent(self *C.QwtWheel, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtWheel_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtWheel_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_changeEvent
func miqt_exec_callback_QwtWheel_changeEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtWheel_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtWheel) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtWheel_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_metric
func miqt_exec_callback_QwtWheel_metric(self *C.QwtWheel, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtWheel_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtWheel) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtWheel_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_initPainter
func miqt_exec_callback_QwtWheel_initPainter(self *C.QwtWheel, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtWheel{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtWheel) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtWheel_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtWheel) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtWheel_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_redirected
func miqt_exec_callback_QwtWheel_redirected(self *C.QwtWheel, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtWheel) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtWheel_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtWheel) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtWheel_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_sharedPainter
func miqt_exec_callback_QwtWheel_sharedPainter(self *C.QwtWheel, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtWheel) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtWheel_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtWheel) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtWheel_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_inputMethodEvent
func miqt_exec_callback_QwtWheel_inputMethodEvent(self *C.QwtWheel, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtWheel{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtWheel_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtWheel) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtWheel_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_inputMethodQuery
func miqt_exec_callback_QwtWheel_inputMethodQuery(self *C.QwtWheel, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtWheel) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtWheel_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtWheel) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtWheel_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_focusNextPrevChild
func miqt_exec_callback_QwtWheel_focusNextPrevChild(self *C.QwtWheel, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtWheel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtWheel) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtWheel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_eventFilter
func miqt_exec_callback_QwtWheel_eventFilter(self *C.QwtWheel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtWheel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtWheel) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtWheel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtWheel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_childEvent
func miqt_exec_callback_QwtWheel_childEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtWheel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtWheel) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtWheel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_customEvent
func miqt_exec_callback_QwtWheel_customEvent(self *C.QwtWheel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtWheel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtWheel) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtWheel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtWheel) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtWheel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_connectNotify
func miqt_exec_callback_QwtWheel_connectNotify(self *C.QwtWheel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtWheel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtWheel) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtWheel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtWheel) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtWheel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWheel_disconnectNotify
func miqt_exec_callback_QwtWheel_disconnectNotify(self *C.QwtWheel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtWheel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtWheel) Delete() {
	C.QwtWheel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtWheel) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtWheel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
