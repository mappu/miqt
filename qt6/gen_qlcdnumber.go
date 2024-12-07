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
	h          *C.QLCDNumber
	isSubclass bool
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

	ret := newQLCDNumber(C.QLCDNumber_new(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQLCDNumber2 constructs a new QLCDNumber object.
func NewQLCDNumber2() *QLCDNumber {

	ret := newQLCDNumber(C.QLCDNumber_new2())
	ret.isSubclass = true
	return ret
}

// NewQLCDNumber3 constructs a new QLCDNumber object.
func NewQLCDNumber3(numDigits uint) *QLCDNumber {

	ret := newQLCDNumber(C.QLCDNumber_new3((C.uint)(numDigits)))
	ret.isSubclass = true
	return ret
}

// NewQLCDNumber4 constructs a new QLCDNumber object.
func NewQLCDNumber4(numDigits uint, parent *QWidget) *QLCDNumber {

	ret := newQLCDNumber(C.QLCDNumber_new4((C.uint)(numDigits), parent.cPointer()))
	ret.isSubclass = true
	return ret
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLCDNumber_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLCDNumber_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLCDNumber_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLCDNumber_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLCDNumber_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

// Delete this object from C++ memory.
func (this *QLCDNumber) Delete() {
	C.QLCDNumber_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLCDNumber) GoGC() {
	runtime.SetFinalizer(this, func(this *QLCDNumber) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
