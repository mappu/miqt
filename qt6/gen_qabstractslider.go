package qt6

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

type QAbstractSlider__SliderChange int

const (
	QAbstractSlider__SliderRangeChange       QAbstractSlider__SliderChange = 0
	QAbstractSlider__SliderOrientationChange QAbstractSlider__SliderChange = 1
	QAbstractSlider__SliderStepsChange       QAbstractSlider__SliderChange = 2
	QAbstractSlider__SliderValueChange       QAbstractSlider__SliderChange = 3
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

func (this *QAbstractSlider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractSlider constructs the type using only CGO pointers.
func newQAbstractSlider(h *C.QAbstractSlider) *QAbstractSlider {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QAbstractSlider_virtbase(h, &outptr_QWidget)

	return &QAbstractSlider{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQAbstractSlider constructs the type using only unsafe pointers.
func UnsafeNewQAbstractSlider(h unsafe.Pointer) *QAbstractSlider {
	return newQAbstractSlider((*C.QAbstractSlider)(h))
}

// NewQAbstractSlider constructs a new QAbstractSlider object.
func NewQAbstractSlider(parent *QWidget) *QAbstractSlider {

	return newQAbstractSlider(C.QAbstractSlider_new(parent.cPointer()))
}

// NewQAbstractSlider2 constructs a new QAbstractSlider object.
func NewQAbstractSlider2() *QAbstractSlider {

	return newQAbstractSlider(C.QAbstractSlider_new2())
}

func (this *QAbstractSlider) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractSlider_MetaObject(this.h))
}

func (this *QAbstractSlider) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractSlider_Metacast(this.h, param1_Cstring))
}

func QAbstractSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSlider_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	C.QAbstractSlider_connect_ValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_ValueChanged
func miqt_exec_callback_QAbstractSlider_ValueChanged(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
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
	C.QAbstractSlider_connect_SliderPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_SliderPressed
func miqt_exec_callback_QAbstractSlider_SliderPressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSlider) SliderMoved(position int) {
	C.QAbstractSlider_SliderMoved(this.h, (C.int)(position))
}
func (this *QAbstractSlider) OnSliderMoved(slot func(position int)) {
	C.QAbstractSlider_connect_SliderMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_SliderMoved
func miqt_exec_callback_QAbstractSlider_SliderMoved(cb C.intptr_t, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int))
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
	C.QAbstractSlider_connect_SliderReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_SliderReleased
func miqt_exec_callback_QAbstractSlider_SliderReleased(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSlider) RangeChanged(min int, max int) {
	C.QAbstractSlider_RangeChanged(this.h, (C.int)(min), (C.int)(max))
}
func (this *QAbstractSlider) OnRangeChanged(slot func(min int, max int)) {
	C.QAbstractSlider_connect_RangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_RangeChanged
func miqt_exec_callback_QAbstractSlider_RangeChanged(cb C.intptr_t, min C.int, max C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min int, max int))
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
	C.QAbstractSlider_connect_ActionTriggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_ActionTriggered
func miqt_exec_callback_QAbstractSlider_ActionTriggered(cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action int))
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
	var _ms C.struct_miqt_string = C.QAbstractSlider_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSlider_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSlider) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QAbstractSlider_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QAbstractSlider) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QAbstractSlider_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_Event
