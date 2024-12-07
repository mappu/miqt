package qt

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
	h          *C.QMargins
	isSubclass bool
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

	ret := newQMargins(C.QMargins_new())
	ret.isSubclass = true
	return ret
}

// NewQMargins2 constructs a new QMargins object.
func NewQMargins2(left int, top int, right int, bottom int) *QMargins {

	ret := newQMargins(C.QMargins_new2((C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom)))
	ret.isSubclass = true
	return ret
}

// NewQMargins3 constructs a new QMargins object.
func NewQMargins3(param1 *QMargins) *QMargins {

	ret := newQMargins(C.QMargins_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QMargins) IsNull() bool {
	return (bool)(C.QMargins_IsNull(this.h))
}

func (this *QMargins) Left() int {
	return (int)(C.QMargins_Left(this.h))
}

func (this *QMargins) Top() int {
	return (int)(C.QMargins_Top(this.h))
}

func (this *QMargins) Right() int {
	return (int)(C.QMargins_Right(this.h))
}

func (this *QMargins) Bottom() int {
	return (int)(C.QMargins_Bottom(this.h))
}

func (this *QMargins) SetLeft(left int) {
	C.QMargins_SetLeft(this.h, (C.int)(left))
}

func (this *QMargins) SetTop(top int) {
	C.QMargins_SetTop(this.h, (C.int)(top))
}

func (this *QMargins) SetRight(right int) {
	C.QMargins_SetRight(this.h, (C.int)(right))
}

func (this *QMargins) SetBottom(bottom int) {
	C.QMargins_SetBottom(this.h, (C.int)(bottom))
}

func (this *QMargins) OperatorPlusAssign(margins *QMargins) *QMargins {
	return newQMargins(C.QMargins_OperatorPlusAssign(this.h, margins.cPointer()))
}

func (this *QMargins) OperatorMinusAssign(margins *QMargins) *QMargins {
	return newQMargins(C.QMargins_OperatorMinusAssign(this.h, margins.cPointer()))
}

func (this *QMargins) OperatorPlusAssignWithInt(param1 int) *QMargins {
	return newQMargins(C.QMargins_OperatorPlusAssignWithInt(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorMinusAssignWithInt(param1 int) *QMargins {
	return newQMargins(C.QMargins_OperatorMinusAssignWithInt(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorMultiplyAssign(param1 int) *QMargins {
	return newQMargins(C.QMargins_OperatorMultiplyAssign(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorDivideAssign(param1 int) *QMargins {
	return newQMargins(C.QMargins_OperatorDivideAssign(this.h, (C.int)(param1)))
}

func (this *QMargins) OperatorMultiplyAssignWithQreal(param1 float64) *QMargins {
	return newQMargins(C.QMargins_OperatorMultiplyAssignWithQreal(this.h, (C.double)(param1)))
}

func (this *QMargins) OperatorDivideAssignWithQreal(param1 float64) *QMargins {
	return newQMargins(C.QMargins_OperatorDivideAssignWithQreal(this.h, (C.double)(param1)))
}

// Delete this object from C++ memory.
func (this *QMargins) Delete() {
	C.QMargins_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QMarginsF
	isSubclass bool
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

	ret := newQMarginsF(C.QMarginsF_new())
	ret.isSubclass = true
	return ret
}

// NewQMarginsF2 constructs a new QMarginsF object.
func NewQMarginsF2(left float64, top float64, right float64, bottom float64) *QMarginsF {

	ret := newQMarginsF(C.QMarginsF_new2((C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom)))
	ret.isSubclass = true
	return ret
}

// NewQMarginsF3 constructs a new QMarginsF object.
func NewQMarginsF3(margins *QMargins) *QMarginsF {

	ret := newQMarginsF(C.QMarginsF_new3(margins.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQMarginsF4 constructs a new QMarginsF object.
func NewQMarginsF4(param1 *QMarginsF) *QMarginsF {

	ret := newQMarginsF(C.QMarginsF_new4(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QMarginsF) IsNull() bool {
	return (bool)(C.QMarginsF_IsNull(this.h))
}

func (this *QMarginsF) Left() float64 {
	return (float64)(C.QMarginsF_Left(this.h))
}

func (this *QMarginsF) Top() float64 {
	return (float64)(C.QMarginsF_Top(this.h))
}

func (this *QMarginsF) Right() float64 {
	return (float64)(C.QMarginsF_Right(this.h))
}

func (this *QMarginsF) Bottom() float64 {
	return (float64)(C.QMarginsF_Bottom(this.h))
}

func (this *QMarginsF) SetLeft(left float64) {
	C.QMarginsF_SetLeft(this.h, (C.double)(left))
}

func (this *QMarginsF) SetTop(top float64) {
	C.QMarginsF_SetTop(this.h, (C.double)(top))
}

func (this *QMarginsF) SetRight(right float64) {
	C.QMarginsF_SetRight(this.h, (C.double)(right))
}

func (this *QMarginsF) SetBottom(bottom float64) {
	C.QMarginsF_SetBottom(this.h, (C.double)(bottom))
}

func (this *QMarginsF) OperatorPlusAssign(margins *QMarginsF) *QMarginsF {
	return newQMarginsF(C.QMarginsF_OperatorPlusAssign(this.h, margins.cPointer()))
}

func (this *QMarginsF) OperatorMinusAssign(margins *QMarginsF) *QMarginsF {
	return newQMarginsF(C.QMarginsF_OperatorMinusAssign(this.h, margins.cPointer()))
}

func (this *QMarginsF) OperatorPlusAssignWithAddend(addend float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_OperatorPlusAssignWithAddend(this.h, (C.double)(addend)))
}

func (this *QMarginsF) OperatorMinusAssignWithSubtrahend(subtrahend float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_OperatorMinusAssignWithSubtrahend(this.h, (C.double)(subtrahend)))
}

func (this *QMarginsF) OperatorMultiplyAssign(factor float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_OperatorMultiplyAssign(this.h, (C.double)(factor)))
}

func (this *QMarginsF) OperatorDivideAssign(divisor float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_OperatorDivideAssign(this.h, (C.double)(divisor)))
}

func (this *QMarginsF) ToMargins() *QMargins {
	_goptr := newQMargins(C.QMarginsF_ToMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QMarginsF) Delete() {
	C.QMarginsF_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMarginsF) GoGC() {
	runtime.SetFinalizer(this, func(this *QMarginsF) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
