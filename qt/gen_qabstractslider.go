package qt

/*

#include "gen_qabstractslider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractSlider__SliderAction int

const (
	QAbstractSlider__SliderNoAction      QAbstractSlider__SliderAction = 0
	QAbstractSlider__SliderSingleStepAdd QAbstractSlider__SliderAction = 1
	QAbstractSlider__SliderSingleStepSub QAbstractSlider__SliderAction = 2
	QAbstractSlider__SliderPageStepAdd   QAbstractSlider__SliderAction = 3
	QAbstractSlider__SliderPageStepSub   QAbstractSlider__SliderAction = 4
	QAbstractSlider__SliderToMinimum     QAbstractSlider__SliderAction = 5
	QAbstractSlider__SliderToMaximum     QAbstractSlider__SliderAction = 6
	QAbstractSlider__SliderMove          QAbstractSlider__SliderAction = 7
)

type QAbstractSlider struct {
	h *C.QAbstractSlider
	*QWidget
}

func (this *QAbstractSlider) cPointer() *C.QAbstractSlider {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractSlider(h *C.QAbstractSlider) *QAbstractSlider {
	if h == nil {
		return nil
	}
	return &QAbstractSlider{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQAbstractSlider_U(h unsafe.Pointer) *QAbstractSlider {
	return newQAbstractSlider((*C.QAbstractSlider)(h))
}

// NewQAbstractSlider constructs a new QAbstractSlider object.
func NewQAbstractSlider() *QAbstractSlider {
	ret := C.QAbstractSlider_new()
	return newQAbstractSlider(ret)
}

// NewQAbstractSlider2 constructs a new QAbstractSlider object.
func NewQAbstractSlider2(parent *QWidget) *QAbstractSlider {
	ret := C.QAbstractSlider_new2(parent.cPointer())
	return newQAbstractSlider(ret)
}

func (this *QAbstractSlider) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QAbstractSlider_MetaObject(this.h)))
}

func QAbstractSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSlider_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSlider_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSlider_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractSlider) Orientation() Orientation {
	return (Orientation)(C.QAbstractSlider_Orientation(this.h))
}

func (this *QAbstractSlider) SetMinimum(minimum int) {
	C.QAbstractSlider_SetMinimum(this.h, (C.int)(minimum))
}

func (this *QAbstractSlider) Minimum() int {
	return (int)(C.QAbstractSlider_Minimum(this.h))
}

func (this *QAbstractSlider) SetMaximum(maximum int) {
	C.QAbstractSlider_SetMaximum(this.h, (C.int)(maximum))
}

func (this *QAbstractSlider) Maximum() int {
	return (int)(C.QAbstractSlider_Maximum(this.h))
}

func (this *QAbstractSlider) SetSingleStep(singleStep int) {
	C.QAbstractSlider_SetSingleStep(this.h, (C.int)(singleStep))
}

func (this *QAbstractSlider) SingleStep() int {
	return (int)(C.QAbstractSlider_SingleStep(this.h))
}

func (this *QAbstractSlider) SetPageStep(pageStep int) {
	C.QAbstractSlider_SetPageStep(this.h, (C.int)(pageStep))
}

func (this *QAbstractSlider) PageStep() int {
	return (int)(C.QAbstractSlider_PageStep(this.h))
}

func (this *QAbstractSlider) SetTracking(enable bool) {
	C.QAbstractSlider_SetTracking(this.h, (C.bool)(enable))
}

func (this *QAbstractSlider) HasTracking() bool {
	return (bool)(C.QAbstractSlider_HasTracking(this.h))
}

func (this *QAbstractSlider) SetSliderDown(sliderDown bool) {
	C.QAbstractSlider_SetSliderDown(this.h, (C.bool)(sliderDown))
}

func (this *QAbstractSlider) IsSliderDown() bool {
	return (bool)(C.QAbstractSlider_IsSliderDown(this.h))
}

func (this *QAbstractSlider) SetSliderPosition(sliderPosition int) {
	C.QAbstractSlider_SetSliderPosition(this.h, (C.int)(sliderPosition))
}

func (this *QAbstractSlider) SliderPosition() int {
	return (int)(C.QAbstractSlider_SliderPosition(this.h))
}

func (this *QAbstractSlider) SetInvertedAppearance(invertedAppearance bool) {
	C.QAbstractSlider_SetInvertedAppearance(this.h, (C.bool)(invertedAppearance))
}

func (this *QAbstractSlider) InvertedAppearance() bool {
	return (bool)(C.QAbstractSlider_InvertedAppearance(this.h))
}

func (this *QAbstractSlider) SetInvertedControls(invertedControls bool) {
	C.QAbstractSlider_SetInvertedControls(this.h, (C.bool)(invertedControls))
}

func (this *QAbstractSlider) InvertedControls() bool {
	return (bool)(C.QAbstractSlider_InvertedControls(this.h))
}

func (this *QAbstractSlider) Value() int {
	return (int)(C.QAbstractSlider_Value(this.h))
}

func (this *QAbstractSlider) TriggerAction(action QAbstractSlider__SliderAction) {
	C.QAbstractSlider_TriggerAction(this.h, (C.int)(action))
}

func (this *QAbstractSlider) SetValue(value int) {
	C.QAbstractSlider_SetValue(this.h, (C.int)(value))
}

func (this *QAbstractSlider) SetOrientation(orientation Orientation) {
	C.QAbstractSlider_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QAbstractSlider) SetRange(min int, max int) {
	C.QAbstractSlider_SetRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QAbstractSlider) ValueChanged(value int) {
	C.QAbstractSlider_ValueChanged(this.h, (C.int)(value))
}
func (this *QAbstractSlider) OnValueChanged(slot func(value int)) {
	C.QAbstractSlider_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractSlider_ValueChanged
func miqt_exec_callback_QAbstractSlider_ValueChanged(cb *C.void, value C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *QAbstractSlider) SliderPressed() {
	C.QAbstractSlider_SliderPressed(this.h)
}
func (this *QAbstractSlider) OnSliderPressed(slot func()) {
	C.QAbstractSlider_connect_SliderPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractSlider_SliderPressed
func miqt_exec_callback_QAbstractSlider_SliderPressed(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSlider) SliderMoved(position int) {
	C.QAbstractSlider_SliderMoved(this.h, (C.int)(position))
}
func (this *QAbstractSlider) OnSliderMoved(slot func(position int)) {
	C.QAbstractSlider_connect_SliderMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractSlider_SliderMoved
func miqt_exec_callback_QAbstractSlider_SliderMoved(cb *C.void, position C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(position int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	gofunc(slotval1)
}

func (this *QAbstractSlider) SliderReleased() {
	C.QAbstractSlider_SliderReleased(this.h)
}
func (this *QAbstractSlider) OnSliderReleased(slot func()) {
	C.QAbstractSlider_connect_SliderReleased(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractSlider_SliderReleased
func miqt_exec_callback_QAbstractSlider_SliderReleased(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSlider) RangeChanged(min int, max int) {
	C.QAbstractSlider_RangeChanged(this.h, (C.int)(min), (C.int)(max))
}
func (this *QAbstractSlider) OnRangeChanged(slot func(min int, max int)) {
	C.QAbstractSlider_connect_RangeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractSlider_RangeChanged
func miqt_exec_callback_QAbstractSlider_RangeChanged(cb *C.void, min C.int, max C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(min int, max int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(min)

	slotval2 := (int)(max)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractSlider) ActionTriggered(action int) {
	C.QAbstractSlider_ActionTriggered(this.h, (C.int)(action))
}
func (this *QAbstractSlider) OnActionTriggered(slot func(action int)) {
	C.QAbstractSlider_connect_ActionTriggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractSlider_ActionTriggered
func miqt_exec_callback_QAbstractSlider_ActionTriggered(cb *C.void, action C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc(slotval1)
}

func QAbstractSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSlider_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSlider_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSlider_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSlider_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractSlider_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractSlider_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractSlider) Delete() {
	C.QAbstractSlider_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