func miqt_exec_callback_QAbstractSlider_Event(self *C.QAbstractSlider, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_SliderChange(change QAbstractSlider__SliderChange) {

	C.QAbstractSlider_virtualbase_SliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QAbstractSlider) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	ok := C.QAbstractSlider_override_virtual_SliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_SliderChange
func miqt_exec_callback_QAbstractSlider_SliderChange(self *C.QAbstractSlider, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QAbstractSlider_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QAbstractSlider) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QAbstractSlider_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_KeyPressEvent
func miqt_exec_callback_QAbstractSlider_KeyPressEvent(self *C.QAbstractSlider, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QAbstractSlider_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractSlider) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QAbstractSlider_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_TimerEvent
func miqt_exec_callback_QAbstractSlider_TimerEvent(self *C.QAbstractSlider, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QAbstractSlider_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractSlider) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QAbstractSlider_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_WheelEvent
func miqt_exec_callback_QAbstractSlider_WheelEvent(self *C.QAbstractSlider, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QAbstractSlider_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractSlider) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QAbstractSlider_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_ChangeEvent
func miqt_exec_callback_QAbstractSlider_ChangeEvent(self *C.QAbstractSlider, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DevType() int {

	return (int)(C.QAbstractSlider_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractSlider_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_DevType
func miqt_exec_callback_QAbstractSlider_DevType(self *C.QAbstractSlider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractSlider_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractSlider) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractSlider_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_SetVisible
func miqt_exec_callback_QAbstractSlider_SetVisible(self *C.QAbstractSlider, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QAbstractSlider_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSlider) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractSlider_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_SizeHint
func miqt_exec_callback_QAbstractSlider_SizeHint(self *C.QAbstractSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractSlider_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSlider) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractSlider_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_MinimumSizeHint
func miqt_exec_callback_QAbstractSlider_MinimumSizeHint(self *C.QAbstractSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractSlider_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSlider) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractSlider_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_HeightForWidth
func miqt_exec_callback_QAbstractSlider_HeightForWidth(self *C.QAbstractSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QAbstractSlider_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractSlider_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_HasHeightForWidth
func miqt_exec_callback_QAbstractSlider_HasHeightForWidth(self *C.QAbstractSlider, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QAbstractSlider_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QAbstractSlider_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_PaintEngine
func miqt_exec_callback_QAbstractSlider_PaintEngine(self *C.QAbstractSlider, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_MousePressEvent
func miqt_exec_callback_QAbstractSlider_MousePressEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_MouseReleaseEvent
func miqt_exec_callback_QAbstractSlider_MouseReleaseEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_MouseDoubleClickEvent
func miqt_exec_callback_QAbstractSlider_MouseDoubleClickEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_MouseMoveEvent
func miqt_exec_callback_QAbstractSlider_MouseMoveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QAbstractSlider_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractSlider_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_KeyReleaseEvent
func miqt_exec_callback_QAbstractSlider_KeyReleaseEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractSlider_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractSlider_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_FocusInEvent
func miqt_exec_callback_QAbstractSlider_FocusInEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractSlider_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractSlider_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_FocusOutEvent
func miqt_exec_callback_QAbstractSlider_FocusOutEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QAbstractSlider_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QAbstractSlider_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_EnterEvent
func miqt_exec_callback_QAbstractSlider_EnterEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QAbstractSlider_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractSlider_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_LeaveEvent
func miqt_exec_callback_QAbstractSlider_LeaveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QAbstractSlider_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QAbstractSlider_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_PaintEvent
func miqt_exec_callback_QAbstractSlider_PaintEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QAbstractSlider_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QAbstractSlider_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_MoveEvent
func miqt_exec_callback_QAbstractSlider_MoveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QAbstractSlider_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QAbstractSlider_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_ResizeEvent
func miqt_exec_callback_QAbstractSlider_ResizeEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QAbstractSlider_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QAbstractSlider_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_CloseEvent
func miqt_exec_callback_QAbstractSlider_CloseEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QAbstractSlider_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QAbstractSlider_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_ContextMenuEvent
func miqt_exec_callback_QAbstractSlider_ContextMenuEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QAbstractSlider_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QAbstractSlider_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_TabletEvent
func miqt_exec_callback_QAbstractSlider_TabletEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QAbstractSlider_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QAbstractSlider_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_ActionEvent
func miqt_exec_callback_QAbstractSlider_ActionEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QAbstractSlider_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QAbstractSlider_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_DragEnterEvent
func miqt_exec_callback_QAbstractSlider_DragEnterEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QAbstractSlider_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QAbstractSlider_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_DragMoveEvent
func miqt_exec_callback_QAbstractSlider_DragMoveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QAbstractSlider_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QAbstractSlider_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_DragLeaveEvent
func miqt_exec_callback_QAbstractSlider_DragLeaveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QAbstractSlider_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QAbstractSlider_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_DropEvent
func miqt_exec_callback_QAbstractSlider_DropEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QAbstractSlider_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QAbstractSlider_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_ShowEvent
func miqt_exec_callback_QAbstractSlider_ShowEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QAbstractSlider_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QAbstractSlider_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_HideEvent
func miqt_exec_callback_QAbstractSlider_HideEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractSlider_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QAbstractSlider) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QAbstractSlider_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_NativeEvent
func miqt_exec_callback_QAbstractSlider_NativeEvent(self *C.QAbstractSlider, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractSlider_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSlider) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractSlider_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_Metric
func miqt_exec_callback_QAbstractSlider_Metric(self *C.QAbstractSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_InitPainter(painter *QPainter) {

	C.QAbstractSlider_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QAbstractSlider) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QAbstractSlider_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_InitPainter
func miqt_exec_callback_QAbstractSlider_InitPainter(self *C.QAbstractSlider, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QAbstractSlider_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QAbstractSlider) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QAbstractSlider_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_Redirected
func miqt_exec_callback_QAbstractSlider_Redirected(self *C.QAbstractSlider, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QAbstractSlider_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QAbstractSlider_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_SharedPainter
func miqt_exec_callback_QAbstractSlider_SharedPainter(self *C.QAbstractSlider, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QAbstractSlider_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractSlider) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QAbstractSlider_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_InputMethodEvent
func miqt_exec_callback_QAbstractSlider_InputMethodEvent(self *C.QAbstractSlider, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QAbstractSlider_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSlider) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QAbstractSlider_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_InputMethodQuery
func miqt_exec_callback_QAbstractSlider_InputMethodQuery(self *C.QAbstractSlider, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractSlider_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractSlider) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractSlider_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_FocusNextPrevChild
func miqt_exec_callback_QAbstractSlider_FocusNextPrevChild(self *C.QAbstractSlider, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

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
