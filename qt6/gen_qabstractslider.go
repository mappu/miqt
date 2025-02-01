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
	return newQMetaObject(C.QAbstractSlider_metaObject(this.h))
}

func (this *QAbstractSlider) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractSlider_metacast(this.h, param1_Cstring))
}

func QAbstractSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSlider_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSlider) Orientation() Orientation {
	return (Orientation)(C.QAbstractSlider_orientation(this.h))
}

func (this *QAbstractSlider) SetMinimum(minimum int) {
	C.QAbstractSlider_setMinimum(this.h, (C.int)(minimum))
}

func (this *QAbstractSlider) Minimum() int {
	return (int)(C.QAbstractSlider_minimum(this.h))
}

func (this *QAbstractSlider) SetMaximum(maximum int) {
	C.QAbstractSlider_setMaximum(this.h, (C.int)(maximum))
}

func (this *QAbstractSlider) Maximum() int {
	return (int)(C.QAbstractSlider_maximum(this.h))
}

func (this *QAbstractSlider) SetSingleStep(singleStep int) {
	C.QAbstractSlider_setSingleStep(this.h, (C.int)(singleStep))
}

func (this *QAbstractSlider) SingleStep() int {
	return (int)(C.QAbstractSlider_singleStep(this.h))
}

func (this *QAbstractSlider) SetPageStep(pageStep int) {
	C.QAbstractSlider_setPageStep(this.h, (C.int)(pageStep))
}

func (this *QAbstractSlider) PageStep() int {
	return (int)(C.QAbstractSlider_pageStep(this.h))
}

func (this *QAbstractSlider) SetTracking(enable bool) {
	C.QAbstractSlider_setTracking(this.h, (C.bool)(enable))
}

func (this *QAbstractSlider) HasTracking() bool {
	return (bool)(C.QAbstractSlider_hasTracking(this.h))
}

func (this *QAbstractSlider) SetSliderDown(sliderDown bool) {
	C.QAbstractSlider_setSliderDown(this.h, (C.bool)(sliderDown))
}

func (this *QAbstractSlider) IsSliderDown() bool {
	return (bool)(C.QAbstractSlider_isSliderDown(this.h))
}

func (this *QAbstractSlider) SetSliderPosition(sliderPosition int) {
	C.QAbstractSlider_setSliderPosition(this.h, (C.int)(sliderPosition))
}

func (this *QAbstractSlider) SliderPosition() int {
	return (int)(C.QAbstractSlider_sliderPosition(this.h))
}

func (this *QAbstractSlider) SetInvertedAppearance(invertedAppearance bool) {
	C.QAbstractSlider_setInvertedAppearance(this.h, (C.bool)(invertedAppearance))
}

func (this *QAbstractSlider) InvertedAppearance() bool {
	return (bool)(C.QAbstractSlider_invertedAppearance(this.h))
}

func (this *QAbstractSlider) SetInvertedControls(invertedControls bool) {
	C.QAbstractSlider_setInvertedControls(this.h, (C.bool)(invertedControls))
}

func (this *QAbstractSlider) InvertedControls() bool {
	return (bool)(C.QAbstractSlider_invertedControls(this.h))
}

func (this *QAbstractSlider) Value() int {
	return (int)(C.QAbstractSlider_value(this.h))
}

func (this *QAbstractSlider) TriggerAction(action QAbstractSlider__SliderAction) {
	C.QAbstractSlider_triggerAction(this.h, (C.int)(action))
}

func (this *QAbstractSlider) SetValue(value int) {
	C.QAbstractSlider_setValue(this.h, (C.int)(value))
}

func (this *QAbstractSlider) SetOrientation(orientation Orientation) {
	C.QAbstractSlider_setOrientation(this.h, (C.int)(orientation))
}

func (this *QAbstractSlider) SetRange(min int, max int) {
	C.QAbstractSlider_setRange(this.h, (C.int)(min), (C.int)(max))
}

