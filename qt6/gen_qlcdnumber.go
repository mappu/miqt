package qt6

/*

#include "gen_qlcdnumber.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLCDNumber__Mode int

const (
	QLCDNumber__Hex QLCDNumber__Mode = 0
	QLCDNumber__Dec QLCDNumber__Mode = 1
	QLCDNumber__Oct QLCDNumber__Mode = 2
	QLCDNumber__Bin QLCDNumber__Mode = 3
)

type QLCDNumber__SegmentStyle int

const (
	QLCDNumber__Outline QLCDNumber__SegmentStyle = 0
	QLCDNumber__Filled  QLCDNumber__SegmentStyle = 1
	QLCDNumber__Flat    QLCDNumber__SegmentStyle = 2
)

type QLCDNumber struct {
	h *C.QLCDNumber
	*QFrame
}

func (this *QLCDNumber) cPointer() *C.QLCDNumber {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLCDNumber) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLCDNumber constructs the type using only CGO pointers.
func newQLCDNumber(h *C.QLCDNumber) *QLCDNumber {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QLCDNumber_virtbase(h, &outptr_QFrame)

	return &QLCDNumber{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQLCDNumber constructs the type using only unsafe pointers.
func UnsafeNewQLCDNumber(h unsafe.Pointer) *QLCDNumber {
	return newQLCDNumber((*C.QLCDNumber)(h))
}

// NewQLCDNumber constructs a new QLCDNumber object.
func NewQLCDNumber(parent *QWidget) *QLCDNumber {

	return newQLCDNumber(C.QLCDNumber_new(parent.cPointer()))
}

// NewQLCDNumber2 constructs a new QLCDNumber object.
func NewQLCDNumber2() *QLCDNumber {

	return newQLCDNumber(C.QLCDNumber_new2())
}

// NewQLCDNumber3 constructs a new QLCDNumber object.
func NewQLCDNumber3(numDigits uint) *QLCDNumber {

	return newQLCDNumber(C.QLCDNumber_new3((C.uint)(numDigits)))
}

// NewQLCDNumber4 constructs a new QLCDNumber object.
func NewQLCDNumber4(numDigits uint, parent *QWidget) *QLCDNumber {

	return newQLCDNumber(C.QLCDNumber_new4((C.uint)(numDigits), parent.cPointer()))
}

func (this *QLCDNumber) MetaObject() *QMetaObject {
	return newQMetaObject(C.QLCDNumber_MetaObject(this.h))
}

func (this *QLCDNumber) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLCDNumber_Metacast(this.h, param1_Cstring))
}

func QLCDNumber_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLCDNumber_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLCDNumber) SmallDecimalPoint() bool {
	return (bool)(C.QLCDNumber_SmallDecimalPoint(this.h))
}

func (this *QLCDNumber) DigitCount() int {
	return (int)(C.QLCDNumber_DigitCount(this.h))
}

func (this *QLCDNumber) SetDigitCount(nDigits int) {
	C.QLCDNumber_SetDigitCount(this.h, (C.int)(nDigits))
}

func (this *QLCDNumber) CheckOverflow(num float64) bool {
	return (bool)(C.QLCDNumber_CheckOverflow(this.h, (C.double)(num)))
}

func (this *QLCDNumber) CheckOverflowWithNum(num int) bool {
	return (bool)(C.QLCDNumber_CheckOverflowWithNum(this.h, (C.int)(num)))
}

func (this *QLCDNumber) Mode() QLCDNumber__Mode {
	return (QLCDNumber__Mode)(C.QLCDNumber_Mode(this.h))
}

func (this *QLCDNumber) SetMode(mode QLCDNumber__Mode) {
	C.QLCDNumber_SetMode(this.h, (C.int)(mode))
}

func (this *QLCDNumber) SegmentStyle() QLCDNumber__SegmentStyle {
	return (QLCDNumber__SegmentStyle)(C.QLCDNumber_SegmentStyle(this.h))
}

func (this *QLCDNumber) SetSegmentStyle(segmentStyle QLCDNumber__SegmentStyle) {
	C.QLCDNumber_SetSegmentStyle(this.h, (C.int)(segmentStyle))
}

func (this *QLCDNumber) Value() float64 {
	return (float64)(C.QLCDNumber_Value(this.h))
}

func (this *QLCDNumber) IntValue() int {
	return (int)(C.QLCDNumber_IntValue(this.h))
}

func (this *QLCDNumber) SizeHint() *QSize {
	_goptr := newQSize(C.QLCDNumber_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLCDNumber) Display(str string) {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	C.QLCDNumber_Display(this.h, str_ms)
}

func (this *QLCDNumber) DisplayWithNum(num int) {
	C.QLCDNumber_DisplayWithNum(this.h, (C.int)(num))
}

func (this *QLCDNumber) Display2(num float64) {
	C.QLCDNumber_Display2(this.h, (C.double)(num))
}

func (this *QLCDNumber) SetHexMode() {
	C.QLCDNumber_SetHexMode(this.h)
}

func (this *QLCDNumber) SetDecMode() {
	C.QLCDNumber_SetDecMode(this.h)
}

func (this *QLCDNumber) SetOctMode() {
	C.QLCDNumber_SetOctMode(this.h)
}

func (this *QLCDNumber) SetBinMode() {
	C.QLCDNumber_SetBinMode(this.h)
}

func (this *QLCDNumber) SetSmallDecimalPoint(smallDecimalPoint bool) {
	C.QLCDNumber_SetSmallDecimalPoint(this.h, (C.bool)(smallDecimalPoint))
}

func (this *QLCDNumber) Overflow() {
	C.QLCDNumber_Overflow(this.h)
}
func (this *QLCDNumber) OnOverflow(slot func()) {
	C.QLCDNumber_connect_Overflow(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLCDNumber_Overflow
func miqt_exec_callback_QLCDNumber_Overflow(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QLCDNumber_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLCDNumber_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLCDNumber_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLCDNumber_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLCDNumber) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QLCDNumber_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLCDNumber) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QLCDNumber_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_SizeHint
func miqt_exec_callback_QLCDNumber_SizeHint(self *C.QLCDNumber, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QLCDNumber) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QLCDNumber_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QLCDNumber) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QLCDNumber_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_Event
func miqt_exec_callback_QLCDNumber_Event(self *C.QLCDNumber, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QLCDNumber_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLCDNumber) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QLCDNumber_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_PaintEvent
func miqt_exec_callback_QLCDNumber_PaintEvent(self *C.QLCDNumber, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QLCDNumber_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLCDNumber) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QLCDNumber_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_ChangeEvent
func miqt_exec_callback_QLCDNumber_ChangeEvent(self *C.QLCDNumber, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QLCDNumber_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QLCDNumber) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QLCDNumber_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_InitStyleOption
func miqt_exec_callback_QLCDNumber_InitStyleOption(self *C.QLCDNumber, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QLCDNumber) callVirtualBase_DevType() int {

	return (int)(C.QLCDNumber_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QLCDNumber) OnDevType(slot func(super func() int) int) {
	ok := C.QLCDNumber_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_DevType
func miqt_exec_callback_QLCDNumber_DevType(self *C.QLCDNumber, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_SetVisible(visible bool) {

	C.QLCDNumber_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QLCDNumber) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QLCDNumber_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_SetVisible
func miqt_exec_callback_QLCDNumber_SetVisible(self *C.QLCDNumber, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QLCDNumber) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QLCDNumber_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLCDNumber) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QLCDNumber_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_MinimumSizeHint
func miqt_exec_callback_QLCDNumber_MinimumSizeHint(self *C.QLCDNumber, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QLCDNumber) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLCDNumber_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLCDNumber) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLCDNumber_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_HeightForWidth
func miqt_exec_callback_QLCDNumber_HeightForWidth(self *C.QLCDNumber, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QLCDNumber_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLCDNumber) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QLCDNumber_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_HasHeightForWidth
func miqt_exec_callback_QLCDNumber_HasHeightForWidth(self *C.QLCDNumber, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QLCDNumber_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QLCDNumber) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QLCDNumber_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_PaintEngine
func miqt_exec_callback_QLCDNumber_PaintEngine(self *C.QLCDNumber, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QLCDNumber) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QLCDNumber_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QLCDNumber_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_MousePressEvent
func miqt_exec_callback_QLCDNumber_MousePressEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QLCDNumber_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QLCDNumber_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_MouseReleaseEvent
func miqt_exec_callback_QLCDNumber_MouseReleaseEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QLCDNumber_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QLCDNumber_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_MouseDoubleClickEvent
func miqt_exec_callback_QLCDNumber_MouseDoubleClickEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QLCDNumber_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QLCDNumber_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_MouseMoveEvent
func miqt_exec_callback_QLCDNumber_MouseMoveEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QLCDNumber_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QLCDNumber_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_WheelEvent
func miqt_exec_callback_QLCDNumber_WheelEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QLCDNumber_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QLCDNumber_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_KeyPressEvent
func miqt_exec_callback_QLCDNumber_KeyPressEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QLCDNumber_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QLCDNumber_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_KeyReleaseEvent
func miqt_exec_callback_QLCDNumber_KeyReleaseEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QLCDNumber_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QLCDNumber_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_FocusInEvent
func miqt_exec_callback_QLCDNumber_FocusInEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QLCDNumber_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QLCDNumber_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_FocusOutEvent
func miqt_exec_callback_QLCDNumber_FocusOutEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QLCDNumber_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QLCDNumber_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_EnterEvent
func miqt_exec_callback_QLCDNumber_EnterEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QLCDNumber_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLCDNumber_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_LeaveEvent
func miqt_exec_callback_QLCDNumber_LeaveEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QLCDNumber_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QLCDNumber_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_MoveEvent
func miqt_exec_callback_QLCDNumber_MoveEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QLCDNumber_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QLCDNumber_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_ResizeEvent
func miqt_exec_callback_QLCDNumber_ResizeEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QLCDNumber_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QLCDNumber_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_CloseEvent
func miqt_exec_callback_QLCDNumber_CloseEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QLCDNumber_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QLCDNumber_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_ContextMenuEvent
func miqt_exec_callback_QLCDNumber_ContextMenuEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QLCDNumber_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QLCDNumber_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_TabletEvent
func miqt_exec_callback_QLCDNumber_TabletEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QLCDNumber_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QLCDNumber_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_ActionEvent
func miqt_exec_callback_QLCDNumber_ActionEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QLCDNumber_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QLCDNumber_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_DragEnterEvent
func miqt_exec_callback_QLCDNumber_DragEnterEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QLCDNumber_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QLCDNumber_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_DragMoveEvent
func miqt_exec_callback_QLCDNumber_DragMoveEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QLCDNumber_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QLCDNumber_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_DragLeaveEvent
func miqt_exec_callback_QLCDNumber_DragLeaveEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QLCDNumber_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QLCDNumber_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_DropEvent
func miqt_exec_callback_QLCDNumber_DropEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QLCDNumber_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QLCDNumber_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_ShowEvent
func miqt_exec_callback_QLCDNumber_ShowEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QLCDNumber_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QLCDNumber_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_HideEvent
func miqt_exec_callback_QLCDNumber_HideEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QLCDNumber_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QLCDNumber) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QLCDNumber_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_NativeEvent
func miqt_exec_callback_QLCDNumber_NativeEvent(self *C.QLCDNumber, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QLCDNumber_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLCDNumber) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QLCDNumber_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_Metric
func miqt_exec_callback_QLCDNumber_Metric(self *C.QLCDNumber, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_InitPainter(painter *QPainter) {

	C.QLCDNumber_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QLCDNumber) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QLCDNumber_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_InitPainter
func miqt_exec_callback_QLCDNumber_InitPainter(self *C.QLCDNumber, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QLCDNumber) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QLCDNumber_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QLCDNumber) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QLCDNumber_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_Redirected
func miqt_exec_callback_QLCDNumber_Redirected(self *C.QLCDNumber, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QLCDNumber) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QLCDNumber_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QLCDNumber) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QLCDNumber_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_SharedPainter
func miqt_exec_callback_QLCDNumber_SharedPainter(self *C.QLCDNumber, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QLCDNumber) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QLCDNumber_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLCDNumber) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QLCDNumber_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_InputMethodEvent
func miqt_exec_callback_QLCDNumber_InputMethodEvent(self *C.QLCDNumber, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QLCDNumber_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLCDNumber) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QLCDNumber_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_InputMethodQuery
func miqt_exec_callback_QLCDNumber_InputMethodQuery(self *C.QLCDNumber, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QLCDNumber) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QLCDNumber_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QLCDNumber) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QLCDNumber_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_FocusNextPrevChild
func miqt_exec_callback_QLCDNumber_FocusNextPrevChild(self *C.QLCDNumber, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QLCDNumber_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QLCDNumber) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QLCDNumber_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_EventFilter
func miqt_exec_callback_QLCDNumber_EventFilter(self *C.QLCDNumber, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QLCDNumber{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLCDNumber) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QLCDNumber_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QLCDNumber_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_TimerEvent
func miqt_exec_callback_QLCDNumber_TimerEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QLCDNumber_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QLCDNumber_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_ChildEvent
func miqt_exec_callback_QLCDNumber_ChildEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_CustomEvent(event *QEvent) {

	C.QLCDNumber_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLCDNumber) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLCDNumber_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_CustomEvent
func miqt_exec_callback_QLCDNumber_CustomEvent(self *C.QLCDNumber, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLCDNumber) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QLCDNumber_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLCDNumber) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLCDNumber_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_ConnectNotify
func miqt_exec_callback_QLCDNumber_ConnectNotify(self *C.QLCDNumber, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLCDNumber) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QLCDNumber_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLCDNumber) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLCDNumber_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLCDNumber_DisconnectNotify
func miqt_exec_callback_QLCDNumber_DisconnectNotify(self *C.QLCDNumber, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLCDNumber{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLCDNumber) Delete() {
	C.QLCDNumber_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLCDNumber) GoGC() {
	runtime.SetFinalizer(this, func(this *QLCDNumber) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
