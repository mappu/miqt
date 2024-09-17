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
	h *C.QMargins
}

func (this *QMargins) cPointer() *C.QMargins {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMargins(h *C.QMargins) *QMargins {
	if h == nil {
		return nil
	}
	return &QMargins{h: h}
}

func newQMargins_U(h unsafe.Pointer) *QMargins {
	return newQMargins((*C.QMargins)(h))
}

// NewQMargins constructs a new QMargins object.
func NewQMargins() *QMargins {
	ret := C.QMargins_new()
	return newQMargins(ret)
}

// NewQMargins2 constructs a new QMargins object.
func NewQMargins2(left int, top int, right int, bottom int) *QMargins {
	ret := C.QMargins_new2((C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
	return newQMargins(ret)
}

// NewQMargins3 constructs a new QMargins object.
func NewQMargins3(param1 *QMargins) *QMargins {
	ret := C.QMargins_new3(param1.cPointer())
	return newQMargins(ret)
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
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorPlusAssign(this.h, margins.cPointer())))
}

func (this *QMargins) OperatorMinusAssign(margins *QMargins) *QMargins {
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorMinusAssign(this.h, margins.cPointer())))
}

func (this *QMargins) OperatorPlusAssignWithInt(param1 int) *QMargins {
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorPlusAssignWithInt(this.h, (C.int)(param1))))
}

func (this *QMargins) OperatorMinusAssignWithInt(param1 int) *QMargins {
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorMinusAssignWithInt(this.h, (C.int)(param1))))
}

func (this *QMargins) OperatorMultiplyAssign(param1 int) *QMargins {
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorMultiplyAssign(this.h, (C.int)(param1))))
}

func (this *QMargins) OperatorDivideAssign(param1 int) *QMargins {
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorDivideAssign(this.h, (C.int)(param1))))
}

func (this *QMargins) OperatorMultiplyAssignWithQreal(param1 float64) *QMargins {
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorMultiplyAssignWithQreal(this.h, (C.double)(param1))))
}

func (this *QMargins) OperatorDivideAssignWithQreal(param1 float64) *QMargins {
	return newQMargins_U(unsafe.Pointer(C.QMargins_OperatorDivideAssignWithQreal(this.h, (C.double)(param1))))
}

// Delete this object from C++ memory.
func (this *QMargins) Delete() {
	C.QMargins_Delete(this.h)
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

func newQMarginsF(h *C.QMarginsF) *QMarginsF {
	if h == nil {
		return nil
	}
	return &QMarginsF{h: h}
}

func newQMarginsF_U(h unsafe.Pointer) *QMarginsF {
	return newQMarginsF((*C.QMarginsF)(h))
}

// NewQMarginsF constructs a new QMarginsF object.
func NewQMarginsF() *QMarginsF {
	ret := C.QMarginsF_new()
	return newQMarginsF(ret)
}

// NewQMarginsF2 constructs a new QMarginsF object.
func NewQMarginsF2(left float64, top float64, right float64, bottom float64) *QMarginsF {
	ret := C.QMarginsF_new2((C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom))
	return newQMarginsF(ret)
}

// NewQMarginsF3 constructs a new QMarginsF object.
func NewQMarginsF3(margins *QMargins) *QMarginsF {
	ret := C.QMarginsF_new3(margins.cPointer())
	return newQMarginsF(ret)
}

// NewQMarginsF4 constructs a new QMarginsF object.
func NewQMarginsF4(param1 *QMarginsF) *QMarginsF {
	ret := C.QMarginsF_new4(param1.cPointer())
	return newQMarginsF(ret)
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
	return newQMarginsF_U(unsafe.Pointer(C.QMarginsF_OperatorPlusAssign(this.h, margins.cPointer())))
}

func (this *QMarginsF) OperatorMinusAssign(margins *QMarginsF) *QMarginsF {
	return newQMarginsF_U(unsafe.Pointer(C.QMarginsF_OperatorMinusAssign(this.h, margins.cPointer())))
}

func (this *QMarginsF) OperatorPlusAssignWithAddend(addend float64) *QMarginsF {
	return newQMarginsF_U(unsafe.Pointer(C.QMarginsF_OperatorPlusAssignWithAddend(this.h, (C.double)(addend))))
}

func (this *QMarginsF) OperatorMinusAssignWithSubtrahend(subtrahend float64) *QMarginsF {
	return newQMarginsF_U(unsafe.Pointer(C.QMarginsF_OperatorMinusAssignWithSubtrahend(this.h, (C.double)(subtrahend))))
}

func (this *QMarginsF) OperatorMultiplyAssign(factor float64) *QMarginsF {
	return newQMarginsF_U(unsafe.Pointer(C.QMarginsF_OperatorMultiplyAssign(this.h, (C.double)(factor))))
}

func (this *QMarginsF) OperatorDivideAssign(divisor float64) *QMarginsF {
	return newQMarginsF_U(unsafe.Pointer(C.QMarginsF_OperatorDivideAssign(this.h, (C.double)(divisor))))
}

func (this *QMarginsF) ToMargins() *QMargins {
	_ret := C.QMarginsF_ToMargins(this.h)
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QMarginsF) Delete() {
	C.QMarginsF_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMarginsF) GoGC() {
	runtime.SetFinalizer(this, func(this *QMarginsF) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
