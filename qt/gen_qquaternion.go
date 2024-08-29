package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qquaternion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QQuaternion struct {
	h *C.QQuaternion
}

func (this *QQuaternion) cPointer() *C.QQuaternion {
	if this == nil {
		return nil
	}
	return this.h
}

func newQQuaternion(h *C.QQuaternion) *QQuaternion {
	return &QQuaternion{h: h}
}

func newQQuaternion_U(h unsafe.Pointer) *QQuaternion {
	return newQQuaternion((*C.QQuaternion)(h))
}

// NewQQuaternion constructs a new QQuaternion object.
func NewQQuaternion() *QQuaternion {
	ret := C.QQuaternion_new()
	return newQQuaternion(ret)
}

// NewQQuaternion2 constructs a new QQuaternion object.
func NewQQuaternion2(param1 uintptr) *QQuaternion {
	ret := C.QQuaternion_new2((C.uintptr_t)(param1))
	return newQQuaternion(ret)
}

// NewQQuaternion3 constructs a new QQuaternion object.
func NewQQuaternion3(scalar float32, xpos float32, ypos float32, zpos float32) *QQuaternion {
	ret := C.QQuaternion_new3((C.float)(scalar), (C.float)(xpos), (C.float)(ypos), (C.float)(zpos))
	return newQQuaternion(ret)
}

// NewQQuaternion4 constructs a new QQuaternion object.
func NewQQuaternion4(scalar float32, vector *QVector3D) *QQuaternion {
	ret := C.QQuaternion_new4((C.float)(scalar), vector.cPointer())
	return newQQuaternion(ret)
}

// NewQQuaternion5 constructs a new QQuaternion object.
func NewQQuaternion5(vector *QVector4D) *QQuaternion {
	ret := C.QQuaternion_new5(vector.cPointer())
	return newQQuaternion(ret)
}

// NewQQuaternion6 constructs a new QQuaternion object.
func NewQQuaternion6(param1 *QQuaternion) *QQuaternion {
	ret := C.QQuaternion_new6(param1.cPointer())
	return newQQuaternion(ret)
}

func (this *QQuaternion) IsNull() bool {
	ret := C.QQuaternion_IsNull(this.h)
	return (bool)(ret)
}

func (this *QQuaternion) IsIdentity() bool {
	ret := C.QQuaternion_IsIdentity(this.h)
	return (bool)(ret)
}

