package qt

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
	QLCDNumber__Mode__Hex QLCDNumber__Mode = 0
	QLCDNumber__Mode__Dec QLCDNumber__Mode = 1
	QLCDNumber__Mode__Oct QLCDNumber__Mode = 2
	QLCDNumber__Mode__Bin QLCDNumber__Mode = 3
)

type QLCDNumber__SegmentStyle int

const (
	QLCDNumber__SegmentStyle__Outline QLCDNumber__SegmentStyle = 0
	QLCDNumber__SegmentStyle__Filled  QLCDNumber__SegmentStyle = 1
	QLCDNumber__SegmentStyle__Flat    QLCDNumber__SegmentStyle = 2
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

func newQLCDNumber(h *C.QLCDNumber) *QLCDNumber {
	if h == nil {
		return nil
	}
	return &QLCDNumber{h: h, QFrame: newQFrame_U(unsafe.Pointer(h))}
}

func newQLCDNumber_U(h unsafe.Pointer) *QLCDNumber {
	return newQLCDNumber((*C.QLCDNumber)(h))
}

// NewQLCDNumber constructs a new QLCDNumber object.
func NewQLCDNumber() *QLCDNumber {
	ret := C.QLCDNumber_new()
	return newQLCDNumber(ret)
}

// NewQLCDNumber2 constructs a new QLCDNumber object.
func NewQLCDNumber2(numDigits uint) *QLCDNumber {
	ret := C.QLCDNumber_new2((C.uint)(numDigits))
	return newQLCDNumber(ret)
}

// NewQLCDNumber3 constructs a new QLCDNumber object.
func NewQLCDNumber3(parent *QWidget) *QLCDNumber {
	ret := C.QLCDNumber_new3(parent.cPointer())
	return newQLCDNumber(ret)
}

// NewQLCDNumber4 constructs a new QLCDNumber object.
func NewQLCDNumber4(numDigits uint, parent *QWidget) *QLCDNumber {
	ret := C.QLCDNumber_new4((C.uint)(numDigits), parent.cPointer())
	return newQLCDNumber(ret)
}

func (this *QLCDNumber) MetaObject() *QMetaObject {
	ret := C.QLCDNumber_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QLCDNumber_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLCDNumber_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLCDNumber_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLCDNumber_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLCDNumber) SmallDecimalPoint() bool {
	ret := C.QLCDNumber_SmallDecimalPoint(this.h)
	return (bool)(ret)
}

func (this *QLCDNumber) DigitCount() int {
	ret := C.QLCDNumber_DigitCount(this.h)
	return (int)(ret)
}

func (this *QLCDNumber) SetDigitCount(nDigits int) {
	C.QLCDNumber_SetDigitCount(this.h, (C.int)(nDigits))
}

func (this *QLCDNumber) CheckOverflow(num float64) bool {
	ret := C.QLCDNumber_CheckOverflow(this.h, (C.double)(num))
	return (bool)(ret)
}

func (this *QLCDNumber) CheckOverflowWithNum(num int) bool {
	ret := C.QLCDNumber_CheckOverflowWithNum(this.h, (C.int)(num))
	return (bool)(ret)
}

func (this *QLCDNumber) Mode() QLCDNumber__Mode {
	ret := C.QLCDNumber_Mode(this.h)
	return (QLCDNumber__Mode)(ret)
}

func (this *QLCDNumber) SetMode(mode QLCDNumber__Mode) {
	C.QLCDNumber_SetMode(this.h, (C.uintptr_t)(mode))
}

func (this *QLCDNumber) SegmentStyle() QLCDNumber__SegmentStyle {
	ret := C.QLCDNumber_SegmentStyle(this.h)
	return (QLCDNumber__SegmentStyle)(ret)
}

func (this *QLCDNumber) SetSegmentStyle(segmentStyle QLCDNumber__SegmentStyle) {
	C.QLCDNumber_SetSegmentStyle(this.h, (C.uintptr_t)(segmentStyle))
}

func (this *QLCDNumber) Value() float64 {
	ret := C.QLCDNumber_Value(this.h)
	return (float64)(ret)
}

func (this *QLCDNumber) IntValue() int {
	ret := C.QLCDNumber_IntValue(this.h)
	return (int)(ret)
}

func (this *QLCDNumber) SizeHint() *QSize {
	ret := C.QLCDNumber_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLCDNumber) Display(str string) {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	C.QLCDNumber_Display(this.h, str_Cstring, C.size_t(len(str)))
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
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLCDNumber_connect_Overflow(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QLCDNumber_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLCDNumber_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLCDNumber_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLCDNumber_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLCDNumber_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLCDNumber_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLCDNumber_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLCDNumber_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLCDNumber) Delete() {
	C.QLCDNumber_Delete(this.h)
}
