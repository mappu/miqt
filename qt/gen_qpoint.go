package qt

/*

#include "gen_qpoint.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"unsafe"
)

// QPoint is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQPoint().
type QPoint struct {
	xp int32
	yp int32
}

func (this *QPoint) cPointer() *C.QPoint {
	return (*C.QPoint)(unsafe.Pointer(this))
}

func (this *QPoint) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQPoint views C++ memory as this type, without copying it.
func newQPoint(h *C.QPoint) *QPoint {
	return (*QPoint)(unsafe.Pointer(h))
}

// UnsafeNewQPoint views C++ memory as this type, without copying it.
func UnsafeNewQPoint(h unsafe.Pointer) *QPoint {
	return (*QPoint)(h)
}

// NewQPoint constructs a new QPoint object.
func NewQPoint() QPoint {

	return libmiqt.ValueCast[QPoint](C.QPoint_new())
}

// NewQPoint2 constructs a new QPoint object.
func NewQPoint2(xpos int, ypos int) QPoint {

	return libmiqt.ValueCast[QPoint](C.QPoint_new2((C.int)(xpos), (C.int)(ypos)))
}

// NewQPoint3 constructs a new QPoint object.
func NewQPoint3(param1 QPoint) QPoint {

	return libmiqt.ValueCast[QPoint](C.QPoint_new3(libmiqt.ValueCast[C.struct_miqt_qpoint](param1)))
}

func (this QPoint) IsNull() bool {
	return (bool)(C.QPoint_isNull(libmiqt.ValueCast[C.struct_miqt_qpoint](this)))
}

func (this QPoint) X() int {
	return (int)(C.QPoint_x(libmiqt.ValueCast[C.struct_miqt_qpoint](this)))
}

func (this QPoint) Y() int {
	return (int)(C.QPoint_y(libmiqt.ValueCast[C.struct_miqt_qpoint](this)))
}

func (this *QPoint) SetX(x int) {
	C.QPoint_setX(this.cPointer(), (C.int)(x))
}

func (this *QPoint) SetY(y int) {
	C.QPoint_setY(this.cPointer(), (C.int)(y))
}

func (this QPoint) ManhattanLength() int {
	return (int)(C.QPoint_manhattanLength(libmiqt.ValueCast[C.struct_miqt_qpoint](this)))
}

func (this QPoint) Transposed() QPoint {
	return libmiqt.ValueCast[QPoint](C.QPoint_transposed(libmiqt.ValueCast[C.struct_miqt_qpoint](this)))
}

func (this *QPoint) OperatorPlusAssign(p QPoint) *QPoint {
	return newQPoint(C.QPoint_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p)))
}

func (this *QPoint) OperatorMinusAssign(p QPoint) *QPoint {
	return newQPoint(C.QPoint_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](p)))
}

func (this *QPoint) OperatorMultiplyAssign(factor float32) *QPoint {
	return newQPoint(C.QPoint_operatorMultiplyAssign(this.cPointer(), (C.float)(factor)))
}

func (this *QPoint) OperatorMultiplyAssignWithFactor(factor float64) *QPoint {
	return newQPoint(C.QPoint_operatorMultiplyAssignWithFactor(this.cPointer(), (C.double)(factor)))
}

func (this *QPoint) OperatorMultiplyAssign2(factor int) *QPoint {
	return newQPoint(C.QPoint_operatorMultiplyAssign2(this.cPointer(), (C.int)(factor)))
}

func (this *QPoint) OperatorDivideAssign(divisor float64) *QPoint {
	return newQPoint(C.QPoint_operatorDivideAssign(this.cPointer(), (C.double)(divisor)))
}

func QPoint_DotProduct(p1 QPoint, p2 QPoint) int {
	return (int)(C.QPoint_dotProduct(libmiqt.ValueCast[C.struct_miqt_qpoint](p1), libmiqt.ValueCast[C.struct_miqt_qpoint](p2)))
}

// QPointF is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQPointF().
type QPointF struct {
	xp float64
	yp float64
}

func (this *QPointF) cPointer() *C.QPointF {
	return (*C.QPointF)(unsafe.Pointer(this))
}

func (this *QPointF) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQPointF views C++ memory as this type, without copying it.
func newQPointF(h *C.QPointF) *QPointF {
	return (*QPointF)(unsafe.Pointer(h))
}

// UnsafeNewQPointF views C++ memory as this type, without copying it.
func UnsafeNewQPointF(h unsafe.Pointer) *QPointF {
	return (*QPointF)(h)
}

// NewQPointF constructs a new QPointF object.
func NewQPointF() QPointF {

	return libmiqt.ValueCast[QPointF](C.QPointF_new())
}

// NewQPointF2 constructs a new QPointF object.
func NewQPointF2(p QPoint) QPointF {

	return libmiqt.ValueCast[QPointF](C.QPointF_new2(libmiqt.ValueCast[C.struct_miqt_qpoint](p)))
}

// NewQPointF3 constructs a new QPointF object.
func NewQPointF3(xpos float64, ypos float64) QPointF {

	return libmiqt.ValueCast[QPointF](C.QPointF_new3((C.double)(xpos), (C.double)(ypos)))
}

// NewQPointF4 constructs a new QPointF object.
func NewQPointF4(param1 QPointF) QPointF {

	return libmiqt.ValueCast[QPointF](C.QPointF_new4(libmiqt.ValueCast[C.struct_miqt_qpointf](param1)))
}

func (this QPointF) ManhattanLength() float64 {
	return (float64)(C.QPointF_manhattanLength(libmiqt.ValueCast[C.struct_miqt_qpointf](this)))
}

func (this QPointF) IsNull() bool {
	return (bool)(C.QPointF_isNull(libmiqt.ValueCast[C.struct_miqt_qpointf](this)))
}

func (this QPointF) X() float64 {
	return (float64)(C.QPointF_x(libmiqt.ValueCast[C.struct_miqt_qpointf](this)))
}

func (this QPointF) Y() float64 {
	return (float64)(C.QPointF_y(libmiqt.ValueCast[C.struct_miqt_qpointf](this)))
}

func (this *QPointF) SetX(x float64) {
	C.QPointF_setX(this.cPointer(), (C.double)(x))
}

func (this *QPointF) SetY(y float64) {
	C.QPointF_setY(this.cPointer(), (C.double)(y))
}

func (this QPointF) Transposed() QPointF {
	return libmiqt.ValueCast[QPointF](C.QPointF_transposed(libmiqt.ValueCast[C.struct_miqt_qpointf](this)))
}

func (this *QPointF) OperatorPlusAssign(p QPointF) *QPointF {
	return newQPointF(C.QPointF_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p)))
}

func (this *QPointF) OperatorMinusAssign(p QPointF) *QPointF {
	return newQPointF(C.QPointF_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpointf](p)))
}

func (this *QPointF) OperatorMultiplyAssign(c float64) *QPointF {
	return newQPointF(C.QPointF_operatorMultiplyAssign(this.cPointer(), (C.double)(c)))
}

func (this *QPointF) OperatorDivideAssign(c float64) *QPointF {
	return newQPointF(C.QPointF_operatorDivideAssign(this.cPointer(), (C.double)(c)))
}

func QPointF_DotProduct(p1 QPointF, p2 QPointF) float64 {
	return (float64)(C.QPointF_dotProduct(libmiqt.ValueCast[C.struct_miqt_qpointf](p1), libmiqt.ValueCast[C.struct_miqt_qpointf](p2)))
}

func (this QPointF) ToPoint() QPoint {
	return libmiqt.ValueCast[QPoint](C.QPointF_toPoint(libmiqt.ValueCast[C.struct_miqt_qpointf](this)))
}
