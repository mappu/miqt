package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qabstractslider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
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
	ret := C.QAbstractSlider_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSlider_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSlider_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSlider_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractSlider) Orientation() uintptr {
	ret := C.QAbstractSlider_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractSlider) SetMinimum(minimum int) {
	C.QAbstractSlider_SetMinimum(this.h, (C.int)(minimum))
}

func (this *QAbstractSlider) Minimum() int {
	ret := C.QAbstractSlider_Minimum(this.h)
	return (int)(ret)
}

func (this *QAbstractSlider) SetMaximum(maximum int) {
	C.QAbstractSlider_SetMaximum(this.h, (C.int)(maximum))
}

func (this *QAbstractSlider) Maximum() int {
	ret := C.QAbstractSlider_Maximum(this.h)
	return (int)(ret)
}

func (this *QAbstractSlider) SetSingleStep(singleStep int) {
	C.QAbstractSlider_SetSingleStep(this.h, (C.int)(singleStep))
}

func (this *QAbstractSlider) SingleStep() int {
	ret := C.QAbstractSlider_SingleStep(this.h)
	return (int)(ret)
}

func (this *QAbstractSlider) SetPageStep(pageStep int) {
	C.QAbstractSlider_SetPageStep(this.h, (C.int)(pageStep))
}

func (this *QAbstractSlider) PageStep() int {
	ret := C.QAbstractSlider_PageStep(this.h)
	return (int)(ret)
}

func (this *QAbstractSlider) SetTracking(enable bool) {
	C.QAbstractSlider_SetTracking(this.h, (C.bool)(enable))
}

func (this *QAbstractSlider) HasTracking() bool {
	ret := C.QAbstractSlider_HasTracking(this.h)
	return (bool)(ret)
}

func (this *QAbstractSlider) SetSliderDown(sliderDown bool) {
	C.QAbstractSlider_SetSliderDown(this.h, (C.bool)(sliderDown))
}

func (this *QAbstractSlider) IsSliderDown() bool {
	ret := C.QAbstractSlider_IsSliderDown(this.h)
	return (bool)(ret)
}

func (this *QAbstractSlider) SetSliderPosition(sliderPosition int) {
	C.QAbstractSlider_SetSliderPosition(this.h, (C.int)(sliderPosition))
}

func (this *QAbstractSlider) SliderPosition() int {
	ret := C.QAbstractSlider_SliderPosition(this.h)
	return (int)(ret)
}

func (this *QAbstractSlider) SetInvertedAppearance(invertedAppearance bool) {
	C.QAbstractSlider_SetInvertedAppearance(this.h, (C.bool)(invertedAppearance))
}

func (this *QAbstractSlider) InvertedAppearance() bool {
	ret := C.QAbstractSlider_InvertedAppearance(this.h)
	return (bool)(ret)
}

func (this *QAbstractSlider) SetInvertedControls(invertedControls bool) {
	C.QAbstractSlider_SetInvertedControls(this.h, (C.bool)(invertedControls))
}

func (this *QAbstractSlider) InvertedControls() bool {
	ret := C.QAbstractSlider_InvertedControls(this.h)
	return (bool)(ret)
}

func (this *QAbstractSlider) Value() int {
	ret := C.QAbstractSlider_Value(this.h)
	return (int)(ret)
}

func (this *QAbstractSlider) TriggerAction(action uintptr) {
	C.QAbstractSlider_TriggerAction(this.h, (C.uintptr_t)(action))
}

func (this *QAbstractSlider) SetValue(value int) {
	C.QAbstractSlider_SetValue(this.h, (C.int)(value))
}

func (this *QAbstractSlider) SetOrientation(orientation uintptr) {
	C.QAbstractSlider_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QAbstractSlider) SetRange(min int, max int) {
	C.QAbstractSlider_SetRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QAbstractSlider) ValueChanged(value int) {
	C.QAbstractSlider_ValueChanged(this.h, (C.int)(value))
}

func (this *QAbstractSlider) OnValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractSlider_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractSlider) SliderPressed() {
	C.QAbstractSlider_SliderPressed(this.h)
}

func (this *QAbstractSlider) OnSliderPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractSlider_connect_SliderPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractSlider) SliderMoved(position int) {
	C.QAbstractSlider_SliderMoved(this.h, (C.int)(position))
}

func (this *QAbstractSlider) OnSliderMoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractSlider_connect_SliderMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractSlider) SliderReleased() {
	C.QAbstractSlider_SliderReleased(this.h)
}

func (this *QAbstractSlider) OnSliderReleased(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractSlider_connect_SliderReleased(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractSlider) RangeChanged(min int, max int) {
	C.QAbstractSlider_RangeChanged(this.h, (C.int)(min), (C.int)(max))
}

func (this *QAbstractSlider) OnRangeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractSlider_connect_RangeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractSlider) ActionTriggered(action int) {
	C.QAbstractSlider_ActionTriggered(this.h, (C.int)(action))
}

func (this *QAbstractSlider) OnActionTriggered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractSlider_connect_ActionTriggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAbstractSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSlider_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSlider_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSlider_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSlider_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractSlider_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractSlider_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractSlider) Delete() {
	C.QAbstractSlider_Delete(this.h)
}
