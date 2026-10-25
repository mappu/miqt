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
	h  *C.QMargins
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMargins) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQMargins(C.QMargins_new3(param1.cPointer()))
}

func (this *QMargins) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMargins_isNull(this.h))
}

func (this *QMargins) Left() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMargins_left(this.h))
}

func (this *QMargins) Top() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMargins_top(this.h))
}

func (this *QMargins) Right() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMargins_right(this.h))
}

func (this *QMargins) Bottom() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMargins_bottom(this.h))
}

func (this *QMargins) SetLeft(left int) {
	defer runtime.KeepAlive(this)
	C.QMargins_setLeft(this.h, (C.int)(left))
}

func (this *QMargins) SetTop(top int) {
	defer runtime.KeepAlive(this)
	C.QMargins_setTop(this.h, (C.int)(top))
}

func (this *QMargins) SetRight(right int) {
	defer runtime.KeepAlive(this)
	C.QMargins_setRight(this.h, (C.int)(right))
}

func (this *QMargins) SetBottom(bottom int) {
	defer runtime.KeepAlive(this)
	C.QMargins_setBottom(this.h, (C.int)(bottom))
}

func (this *QMargins) OperatorPlusAssign(margins *QMargins) *QMargins {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQMargins(C.QMargins_operatorPlusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorMinusAssign(margins *QMargins) *QMargins {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQMargins(C.QMargins_operatorMinusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorPlusAssignWithInt(param1 int) *QMargins {
	defer runtime.KeepAlive(this)
	_ret := newQMargins(C.QMargins_operatorPlusAssignWithInt(this.h, (C.int)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorMinusAssignWithInt(param1 int) *QMargins {
	defer runtime.KeepAlive(this)
	_ret := newQMargins(C.QMargins_operatorMinusAssignWithInt(this.h, (C.int)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorMultiplyAssign(param1 int) *QMargins {
	defer runtime.KeepAlive(this)
	_ret := newQMargins(C.QMargins_operatorMultiplyAssign(this.h, (C.int)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorDivideAssign(param1 int) *QMargins {
	defer runtime.KeepAlive(this)
	_ret := newQMargins(C.QMargins_operatorDivideAssign(this.h, (C.int)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorMultiplyAssignWithQreal(param1 float64) *QMargins {
	defer runtime.KeepAlive(this)
	_ret := newQMargins(C.QMargins_operatorMultiplyAssignWithQreal(this.h, (C.double)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorDivideAssignWithQreal(param1 float64) *QMargins {
	defer runtime.KeepAlive(this)
	_ret := newQMargins(C.QMargins_operatorDivideAssignWithQreal(this.h, (C.double)(param1)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMargins) OperatorAssign(param1 *QMargins) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMargins_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMargins) Delete() {
	C.QMargins_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMargins) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMargins_delete((*C.QMargins)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMarginsF struct {
	h  *C.QMarginsF
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMarginsF) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(margins)

	return newQMarginsF(C.QMarginsF_new3(margins.cPointer()))
}

// NewQMarginsF4 constructs a new QMarginsF object.
func NewQMarginsF4(param1 *QMarginsF) *QMarginsF {
	defer runtime.KeepAlive(param1)

	return newQMarginsF(C.QMarginsF_new4(param1.cPointer()))
}

func (this *QMarginsF) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMarginsF_isNull(this.h))
}

func (this *QMarginsF) Left() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QMarginsF_left(this.h))
}

func (this *QMarginsF) Top() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QMarginsF_top(this.h))
}

func (this *QMarginsF) Right() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QMarginsF_right(this.h))
}

func (this *QMarginsF) Bottom() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QMarginsF_bottom(this.h))
}

func (this *QMarginsF) SetLeft(left float64) {
	defer runtime.KeepAlive(this)
	C.QMarginsF_setLeft(this.h, (C.double)(left))
}

func (this *QMarginsF) SetTop(top float64) {
	defer runtime.KeepAlive(this)
	C.QMarginsF_setTop(this.h, (C.double)(top))
}

func (this *QMarginsF) SetRight(right float64) {
	defer runtime.KeepAlive(this)
	C.QMarginsF_setRight(this.h, (C.double)(right))
}

func (this *QMarginsF) SetBottom(bottom float64) {
	defer runtime.KeepAlive(this)
	C.QMarginsF_setBottom(this.h, (C.double)(bottom))
}

func (this *QMarginsF) OperatorPlusAssign(margins *QMarginsF) *QMarginsF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQMarginsF(C.QMarginsF_operatorPlusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMarginsF) OperatorMinusAssign(margins *QMarginsF) *QMarginsF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(margins)
	_ret := newQMarginsF(C.QMarginsF_operatorMinusAssign(this.h, margins.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMarginsF) OperatorPlusAssignWithAddend(addend float64) *QMarginsF {
	defer runtime.KeepAlive(this)
	_ret := newQMarginsF(C.QMarginsF_operatorPlusAssignWithAddend(this.h, (C.double)(addend)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMarginsF) OperatorMinusAssignWithSubtrahend(subtrahend float64) *QMarginsF {
	defer runtime.KeepAlive(this)
	_ret := newQMarginsF(C.QMarginsF_operatorMinusAssignWithSubtrahend(this.h, (C.double)(subtrahend)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMarginsF) OperatorMultiplyAssign(factor float64) *QMarginsF {
	defer runtime.KeepAlive(this)
	_ret := newQMarginsF(C.QMarginsF_operatorMultiplyAssign(this.h, (C.double)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMarginsF) OperatorDivideAssign(divisor float64) *QMarginsF {
	defer runtime.KeepAlive(this)
	_ret := newQMarginsF(C.QMarginsF_operatorDivideAssign(this.h, (C.double)(divisor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMarginsF) ToMargins() *QMargins {
	defer runtime.KeepAlive(this)
	_goptr := newQMargins(C.QMarginsF_toMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMarginsF) OperatorAssign(param1 *QMarginsF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMarginsF_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMarginsF) Delete() {
	C.QMarginsF_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMarginsF) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMarginsF_delete((*C.QMarginsF)(gc[0]))
	})
	this.miqtSetGC(gc)
}
