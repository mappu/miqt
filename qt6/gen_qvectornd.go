package qt6

/*

#include "gen_qvectornd.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
func NewQVector2D4(point QPoint) *QVector2D {

	return newQVector2D(C.QVector2D_new4(libmiqt.ValueCast[C.struct_miqt_qpoint](point)))
}

// NewQVector2D5 constructs a new QVector2D object.
func NewQVector2D5(point QPointF) *QVector2D {

	return newQVector2D(C.QVector2D_new5(libmiqt.ValueCast[C.struct_miqt_qpointf](point)))
}

// NewQVector2D6 constructs a new QVector2D object.
func NewQVector2D6(vector QVector3D) *QVector2D {

	return newQVector2D(C.QVector2D_new6(libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

// NewQVector2D7 constructs a new QVector2D object.
func NewQVector2D7(vector QVector4D) *QVector2D {
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

func (this *QVector2D) DistanceToPoint(point QVector2D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	return (float32)(C.QVector2D_distanceToPoint(this.h, point.cPointer()))
}

func (this *QVector2D) DistanceToLine(point QVector2D, direction QVector2D) float32 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	defer runtime.KeepAlive(direction)
	return (float32)(C.QVector2D_distanceToLine(this.h, point.cPointer(), direction.cPointer()))
}

func (this *QVector2D) OperatorPlusAssign(vector QVector2D) *QVector2D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector2D(C.QVector2D_operatorPlusAssign(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector2D) OperatorMinusAssign(vector QVector2D) *QVector2D {
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

func (this *QVector2D) OperatorMultiplyAssignWithVector(vector QVector2D) *QVector2D {
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

func (this *QVector2D) OperatorDivideAssignWithVector(vector QVector2D) *QVector2D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector2D(C.QVector2D_operatorDivideAssignWithVector(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QVector2D_DotProduct(v1 QVector2D, v2 QVector2D) float32 {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	return (float32)(C.QVector2D_dotProduct(v1.cPointer(), v2.cPointer()))
}

func (this *QVector2D) ToVector3D() QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QVector2D_toVector3D(this.h))
}

func (this *QVector2D) ToVector4D() *QVector4D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector4D(C.QVector2D_toVector4D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector2D) ToPoint() QPoint {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPoint](C.QVector2D_toPoint(this.h))
}

func (this *QVector2D) ToPointF() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QVector2D_toPointF(this.h))
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

// QVector3D is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQVector3D().
type QVector3D struct {
	x float32
	y float32
	z float32
}

func (this *QVector3D) cPointer() *C.QVector3D {
	return (*C.QVector3D)(unsafe.Pointer(this))
}

func (this *QVector3D) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQVector3D views C++ memory as this type, without copying it.
func newQVector3D(h *C.QVector3D) *QVector3D {
	return (*QVector3D)(unsafe.Pointer(h))
}

// UnsafeNewQVector3D views C++ memory as this type, without copying it.
func UnsafeNewQVector3D(h unsafe.Pointer) *QVector3D {
	return (*QVector3D)(h)
}

// NewQVector3D constructs a new QVector3D object.
func NewQVector3D() QVector3D {

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new())
}

// NewQVector3D2 constructs a new QVector3D object.
func NewQVector3D2(param1 Initialization) QVector3D {

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new2((C.int)(param1)))
}

// NewQVector3D3 constructs a new QVector3D object.
func NewQVector3D3(xpos float32, ypos float32, zpos float32) QVector3D {

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new3((C.float)(xpos), (C.float)(ypos), (C.float)(zpos)))
}

// NewQVector3D4 constructs a new QVector3D object.
func NewQVector3D4(point QPoint) QVector3D {

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new4(libmiqt.ValueCast[C.struct_miqt_qpoint](point)))
}

// NewQVector3D5 constructs a new QVector3D object.
func NewQVector3D5(point QPointF) QVector3D {

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new5(libmiqt.ValueCast[C.struct_miqt_qpointf](point)))
}

// NewQVector3D6 constructs a new QVector3D object.
func NewQVector3D6(vector QVector2D) QVector3D {
	defer runtime.KeepAlive(vector)

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new6(vector.cPointer()))
}

// NewQVector3D7 constructs a new QVector3D object.
func NewQVector3D7(vector QVector2D, zpos float32) QVector3D {
	defer runtime.KeepAlive(vector)

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new7(vector.cPointer(), (C.float)(zpos)))
}

// NewQVector3D8 constructs a new QVector3D object.
func NewQVector3D8(vector QVector4D) QVector3D {
	defer runtime.KeepAlive(vector)

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new8(vector.cPointer()))
}

// NewQVector3D9 constructs a new QVector3D object.
func NewQVector3D9(param1 QVector3D) QVector3D {

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new9(libmiqt.ValueCast[C.struct_miqt_qvector3d](param1)))
}

func (this QVector3D) IsNull() bool {
	return (bool)(C.QVector3D_isNull(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this QVector3D) X() float32 {
	return (float32)(C.QVector3D_x(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this QVector3D) Y() float32 {
	return (float32)(C.QVector3D_y(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this QVector3D) Z() float32 {
	return (float32)(C.QVector3D_z(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this *QVector3D) SetX(x float32) {
	C.QVector3D_setX(this.cPointer(), (C.float)(x))
}

func (this *QVector3D) SetY(y float32) {
	C.QVector3D_setY(this.cPointer(), (C.float)(y))
}

func (this *QVector3D) SetZ(z float32) {
	C.QVector3D_setZ(this.cPointer(), (C.float)(z))
}

func (this QVector3D) OperatorSubscript(i int) float32 {
	return (float32)(C.QVector3D_operatorSubscript(libmiqt.ValueCast[C.struct_miqt_qvector3d](this), (C.int)(i)))
}

func (this QVector3D) Length() float32 {
	return (float32)(C.QVector3D_length(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this QVector3D) LengthSquared() float32 {
	return (float32)(C.QVector3D_lengthSquared(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this QVector3D) Normalized() QVector3D {
	return libmiqt.ValueCast[QVector3D](C.QVector3D_normalized(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this *QVector3D) Normalize() {
	C.QVector3D_normalize(this.cPointer())
}

func (this *QVector3D) OperatorPlusAssign(vector QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_operatorPlusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

func (this *QVector3D) OperatorMinusAssign(vector QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_operatorMinusAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

func (this *QVector3D) OperatorMultiplyAssign(factor float32) *QVector3D {
	return newQVector3D(C.QVector3D_operatorMultiplyAssign(this.cPointer(), (C.float)(factor)))
}

func (this *QVector3D) OperatorMultiplyAssignWithVector(vector QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_operatorMultiplyAssignWithVector(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

func (this *QVector3D) OperatorDivideAssign(divisor float32) *QVector3D {
	return newQVector3D(C.QVector3D_operatorDivideAssign(this.cPointer(), (C.float)(divisor)))
}

func (this *QVector3D) OperatorDivideAssignWithVector(vector QVector3D) *QVector3D {
	return newQVector3D(C.QVector3D_operatorDivideAssignWithVector(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

func QVector3D_DotProduct(v1 QVector3D, v2 QVector3D) float32 {
	return (float32)(C.QVector3D_dotProduct(libmiqt.ValueCast[C.struct_miqt_qvector3d](v1), libmiqt.ValueCast[C.struct_miqt_qvector3d](v2)))
}

func QVector3D_CrossProduct(v1 QVector3D, v2 QVector3D) QVector3D {
	return libmiqt.ValueCast[QVector3D](C.QVector3D_crossProduct(libmiqt.ValueCast[C.struct_miqt_qvector3d](v1), libmiqt.ValueCast[C.struct_miqt_qvector3d](v2)))
}

func QVector3D_Normal(v1 QVector3D, v2 QVector3D) QVector3D {
	return libmiqt.ValueCast[QVector3D](C.QVector3D_normal(libmiqt.ValueCast[C.struct_miqt_qvector3d](v1), libmiqt.ValueCast[C.struct_miqt_qvector3d](v2)))
}

func QVector3D_Normal2(v1 QVector3D, v2 QVector3D, v3 QVector3D) QVector3D {
	return libmiqt.ValueCast[QVector3D](C.QVector3D_normal2(libmiqt.ValueCast[C.struct_miqt_qvector3d](v1), libmiqt.ValueCast[C.struct_miqt_qvector3d](v2), libmiqt.ValueCast[C.struct_miqt_qvector3d](v3)))
}

func (this QVector3D) Project(modelView *QMatrix4x4, projection *QMatrix4x4, viewport QRect) QVector3D {
	defer runtime.KeepAlive(modelView)
	defer runtime.KeepAlive(projection)
	return libmiqt.ValueCast[QVector3D](C.QVector3D_project(libmiqt.ValueCast[C.struct_miqt_qvector3d](this), modelView.cPointer(), projection.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrect](viewport)))
}

func (this QVector3D) Unproject(modelView *QMatrix4x4, projection *QMatrix4x4, viewport QRect) QVector3D {
	defer runtime.KeepAlive(modelView)
	defer runtime.KeepAlive(projection)
	return libmiqt.ValueCast[QVector3D](C.QVector3D_unproject(libmiqt.ValueCast[C.struct_miqt_qvector3d](this), modelView.cPointer(), projection.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrect](viewport)))
}

func (this QVector3D) DistanceToPoint(point QVector3D) float32 {
	return (float32)(C.QVector3D_distanceToPoint(libmiqt.ValueCast[C.struct_miqt_qvector3d](this), libmiqt.ValueCast[C.struct_miqt_qvector3d](point)))
}

func (this QVector3D) DistanceToPlane(plane QVector3D, normal QVector3D) float32 {
	return (float32)(C.QVector3D_distanceToPlane(libmiqt.ValueCast[C.struct_miqt_qvector3d](this), libmiqt.ValueCast[C.struct_miqt_qvector3d](plane), libmiqt.ValueCast[C.struct_miqt_qvector3d](normal)))
}

func (this QVector3D) DistanceToPlane2(plane1 QVector3D, plane2 QVector3D, plane3 QVector3D) float32 {
	return (float32)(C.QVector3D_distanceToPlane2(libmiqt.ValueCast[C.struct_miqt_qvector3d](this), libmiqt.ValueCast[C.struct_miqt_qvector3d](plane1), libmiqt.ValueCast[C.struct_miqt_qvector3d](plane2), libmiqt.ValueCast[C.struct_miqt_qvector3d](plane3)))
}

func (this QVector3D) DistanceToLine(point QVector3D, direction QVector3D) float32 {
	return (float32)(C.QVector3D_distanceToLine(libmiqt.ValueCast[C.struct_miqt_qvector3d](this), libmiqt.ValueCast[C.struct_miqt_qvector3d](point), libmiqt.ValueCast[C.struct_miqt_qvector3d](direction)))
}

func (this QVector3D) ToVector2D() *QVector2D {
	_goptr := newQVector2D(C.QVector3D_toVector2D(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this QVector3D) ToVector4D() *QVector4D {
	_goptr := newQVector4D(C.QVector3D_toVector4D(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this QVector3D) ToPoint() QPoint {
	return libmiqt.ValueCast[QPoint](C.QVector3D_toPoint(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this QVector3D) ToPointF() QPointF {
	return libmiqt.ValueCast[QPointF](C.QVector3D_toPointF(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
}

func (this QVector3D) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QVector3D_ToQVariant(libmiqt.ValueCast[C.struct_miqt_qvector3d](this)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

type QVector4D struct {
	h  *C.QVector4D
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVector4D) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
func NewQVector4D4(point QPoint) *QVector4D {

	return newQVector4D(C.QVector4D_new4(libmiqt.ValueCast[C.struct_miqt_qpoint](point)))
}

// NewQVector4D5 constructs a new QVector4D object.
func NewQVector4D5(point QPointF) *QVector4D {

	return newQVector4D(C.QVector4D_new5(libmiqt.ValueCast[C.struct_miqt_qpointf](point)))
}

// NewQVector4D6 constructs a new QVector4D object.
func NewQVector4D6(vector QVector2D) *QVector4D {
	defer runtime.KeepAlive(vector)

	return newQVector4D(C.QVector4D_new6(vector.cPointer()))
}

// NewQVector4D7 constructs a new QVector4D object.
func NewQVector4D7(vector QVector2D, zpos float32, wpos float32) *QVector4D {
	defer runtime.KeepAlive(vector)

	return newQVector4D(C.QVector4D_new7(vector.cPointer(), (C.float)(zpos), (C.float)(wpos)))
}

// NewQVector4D8 constructs a new QVector4D object.
func NewQVector4D8(vector QVector3D) *QVector4D {

	return newQVector4D(C.QVector4D_new8(libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

// NewQVector4D9 constructs a new QVector4D object.
func NewQVector4D9(vector QVector3D, wpos float32) *QVector4D {

	return newQVector4D(C.QVector4D_new9(libmiqt.ValueCast[C.struct_miqt_qvector3d](vector), (C.float)(wpos)))
}

// NewQVector4D10 constructs a new QVector4D object.
func NewQVector4D10(param1 *QVector4D) *QVector4D {
	defer runtime.KeepAlive(param1)

	return newQVector4D(C.QVector4D_new10(param1.cPointer()))
}

func (this *QVector4D) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVector4D_isNull(this.h))
}

func (this *QVector4D) X() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector4D_x(this.h))
}

func (this *QVector4D) Y() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector4D_y(this.h))
}

func (this *QVector4D) Z() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector4D_z(this.h))
}

func (this *QVector4D) W() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector4D_w(this.h))
}

func (this *QVector4D) SetX(x float32) {
	defer runtime.KeepAlive(this)
	C.QVector4D_setX(this.h, (C.float)(x))
}

func (this *QVector4D) SetY(y float32) {
	defer runtime.KeepAlive(this)
	C.QVector4D_setY(this.h, (C.float)(y))
}

func (this *QVector4D) SetZ(z float32) {
	defer runtime.KeepAlive(this)
	C.QVector4D_setZ(this.h, (C.float)(z))
}

func (this *QVector4D) SetW(w float32) {
	defer runtime.KeepAlive(this)
	C.QVector4D_setW(this.h, (C.float)(w))
}

func (this *QVector4D) OperatorSubscript(i int) float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector4D_operatorSubscript(this.h, (C.int)(i)))
}

func (this *QVector4D) Length() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector4D_length(this.h))
}

func (this *QVector4D) LengthSquared() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QVector4D_lengthSquared(this.h))
}

func (this *QVector4D) Normalized() *QVector4D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector4D(C.QVector4D_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) Normalize() {
	defer runtime.KeepAlive(this)
	C.QVector4D_normalize(this.h)
}

func (this *QVector4D) OperatorPlusAssign(vector QVector4D) *QVector4D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector4D(C.QVector4D_operatorPlusAssign(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector4D) OperatorMinusAssign(vector QVector4D) *QVector4D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector4D(C.QVector4D_operatorMinusAssign(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector4D) OperatorMultiplyAssign(factor float32) *QVector4D {
	defer runtime.KeepAlive(this)
	_ret := newQVector4D(C.QVector4D_operatorMultiplyAssign(this.h, (C.float)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector4D) OperatorMultiplyAssignWithVector(vector QVector4D) *QVector4D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector4D(C.QVector4D_operatorMultiplyAssignWithVector(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector4D) OperatorDivideAssign(divisor float32) *QVector4D {
	defer runtime.KeepAlive(this)
	_ret := newQVector4D(C.QVector4D_operatorDivideAssign(this.h, (C.float)(divisor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QVector4D) OperatorDivideAssignWithVector(vector QVector4D) *QVector4D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(vector)
	_ret := newQVector4D(C.QVector4D_operatorDivideAssignWithVector(this.h, vector.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QVector4D_DotProduct(v1 QVector4D, v2 QVector4D) float32 {
	defer runtime.KeepAlive(v1)
	defer runtime.KeepAlive(v2)
	return (float32)(C.QVector4D_dotProduct(v1.cPointer(), v2.cPointer()))
}

func (this *QVector4D) ToVector2D() *QVector2D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector2D(C.QVector4D_toVector2D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector2DAffine() *QVector2D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector2D(C.QVector4D_toVector2DAffine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector3D() QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QVector4D_toVector3D(this.h))
}

func (this *QVector4D) ToVector3DAffine() QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QVector4D_toVector3DAffine(this.h))
}

func (this *QVector4D) ToPoint() QPoint {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPoint](C.QVector4D_toPoint(this.h))
}

func (this *QVector4D) ToPointF() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QVector4D_toPointF(this.h))
}

func (this *QVector4D) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QVector4D_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVector4D) Delete() {
	C.QVector4D_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVector4D) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVector4D_delete((*C.QVector4D)(gc[0]))
	})
	this.miqtSetGC(gc)
}
