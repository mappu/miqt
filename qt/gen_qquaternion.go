package qt

/*

#include "gen_qquaternion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QQuaternion struct {
	h          *C.QQuaternion
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QQuaternion{h: (*C.QQuaternion)(h)}
}

// NewQQuaternion constructs a new QQuaternion object.
func NewQQuaternion() *QQuaternion {
	var outptr_QQuaternion *C.QQuaternion = nil

	C.QQuaternion_new(&outptr_QQuaternion)
	ret := newQQuaternion(outptr_QQuaternion)
	ret.isSubclass = true
	return ret
}

// NewQQuaternion2 constructs a new QQuaternion object.
func NewQQuaternion2(param1 Initialization) *QQuaternion {
	var outptr_QQuaternion *C.QQuaternion = nil

	C.QQuaternion_new2((C.int)(param1), &outptr_QQuaternion)
	ret := newQQuaternion(outptr_QQuaternion)
	ret.isSubclass = true
	return ret
}

// NewQQuaternion3 constructs a new QQuaternion object.
func NewQQuaternion3(scalar float32, xpos float32, ypos float32, zpos float32) *QQuaternion {
	var outptr_QQuaternion *C.QQuaternion = nil

	C.QQuaternion_new3((C.float)(scalar), (C.float)(xpos), (C.float)(ypos), (C.float)(zpos), &outptr_QQuaternion)
	ret := newQQuaternion(outptr_QQuaternion)
	ret.isSubclass = true
	return ret
}

// NewQQuaternion4 constructs a new QQuaternion object.
func NewQQuaternion4(scalar float32, vector *QVector3D) *QQuaternion {
	var outptr_QQuaternion *C.QQuaternion = nil

	C.QQuaternion_new4((C.float)(scalar), vector.cPointer(), &outptr_QQuaternion)
	ret := newQQuaternion(outptr_QQuaternion)
	ret.isSubclass = true
	return ret
}

// NewQQuaternion5 constructs a new QQuaternion object.
func NewQQuaternion5(vector *QVector4D) *QQuaternion {
	var outptr_QQuaternion *C.QQuaternion = nil

	C.QQuaternion_new5(vector.cPointer(), &outptr_QQuaternion)
	ret := newQQuaternion(outptr_QQuaternion)
	ret.isSubclass = true
	return ret
}

// NewQQuaternion6 constructs a new QQuaternion object.
func NewQQuaternion6(param1 *QQuaternion) *QQuaternion {
	var outptr_QQuaternion *C.QQuaternion = nil

	C.QQuaternion_new6(param1.cPointer(), &outptr_QQuaternion)
	ret := newQQuaternion(outptr_QQuaternion)
	ret.isSubclass = true
	return ret
}

func (this *QQuaternion) IsNull() bool {
	return (bool)(C.QQuaternion_IsNull(this.h))
}

func (this *QQuaternion) IsIdentity() bool {
	return (bool)(C.QQuaternion_IsIdentity(this.h))
}

func (this *QQuaternion) Vector() *QVector3D {
	_goptr := newQVector3D(C.QQuaternion_Vector(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) SetVector(vector *QVector3D) {
	C.QQuaternion_SetVector(this.h, vector.cPointer())
}

func (this *QQuaternion) SetVector2(x float32, y float32, z float32) {
	C.QQuaternion_SetVector2(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QQuaternion) X() float32 {
	return (float32)(C.QQuaternion_X(this.h))
}

func (this *QQuaternion) Y() float32 {
	return (float32)(C.QQuaternion_Y(this.h))
}

func (this *QQuaternion) Z() float32 {
	return (float32)(C.QQuaternion_Z(this.h))
}

func (this *QQuaternion) Scalar() float32 {
	return (float32)(C.QQuaternion_Scalar(this.h))
}

func (this *QQuaternion) SetX(x float32) {
	C.QQuaternion_SetX(this.h, (C.float)(x))
}

func (this *QQuaternion) SetY(y float32) {
	C.QQuaternion_SetY(this.h, (C.float)(y))
}

func (this *QQuaternion) SetZ(z float32) {
	C.QQuaternion_SetZ(this.h, (C.float)(z))
}

func (this *QQuaternion) SetScalar(scalar float32) {
	C.QQuaternion_SetScalar(this.h, (C.float)(scalar))
}

func QQuaternion_DotProduct(q1 *QQuaternion, q2 *QQuaternion) float32 {
	return (float32)(C.QQuaternion_DotProduct(q1.cPointer(), q2.cPointer()))
}

func (this *QQuaternion) Length() float32 {
	return (float32)(C.QQuaternion_Length(this.h))
}

func (this *QQuaternion) LengthSquared() float32 {
	return (float32)(C.QQuaternion_LengthSquared(this.h))
}

func (this *QQuaternion) Normalized() *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_Normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) Normalize() {
	C.QQuaternion_Normalize(this.h)
}

func (this *QQuaternion) Inverted() *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_Inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) Conjugated() *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_Conjugated(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) Conjugate() *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_Conjugate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) RotatedVector(vector *QVector3D) *QVector3D {
	_goptr := newQVector3D(C.QQuaternion_RotatedVector(this.h, vector.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) OperatorPlusAssign(quaternion *QQuaternion) *QQuaternion {
	return newQQuaternion(C.QQuaternion_OperatorPlusAssign(this.h, quaternion.cPointer()))
}

func (this *QQuaternion) OperatorMinusAssign(quaternion *QQuaternion) *QQuaternion {
	return newQQuaternion(C.QQuaternion_OperatorMinusAssign(this.h, quaternion.cPointer()))
}

func (this *QQuaternion) OperatorMultiplyAssign(factor float32) *QQuaternion {
	return newQQuaternion(C.QQuaternion_OperatorMultiplyAssign(this.h, (C.float)(factor)))
}

func (this *QQuaternion) OperatorMultiplyAssignWithQuaternion(quaternion *QQuaternion) *QQuaternion {
	return newQQuaternion(C.QQuaternion_OperatorMultiplyAssignWithQuaternion(this.h, quaternion.cPointer()))
}

func (this *QQuaternion) OperatorDivideAssign(divisor float32) *QQuaternion {
	return newQQuaternion(C.QQuaternion_OperatorDivideAssign(this.h, (C.float)(divisor)))
}

func (this *QQuaternion) ToVector4D() *QVector4D {
	_goptr := newQVector4D(C.QQuaternion_ToVector4D(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetAxisAndAngle(axis *QVector3D, angle *float32) {
	C.QQuaternion_GetAxisAndAngle(this.h, axis.cPointer(), (*C.float)(unsafe.Pointer(angle)))
}

func QQuaternion_FromAxisAndAngle(axis *QVector3D, angle float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_FromAxisAndAngle(axis.cPointer(), (C.float)(angle)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetAxisAndAngle2(x *float32, y *float32, z *float32, angle *float32) {
	C.QQuaternion_GetAxisAndAngle2(this.h, (*C.float)(unsafe.Pointer(x)), (*C.float)(unsafe.Pointer(y)), (*C.float)(unsafe.Pointer(z)), (*C.float)(unsafe.Pointer(angle)))
}

func QQuaternion_FromAxisAndAngle2(x float32, y float32, z float32, angle float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_FromAxisAndAngle2((C.float)(x), (C.float)(y), (C.float)(z), (C.float)(angle)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) ToEulerAngles() *QVector3D {
	_goptr := newQVector3D(C.QQuaternion_ToEulerAngles(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_FromEulerAngles(eulerAngles *QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_FromEulerAngles(eulerAngles.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetEulerAngles(pitch *float32, yaw *float32, roll *float32) {
	C.QQuaternion_GetEulerAngles(this.h, (*C.float)(unsafe.Pointer(pitch)), (*C.float)(unsafe.Pointer(yaw)), (*C.float)(unsafe.Pointer(roll)))
}

func QQuaternion_FromEulerAngles2(pitch float32, yaw float32, roll float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_FromEulerAngles2((C.float)(pitch), (C.float)(yaw), (C.float)(roll)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQuaternion) GetAxes(xAxis *QVector3D, yAxis *QVector3D, zAxis *QVector3D) {
	C.QQuaternion_GetAxes(this.h, xAxis.cPointer(), yAxis.cPointer(), zAxis.cPointer())
}

func QQuaternion_FromAxes(xAxis *QVector3D, yAxis *QVector3D, zAxis *QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_FromAxes(xAxis.cPointer(), yAxis.cPointer(), zAxis.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_FromDirection(direction *QVector3D, up *QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_FromDirection(direction.cPointer(), up.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_RotationTo(from *QVector3D, to *QVector3D) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_RotationTo(from.cPointer(), to.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_Slerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_Slerp(q1.cPointer(), q2.cPointer(), (C.float)(t)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QQuaternion_Nlerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
	_goptr := newQQuaternion(C.QQuaternion_Nlerp(q1.cPointer(), q2.cPointer(), (C.float)(t)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QQuaternion) Delete() {
	C.QQuaternion_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQuaternion) GoGC() {
	runtime.SetFinalizer(this, func(this *QQuaternion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
