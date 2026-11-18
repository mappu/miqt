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
	h  *C.QVector2D
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVector2D) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQVector2D(C.QVector2D_new())
}

// NewQVector2D2 constructs a new QVector2D object.
func NewQVector2D2(param1 Initialization) *QVector2D {

	return newQVector2D(C.QVector2D_new2((C.int)(param1)))
}

// NewQVector2D3 constructs a new QVector2D object.
func NewQVector2D3(xpos float32, ypos float32) *QVector2D {

	return newQVector2D(C.QVector2D_new3((C.float)(xpos), (C.float)(ypos)))
}

// NewQVector2D4 constructs a new QVector2D object.
func NewQVector2D4(point *QPoint) *QVector2D {
	defer runtime.KeepAlive(point)

	return newQVector2D(C.QVector2D_new4(point.cPointer()))
}

// NewQVector2D5 constructs a new QVector2D object.
func NewQVector2D5(point *QPointF) *QVector2D {
	defer runtime.KeepAlive(point)

	return newQVector2D(C.QVector2D_new5(point.cPointer()))
}

// NewQVector2D6 constructs a new QVector2D object.
func NewQVector2D6(vector *QVector3D) *QVector2D {
	defer runtime.KeepAlive(vector)

	return newQVector2D(C.QVector2D_new6(vector.cPointer()))
}

// NewQVector2D7 constructs a new QVector2D object.
func NewQVector2D7(vector *QVector4D) *QVector2D {
	defer runtime.KeepAlive(vector)

	return newQVector2D(C.QVector2D_new7(vector.cPointer()))
}

// NewQVector2D8 constructs a new QVector2D object.
func NewQVector2D8(param1 *QVector2D) *QVector2D {
	defer runtime.KeepAlive(param1)

	return newQVector2D(C.QVector2D_new8(param1.cPointer()))
}

func (this *QVector2D) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVector2D_isNull(this.h))
}

func (this *QVector2D) X() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector2D_x(this.h))
}

func (this *QVector2D) Y() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector2D_y(this.h))
}

func (this *QVector2D) SetX(x float32) {
	defer runtime.KeepAlive(this)
	C.QVector2D_setX(this.h, (C.float)(x))
}

func (this *QVector2D) SetY(y float32) {
	defer runtime.KeepAlive(this)
	C.QVector2D_setY(this.h, (C.float)(y))
}

func (this *QVector2D) OperatorSubscript(i int) float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector2D_operatorSubscript(this.h, (C.int)(i)))
}

func (this *QVector2D) Length() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector2D_length(this.h))
}

func (this *QVector2D) LengthSquared() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector2D_lengthSquared(this.h))
}

func (this *QVector2D) Normalized() *QVector2D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector2D(C.QVector2D_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) Normalize() {
	defer runtime.KeepAlive(this)
	C.QVector2D_normalize(this.h)
}

func (this *QVector2D) DistanceToPoint(point *QVector2D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	return (float32)(C.QVector2D_distanceToPoint(this.h, point.cPointer()))
}

func (this *QVector2D) DistanceToLine(point *QVector2D, direction *QVector2D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	defer runtime.KeepAlive(direction)
	return (float32)(C.QVector2D_distanceToLine(this.h, point.cPointer(), direction.cPointer()))
}

func (this *QVector2D) OperatorPlusAssign(vector *QVector2D) *QVector2D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector2D(C.QVector2D_operatorPlusAssign(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector2D) OperatorMinusAssign(vector *QVector2D) *QVector2D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector2D(C.QVector2D_operatorMinusAssign(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector2D) OperatorMultiplyAssign(factor float32) *QVector2D {
	defer runtime.KeepAlive(this)
	_ret := newQVector2D(C.QVector2D_operatorMultiplyAssign(this.h, (C.float)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector2D) OperatorMultiplyAssignWithVector(vector *QVector2D) *QVector2D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector2D(C.QVector2D_operatorMultiplyAssignWithVector(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector2D) OperatorDivideAssign(divisor float32) *QVector2D {
	defer runtime.KeepAlive(this)
	_ret := newQVector2D(C.QVector2D_operatorDivideAssign(this.h, (C.float)(divisor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector2D) OperatorDivideAssignWithVector(vector *QVector2D) *QVector2D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector2D(C.QVector2D_operatorDivideAssignWithVector(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QVector2D_DotProduct(v1 *QVector2D, v2 *QVector2D) float32 {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	return (float32)(C.QVector2D_dotProduct(v1.cPointer(), v2.cPointer()))
}

func (this *QVector2D) ToVector3D() *QVector3D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector3D(C.QVector2D_toVector3D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToVector4D() *QVector4D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector4D(C.QVector2D_toVector4D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToPoint() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QVector2D_toPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToPointF() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QVector2D_toPointF(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QVector2D_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVector2D) Delete() {
	C.QVector2D_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVector2D) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVector2D_delete((*C.QVector2D)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QFuzzyCompare9(v1 *QVector2D, v2 *QVector2D) bool {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	return (bool)(C.miqt_QFuzzyCompare9(v1.cPointer(), v2.cPointer()))
}
