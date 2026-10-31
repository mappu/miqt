package qt

/*

#include "gen_qvector3d.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

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
func NewQVector3D6(vector *QVector2D) QVector3D {
	defer runtime.KeepAlive(vector)

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new6(vector.cPointer()))
}

// NewQVector3D7 constructs a new QVector3D object.
func NewQVector3D7(vector *QVector2D, zpos float32) QVector3D {
	defer runtime.KeepAlive(vector)

	return libmiqt.ValueCast[QVector3D](C.QVector3D_new7(vector.cPointer(), (C.float)(zpos)))
}

// NewQVector3D8 constructs a new QVector3D object.
func NewQVector3D8(vector *QVector4D) QVector3D {
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
