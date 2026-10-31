package qt6

/*

#include "gen_qmargins.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"unsafe"
)

// QMargins is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQMargins().
type QMargins struct {
	left   int32
	top    int32
	right  int32
	bottom int32
}

func (this *QMargins) cPointer() *C.QMargins {
	return (*C.QMargins)(unsafe.Pointer(this))
}

func (this *QMargins) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQMargins views C++ memory as this type, without copying it.
func newQMargins(h *C.QMargins) *QMargins {
	return (*QMargins)(unsafe.Pointer(h))
}

// UnsafeNewQMargins views C++ memory as this type, without copying it.
func UnsafeNewQMargins(h unsafe.Pointer) *QMargins {
	return (*QMargins)(h)
}

// NewQMargins constructs a new QMargins object.
func NewQMargins() QMargins {

	return libmiqt.ValueCast[QMargins](C.QMargins_new())
}

// NewQMargins2 constructs a new QMargins object.
func NewQMargins2(left int, top int, right int, bottom int) QMargins {

	return libmiqt.ValueCast[QMargins](C.QMargins_new2((C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom)))
}

// NewQMargins3 constructs a new QMargins object.
func NewQMargins3(param1 QMargins) QMargins {

	return libmiqt.ValueCast[QMargins](C.QMargins_new3(libmiqt.ValueCast[C.struct_miqt_qmargins](param1)))
}

func (this QMargins) IsNull() bool {
	return (bool)(C.QMargins_isNull(libmiqt.ValueCast[C.struct_miqt_qmargins](this)))
}

func (this QMargins) Left() int {
	return (int)(C.QMargins_left(libmiqt.ValueCast[C.struct_miqt_qmargins](this)))
}

func (this QMargins) Top() int {
	return (int)(C.QMargins_top(libmiqt.ValueCast[C.struct_miqt_qmargins](this)))
}

func (this QMargins) Right() int {
	return (int)(C.QMargins_right(libmiqt.ValueCast[C.struct_miqt_qmargins](this)))
}

func (this QMargins) Bottom() int {
	return (int)(C.QMargins_bottom(libmiqt.ValueCast[C.struct_miqt_qmargins](this)))
}

func (this *QMargins) SetLeft(left int) {
	C.QMargins_setLeft(this.cPointer(), (C.int)(left))
}

func (this *QMargins) SetTop(top int) {
	C.QMargins_setTop(this.cPointer(), (C.int)(top))
}

func (this *QMargins) SetRight(right int) {
	C.QMargins_setRight(this.cPointer(), (C.int)(right))
}

func (this *QMargins) SetBottom(bottom int) {
	C.QMargins_setBottom(this.cPointer(), (C.int)(bottom))
}

func (this *QMargins) OperatorPlusAssign(margins QMargins) *QMargins {
	return newQMargins(C.QMargins_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmargins](margins)))
}

func (this *QMargins) OperatorMinusAssign(margins QMargins) *QMargins {
	return newQMargins(C.QMargins_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmargins](margins)))
}

func (this *QMargins) OperatorPlusAssignWithInt(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorPlusAssignWithInt(this.cPointer(), (C.int)(param1)))
}

func (this *QMargins) OperatorMinusAssignWithInt(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorMinusAssignWithInt(this.cPointer(), (C.int)(param1)))
}

func (this *QMargins) OperatorMultiplyAssign(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorMultiplyAssign(this.cPointer(), (C.int)(param1)))
}

func (this *QMargins) OperatorDivideAssign(param1 int) *QMargins {
	return newQMargins(C.QMargins_operatorDivideAssign(this.cPointer(), (C.int)(param1)))
}

func (this *QMargins) OperatorMultiplyAssignWithQreal(param1 float64) *QMargins {
	return newQMargins(C.QMargins_operatorMultiplyAssignWithQreal(this.cPointer(), (C.double)(param1)))
}

func (this *QMargins) OperatorDivideAssignWithQreal(param1 float64) *QMargins {
	return newQMargins(C.QMargins_operatorDivideAssignWithQreal(this.cPointer(), (C.double)(param1)))
}

func (this QMargins) ToMarginsF() QMarginsF {
	return libmiqt.ValueCast[QMarginsF](C.QMargins_toMarginsF(libmiqt.ValueCast[C.struct_miqt_qmargins](this)))
}

func (this *QMargins) OperatorAssign(param1 QMargins) {
	C.QMargins_operatorAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmargins](param1))
}

// QMarginsF is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQMarginsF().
type QMarginsF struct {
	left   float64
	top    float64
	right  float64
	bottom float64
}

func (this *QMarginsF) cPointer() *C.QMarginsF {
	return (*C.QMarginsF)(unsafe.Pointer(this))
}

func (this *QMarginsF) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQMarginsF views C++ memory as this type, without copying it.
func newQMarginsF(h *C.QMarginsF) *QMarginsF {
	return (*QMarginsF)(unsafe.Pointer(h))
}

// UnsafeNewQMarginsF views C++ memory as this type, without copying it.
func UnsafeNewQMarginsF(h unsafe.Pointer) *QMarginsF {
	return (*QMarginsF)(h)
}

// NewQMarginsF constructs a new QMarginsF object.
func NewQMarginsF() QMarginsF {

	return libmiqt.ValueCast[QMarginsF](C.QMarginsF_new())
}

// NewQMarginsF2 constructs a new QMarginsF object.
func NewQMarginsF2(left float64, top float64, right float64, bottom float64) QMarginsF {

	return libmiqt.ValueCast[QMarginsF](C.QMarginsF_new2((C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom)))
}

// NewQMarginsF3 constructs a new QMarginsF object.
func NewQMarginsF3(margins QMargins) QMarginsF {

	return libmiqt.ValueCast[QMarginsF](C.QMarginsF_new3(libmiqt.ValueCast[C.struct_miqt_qmargins](margins)))
}

// NewQMarginsF4 constructs a new QMarginsF object.
func NewQMarginsF4(param1 QMarginsF) QMarginsF {

	return libmiqt.ValueCast[QMarginsF](C.QMarginsF_new4(libmiqt.ValueCast[C.struct_miqt_qmarginsf](param1)))
}

func (this QMarginsF) IsNull() bool {
	return (bool)(C.QMarginsF_isNull(libmiqt.ValueCast[C.struct_miqt_qmarginsf](this)))
}

func (this QMarginsF) Left() float64 {
	return (float64)(C.QMarginsF_left(libmiqt.ValueCast[C.struct_miqt_qmarginsf](this)))
}

func (this QMarginsF) Top() float64 {
	return (float64)(C.QMarginsF_top(libmiqt.ValueCast[C.struct_miqt_qmarginsf](this)))
}

func (this QMarginsF) Right() float64 {
	return (float64)(C.QMarginsF_right(libmiqt.ValueCast[C.struct_miqt_qmarginsf](this)))
}

func (this QMarginsF) Bottom() float64 {
	return (float64)(C.QMarginsF_bottom(libmiqt.ValueCast[C.struct_miqt_qmarginsf](this)))
}

func (this *QMarginsF) SetLeft(aleft float64) {
	C.QMarginsF_setLeft(this.cPointer(), (C.double)(aleft))
}

func (this *QMarginsF) SetTop(atop float64) {
	C.QMarginsF_setTop(this.cPointer(), (C.double)(atop))
}

func (this *QMarginsF) SetRight(aright float64) {
	C.QMarginsF_setRight(this.cPointer(), (C.double)(aright))
}

func (this *QMarginsF) SetBottom(abottom float64) {
	C.QMarginsF_setBottom(this.cPointer(), (C.double)(abottom))
}

func (this *QMarginsF) OperatorPlusAssign(margins QMarginsF) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

func (this *QMarginsF) OperatorMinusAssign(margins QMarginsF) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins)))
}

func (this *QMarginsF) OperatorPlusAssignWithAddend(addend float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorPlusAssignWithAddend(this.cPointer(), (C.double)(addend)))
}

func (this *QMarginsF) OperatorMinusAssignWithSubtrahend(subtrahend float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorMinusAssignWithSubtrahend(this.cPointer(), (C.double)(subtrahend)))
}

func (this *QMarginsF) OperatorMultiplyAssign(factor float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorMultiplyAssign(this.cPointer(), (C.double)(factor)))
}

func (this *QMarginsF) OperatorDivideAssign(divisor float64) *QMarginsF {
	return newQMarginsF(C.QMarginsF_operatorDivideAssign(this.cPointer(), (C.double)(divisor)))
}

func (this QMarginsF) ToMargins() QMargins {
	return libmiqt.ValueCast[QMargins](C.QMarginsF_toMargins(libmiqt.ValueCast[C.struct_miqt_qmarginsf](this)))
}

func (this *QMarginsF) OperatorAssign(param1 QMarginsF) {
	C.QMarginsF_operatorAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qmarginsf](param1))
}
