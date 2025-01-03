package qt

/*

#include "gen_qvector3d.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QVector3D struct {
	h          *C.QVector3D
	isSubclass bool
}

func (this *QVector3D) cPointer() *C.QVector3D {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVector3D) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVector3D constructs the type using only CGO pointers.
func newQVector3D(h *C.QVector3D) *QVector3D {
	if h == nil {
		return nil
	}

	return &QVector3D{h: h}
}

// UnsafeNewQVector3D constructs the type using only unsafe pointers.
func UnsafeNewQVector3D(h unsafe.Pointer) *QVector3D {
	return newQVector3D((*C.QVector3D)(h))
}

// NewQVector3D constructs a new QVector3D object.
func NewQVector3D() *QVector3D {

	ret := newQVector3D(C.QVector3D_new())
	ret.isSubclass = true
	return ret
}

// NewQVector3D2 constructs a new QVector3D object.
func NewQVector3D2(param1 Initialization) *QVector3D {

	ret := newQVector3D(C.QVector3D_new2((C.int)(param1)))
	ret.isSubclass = true
	return ret
}

// NewQVector3D3 constructs a new QVector3D object.
func NewQVector3D3(xpos float32, ypos float32, zpos float32) *QVector3D {

	ret := newQVector3D(C.QVector3D_new3((C.float)(xpos), (C.float)(ypos), (C.float)(zpos)))
	ret.isSubclass = true
	return ret
}

// NewQVector3D4 constructs a new QVector3D object.
func NewQVector3D4(point *QPoint) *QVector3D {

	ret := newQVector3D(C.QVector3D_new4(point.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector3D5 constructs a new QVector3D object.
func NewQVector3D5(point *QPointF) *QVector3D {

	ret := newQVector3D(C.QVector3D_new5(point.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector3D6 constructs a new QVector3D object.
func NewQVector3D6(vector *QVector2D) *QVector3D {

	ret := newQVector3D(C.QVector3D_new6(vector.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector3D7 constructs a new QVector3D object.
func NewQVector3D7(vector *QVector2D, zpos float32) *QVector3D {

	ret := newQVector3D(C.QVector3D_new7(vector.cPointer(), (C.float)(zpos)))
	ret.isSubclass = true
	return ret
}

// NewQVector3D8 constructs a new QVector3D object.
func NewQVector3D8(vector *QVector4D) *QVector3D {

	ret := newQVector3D(C.QVector3D_new8(vector.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVector3D9 constructs a new QVector3D object.
func NewQVector3D9(param1 *QVector3D) *QVector3D {

	ret := newQVector3D(C.QVector3D_new9(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QVector3D) IsNull() bool {
	return (bool)(C.QVector3D_IsNull(this.h))
}

func (this *QVector3D) X() float32 {
	return (float32)(C.QVector3D_X(this.h))
}

func (this *QVector3D) Y() float32 {
	return (float32)(C.QVector3D_Y(this.h))
}

func (this *QVector3D) Z() float32 {
	return (float32)(C.QVector3D_Z(this.h))
}

func (this *QVector3D) SetX(x float32) {
	C.QVector3D_SetX(this.h, (C.float)(x))
}

func (this *QVector3D) SetY(y float32) {
	C.QVector3D_SetY(this.h, (C.float)(y))
}

func (this *QVector3D) SetZ(z float32) {
	C.QVector3D_SetZ(this.h, (C.float)(z))
}

func (this *QVector3D) OperatorSubscript(i int) float32 {
	return (float32)(C.QVector3D_OperatorSubscript(this.h, (C.int)(i)))
}

func (this *QVector3D) Length() float32 {
	return (float32)(C.QVector3D_Length(this.h))
}

func (this *QVector3D) LengthSquared() float32 {
	return (float32)(C.QVector3D_LengthSquared(this.h))
}

func (this *QVector3D) Normalized() *QVector3D {
	_goptr := newQVector3D(C.QVector3D_Normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) Normalize() {
	C.QVector3D_Normalize(this.h)
}

func (this *QVector3D) OperatorPlusAssign(vector *QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_OperatorPlusAssign(this.h, vector.cPointer()))
}

func (this *QVector3D) OperatorMinusAssign(vector *QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_OperatorMinusAssign(this.h, vector.cPointer()))
}

func (this *QVector3D) OperatorMultiplyAssign(factor float32) *QVector3D {
	return newQVector3D(C.QVector3D_OperatorMultiplyAssign(this.h, (C.float)(factor)))
}

func (this *QVector3D) OperatorMultiplyAssignWithVector(vector *QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_OperatorMultiplyAssignWithVector(this.h, vector.cPointer()))
}

func (this *QVector3D) OperatorDivideAssign(divisor float32) *QVector3D {
	return newQVector3D(C.QVector3D_OperatorDivideAssign(this.h, (C.float)(divisor)))
}

func (this *QVector3D) OperatorDivideAssignWithVector(vector *QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_OperatorDivideAssignWithVector(this.h, vector.cPointer()))
}

func QVector3D_DotProduct(v1 *QVector3D, v2 *QVector3D) float32 {
	return (float32)(C.QVector3D_DotProduct(v1.cPointer(), v2.cPointer()))
}

func QVector3D_CrossProduct(v1 *QVector3D, v2 *QVector3D) *QVector3D {
	_goptr := newQVector3D(C.QVector3D_CrossProduct(v1.cPointer(), v2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVector3D_Normal(v1 *QVector3D, v2 *QVector3D) *QVector3D {
	_goptr := newQVector3D(C.QVector3D_Normal(v1.cPointer(), v2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVector3D_Normal2(v1 *QVector3D, v2 *QVector3D, v3 *QVector3D) *QVector3D {
	_goptr := newQVector3D(C.QVector3D_Normal2(v1.cPointer(), v2.cPointer(), v3.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) Project(modelView *QMatrix4x4, projection *QMatrix4x4, viewport *QRect) *QVector3D {
	_goptr := newQVector3D(C.QVector3D_Project(this.h, modelView.cPointer(), projection.cPointer(), viewport.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) Unproject(modelView *QMatrix4x4, projection *QMatrix4x4, viewport *QRect) *QVector3D {
	_goptr := newQVector3D(C.QVector3D_Unproject(this.h, modelView.cPointer(), projection.cPointer(), viewport.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) DistanceToPoint(point *QVector3D) float32 {
	return (float32)(C.QVector3D_DistanceToPoint(this.h, point.cPointer()))
}

func (this *QVector3D) DistanceToPlane(plane *QVector3D, normal *QVector3D) float32 {
	return (float32)(C.QVector3D_DistanceToPlane(this.h, plane.cPointer(), normal.cPointer()))
}

func (this *QVector3D) DistanceToPlane2(plane1 *QVector3D, plane2 *QVector3D, plane3 *QVector3D) float32 {
	return (float32)(C.QVector3D_DistanceToPlane2(this.h, plane1.cPointer(), plane2.cPointer(), plane3.cPointer()))
}

func (this *QVector3D) DistanceToLine(point *QVector3D, direction *QVector3D) float32 {
	return (float32)(C.QVector3D_DistanceToLine(this.h, point.cPointer(), direction.cPointer()))
}

func (this *QVector3D) ToVector2D() *QVector2D {
	_goptr := newQVector2D(C.QVector3D_ToVector2D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToVector4D() *QVector4D {
	_goptr := newQVector4D(C.QVector3D_ToVector4D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToPoint() *QPoint {
	_goptr := newQPoint(C.QVector3D_ToPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToPointF() *QPointF {
	_goptr := newQPointF(C.QVector3D_ToPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QVector3D_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVector3D) Delete() {
	C.QVector3D_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVector3D) GoGC() {
	runtime.SetFinalizer(this, func(this *QVector3D) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
