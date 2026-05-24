package qwt

/*

#include "gen_qwt_abstract_slider.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtAbstractSlider struct {
	h *C.QwtAbstractSlider
	*QwtAbstractScale
}

func (this *QwtAbstractSlider) cPointer() *C.QwtAbstractSlider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtAbstractSlider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtAbstractSlider constructs the type using only CGO pointers.
func newQwtAbstractSlider(h *C.QwtAbstractSlider) *QwtAbstractSlider {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractScale *C.QwtAbstractScale = nil
	C.QwtAbstractSlider_virtbase(h, &outptr_QwtAbstractScale)

	return &QwtAbstractSlider{h: h,
		QwtAbstractScale: newQwtAbstractScale(outptr_QwtAbstractScale)}
}

// UnsafeNewQwtAbstractSlider constructs the type using only unsafe pointers.
func UnsafeNewQwtAbstractSlider(h unsafe.Pointer) *QwtAbstractSlider {
	return newQwtAbstractSlider((*C.QwtAbstractSlider)(h))
}

// NewQwtAbstractSlider constructs a new QwtAbstractSlider object.
func NewQwtAbstractSlider(parent *qt.QWidget) *QwtAbstractSlider {

	return newQwtAbstractSlider(C.QwtAbstractSlider_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtAbstractSlider2 constructs a new QwtAbstractSlider object.
func NewQwtAbstractSlider2() *QwtAbstractSlider {

	return newQwtAbstractSlider(C.QwtAbstractSlider_new2())
}

func (this *QwtAbstractSlider) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtAbstractSlider_metaObject(this.h)))
}

func (this *QwtAbstractSlider) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtAbstractSlider_metacast(this.h, param1_Cstring))
}

func QwtAbstractSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractSlider_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractSlider_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractSlider_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtAbstractSlider) SetValid(valid bool) {
	C.QwtAbstractSlider_setValid(this.h, (C.bool)(valid))
}

func (this *QwtAbstractSlider) IsValid() bool {
	return (bool)(C.QwtAbstractSlider_isValid(this.h))
}

func (this *QwtAbstractSlider) Value() float64 {
	return (float64)(C.QwtAbstractSlider_value(this.h))
}

func (this *QwtAbstractSlider) SetWrapping(wrapping bool) {
	C.QwtAbstractSlider_setWrapping(this.h, (C.bool)(wrapping))
}

func (this *QwtAbstractSlider) Wrapping() bool {
	return (bool)(C.QwtAbstractSlider_wrapping(this.h))
}

func (this *QwtAbstractSlider) SetTotalSteps(totalSteps uint) {
	C.QwtAbstractSlider_setTotalSteps(this.h, (C.uint)(totalSteps))
}

func (this *QwtAbstractSlider) TotalSteps() uint {
	return (uint)(C.QwtAbstractSlider_totalSteps(this.h))
}

func (this *QwtAbstractSlider) SetSingleSteps(singleSteps uint) {
	C.QwtAbstractSlider_setSingleSteps(this.h, (C.uint)(singleSteps))
}

func (this *QwtAbstractSlider) SingleSteps() uint {
	return (uint)(C.QwtAbstractSlider_singleSteps(this.h))
}

func (this *QwtAbstractSlider) SetPageSteps(pageSteps uint) {
	C.QwtAbstractSlider_setPageSteps(this.h, (C.uint)(pageSteps))
}

func (this *QwtAbstractSlider) PageSteps() uint {
	return (uint)(C.QwtAbstractSlider_pageSteps(this.h))
}

func (this *QwtAbstractSlider) SetStepAlignment(stepAlignment bool) {
	C.QwtAbstractSlider_setStepAlignment(this.h, (C.bool)(stepAlignment))
}

func (this *QwtAbstractSlider) StepAlignment() bool {
	return (bool)(C.QwtAbstractSlider_stepAlignment(this.h))
}

func (this *QwtAbstractSlider) SetTracking(tracking bool) {
	C.QwtAbstractSlider_setTracking(this.h, (C.bool)(tracking))
}

func (this *QwtAbstractSlider) IsTracking() bool {
	return (bool)(C.QwtAbstractSlider_isTracking(this.h))
}

func (this *QwtAbstractSlider) SetReadOnly(readOnly bool) {
	C.QwtAbstractSlider_setReadOnly(this.h, (C.bool)(readOnly))
}

func (this *QwtAbstractSlider) IsReadOnly() bool {
	return (bool)(C.QwtAbstractSlider_isReadOnly(this.h))
}

func (this *QwtAbstractSlider) SetInvertedControls(invertedControls bool) {
	C.QwtAbstractSlider_setInvertedControls(this.h, (C.bool)(invertedControls))
}

func (this *QwtAbstractSlider) InvertedControls() bool {
	return (bool)(C.QwtAbstractSlider_invertedControls(this.h))
}

func (this *QwtAbstractSlider) SetValue(value float64) {
	C.QwtAbstractSlider_setValue(this.h, (C.double)(value))
}

func (this *QwtAbstractSlider) ValueChanged(value float64) {
	C.QwtAbstractSlider_valueChanged(this.h, (C.double)(value))
}
func (this *QwtAbstractSlider) OnValueChanged(slot func(value float64)) {
	C.QwtAbstractSlider_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtAbstractSlider_valueChanged
func miqt_exec_callback_QwtAbstractSlider_valueChanged(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func (this *QwtAbstractSlider) SliderPressed() {
	C.QwtAbstractSlider_sliderPressed(this.h)
}
func (this *QwtAbstractSlider) OnSliderPressed(slot func()) {
	C.QwtAbstractSlider_connect_sliderPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtAbstractSlider_sliderPressed
func miqt_exec_callback_QwtAbstractSlider_sliderPressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QwtAbstractSlider) SliderReleased() {
	C.QwtAbstractSlider_sliderReleased(this.h)
}
func (this *QwtAbstractSlider) OnSliderReleased(slot func()) {
	C.QwtAbstractSlider_connect_sliderReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtAbstractSlider_sliderReleased
func miqt_exec_callback_QwtAbstractSlider_sliderReleased(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QwtAbstractSlider) SliderMoved(value float64) {
	C.QwtAbstractSlider_sliderMoved(this.h, (C.double)(value))
}
func (this *QwtAbstractSlider) OnSliderMoved(slot func(value float64)) {
	C.QwtAbstractSlider_connect_sliderMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtAbstractSlider_sliderMoved
func miqt_exec_callback_QwtAbstractSlider_sliderMoved(cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc(slotval1)
}

func QwtAbstractSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractSlider_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractSlider_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractSlider_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractSlider_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractSlider_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractSlider_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// IncrementValue can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) IncrementValue(stepCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractSlider_protectedbase_incrementValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(stepCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementedValue can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) IncrementedValue(value float64, stepCount int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtAbstractSlider_protectedbase_incrementedValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value), (C.int)(stepCount)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Rescale can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) Rescale(lowerBound float64, upperBound float64, stepSize float64) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractSlider_protectedbase_rescale(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(lowerBound), (C.double)(upperBound), (C.double)(stepSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetAbstractScaleDraw can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) SetAbstractScaleDraw(abstractScaleDraw *QwtAbstractScaleDraw) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractSlider_protectedbase_setAbstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h), abstractScaleDraw.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AbstractScaleDraw can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) AbstractScaleDraw() *QwtAbstractScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtAbstractScaleDraw(C.QwtAbstractSlider_protectedbase_abstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractSlider_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractSlider_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractSlider_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAbstractSlider_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAbstractSlider_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtAbstractSlider_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtAbstractSlider_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtAbstractSlider_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtAbstractSlider that was directly constructed.
func (this *QwtAbstractSlider) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAbstractSlider_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtAbstractSlider) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtAbstractSlider_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_mousePressEvent
func miqt_exec_callback_QwtAbstractSlider_mousePressEvent(self *C.QwtAbstractSlider, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtAbstractSlider_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_mouseReleaseEvent
func miqt_exec_callback_QwtAbstractSlider_mouseReleaseEvent(self *C.QwtAbstractSlider, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtAbstractSlider_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_mouseMoveEvent
func miqt_exec_callback_QwtAbstractSlider_mouseMoveEvent(self *C.QwtAbstractSlider, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtAbstractSlider_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_keyPressEvent
func miqt_exec_callback_QwtAbstractSlider_keyPressEvent(self *C.QwtAbstractSlider, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QwtAbstractSlider_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_wheelEvent
func miqt_exec_callback_QwtAbstractSlider_wheelEvent(self *C.QwtAbstractSlider, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_WheelEvent, slotval1)

}
func (this *QwtAbstractSlider) OnIsScrollPosition(slot func(pos *qt.QPoint) bool) {
	ok := C.QwtAbstractSlider_override_virtual_isScrollPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_isScrollPosition
func miqt_exec_callback_QwtAbstractSlider_isScrollPosition(self *C.QwtAbstractSlider, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *qt.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(pos))

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QwtAbstractSlider) OnScrolledTo(slot func(pos *qt.QPoint) float64) {
	ok := C.QwtAbstractSlider_override_virtual_scrolledTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_scrolledTo
func miqt_exec_callback_QwtAbstractSlider_scrolledTo(self *C.QwtAbstractSlider, cb C.intptr_t, pos *C.QPoint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *qt.QPoint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(pos))

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_ScaleChange() {

	C.QwtAbstractSlider_virtualbase_scaleChange(unsafe.Pointer(this.h))

}
func (this *QwtAbstractSlider) OnScaleChange(slot func(super func())) {
	ok := C.QwtAbstractSlider_override_virtual_scaleChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_scaleChange
func miqt_exec_callback_QwtAbstractSlider_scaleChange(self *C.QwtAbstractSlider, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ScaleChange)

}

func (this *QwtAbstractSlider) callVirtualBase_SliderChange() {

	C.QwtAbstractSlider_virtualbase_sliderChange(unsafe.Pointer(this.h))

}
func (this *QwtAbstractSlider) OnSliderChange(slot func(super func())) {
	ok := C.QwtAbstractSlider_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_sliderChange
func miqt_exec_callback_QwtAbstractSlider_sliderChange(self *C.QwtAbstractSlider, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_SliderChange)

}

func (this *QwtAbstractSlider) callVirtualBase_DevType() int {

	return (int)(C.QwtAbstractSlider_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtAbstractSlider) OnDevType(slot func(super func() int) int) {
	ok := C.QwtAbstractSlider_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_devType
func miqt_exec_callback_QwtAbstractSlider_devType(self *C.QwtAbstractSlider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_SetVisible(visible bool) {

	C.QwtAbstractSlider_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtAbstractSlider) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtAbstractSlider_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_setVisible
func miqt_exec_callback_QwtAbstractSlider_setVisible(self *C.QwtAbstractSlider, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtAbstractSlider_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAbstractSlider) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtAbstractSlider_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_sizeHint
func miqt_exec_callback_QwtAbstractSlider_sizeHint(self *C.QwtAbstractSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractSlider) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtAbstractSlider_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAbstractSlider) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtAbstractSlider_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_minimumSizeHint
func miqt_exec_callback_QwtAbstractSlider_minimumSizeHint(self *C.QwtAbstractSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractSlider) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtAbstractSlider_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtAbstractSlider) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtAbstractSlider_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_heightForWidth
func miqt_exec_callback_QwtAbstractSlider_heightForWidth(self *C.QwtAbstractSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtAbstractSlider_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtAbstractSlider) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtAbstractSlider_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_hasHeightForWidth
func miqt_exec_callback_QwtAbstractSlider_hasHeightForWidth(self *C.QwtAbstractSlider, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtAbstractSlider_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtAbstractSlider) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtAbstractSlider_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_paintEngine
func miqt_exec_callback_QwtAbstractSlider_paintEngine(self *C.QwtAbstractSlider, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractSlider) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtAbstractSlider_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtAbstractSlider) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtAbstractSlider_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_event
func miqt_exec_callback_QwtAbstractSlider_event(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtAbstractSlider_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_mouseDoubleClickEvent
func miqt_exec_callback_QwtAbstractSlider_mouseDoubleClickEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtAbstractSlider_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_keyReleaseEvent
func miqt_exec_callback_QwtAbstractSlider_keyReleaseEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtAbstractSlider_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_focusInEvent
func miqt_exec_callback_QwtAbstractSlider_focusInEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtAbstractSlider_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_focusOutEvent
func miqt_exec_callback_QwtAbstractSlider_focusOutEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtAbstractSlider_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_enterEvent
func miqt_exec_callback_QwtAbstractSlider_enterEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtAbstractSlider_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_leaveEvent
func miqt_exec_callback_QwtAbstractSlider_leaveEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QwtAbstractSlider_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_paintEvent
func miqt_exec_callback_QwtAbstractSlider_paintEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtAbstractSlider_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_moveEvent
func miqt_exec_callback_QwtAbstractSlider_moveEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtAbstractSlider_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_resizeEvent
func miqt_exec_callback_QwtAbstractSlider_resizeEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtAbstractSlider_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_closeEvent
func miqt_exec_callback_QwtAbstractSlider_closeEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtAbstractSlider_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_contextMenuEvent
func miqt_exec_callback_QwtAbstractSlider_contextMenuEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtAbstractSlider_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_tabletEvent
func miqt_exec_callback_QwtAbstractSlider_tabletEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtAbstractSlider_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_actionEvent
func miqt_exec_callback_QwtAbstractSlider_actionEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtAbstractSlider_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_dragEnterEvent
func miqt_exec_callback_QwtAbstractSlider_dragEnterEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtAbstractSlider_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_dragMoveEvent
func miqt_exec_callback_QwtAbstractSlider_dragMoveEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtAbstractSlider_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_dragLeaveEvent
func miqt_exec_callback_QwtAbstractSlider_dragLeaveEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtAbstractSlider_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_dropEvent
func miqt_exec_callback_QwtAbstractSlider_dropEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtAbstractSlider_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_showEvent
func miqt_exec_callback_QwtAbstractSlider_showEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtAbstractSlider_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_hideEvent
func miqt_exec_callback_QwtAbstractSlider_hideEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtAbstractSlider_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtAbstractSlider) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtAbstractSlider_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_nativeEvent
func miqt_exec_callback_QwtAbstractSlider_nativeEvent(self *C.QwtAbstractSlider, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtAbstractSlider_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_changeEvent
func miqt_exec_callback_QwtAbstractSlider_changeEvent(self *C.QwtAbstractSlider, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtAbstractSlider_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtAbstractSlider) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtAbstractSlider_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_metric
func miqt_exec_callback_QwtAbstractSlider_metric(self *C.QwtAbstractSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtAbstractSlider_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtAbstractSlider_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_initPainter
func miqt_exec_callback_QwtAbstractSlider_initPainter(self *C.QwtAbstractSlider, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtAbstractSlider_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtAbstractSlider) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtAbstractSlider_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_redirected
func miqt_exec_callback_QwtAbstractSlider_redirected(self *C.QwtAbstractSlider, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractSlider) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtAbstractSlider_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtAbstractSlider) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtAbstractSlider_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_sharedPainter
func miqt_exec_callback_QwtAbstractSlider_sharedPainter(self *C.QwtAbstractSlider, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractSlider) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtAbstractSlider_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_inputMethodEvent
func miqt_exec_callback_QwtAbstractSlider_inputMethodEvent(self *C.QwtAbstractSlider, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtAbstractSlider_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAbstractSlider) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtAbstractSlider_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_inputMethodQuery
func miqt_exec_callback_QwtAbstractSlider_inputMethodQuery(self *C.QwtAbstractSlider, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractSlider) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtAbstractSlider_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtAbstractSlider) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtAbstractSlider_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_focusNextPrevChild
func miqt_exec_callback_QwtAbstractSlider_focusNextPrevChild(self *C.QwtAbstractSlider, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtAbstractSlider_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtAbstractSlider) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtAbstractSlider_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_eventFilter
func miqt_exec_callback_QwtAbstractSlider_eventFilter(self *C.QwtAbstractSlider, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractSlider) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtAbstractSlider_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_timerEvent
func miqt_exec_callback_QwtAbstractSlider_timerEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtAbstractSlider_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_childEvent
func miqt_exec_callback_QwtAbstractSlider_childEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtAbstractSlider_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAbstractSlider_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_customEvent
func miqt_exec_callback_QwtAbstractSlider_customEvent(self *C.QwtAbstractSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtAbstractSlider_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtAbstractSlider_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_connectNotify
func miqt_exec_callback_QwtAbstractSlider_connectNotify(self *C.QwtAbstractSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtAbstractSlider) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtAbstractSlider_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtAbstractSlider) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtAbstractSlider_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractSlider_disconnectNotify
func miqt_exec_callback_QwtAbstractSlider_disconnectNotify(self *C.QwtAbstractSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtAbstractSlider{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtAbstractSlider) Delete() {
	C.QwtAbstractSlider_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtAbstractSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtAbstractSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