func (this *QQuaternion) Vector() *QVector3D {
	ret := C.QQuaternion_Vector(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) SetVector(vector *QVector3D) {
	C.QQuaternion_SetVector(this.h, vector.cPointer())
}

func (this *QQuaternion) SetVector2(x float32, y float32, z float32) {
	C.QQuaternion_SetVector2(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QQuaternion) X() float32 {
	ret := C.QQuaternion_X(this.h)
	return (float32)(ret)
}

func (this *QQuaternion) Y() float32 {
	ret := C.QQuaternion_Y(this.h)
	return (float32)(ret)
}

func (this *QQuaternion) Z() float32 {
	ret := C.QQuaternion_Z(this.h)
	return (float32)(ret)
}

func (this *QQuaternion) Scalar() float32 {
	ret := C.QQuaternion_Scalar(this.h)
	return (float32)(ret)
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
	ret := C.QQuaternion_DotProduct(q1.cPointer(), q2.cPointer())
	return (float32)(ret)
}

func (this *QQuaternion) Length() float32 {
	ret := C.QQuaternion_Length(this.h)
	return (float32)(ret)
}

func (this *QQuaternion) LengthSquared() float32 {
	ret := C.QQuaternion_LengthSquared(this.h)
	return (float32)(ret)
}

func (this *QQuaternion) Normalized() *QQuaternion {
	ret := C.QQuaternion_Normalized(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) Normalize() {
	C.QQuaternion_Normalize(this.h)
}

func (this *QQuaternion) Inverted() *QQuaternion {
	ret := C.QQuaternion_Inverted(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) Conjugated() *QQuaternion {
	ret := C.QQuaternion_Conjugated(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) Conjugate() *QQuaternion {
	ret := C.QQuaternion_Conjugate(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) RotatedVector(vector *QVector3D) *QVector3D {
	ret := C.QQuaternion_RotatedVector(this.h, vector.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) OperatorPlusAssign(quaternion *QQuaternion) *QQuaternion {
	ret := C.QQuaternion_OperatorPlusAssign(this.h, quaternion.cPointer())
	return newQQuaternion_U(unsafe.Pointer(ret))
}

func (this *QQuaternion) OperatorMinusAssign(quaternion *QQuaternion) *QQuaternion {
	ret := C.QQuaternion_OperatorMinusAssign(this.h, quaternion.cPointer())
	return newQQuaternion_U(unsafe.Pointer(ret))
}

func (this *QQuaternion) OperatorMultiplyAssign(factor float32) *QQuaternion {
	ret := C.QQuaternion_OperatorMultiplyAssign(this.h, (C.float)(factor))
	return newQQuaternion_U(unsafe.Pointer(ret))
}

func (this *QQuaternion) OperatorMultiplyAssignWithQuaternion(quaternion *QQuaternion) *QQuaternion {
	ret := C.QQuaternion_OperatorMultiplyAssignWithQuaternion(this.h, quaternion.cPointer())
	return newQQuaternion_U(unsafe.Pointer(ret))
}

func (this *QQuaternion) OperatorDivideAssign(divisor float32) *QQuaternion {
	ret := C.QQuaternion_OperatorDivideAssign(this.h, (C.float)(divisor))
	return newQQuaternion_U(unsafe.Pointer(ret))
}

func (this *QQuaternion) ToVector4D() *QVector4D {
	ret := C.QQuaternion_ToVector4D(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector4D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector4D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) GetAxisAndAngle(axis *QVector3D, angle *float32) {
	C.QQuaternion_GetAxisAndAngle(this.h, axis.cPointer(), (*C.float)(unsafe.Pointer(angle)))
}

func QQuaternion_FromAxisAndAngle(axis *QVector3D, angle float32) *QQuaternion {
	ret := C.QQuaternion_FromAxisAndAngle(axis.cPointer(), (C.float)(angle))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) GetAxisAndAngle2(x *float32, y *float32, z *float32, angle *float32) {
	C.QQuaternion_GetAxisAndAngle2(this.h, (*C.float)(unsafe.Pointer(x)), (*C.float)(unsafe.Pointer(y)), (*C.float)(unsafe.Pointer(z)), (*C.float)(unsafe.Pointer(angle)))
}

func QQuaternion_FromAxisAndAngle2(x float32, y float32, z float32, angle float32) *QQuaternion {
	ret := C.QQuaternion_FromAxisAndAngle2((C.float)(x), (C.float)(y), (C.float)(z), (C.float)(angle))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) ToEulerAngles() *QVector3D {
	ret := C.QQuaternion_ToEulerAngles(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QQuaternion_FromEulerAngles(eulerAngles *QVector3D) *QQuaternion {
	ret := C.QQuaternion_FromEulerAngles(eulerAngles.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) GetEulerAngles(pitch *float32, yaw *float32, roll *float32) {
	C.QQuaternion_GetEulerAngles(this.h, (*C.float)(unsafe.Pointer(pitch)), (*C.float)(unsafe.Pointer(yaw)), (*C.float)(unsafe.Pointer(roll)))
}

func QQuaternion_FromEulerAngles2(pitch float32, yaw float32, roll float32) *QQuaternion {
	ret := C.QQuaternion_FromEulerAngles2((C.float)(pitch), (C.float)(yaw), (C.float)(roll))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) GetAxes(xAxis *QVector3D, yAxis *QVector3D, zAxis *QVector3D) {
	C.QQuaternion_GetAxes(this.h, xAxis.cPointer(), yAxis.cPointer(), zAxis.cPointer())
}

func QQuaternion_FromAxes(xAxis *QVector3D, yAxis *QVector3D, zAxis *QVector3D) *QQuaternion {
	ret := C.QQuaternion_FromAxes(xAxis.cPointer(), yAxis.cPointer(), zAxis.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QQuaternion_FromDirection(direction *QVector3D, up *QVector3D) *QQuaternion {
	ret := C.QQuaternion_FromDirection(direction.cPointer(), up.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QQuaternion_RotationTo(from *QVector3D, to *QVector3D) *QQuaternion {
	ret := C.QQuaternion_RotationTo(from.cPointer(), to.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QQuaternion_Slerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
	ret := C.QQuaternion_Slerp(q1.cPointer(), q2.cPointer(), (C.float)(t))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QQuaternion_Nlerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
	ret := C.QQuaternion_Nlerp(q1.cPointer(), q2.cPointer(), (C.float)(t))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQQuaternion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QQuaternion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QQuaternion) Delete() {
	C.QQuaternion_Delete(this.h)
}
