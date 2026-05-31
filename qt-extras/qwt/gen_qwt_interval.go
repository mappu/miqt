package qwt

/*

#include "gen_qwt_interval.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QwtInterval__BorderFlag int

const (
	QwtInterval__IncludeBorders QwtInterval__BorderFlag = 0
	QwtInterval__ExcludeMinimum QwtInterval__BorderFlag = 1
	QwtInterval__ExcludeMaximum QwtInterval__BorderFlag = 2
	QwtInterval__ExcludeBorders QwtInterval__BorderFlag = 3
)

type QwtInterval struct {
	h *C.QwtInterval
}

func (this *QwtInterval) cPointer() *C.QwtInterval {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtInterval) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtInterval constructs the type using only CGO pointers.
func newQwtInterval(h *C.QwtInterval) *QwtInterval {
	if h == nil {
		return nil
	}

	return &QwtInterval{h: h}
}

// UnsafeNewQwtInterval constructs the type using only unsafe pointers.
func UnsafeNewQwtInterval(h unsafe.Pointer) *QwtInterval {
	return newQwtInterval((*C.QwtInterval)(h))
}

// NewQwtInterval constructs a new QwtInterval object.
func NewQwtInterval() *QwtInterval {

	return newQwtInterval(C.QwtInterval_new())
}

// NewQwtInterval2 constructs a new QwtInterval object.
func NewQwtInterval2(minValue float64, maxValue float64) *QwtInterval {

	return newQwtInterval(C.QwtInterval_new2((C.double)(minValue), (C.double)(maxValue)))
}

// NewQwtInterval3 constructs a new QwtInterval object.
func NewQwtInterval3(param1 *QwtInterval) *QwtInterval {

	return newQwtInterval(C.QwtInterval_new3(param1.cPointer()))
}

// NewQwtInterval4 constructs a new QwtInterval object.
func NewQwtInterval4(minValue float64, maxValue float64, param3 QwtInterval__BorderFlag) *QwtInterval {

	return newQwtInterval(C.QwtInterval_new4((C.double)(minValue), (C.double)(maxValue), (C.int)(param3)))
}

func (this *QwtInterval) SetInterval(minValue float64, maxValue float64) {
	C.QwtInterval_setInterval(this.h, (C.double)(minValue), (C.double)(maxValue))
}

func (this *QwtInterval) Normalized() *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) Inverted() *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) Limited(lowerBound float64, upperBound float64) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_limited(this.h, (C.double)(lowerBound), (C.double)(upperBound)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) OperatorEqual(param1 *QwtInterval) bool {
	return (bool)(C.QwtInterval_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtInterval) OperatorNotEqual(param1 *QwtInterval) bool {
	return (bool)(C.QwtInterval_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtInterval) SetBorderFlags(borderFlags QwtInterval__BorderFlag) {
	C.QwtInterval_setBorderFlags(this.h, (C.int)(borderFlags))
}

func (this *QwtInterval) BorderFlags() QwtInterval__BorderFlag {
	return (QwtInterval__BorderFlag)(C.QwtInterval_borderFlags(this.h))
}

func (this *QwtInterval) MinValue() float64 {
	return (float64)(C.QwtInterval_minValue(this.h))
}

func (this *QwtInterval) MaxValue() float64 {
	return (float64)(C.QwtInterval_maxValue(this.h))
}

func (this *QwtInterval) Width() float64 {
	return (float64)(C.QwtInterval_width(this.h))
}

func (this *QwtInterval) SetMinValue(minValue float64) {
	C.QwtInterval_setMinValue(this.h, (C.double)(minValue))
}

func (this *QwtInterval) SetMaxValue(maxValue float64) {
	C.QwtInterval_setMaxValue(this.h, (C.double)(maxValue))
}

func (this *QwtInterval) Contains(value float64) bool {
	return (bool)(C.QwtInterval_contains(this.h, (C.double)(value)))
}

func (this *QwtInterval) Intersects(param1 *QwtInterval) bool {
	return (bool)(C.QwtInterval_intersects(this.h, param1.cPointer()))
}

func (this *QwtInterval) Intersect(param1 *QwtInterval) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_intersect(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) Unite(param1 *QwtInterval) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_unite(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) OperatorBitwiseOr(param1 *QwtInterval) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_operatorBitwiseOr(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) OperatorBitwiseAnd(param1 *QwtInterval) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_operatorBitwiseAnd(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) OperatorBitwiseOrAssign(param1 *QwtInterval) {
	C.QwtInterval_operatorBitwiseOrAssign(this.h, param1.cPointer())
}

func (this *QwtInterval) OperatorBitwiseAndAssign(param1 *QwtInterval) {
	C.QwtInterval_operatorBitwiseAndAssign(this.h, param1.cPointer())
}

func (this *QwtInterval) Extend(value float64) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_extend(this.h, (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) OperatorBitwiseOrWithDouble(param1 float64) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_operatorBitwiseOrWithDouble(this.h, (C.double)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) OperatorBitwiseOrAssignWithDouble(param1 float64) {
	C.QwtInterval_operatorBitwiseOrAssignWithDouble(this.h, (C.double)(param1))
}

func (this *QwtInterval) IsValid() bool {
	return (bool)(C.QwtInterval_isValid(this.h))
}

func (this *QwtInterval) IsNull() bool {
	return (bool)(C.QwtInterval_isNull(this.h))
}

func (this *QwtInterval) Invalidate() {
	C.QwtInterval_invalidate(this.h)
}

func (this *QwtInterval) Symmetrize(value float64) *QwtInterval {
	_goptr := newQwtInterval(C.QwtInterval_symmetrize(this.h, (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtInterval) SetInterval2(minValue float64, maxValue float64, param3 QwtInterval__BorderFlag) {
	C.QwtInterval_setInterval2(this.h, (C.double)(minValue), (C.double)(maxValue), (C.int)(param3))
}

// Delete this object from C++ memory.
func (this *QwtInterval) Delete() {
	C.QwtInterval_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtInterval) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtInterval) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