func (this *QAbstractSlider) ValueChanged(value int) {
	C.QAbstractSlider_valueChanged(this.h, (C.int)(value))
}
func (this *QAbstractSlider) OnValueChanged(slot func(value int)) {
	C.QAbstractSlider_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_valueChanged
func miqt_exec_callback_QAbstractSlider_valueChanged(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *QAbstractSlider) SliderPressed() {
	C.QAbstractSlider_sliderPressed(this.h)
}
func (this *QAbstractSlider) OnSliderPressed(slot func()) {
	C.QAbstractSlider_connect_sliderPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_sliderPressed
func miqt_exec_callback_QAbstractSlider_sliderPressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSlider) SliderMoved(position int) {
	C.QAbstractSlider_sliderMoved(this.h, (C.int)(position))
}
func (this *QAbstractSlider) OnSliderMoved(slot func(position int)) {
	C.QAbstractSlider_connect_sliderMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_sliderMoved
func miqt_exec_callback_QAbstractSlider_sliderMoved(cb C.intptr_t, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	gofunc(slotval1)
}

func (this *QAbstractSlider) SliderReleased() {
	C.QAbstractSlider_sliderReleased(this.h)
}
func (this *QAbstractSlider) OnSliderReleased(slot func()) {
	C.QAbstractSlider_connect_sliderReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_sliderReleased
func miqt_exec_callback_QAbstractSlider_sliderReleased(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractSlider) RangeChanged(min int, max int) {
	C.QAbstractSlider_rangeChanged(this.h, (C.int)(min), (C.int)(max))
}
func (this *QAbstractSlider) OnRangeChanged(slot func(min int, max int)) {
	C.QAbstractSlider_connect_rangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_rangeChanged
func miqt_exec_callback_QAbstractSlider_rangeChanged(cb C.intptr_t, min C.int, max C.int) {
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
	C.QAbstractSlider_actionTriggered(this.h, (C.int)(action))
}
func (this *QAbstractSlider) OnActionTriggered(slot func(action int)) {
	C.QAbstractSlider_connect_actionTriggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractSlider_actionTriggered
func miqt_exec_callback_QAbstractSlider_actionTriggered(cb C.intptr_t, action C.int) {
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
	var _ms C.struct_miqt_string = C.QAbstractSlider_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractSlider_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractSlider) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QAbstractSlider_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QAbstractSlider) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QAbstractSlider_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_event
func miqt_exec_callback_QAbstractSlider_event(self *C.QAbstractSlider, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QAbstractSlider_virtualbase_sliderChange(unsafe.Pointer(this.h), (C.int)(change))

}
func (this *QAbstractSlider) OnSliderChange(slot func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange)) {
	ok := C.QAbstractSlider_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_sliderChange
func miqt_exec_callback_QAbstractSlider_sliderChange(self *C.QAbstractSlider, cb C.intptr_t, change C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QAbstractSlider__SliderChange), change QAbstractSlider__SliderChange))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractSlider__SliderChange)(change)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_SliderChange, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QAbstractSlider_virtualbase_keyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QAbstractSlider) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QAbstractSlider_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_keyPressEvent
func miqt_exec_callback_QAbstractSlider_keyPressEvent(self *C.QAbstractSlider, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QAbstractSlider_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractSlider) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QAbstractSlider_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_timerEvent
func miqt_exec_callback_QAbstractSlider_timerEvent(self *C.QAbstractSlider, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QAbstractSlider_virtualbase_wheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractSlider) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QAbstractSlider_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_wheelEvent
func miqt_exec_callback_QAbstractSlider_wheelEvent(self *C.QAbstractSlider, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QAbstractSlider_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QAbstractSlider) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QAbstractSlider_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_changeEvent
func miqt_exec_callback_QAbstractSlider_changeEvent(self *C.QAbstractSlider, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DevType() int {

	return (int)(C.QAbstractSlider_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractSlider_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_devType
func miqt_exec_callback_QAbstractSlider_devType(self *C.QAbstractSlider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractSlider_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractSlider) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractSlider_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_setVisible
func miqt_exec_callback_QAbstractSlider_setVisible(self *C.QAbstractSlider, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QAbstractSlider_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSlider) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractSlider_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_sizeHint
func miqt_exec_callback_QAbstractSlider_sizeHint(self *C.QAbstractSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractSlider_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSlider) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractSlider_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_minimumSizeHint
func miqt_exec_callback_QAbstractSlider_minimumSizeHint(self *C.QAbstractSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractSlider_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSlider) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractSlider_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_heightForWidth
func miqt_exec_callback_QAbstractSlider_heightForWidth(self *C.QAbstractSlider, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QAbstractSlider_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractSlider_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_hasHeightForWidth
func miqt_exec_callback_QAbstractSlider_hasHeightForWidth(self *C.QAbstractSlider, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QAbstractSlider_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QAbstractSlider_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_paintEngine
func miqt_exec_callback_QAbstractSlider_paintEngine(self *C.QAbstractSlider, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_mousePressEvent
func miqt_exec_callback_QAbstractSlider_mousePressEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_mouseReleaseEvent
func miqt_exec_callback_QAbstractSlider_mouseReleaseEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_mouseDoubleClickEvent
func miqt_exec_callback_QAbstractSlider_mouseDoubleClickEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QAbstractSlider_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractSlider_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_mouseMoveEvent
func miqt_exec_callback_QAbstractSlider_mouseMoveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QAbstractSlider_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractSlider_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_keyReleaseEvent
func miqt_exec_callback_QAbstractSlider_keyReleaseEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractSlider_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractSlider_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_focusInEvent
func miqt_exec_callback_QAbstractSlider_focusInEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractSlider_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractSlider_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_focusOutEvent
func miqt_exec_callback_QAbstractSlider_focusOutEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QAbstractSlider_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QAbstractSlider_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_enterEvent
func miqt_exec_callback_QAbstractSlider_enterEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QAbstractSlider_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractSlider_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_leaveEvent
func miqt_exec_callback_QAbstractSlider_leaveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QAbstractSlider_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QAbstractSlider_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_paintEvent
func miqt_exec_callback_QAbstractSlider_paintEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QAbstractSlider_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QAbstractSlider_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_moveEvent
func miqt_exec_callback_QAbstractSlider_moveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QAbstractSlider_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QAbstractSlider_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_resizeEvent
func miqt_exec_callback_QAbstractSlider_resizeEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QAbstractSlider_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QAbstractSlider_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_closeEvent
func miqt_exec_callback_QAbstractSlider_closeEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QAbstractSlider_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QAbstractSlider_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_contextMenuEvent
func miqt_exec_callback_QAbstractSlider_contextMenuEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QAbstractSlider_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QAbstractSlider_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_tabletEvent
func miqt_exec_callback_QAbstractSlider_tabletEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QAbstractSlider_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QAbstractSlider_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_actionEvent
func miqt_exec_callback_QAbstractSlider_actionEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QAbstractSlider_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QAbstractSlider_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_dragEnterEvent
func miqt_exec_callback_QAbstractSlider_dragEnterEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QAbstractSlider_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QAbstractSlider_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_dragMoveEvent
func miqt_exec_callback_QAbstractSlider_dragMoveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QAbstractSlider_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QAbstractSlider_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_dragLeaveEvent
func miqt_exec_callback_QAbstractSlider_dragLeaveEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QAbstractSlider_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QAbstractSlider_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_dropEvent
func miqt_exec_callback_QAbstractSlider_dropEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QAbstractSlider_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QAbstractSlider_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_showEvent
func miqt_exec_callback_QAbstractSlider_showEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QAbstractSlider_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QAbstractSlider_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_hideEvent
func miqt_exec_callback_QAbstractSlider_hideEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QHideEvent) {
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
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractSlider_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QAbstractSlider) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QAbstractSlider_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_nativeEvent
func miqt_exec_callback_QAbstractSlider_nativeEvent(self *C.QAbstractSlider, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	return (int)(C.QAbstractSlider_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractSlider) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractSlider_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_metric
func miqt_exec_callback_QAbstractSlider_metric(self *C.QAbstractSlider, cb C.intptr_t, param1 C.int) C.int {
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

	C.QAbstractSlider_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QAbstractSlider) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QAbstractSlider_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_initPainter
func miqt_exec_callback_QAbstractSlider_initPainter(self *C.QAbstractSlider, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QAbstractSlider_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QAbstractSlider) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QAbstractSlider_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_redirected
func miqt_exec_callback_QAbstractSlider_redirected(self *C.QAbstractSlider, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QAbstractSlider_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QAbstractSlider) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QAbstractSlider_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_sharedPainter
func miqt_exec_callback_QAbstractSlider_sharedPainter(self *C.QAbstractSlider, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QAbstractSlider) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QAbstractSlider_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractSlider) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QAbstractSlider_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_inputMethodEvent
func miqt_exec_callback_QAbstractSlider_inputMethodEvent(self *C.QAbstractSlider, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QAbstractSlider_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractSlider) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QAbstractSlider_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_inputMethodQuery
func miqt_exec_callback_QAbstractSlider_inputMethodQuery(self *C.QAbstractSlider, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QAbstractSlider_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractSlider) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractSlider_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_focusNextPrevChild
func miqt_exec_callback_QAbstractSlider_focusNextPrevChild(self *C.QAbstractSlider, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractSlider_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractSlider) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAbstractSlider_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_eventFilter
func miqt_exec_callback_QAbstractSlider_eventFilter(self *C.QAbstractSlider, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractSlider{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractSlider) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractSlider_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractSlider_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_childEvent
func miqt_exec_callback_QAbstractSlider_childEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractSlider_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractSlider) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractSlider_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_customEvent
func miqt_exec_callback_QAbstractSlider_customEvent(self *C.QAbstractSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractSlider_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractSlider) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractSlider_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_connectNotify
func miqt_exec_callback_QAbstractSlider_connectNotify(self *C.QAbstractSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractSlider) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractSlider_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractSlider) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractSlider_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractSlider_disconnectNotify
func miqt_exec_callback_QAbstractSlider_disconnectNotify(self *C.QAbstractSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractSlider{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractSlider) Delete() {
	C.QAbstractSlider_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
