package qwt

/*

#include "gen_qwt_scale_div.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtScaleDiv__TickType int

const (
	QwtScaleDiv__NoTick     QwtScaleDiv__TickType = -1
	QwtScaleDiv__MinorTick  QwtScaleDiv__TickType = 0
	QwtScaleDiv__MediumTick QwtScaleDiv__TickType = 1
	QwtScaleDiv__MajorTick  QwtScaleDiv__TickType = 2
	QwtScaleDiv__NTickTypes QwtScaleDiv__TickType = 3
)

type QwtScaleDiv struct {
	h *C.QwtScaleDiv
}

func (this *QwtScaleDiv) cPointer() *C.QwtScaleDiv {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtScaleDiv) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtScaleDiv constructs the type using only CGO pointers.
func newQwtScaleDiv(h *C.QwtScaleDiv) *QwtScaleDiv {
	if h == nil {
		return nil
	}

	return &QwtScaleDiv{h: h}
}

// UnsafeNewQwtScaleDiv constructs the type using only unsafe pointers.
func UnsafeNewQwtScaleDiv(h unsafe.Pointer) *QwtScaleDiv {
	return newQwtScaleDiv((*C.QwtScaleDiv)(h))
}

// NewQwtScaleDiv constructs a new QwtScaleDiv object.
func NewQwtScaleDiv() *QwtScaleDiv {

	return newQwtScaleDiv(C.QwtScaleDiv_new())
}

// NewQwtScaleDiv2 constructs a new QwtScaleDiv object.
func NewQwtScaleDiv2(param1 *QwtInterval, param2 []float64) *QwtScaleDiv {
	param2_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = (C.double)(param2[i])
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}

	return newQwtScaleDiv(C.QwtScaleDiv_new2(param1.cPointer(), param2_ma))
}

// NewQwtScaleDiv3 constructs a new QwtScaleDiv object.
func NewQwtScaleDiv3(lowerBound float64, upperBound float64, param3 []float64) *QwtScaleDiv {
	param3_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param3))))
	defer C.free(unsafe.Pointer(param3_CArray))
	for i := range param3 {
		param3_CArray[i] = (C.double)(param3[i])
	}
	param3_ma := C.struct_miqt_array{len: C.size_t(len(param3)), data: unsafe.Pointer(param3_CArray)}

	return newQwtScaleDiv(C.QwtScaleDiv_new3((C.double)(lowerBound), (C.double)(upperBound), param3_ma))
}

// NewQwtScaleDiv4 constructs a new QwtScaleDiv object.
func NewQwtScaleDiv4(lowerBound float64, upperBound float64, minorTicks []float64, mediumTicks []float64, majorTicks []float64) *QwtScaleDiv {
	minorTicks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(minorTicks))))
	defer C.free(unsafe.Pointer(minorTicks_CArray))
	for i := range minorTicks {
		minorTicks_CArray[i] = (C.double)(minorTicks[i])
	}
	minorTicks_ma := C.struct_miqt_array{len: C.size_t(len(minorTicks)), data: unsafe.Pointer(minorTicks_CArray)}
	mediumTicks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(mediumTicks))))
	defer C.free(unsafe.Pointer(mediumTicks_CArray))
	for i := range mediumTicks {
		mediumTicks_CArray[i] = (C.double)(mediumTicks[i])
	}
	mediumTicks_ma := C.struct_miqt_array{len: C.size_t(len(mediumTicks)), data: unsafe.Pointer(mediumTicks_CArray)}
	majorTicks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(majorTicks))))
	defer C.free(unsafe.Pointer(majorTicks_CArray))
	for i := range majorTicks {
		majorTicks_CArray[i] = (C.double)(majorTicks[i])
	}
	majorTicks_ma := C.struct_miqt_array{len: C.size_t(len(majorTicks)), data: unsafe.Pointer(majorTicks_CArray)}

	return newQwtScaleDiv(C.QwtScaleDiv_new4((C.double)(lowerBound), (C.double)(upperBound), minorTicks_ma, mediumTicks_ma, majorTicks_ma))
}

// NewQwtScaleDiv5 constructs a new QwtScaleDiv object.
func NewQwtScaleDiv5(param1 *QwtScaleDiv) *QwtScaleDiv {

	return newQwtScaleDiv(C.QwtScaleDiv_new5(param1.cPointer()))
}

// NewQwtScaleDiv6 constructs a new QwtScaleDiv object.
func NewQwtScaleDiv6(lowerBound float64) *QwtScaleDiv {

	return newQwtScaleDiv(C.QwtScaleDiv_new6((C.double)(lowerBound)))
}

// NewQwtScaleDiv7 constructs a new QwtScaleDiv object.
func NewQwtScaleDiv7(lowerBound float64, upperBound float64) *QwtScaleDiv {

	return newQwtScaleDiv(C.QwtScaleDiv_new7((C.double)(lowerBound), (C.double)(upperBound)))
}

func (this *QwtScaleDiv) OperatorEqual(param1 *QwtScaleDiv) bool {
	return (bool)(C.QwtScaleDiv_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtScaleDiv) OperatorNotEqual(param1 *QwtScaleDiv) bool {
	return (bool)(C.QwtScaleDiv_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtScaleDiv) SetInterval(lowerBound float64, upperBound float64) {
	C.QwtScaleDiv_setInterval(this.h, (C.double)(lowerBound), (C.double)(upperBound))
}

func (this *QwtScaleDiv) SetIntervalWithInterval(interval *QwtInterval) {
	C.QwtScaleDiv_setIntervalWithInterval(this.h, interval.cPointer())
}

func (this *QwtScaleDiv) Interval() *QwtInterval {
	_goptr := newQwtInterval(C.QwtScaleDiv_interval(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleDiv) SetLowerBound(lowerBound float64) {
	C.QwtScaleDiv_setLowerBound(this.h, (C.double)(lowerBound))
}

func (this *QwtScaleDiv) LowerBound() float64 {
	return (float64)(C.QwtScaleDiv_lowerBound(this.h))
}

func (this *QwtScaleDiv) SetUpperBound(upperBound float64) {
	C.QwtScaleDiv_setUpperBound(this.h, (C.double)(upperBound))
}

func (this *QwtScaleDiv) UpperBound() float64 {
	return (float64)(C.QwtScaleDiv_upperBound(this.h))
}

func (this *QwtScaleDiv) Range() float64 {
	return (float64)(C.QwtScaleDiv_range(this.h))
}

func (this *QwtScaleDiv) Contains(value float64) bool {
	return (bool)(C.QwtScaleDiv_contains(this.h, (C.double)(value)))
}

func (this *QwtScaleDiv) SetTicks(tickType int, param2 []float64) {
	param2_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = (C.double)(param2[i])
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}
	C.QwtScaleDiv_setTicks(this.h, (C.int)(tickType), param2_ma)
}

func (this *QwtScaleDiv) Ticks(tickType int) []float64 {
	var _ma C.struct_miqt_array = C.QwtScaleDiv_ticks(this.h, (C.int)(tickType))
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtScaleDiv) IsEmpty() bool {
	return (bool)(C.QwtScaleDiv_isEmpty(this.h))
}

func (this *QwtScaleDiv) IsIncreasing() bool {
	return (bool)(C.QwtScaleDiv_isIncreasing(this.h))
}

func (this *QwtScaleDiv) Invert() {
	C.QwtScaleDiv_invert(this.h)
}

func (this *QwtScaleDiv) Inverted() *QwtScaleDiv {
	_goptr := newQwtScaleDiv(C.QwtScaleDiv_inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleDiv) Bounded(lowerBound float64, upperBound float64) *QwtScaleDiv {
	_goptr := newQwtScaleDiv(C.QwtScaleDiv_bounded(this.h, (C.double)(lowerBound), (C.double)(upperBound)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleDiv) OperatorAssign(param1 *QwtScaleDiv) {
	C.QwtScaleDiv_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtScaleDiv) Delete() {
	C.QwtScaleDiv_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtScaleDiv) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtScaleDiv) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
