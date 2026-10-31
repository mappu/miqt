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
	h  *C.QVector3D
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVector3D) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQVector3D(C.QVector3D_new())
}

// NewQVector3D2 constructs a new QVector3D object.
func NewQVector3D2(param1 Initialization) *QVector3D {

	return newQVector3D(C.QVector3D_new2((C.int)(param1)))
}

// NewQVector3D3 constructs a new QVector3D object.
func NewQVector3D3(xpos float32, ypos float32, zpos float32) *QVector3D {

	return newQVector3D(C.QVector3D_new3((C.float)(xpos), (C.float)(ypos), (C.float)(zpos)))
}

// NewQVector3D4 constructs a new QVector3D object.
func NewQVector3D4(point *QPoint) *QVector3D {
	defer runtime.KeepAlive(point)

	return newQVector3D(C.QVector3D_new4(point.cPointer()))
}

// NewQVector3D5 constructs a new QVector3D object.
func NewQVector3D5(point *QPointF) *QVector3D {
	defer runtime.KeepAlive(point)

	return newQVector3D(C.QVector3D_new5(point.cPointer()))
}

// NewQVector3D6 constructs a new QVector3D object.
func NewQVector3D6(vector *QVector2D) *QVector3D {
	defer runtime.KeepAlive(vector)

	return newQVector3D(C.QVector3D_new6(vector.cPointer()))
}

// NewQVector3D7 constructs a new QVector3D object.
func NewQVector3D7(vector *QVector2D, zpos float32) *QVector3D {
	defer runtime.KeepAlive(vector)

	return newQVector3D(C.QVector3D_new7(vector.cPointer(), (C.float)(zpos)))
}

// NewQVector3D8 constructs a new QVector3D object.
func NewQVector3D8(vector *QVector4D) *QVector3D {
	defer runtime.KeepAlive(vector)

	return newQVector3D(C.QVector3D_new8(vector.cPointer()))
}

// NewQVector3D9 constructs a new QVector3D object.
func NewQVector3D9(param1 *QVector3D) *QVector3D {
	defer runtime.KeepAlive(param1)

	return newQVector3D(C.QVector3D_new9(param1.cPointer()))
}

func (this *QVector3D) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVector3D_isNull(this.h))
}

func (this *QVector3D) X() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector3D_x(this.h))
}

func (this *QVector3D) Y() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector3D_y(this.h))
}

func (this *QVector3D) Z() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector3D_z(this.h))
}

func (this *QVector3D) SetX(x float32) {
	defer runtime.KeepAlive(this)
	C.QVector3D_setX(this.h, (C.float)(x))
}

func (this *QVector3D) SetY(y float32) {
	defer runtime.KeepAlive(this)
	C.QVector3D_setY(this.h, (C.float)(y))
}

func (this *QVector3D) SetZ(z float32) {
	defer runtime.KeepAlive(this)
	C.QVector3D_setZ(this.h, (C.float)(z))
}

func (this *QVector3D) OperatorSubscript(i int) float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector3D_operatorSubscript(this.h, (C.int)(i)))
}

func (this *QVector3D) Length() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector3D_length(this.h))
}

func (this *QVector3D) LengthSquared() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector3D_lengthSquared(this.h))
}

func (this *QVector3D) Normalized() *QVector3D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector3D(C.QVector3D_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) Normalize() {
	defer runtime.KeepAlive(this)
	C.QVector3D_normalize(this.h)
}

func (this *QVector3D) OperatorPlusAssign(vector *QVector3D) *QVector3D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector3D(C.QVector3D_operatorPlusAssign(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector3D) OperatorMinusAssign(vector *QVector3D) *QVector3D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector3D(C.QVector3D_operatorMinusAssign(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector3D) OperatorMultiplyAssign(factor float32) *QVector3D {
	defer runtime.KeepAlive(this)
	_ret := newQVector3D(C.QVector3D_operatorMultiplyAssign(this.h, (C.float)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector3D) OperatorMultiplyAssignWithVector(vector *QVector3D) *QVector3D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector3D(C.QVector3D_operatorMultiplyAssignWithVector(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector3D) OperatorDivideAssign(divisor float32) *QVector3D {
	defer runtime.KeepAlive(this)
	_ret := newQVector3D(C.QVector3D_operatorDivideAssign(this.h, (C.float)(divisor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector3D) OperatorDivideAssignWithVector(vector *QVector3D) *QVector3D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector3D(C.QVector3D_operatorDivideAssignWithVector(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QVector3D_DotProduct(v1 *QVector3D, v2 *QVector3D) float32 {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	return (float32)(C.QVector3D_dotProduct(v1.cPointer(), v2.cPointer()))
}

func QVector3D_CrossProduct(v1 *QVector3D, v2 *QVector3D) *QVector3D {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	_goptr := newQVector3D(C.QVector3D_crossProduct(v1.cPointer(), v2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVector3D_Normal(v1 *QVector3D, v2 *QVector3D) *QVector3D {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	_goptr := newQVector3D(C.QVector3D_normal(v1.cPointer(), v2.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVector3D_Normal2(v1 *QVector3D, v2 *QVector3D, v3 *QVector3D) *QVector3D {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	defer runtime.KeepAlive(v3)
	_goptr := newQVector3D(C.QVector3D_normal2(v1.cPointer(), v2.cPointer(), v3.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) Project(modelView *QMatrix4x4, projection *QMatrix4x4, viewport *QRect) *QVector3D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(modelView)
	defer runtime.KeepAlive(projection)
	defer runtime.KeepAlive(viewport)
	_goptr := newQVector3D(C.QVector3D_project(this.h, modelView.cPointer(), projection.cPointer(), viewport.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) Unproject(modelView *QMatrix4x4, projection *QMatrix4x4, viewport *QRect) *QVector3D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(modelView)
	defer runtime.KeepAlive(projection)
	defer runtime.KeepAlive(viewport)
	_goptr := newQVector3D(C.QVector3D_unproject(this.h, modelView.cPointer(), projection.cPointer(), viewport.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) DistanceToPoint(point *QVector3D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	return (float32)(C.QVector3D_distanceToPoint(this.h, point.cPointer()))
}

func (this *QVector3D) DistanceToPlane(plane *QVector3D, normal *QVector3D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(plane)
	defer runtime.KeepAlive(normal)
	return (float32)(C.QVector3D_distanceToPlane(this.h, plane.cPointer(), normal.cPointer()))
}

func (this *QVector3D) DistanceToPlane2(plane1 *QVector3D, plane2 *QVector3D, plane3 *QVector3D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(plane1)
	defer runtime.KeepAlive(plane2)
	defer runtime.KeepAlive(plane3)
	return (float32)(C.QVector3D_distanceToPlane2(this.h, plane1.cPointer(), plane2.cPointer(), plane3.cPointer()))
}

func (this *QVector3D) DistanceToLine(point *QVector3D, direction *QVector3D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	defer runtime.KeepAlive(direction)
	return (float32)(C.QVector3D_distanceToLine(this.h, point.cPointer(), direction.cPointer()))
}

func (this *QVector3D) ToVector2D() *QVector2D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector2D(C.QVector3D_toVector2D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToVector4D() *QVector4D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector4D(C.QVector3D_toVector4D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToPoint() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QVector3D_toPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToPointF() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QVector3D_toPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector3D) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QVector3D_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVector3D) Delete() {
	C.QVector3D_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVector3D) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVector3D_delete((*C.QVector3D)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QFuzzyCompare10(v1 *QVector3D, v2 *QVector3D) bool {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	return (bool)(C.miqt_QFuzzyCompare10(v1.cPointer(), v2.cPointer()))
}
