package qt

/*

#include "gen_qvector2d.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QVector2D struct {
	h          *C.QVector2D
	isSubclass bool
}

func (this *QVector2D) cPointer() *C.QVector2D {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVector2D) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVector2D constructs the type using only CGO pointers.
func newQVector2D(h *C.QVector2D) *QVector2D {
	if h == nil {
		return nil
	}

	return &QVector2D{h: h}
}

// UnsafeNewQVector2D constructs the type using only unsafe pointers.
func UnsafeNewQVector2D(h unsafe.Pointer) *QVector2D {
	return newQVector2D((*C.QVector2D)(h))
}

// NewQVector2D constructs a new QVector2D object.
func NewQVector2D() *QVector2D {

	ret := newQVector2D(C.QVector2D_new())
	ret.isSubclass = true
	return ret
}

// NewQVector2D2 constructs a new QVector2D object.
func NewQVector2D2(param1 Initialization) *QVector2D {

	ret := newQVector2D(C.QVector2D_new2((C.int)(param1)))
	ret.isSubclass = true
	return ret
}

// NewQVector2D3 constructs a new QVector2D object.
func NewQVector2D3(xpos float32, ypos float32) *QVector2D {

	ret := newQVector2D(C.QVector2D_new3((C.float)(xpos), (C.float)(ypos)))
	ret.isSubclass = true
	return ret
}

// NewQVector2D4 constructs a new QVector2D object.
func NewQVector2D4(point *QPoint) *QVector2D {

	ret := newQVector2D(C.QVector2D_new4(point.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector2D5 constructs a new QVector2D object.
func NewQVector2D5(point *QPointF) *QVector2D {

	ret := newQVector2D(C.QVector2D_new5(point.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector2D6 constructs a new QVector2D object.
func NewQVector2D6(vector *QVector3D) *QVector2D {

	ret := newQVector2D(C.QVector2D_new6(vector.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector2D7 constructs a new QVector2D object.
func NewQVector2D7(vector *QVector4D) *QVector2D {

	ret := newQVector2D(C.QVector2D_new7(vector.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector2D8 constructs a new QVector2D object.
func NewQVector2D8(param1 *QVector2D) *QVector2D {

	ret := newQVector2D(C.QVector2D_new8(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QVector2D) IsNull() bool {
	return (bool)(C.QVector2D_IsNull(this.h))
}

func (this *QVector2D) X() float32 {
	return (float32)(C.QVector2D_X(this.h))
}

func (this *QVector2D) Y() float32 {
	return (float32)(C.QVector2D_Y(this.h))
}

func (this *QVector2D) SetX(x float32) {
	C.QVector2D_SetX(this.h, (C.float)(x))
}

func (this *QVector2D) SetY(y float32) {
	C.QVector2D_SetY(this.h, (C.float)(y))
}

func (this *QVector2D) OperatorSubscript(i int) float32 {
	return (float32)(C.QVector2D_OperatorSubscript(this.h, (C.int)(i)))
}

func (this *QVector2D) Length() float32 {
	return (float32)(C.QVector2D_Length(this.h))
}

func (this *QVector2D) LengthSquared() float32 {
	return (float32)(C.QVector2D_LengthSquared(this.h))
}

func (this *QVector2D) Normalized() *QVector2D {
	_goptr := newQVector2D(C.QVector2D_Normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) Normalize() {
	C.QVector2D_Normalize(this.h)
}

func (this *QVector2D) DistanceToPoint(point *QVector2D) float32 {
	return (float32)(C.QVector2D_DistanceToPoint(this.h, point.cPointer()))
}

func (this *QVector2D) DistanceToLine(point *QVector2D, direction *QVector2D) float32 {
	return (float32)(C.QVector2D_DistanceToLine(this.h, point.cPointer(), direction.cPointer()))
}

func (this *QVector2D) OperatorPlusAssign(vector *QVector2D) *QVector2D {
	return newQVector2D(C.QVector2D_OperatorPlusAssign(this.h, vector.cPointer()))
}

func (this *QVector2D) OperatorMinusAssign(vector *QVector2D) *QVector2D {
	return newQVector2D(C.QVector2D_OperatorMinusAssign(this.h, vector.cPointer()))
}

func (this *QVector2D) OperatorMultiplyAssign(factor float32) *QVector2D {
	return newQVector2D(C.QVector2D_OperatorMultiplyAssign(this.h, (C.float)(factor)))
}

func (this *QVector2D) OperatorMultiplyAssignWithVector(vector *QVector2D) *QVector2D {
	return newQVector2D(C.QVector2D_OperatorMultiplyAssignWithVector(this.h, vector.cPointer()))
}

func (this *QVector2D) OperatorDivideAssign(divisor float32) *QVector2D {
	return newQVector2D(C.QVector2D_OperatorDivideAssign(this.h, (C.float)(divisor)))
}

func (this *QVector2D) OperatorDivideAssignWithVector(vector *QVector2D) *QVector2D {
	return newQVector2D(C.QVector2D_OperatorDivideAssignWithVector(this.h, vector.cPointer()))
}

func QVector2D_DotProduct(v1 *QVector2D, v2 *QVector2D) float32 {
	return (float32)(C.QVector2D_DotProduct(v1.cPointer(), v2.cPointer()))
}

func (this *QVector2D) ToVector3D() *QVector3D {
	_goptr := newQVector3D(C.QVector2D_ToVector3D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToVector4D() *QVector4D {
	_goptr := newQVector4D(C.QVector2D_ToVector4D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToPoint() *QPoint {
	_goptr := newQPoint(C.QVector2D_ToPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToPointF() *QPointF {
	_goptr := newQPointF(C.QVector2D_ToPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QVector2D_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVector2D) Delete() {
	C.QVector2D_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVector2D) GoGC() {
	runtime.SetFinalizer(this, func(this *QVector2D) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
