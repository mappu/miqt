package qt6

/*

#include "gen_qmargins.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMargins struct {
	h *C.QMargins
}

func (this *QMargins) cPointer() *C.QMargins {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMargins) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMargins constructs the type using only CGO pointers.
func newQMargins(h *C.QMargins) *QMargins {
	if h == nil {
		return nil
	}

	return &QMargins{h: h}
}

// UnsafeNewQMargins constructs the type using only unsafe pointers.
func UnsafeNewQMargins(h unsafe.Pointer) *QMargins {
	return newQMargins((*C.QMargins)(h))
}

// NewQMargins constructs a new QMargins object.
func NewQMargins() *QMargins {

	return newQMargins(C.QMargins_new())
}

// NewQMargins2 constructs a new QMargins object.
func NewQMargins2(left int, top int, right int, bottom int) *QMargins {

	return newQMargins(C.QMargins_new2((C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom)))
}

// NewQMargins3 constructs a new QMargins object.
func NewQMargins3(param1 *QMargins) *QMargins {

	return newQMargins(C.QMargins_new3(param1.cPointer()))
}

func (this *QMargins) IsNull() bool {
	return (bool)(C.QMargins_isNull(this.h))
}

func (this *QMargins) Left() int {
	return (int)(C.QMargins_left(this.h))
}

func (this *QMargins) Top() int {
	return (int)(C.QMargins_top(this.h))
}

func (this *QMargins) Right() int {
	return (int)(C.QMargins_right(this.h))
}

func (this *QMargins) Bottom() int {
	return (int)(C.QMargins_bottom(this.h))
}

func (this *QMargins) SetLeft(left int) {
	C.QMargins_setLeft(this.h, (C.int)(left))
}

func (this *QMargins) SetTop(top int) {
	C.QMargins_setTop(this.h, (C.int)(top))
}

func (this *QMargins) SetRight(right int) {
	C.QMargins_setRight(this.h, (C.int)(right))
}

func (this *QMargins) SetBottom(bottom int) {
	C.QMargins_setBottom(this.h, (C.int)(bottom))
}

func (this *QMargins) OperatorPlusAssign(margins *QMargins) *QMargins {
	return newQMargins(C.QMargins_operatorPlusAssign(this.h, margins.cPointer()))
}

func (this *QMargins) OperatorMinusAssign(margins *QMargins) *QMargins {
	return newQMargins(C.QMargins_operatorMinusAssign(this.h, margins.cPointer()))
}

func (this *QMargins) OperatorPlusAssignWithInt(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorPlusAssignWithInt(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorMinusAssignWithInt(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorMinusAssignWithInt(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorMultiplyAssign(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorMultiplyAssign(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorDivideAssign(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorDivideAssign(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorMultiplyAssignWithQreal(param1 float64) *QMargins {
	return newQMargins(C.QMargins_operatorMultiplyAssignWithQreal(this.h, (C.double)(param1)))
}

func (this *QMargins) OperatorDivideAssignWithQreal(param1 float64) *QMargins {
	return newQMargins(C.QMargins_operatorDivideAssignWithQreal(this.h, (C.double)(param1)))
}

func (this *QMargins) ToMarginsF() *QMarginsF {
	_goptr := newQMarginsF(C.QMargins_toMarginsF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMargins) OperatorAssign(param1 *QMargins) {
	C.QMargins_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMargins) Delete() {
	C.QMargins_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMargins) GoGC() {
	runtime.SetFinalizer(this, func(this *QMargins) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMarginsF struct {
	h *C.QMarginsF
}

func (this *QMarginsF) cPointer() *C.QMarginsF {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMarginsF) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMarginsF constructs the type using only CGO pointers.
func newQMarginsF(h *C.QMarginsF) *QMarginsF {
	if h == nil {
		return nil
	}

	return &QMarginsF{h: h}
}

// UnsafeNewQMarginsF constructs the type using only unsafe pointers.
func UnsafeNewQMarginsF(h unsafe.Pointer) *QMarginsF {
	return newQMarginsF((*C.QMarginsF)(h))
}

// NewQMarginsF constructs a new QMarginsF object.
func NewQMarginsF() *QMarginsF {

	return newQMarginsF(C.QMarginsF_new())
}

// NewQMarginsF2 constructs a new QMarginsF object.
func NewQMarginsF2(left float64, top float64, right float64, bottom float64) *QMarginsF {

	return newQMarginsF(C.QMarginsF_new2((C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom)))
}

// NewQMarginsF3 constructs a new QMarginsF object.
func NewQMarginsF3(margins *QMargins) *QMarginsF {

	return newQMarginsF(C.QMarginsF_new3(margins.cPointer()))
}

// NewQMarginsF4 constructs a new QMarginsF object.
func NewQMarginsF4(param1 *QMarginsF) *QMarginsF {

	return newQMarginsF(C.QMarginsF_new4(param1.cPointer()))
}

func (this *QMarginsF) IsNull() bool {
	return (bool)(C.QMarginsF_isNull(this.h))
}

func (this *QMarginsF) Left() float64 {
	return (float64)(C.QMarginsF_left(this.h))
}

func (this *QMarginsF) Top() float64 {
	return (float64)(C.QMarginsF_top(this.h))
}

func (this *QMarginsF) Right() float64 {
	return (float64)(C.QMarginsF_right(this.h))
}

func (this *QMarginsF) Bottom() float64 {
	return (float64)(C.QMarginsF_bottom(this.h))
}

func (this *QMarginsF) SetLeft(aleft float64) {
	C.QMarginsF_setLeft(this.h, (C.double)(aleft))
}

func (this *QMarginsF) SetTop(atop float64) {
	C.QMarginsF_setTop(this.h, (C.double)(atop))
}

func (this *QMarginsF) SetRight(aright float64) {
	C.QMarginsF_setRight(this.h, (C.double)(aright))
}

func (this *QMarginsF) SetBottom(abottom float64) {
	C.QMarginsF_setBottom(this.h, (C.double)(abottom))
}

func (this *QMarginsF) OperatorPlusAssign(margins *QMarginsF) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorPlusAssign(this.h, margins.cPointer()))
}

func (this *QMarginsF) OperatorMinusAssign(margins *QMarginsF) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorMinusAssign(this.h, margins.cPointer()))
}

func (this *QMarginsF) OperatorPlusAssignWithAddend(addend float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorPlusAssignWithAddend(this.h, (C.double)(addend)))
}

func (this *QMarginsF) OperatorMinusAssignWithSubtrahend(subtrahend float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorMinusAssignWithSubtrahend(this.h, (C.double)(subtrahend)))
}

func (this *QMarginsF) OperatorMultiplyAssign(factor float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorMultiplyAssign(this.h, (C.double)(factor)))
}

func (this *QMarginsF) OperatorDivideAssign(divisor float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorDivideAssign(this.h, (C.double)(divisor)))
}

func (this *QMarginsF) ToMargins() *QMargins {
	_goptr := newQMargins(C.QMarginsF_toMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMarginsF) OperatorAssign(param1 *QMarginsF) {
	C.QMarginsF_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMarginsF) Delete() {
	C.QMarginsF_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMarginsF) GoGC() {
	runtime.SetFinalizer(this, func(this *QMarginsF) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
