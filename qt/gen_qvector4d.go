package qt

/*

#include "gen_qvector4d.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QVector4D struct {
	h *C.QVector4D
}

func (this *QVector4D) cPointer() *C.QVector4D {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVector4D) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVector4D constructs the type using only CGO pointers.
func newQVector4D(h *C.QVector4D) *QVector4D {
	if h == nil {
		return nil
	}

	return &QVector4D{h: h}
}

// UnsafeNewQVector4D constructs the type using only unsafe pointers.
func UnsafeNewQVector4D(h unsafe.Pointer) *QVector4D {
	return newQVector4D((*C.QVector4D)(h))
}

// NewQVector4D constructs a new QVector4D object.
func NewQVector4D() *QVector4D {

	return newQVector4D(C.QVector4D_new())
}

// NewQVector4D2 constructs a new QVector4D object.
func NewQVector4D2(param1 Initialization) *QVector4D {

	return newQVector4D(C.QVector4D_new2((C.int)(param1)))
}

// NewQVector4D3 constructs a new QVector4D object.
func NewQVector4D3(xpos float32, ypos float32, zpos float32, wpos float32) *QVector4D {

	return newQVector4D(C.QVector4D_new3((C.float)(xpos), (C.float)(ypos), (C.float)(zpos), (C.float)(wpos)))
}

// NewQVector4D4 constructs a new QVector4D object.
func NewQVector4D4(point *QPoint) *QVector4D {

	return newQVector4D(C.QVector4D_new4(point.cPointer()))
}

// NewQVector4D5 constructs a new QVector4D object.
func NewQVector4D5(point *QPointF) *QVector4D {

	return newQVector4D(C.QVector4D_new5(point.cPointer()))
}

// NewQVector4D6 constructs a new QVector4D object.
func NewQVector4D6(vector *QVector2D) *QVector4D {

	return newQVector4D(C.QVector4D_new6(vector.cPointer()))
}

// NewQVector4D7 constructs a new QVector4D object.
func NewQVector4D7(vector *QVector2D, zpos float32, wpos float32) *QVector4D {

	return newQVector4D(C.QVector4D_new7(vector.cPointer(), (C.float)(zpos), (C.float)(wpos)))
}

// NewQVector4D8 constructs a new QVector4D object.
func NewQVector4D8(vector *QVector3D) *QVector4D {

	return newQVector4D(C.QVector4D_new8(vector.cPointer()))
}

// NewQVector4D9 constructs a new QVector4D object.
func NewQVector4D9(vector *QVector3D, wpos float32) *QVector4D {

	return newQVector4D(C.QVector4D_new9(vector.cPointer(), (C.float)(wpos)))
}

// NewQVector4D10 constructs a new QVector4D object.
func NewQVector4D10(param1 *QVector4D) *QVector4D {

	return newQVector4D(C.QVector4D_new10(param1.cPointer()))
}

func (this *QVector4D) IsNull() bool {
	return (bool)(C.QVector4D_isNull(this.h))
}

func (this *QVector4D) X() float32 {
	return (float32)(C.QVector4D_x(this.h))
}

func (this *QVector4D) Y() float32 {
	return (float32)(C.QVector4D_y(this.h))
}

func (this *QVector4D) Z() float32 {
	return (float32)(C.QVector4D_z(this.h))
}

func (this *QVector4D) W() float32 {
	return (float32)(C.QVector4D_w(this.h))
}

func (this *QVector4D) SetX(x float32) {
	C.QVector4D_setX(this.h, (C.float)(x))
}

func (this *QVector4D) SetY(y float32) {
	C.QVector4D_setY(this.h, (C.float)(y))
}

func (this *QVector4D) SetZ(z float32) {
	C.QVector4D_setZ(this.h, (C.float)(z))
}

func (this *QVector4D) SetW(w float32) {
	C.QVector4D_setW(this.h, (C.float)(w))
}

func (this *QVector4D) OperatorSubscript(i int) float32 {
	return (float32)(C.QVector4D_operatorSubscript(this.h, (C.int)(i)))
}

func (this *QVector4D) Length() float32 {
	return (float32)(C.QVector4D_length(this.h))
}

func (this *QVector4D) LengthSquared() float32 {
	return (float32)(C.QVector4D_lengthSquared(this.h))
}

func (this *QVector4D) Normalized() *QVector4D {
	_goptr := newQVector4D(C.QVector4D_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) Normalize() {
	C.QVector4D_normalize(this.h)
}

func (this *QVector4D) OperatorPlusAssign(vector *QVector4D) *QVector4D {
	return newQVector4D(C.QVector4D_operatorPlusAssign(this.h, vector.cPointer()))
}

func (this *QVector4D) OperatorMinusAssign(vector *QVector4D) *QVector4D {
	return newQVector4D(C.QVector4D_operatorMinusAssign(this.h, vector.cPointer()))
}

func (this *QVector4D) OperatorMultiplyAssign(factor float32) *QVector4D {
	return newQVector4D(C.QVector4D_operatorMultiplyAssign(this.h, (C.float)(factor)))
}

func (this *QVector4D) OperatorMultiplyAssignWithVector(vector *QVector4D) *QVector4D {
	return newQVector4D(C.QVector4D_operatorMultiplyAssignWithVector(this.h, vector.cPointer()))
}

func (this *QVector4D) OperatorDivideAssign(divisor float32) *QVector4D {
	return newQVector4D(C.QVector4D_operatorDivideAssign(this.h, (C.float)(divisor)))
}

func (this *QVector4D) OperatorDivideAssignWithVector(vector *QVector4D) *QVector4D {
	return newQVector4D(C.QVector4D_operatorDivideAssignWithVector(this.h, vector.cPointer()))
}

func QVector4D_DotProduct(v1 *QVector4D, v2 *QVector4D) float32 {
	return (float32)(C.QVector4D_dotProduct(v1.cPointer(), v2.cPointer()))
}

func (this *QVector4D) ToVector2D() *QVector2D {
	_goptr := newQVector2D(C.QVector4D_toVector2D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector2DAffine() *QVector2D {
	_goptr := newQVector2D(C.QVector4D_toVector2DAffine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector3D() *QVector3D {
	_goptr := newQVector3D(C.QVector4D_toVector3D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector3DAffine() *QVector3D {
	_goptr := newQVector3D(C.QVector4D_toVector3DAffine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToPoint() *QPoint {
	_goptr := newQPoint(C.QVector4D_toPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToPointF() *QPointF {
	_goptr := newQPointF(C.QVector4D_toPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QVector4D_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVector4D) Delete() {
	C.QVector4D_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVector4D) GoGC() {
	runtime.SetFinalizer(this, func(this *QVector4D) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
