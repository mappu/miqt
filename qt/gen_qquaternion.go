package qt

/*

#include "gen_qquaternion.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QQuaternion struct {
	h  *C.QQuaternion
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QQuaternion) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QQuaternion) cPointer() *C.QQuaternion {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQuaternion) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQuaternion constructs the type using only CGO pointers.
func newQQuaternion(h *C.QQuaternion) *QQuaternion {
	if h == nil {
		return nil
	}

	return &QQuaternion{h: h}
}

// UnsafeNewQQuaternion constructs the type using only unsafe pointers.
func UnsafeNewQQuaternion(h unsafe.Pointer) *QQuaternion {
	return newQQuaternion((*C.QQuaternion)(h))
}

// NewQQuaternion constructs a new QQuaternion object.
func NewQQuaternion() *QQuaternion {

	return newQQuaternion(C.QQuaternion_new())
}

// NewQQuaternion2 constructs a new QQuaternion object.
func NewQQuaternion2(param1 Initialization) *QQuaternion {

	return newQQuaternion(C.QQuaternion_new2((C.int)(param1)))
}

// NewQQuaternion3 constructs a new QQuaternion object.
func NewQQuaternion3(scalar float32, xpos float32, ypos float32, zpos float32) *QQuaternion {

	return newQQuaternion(C.QQuaternion_new3((C.float)(scalar), (C.float)(xpos), (C.float)(ypos), (C.float)(zpos)))
}

// NewQQuaternion4 constructs a new QQuaternion object.
func NewQQuaternion4(scalar float32, vector QVector3D) *QQuaternion {

	return newQQuaternion(C.QQuaternion_new4((C.float)(scalar), libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

// NewQQuaternion5 constructs a new QQuaternion object.
func NewQQuaternion5(vector *QVector4D) *QQuaternion {
	defer runtime.KeepAlive(vector)

	return newQQuaternion(C.QQuaternion_new5(vector.cPointer()))
}

// NewQQuaternion6 constructs a new QQuaternion object.
func NewQQuaternion6(param1 *QQuaternion) *QQuaternion {
	defer runtime.KeepAlive(param1)

	return newQQuaternion(C.QQuaternion_new6(param1.cPointer()))
}

func (this *QQuaternion) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QQuaternion_isNull(this.h))
}

func (this *QQuaternion) IsIdentity() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QQuaternion_isIdentity(this.h))
}

func (this *QQuaternion) Vector() QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QQuaternion_vector(this.h))
}

func (this *QQuaternion) SetVector(vector QVector3D) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_setVector(this.h, libmiqt.ValueCast[C.struct_miqt_qvector3d](vector))
}

func (this *QQuaternion) SetVector2(x float32, y float32, z float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_setVector2(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QQuaternion) X() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QQuaternion_x(this.h))
}

func (this *QQuaternion) Y() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QQuaternion_y(this.h))
}

func (this *QQuaternion) Z() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QQuaternion_z(this.h))
}

func (this *QQuaternion) Scalar() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QQuaternion_scalar(this.h))
}

func (this *QQuaternion) SetX(x float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_setX(this.h, (C.float)(x))
}

func (this *QQuaternion) SetY(y float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_setY(this.h, (C.float)(y))
}

func (this *QQuaternion) SetZ(z float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_setZ(this.h, (C.float)(z))
}

func (this *QQuaternion) SetScalar(scalar float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_setScalar(this.h, (C.float)(scalar))
}

func QQuaternion_DotProduct(q1 *QQuaternion, q2 *QQuaternion) float32 {
	defer runtime.KeepAlive(q1)
	defer runtime.KeepAlive(q2)
	return (float32)(C.QQuaternion_dotProduct(q1.cPointer(), q2.cPointer()))
}

func (this *QQuaternion) Length() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QQuaternion_length(this.h))
}

func (this *QQuaternion) LengthSquared() float32 {
	defer runtime.KeepAlive(this)
	return (float32)(C.QQuaternion_lengthSquared(this.h))
}

func (this *QQuaternion) Normalized() *QQuaternion {
	defer runtime.KeepAlive(this)
	_goptr := newQQuaternion(C.QQuaternion_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) Normalize() {
	defer runtime.KeepAlive(this)
	C.QQuaternion_normalize(this.h)
}

func (this *QQuaternion) Inverted() *QQuaternion {
	defer runtime.KeepAlive(this)
	_goptr := newQQuaternion(C.QQuaternion_inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) Conjugated() *QQuaternion {
	defer runtime.KeepAlive(this)
	_goptr := newQQuaternion(C.QQuaternion_conjugated(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) Conjugate() *QQuaternion {
	defer runtime.KeepAlive(this)
	_goptr := newQQuaternion(C.QQuaternion_conjugate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) RotatedVector(vector QVector3D) QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QQuaternion_rotatedVector(this.h, libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

func (this *QQuaternion) OperatorPlusAssign(quaternion *QQuaternion) *QQuaternion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(quaternion)
	_ret := newQQuaternion(C.QQuaternion_operatorPlusAssign(this.h, quaternion.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQuaternion) OperatorMinusAssign(quaternion *QQuaternion) *QQuaternion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(quaternion)
	_ret := newQQuaternion(C.QQuaternion_operatorMinusAssign(this.h, quaternion.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQuaternion) OperatorMultiplyAssign(factor float32) *QQuaternion {
	defer runtime.KeepAlive(this)
	_ret := newQQuaternion(C.QQuaternion_operatorMultiplyAssign(this.h, (C.float)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQuaternion) OperatorMultiplyAssignWithQuaternion(quaternion *QQuaternion) *QQuaternion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(quaternion)
	_ret := newQQuaternion(C.QQuaternion_operatorMultiplyAssignWithQuaternion(this.h, quaternion.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQuaternion) OperatorDivideAssign(divisor float32) *QQuaternion {
	defer runtime.KeepAlive(this)
	_ret := newQQuaternion(C.QQuaternion_operatorDivideAssign(this.h, (C.float)(divisor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QQuaternion) ToVector4D() *QVector4D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector4D(C.QQuaternion_toVector4D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QQuaternion_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetAxisAndAngle(axis *QVector3D, angle *float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_getAxisAndAngle(this.h, axis.cPointer(), (*C.float)(unsafe.Pointer(angle)))
}

func QQuaternion_FromAxisAndAngle(axis QVector3D, angle float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_fromAxisAndAngle(libmiqt.ValueCast[C.struct_miqt_qvector3d](axis), (C.float)(angle)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetAxisAndAngle2(x *float32, y *float32, z *float32, angle *float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_getAxisAndAngle2(this.h, (*C.float)(unsafe.Pointer(x)), (*C.float)(unsafe.Pointer(y)), (*C.float)(unsafe.Pointer(z)), (*C.float)(unsafe.Pointer(angle)))
}

func QQuaternion_FromAxisAndAngle2(x float32, y float32, z float32, angle float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_fromAxisAndAngle2((C.float)(x), (C.float)(y), (C.float)(z), (C.float)(angle)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) ToEulerAngles() QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QQuaternion_toEulerAngles(this.h))
}

func QQuaternion_FromEulerAngles(eulerAngles QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_fromEulerAngles(libmiqt.ValueCast[C.struct_miqt_qvector3d](eulerAngles)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetEulerAngles(pitch *float32, yaw *float32, roll *float32) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_getEulerAngles(this.h, (*C.float)(unsafe.Pointer(pitch)), (*C.float)(unsafe.Pointer(yaw)), (*C.float)(unsafe.Pointer(roll)))
}

func QQuaternion_FromEulerAngles2(pitch float32, yaw float32, roll float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_fromEulerAngles2((C.float)(pitch), (C.float)(yaw), (C.float)(roll)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetAxes(xAxis *QVector3D, yAxis *QVector3D, zAxis *QVector3D) {
	defer runtime.KeepAlive(this)
	C.QQuaternion_getAxes(this.h, xAxis.cPointer(), yAxis.cPointer(), zAxis.cPointer())
}

func QQuaternion_FromAxes(xAxis QVector3D, yAxis QVector3D, zAxis QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_fromAxes(libmiqt.ValueCast[C.struct_miqt_qvector3d](xAxis), libmiqt.ValueCast[C.struct_miqt_qvector3d](yAxis), libmiqt.ValueCast[C.struct_miqt_qvector3d](zAxis)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_FromDirection(direction QVector3D, up QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_fromDirection(libmiqt.ValueCast[C.struct_miqt_qvector3d](direction), libmiqt.ValueCast[C.struct_miqt_qvector3d](up)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_RotationTo(from QVector3D, to QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_rotationTo(libmiqt.ValueCast[C.struct_miqt_qvector3d](from), libmiqt.ValueCast[C.struct_miqt_qvector3d](to)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_Slerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
	defer runtime.KeepAlive(q1)
	defer runtime.KeepAlive(q2)
	_goptr := newQQuaternion(C.QQuaternion_slerp(q1.cPointer(), q2.cPointer(), (C.float)(t)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_Nlerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
	defer runtime.KeepAlive(q1)
	defer runtime.KeepAlive(q2)
	_goptr := newQQuaternion(C.QQuaternion_nlerp(q1.cPointer(), q2.cPointer(), (C.float)(t)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) OperatorAssign(param1 *QQuaternion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QQuaternion_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QQuaternion) Delete() {
	C.QQuaternion_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QQuaternion) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QQuaternion_delete((*C.QQuaternion)(gc[0]))
	})
	this.miqtSetGC(gc)
}
