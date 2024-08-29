package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmatrix4x4.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMatrix4x4 struct {
	h *C.QMatrix4x4
}

func (this *QMatrix4x4) cPointer() *C.QMatrix4x4 {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMatrix4x4(h *C.QMatrix4x4) *QMatrix4x4 {
	return &QMatrix4x4{h: h}
}

func newQMatrix4x4_U(h unsafe.Pointer) *QMatrix4x4 {
	return newQMatrix4x4((*C.QMatrix4x4)(h))
}

// NewQMatrix4x4 constructs a new QMatrix4x4 object.
func NewQMatrix4x4() *QMatrix4x4 {
	ret := C.QMatrix4x4_new()
	return newQMatrix4x4(ret)
}

// NewQMatrix4x42 constructs a new QMatrix4x4 object.
func NewQMatrix4x42(param1 uintptr) *QMatrix4x4 {
	ret := C.QMatrix4x4_new2((C.uintptr_t)(param1))
	return newQMatrix4x4(ret)
}

// NewQMatrix4x43 constructs a new QMatrix4x4 object.
func NewQMatrix4x43(values *float32) *QMatrix4x4 {
	ret := C.QMatrix4x4_new3((*C.float)(unsafe.Pointer(values)))
	return newQMatrix4x4(ret)
}

// NewQMatrix4x44 constructs a new QMatrix4x4 object.
func NewQMatrix4x44(m11 float32, m12 float32, m13 float32, m14 float32, m21 float32, m22 float32, m23 float32, m24 float32, m31 float32, m32 float32, m33 float32, m34 float32, m41 float32, m42 float32, m43 float32, m44 float32) *QMatrix4x4 {
	ret := C.QMatrix4x4_new4((C.float)(m11), (C.float)(m12), (C.float)(m13), (C.float)(m14), (C.float)(m21), (C.float)(m22), (C.float)(m23), (C.float)(m24), (C.float)(m31), (C.float)(m32), (C.float)(m33), (C.float)(m34), (C.float)(m41), (C.float)(m42), (C.float)(m43), (C.float)(m44))
	return newQMatrix4x4(ret)
}

// NewQMatrix4x45 constructs a new QMatrix4x4 object.
func NewQMatrix4x45(values *float32, cols int, rows int) *QMatrix4x4 {
	ret := C.QMatrix4x4_new5((*C.float)(unsafe.Pointer(values)), (C.int)(cols), (C.int)(rows))
	return newQMatrix4x4(ret)
}

// NewQMatrix4x46 constructs a new QMatrix4x4 object.
func NewQMatrix4x46(transform *QTransform) *QMatrix4x4 {
	ret := C.QMatrix4x4_new6(transform.cPointer())
	return newQMatrix4x4(ret)
}

// NewQMatrix4x47 constructs a new QMatrix4x4 object.
func NewQMatrix4x47(matrix *QMatrix) *QMatrix4x4 {
	ret := C.QMatrix4x4_new7(matrix.cPointer())
	return newQMatrix4x4(ret)
}

// NewQMatrix4x48 constructs a new QMatrix4x4 object.
func NewQMatrix4x48(param1 *QMatrix4x4) *QMatrix4x4 {
	ret := C.QMatrix4x4_new8(param1.cPointer())
	return newQMatrix4x4(ret)
}

func (this *QMatrix4x4) Column(index int) *QVector4D {
	ret := C.QMatrix4x4_Column(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector4D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector4D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) SetColumn(index int, value *QVector4D) {
	C.QMatrix4x4_SetColumn(this.h, (C.int)(index), value.cPointer())
}

func (this *QMatrix4x4) Row(index int) *QVector4D {
	ret := C.QMatrix4x4_Row(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector4D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector4D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) SetRow(index int, value *QVector4D) {
	C.QMatrix4x4_SetRow(this.h, (C.int)(index), value.cPointer())
}

func (this *QMatrix4x4) IsAffine() bool {
	ret := C.QMatrix4x4_IsAffine(this.h)
	return (bool)(ret)
}

func (this *QMatrix4x4) IsIdentity() bool {
	ret := C.QMatrix4x4_IsIdentity(this.h)
	return (bool)(ret)
}

func (this *QMatrix4x4) SetToIdentity() {
	C.QMatrix4x4_SetToIdentity(this.h)
}

func (this *QMatrix4x4) Fill(value float32) {
	C.QMatrix4x4_Fill(this.h, (C.float)(value))
}

func (this *QMatrix4x4) Determinant() float64 {
	ret := C.QMatrix4x4_Determinant(this.h)
	return (float64)(ret)
}

func (this *QMatrix4x4) Inverted() *QMatrix4x4 {
	ret := C.QMatrix4x4_Inverted(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix4x4(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix4x4) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) Transposed() *QMatrix4x4 {
	ret := C.QMatrix4x4_Transposed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix4x4(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix4x4) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) OperatorPlusAssign(other *QMatrix4x4) *QMatrix4x4 {
	ret := C.QMatrix4x4_OperatorPlusAssign(this.h, other.cPointer())
	return newQMatrix4x4_U(unsafe.Pointer(ret))
}

func (this *QMatrix4x4) OperatorMinusAssign(other *QMatrix4x4) *QMatrix4x4 {
	ret := C.QMatrix4x4_OperatorMinusAssign(this.h, other.cPointer())
	return newQMatrix4x4_U(unsafe.Pointer(ret))
}

func (this *QMatrix4x4) OperatorMultiplyAssign(other *QMatrix4x4) *QMatrix4x4 {
	ret := C.QMatrix4x4_OperatorMultiplyAssign(this.h, other.cPointer())
	return newQMatrix4x4_U(unsafe.Pointer(ret))
}

func (this *QMatrix4x4) OperatorMultiplyAssignWithFactor(factor float32) *QMatrix4x4 {
	ret := C.QMatrix4x4_OperatorMultiplyAssignWithFactor(this.h, (C.float)(factor))
	return newQMatrix4x4_U(unsafe.Pointer(ret))
}

func (this *QMatrix4x4) OperatorDivideAssign(divisor float32) *QMatrix4x4 {
	ret := C.QMatrix4x4_OperatorDivideAssign(this.h, (C.float)(divisor))
	return newQMatrix4x4_U(unsafe.Pointer(ret))
}

func (this *QMatrix4x4) OperatorEqual(other *QMatrix4x4) bool {
	ret := C.QMatrix4x4_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QMatrix4x4) OperatorNotEqual(other *QMatrix4x4) bool {
	ret := C.QMatrix4x4_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QMatrix4x4) Scale(vector *QVector3D) {
	C.QMatrix4x4_Scale(this.h, vector.cPointer())
}

func (this *QMatrix4x4) Translate(vector *QVector3D) {
	C.QMatrix4x4_Translate(this.h, vector.cPointer())
}

func (this *QMatrix4x4) Rotate(angle float32, vector *QVector3D) {
	C.QMatrix4x4_Rotate(this.h, (C.float)(angle), vector.cPointer())
}

func (this *QMatrix4x4) Scale2(x float32, y float32) {
	C.QMatrix4x4_Scale2(this.h, (C.float)(x), (C.float)(y))
}

func (this *QMatrix4x4) Scale3(x float32, y float32, z float32) {
	C.QMatrix4x4_Scale3(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QMatrix4x4) ScaleWithFactor(factor float32) {
	C.QMatrix4x4_ScaleWithFactor(this.h, (C.float)(factor))
}

func (this *QMatrix4x4) Translate2(x float32, y float32) {
	C.QMatrix4x4_Translate2(this.h, (C.float)(x), (C.float)(y))
}

func (this *QMatrix4x4) Translate3(x float32, y float32, z float32) {
	C.QMatrix4x4_Translate3(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QMatrix4x4) Rotate2(angle float32, x float32, y float32) {
	C.QMatrix4x4_Rotate2(this.h, (C.float)(angle), (C.float)(x), (C.float)(y))
}

func (this *QMatrix4x4) RotateWithQuaternion(quaternion *QQuaternion) {
	C.QMatrix4x4_RotateWithQuaternion(this.h, quaternion.cPointer())
}

func (this *QMatrix4x4) Ortho(rect *QRect) {
	C.QMatrix4x4_Ortho(this.h, rect.cPointer())
}

func (this *QMatrix4x4) OrthoWithRect(rect *QRectF) {
	C.QMatrix4x4_OrthoWithRect(this.h, rect.cPointer())
}

func (this *QMatrix4x4) Ortho2(left float32, right float32, bottom float32, top float32, nearPlane float32, farPlane float32) {
	C.QMatrix4x4_Ortho2(this.h, (C.float)(left), (C.float)(right), (C.float)(bottom), (C.float)(top), (C.float)(nearPlane), (C.float)(farPlane))
}

func (this *QMatrix4x4) Frustum(left float32, right float32, bottom float32, top float32, nearPlane float32, farPlane float32) {
	C.QMatrix4x4_Frustum(this.h, (C.float)(left), (C.float)(right), (C.float)(bottom), (C.float)(top), (C.float)(nearPlane), (C.float)(farPlane))
}

func (this *QMatrix4x4) Perspective(verticalAngle float32, aspectRatio float32, nearPlane float32, farPlane float32) {
	C.QMatrix4x4_Perspective(this.h, (C.float)(verticalAngle), (C.float)(aspectRatio), (C.float)(nearPlane), (C.float)(farPlane))
}

func (this *QMatrix4x4) LookAt(eye *QVector3D, center *QVector3D, up *QVector3D) {
	C.QMatrix4x4_LookAt(this.h, eye.cPointer(), center.cPointer(), up.cPointer())
}

func (this *QMatrix4x4) Viewport(rect *QRectF) {
	C.QMatrix4x4_Viewport(this.h, rect.cPointer())
}

func (this *QMatrix4x4) Viewport2(left float32, bottom float32, width float32, height float32) {
	C.QMatrix4x4_Viewport2(this.h, (C.float)(left), (C.float)(bottom), (C.float)(width), (C.float)(height))
}

func (this *QMatrix4x4) FlipCoordinates() {
	C.QMatrix4x4_FlipCoordinates(this.h)
}

func (this *QMatrix4x4) CopyDataTo(values *float32) {
	C.QMatrix4x4_CopyDataTo(this.h, (*C.float)(unsafe.Pointer(values)))
}

func (this *QMatrix4x4) ToAffine() *QMatrix {
	ret := C.QMatrix4x4_ToAffine(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) ToTransform() *QTransform {
	ret := C.QMatrix4x4_ToTransform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) ToTransformWithDistanceToPlane(distanceToPlane float32) *QTransform {
	ret := C.QMatrix4x4_ToTransformWithDistanceToPlane(this.h, (C.float)(distanceToPlane))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) Map(point *QPoint) *QPoint {
	ret := C.QMatrix4x4_Map(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) MapWithPoint(point *QPointF) *QPointF {
	ret := C.QMatrix4x4_MapWithPoint(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) Map2(point *QVector3D) *QVector3D {
	ret := C.QMatrix4x4_Map2(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) MapVector(vector *QVector3D) *QVector3D {
	ret := C.QMatrix4x4_MapVector(this.h, vector.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) Map3(point *QVector4D) *QVector4D {
	ret := C.QMatrix4x4_Map3(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector4D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector4D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) MapRect(rect *QRect) *QRect {
	ret := C.QMatrix4x4_MapRect(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) MapRectWithRect(rect *QRectF) *QRectF {
	ret := C.QMatrix4x4_MapRectWithRect(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) Data() *float32 {
	ret := C.QMatrix4x4_Data(this.h)
	return (*float32)(ret)
}

func (this *QMatrix4x4) Data2() *float32 {
	ret := C.QMatrix4x4_Data2(this.h)
	return (*float32)(ret)
}

func (this *QMatrix4x4) ConstData() *float32 {
	ret := C.QMatrix4x4_ConstData(this.h)
	return (*float32)(ret)
}

func (this *QMatrix4x4) Optimize() {
	C.QMatrix4x4_Optimize(this.h)
}

func (this *QMatrix4x4) Inverted1(invertible *bool) *QMatrix4x4 {
	ret := C.QMatrix4x4_Inverted1(this.h, (*C.bool)(unsafe.Pointer(invertible)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix4x4(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix4x4) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix4x4) Rotate4(angle float32, x float32, y float32, z float32) {
	C.QMatrix4x4_Rotate4(this.h, (C.float)(angle), (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QMatrix4x4) Viewport5(left float32, bottom float32, width float32, height float32, nearPlane float32) {
	C.QMatrix4x4_Viewport5(this.h, (C.float)(left), (C.float)(bottom), (C.float)(width), (C.float)(height), (C.float)(nearPlane))
}

func (this *QMatrix4x4) Viewport6(left float32, bottom float32, width float32, height float32, nearPlane float32, farPlane float32) {
	C.QMatrix4x4_Viewport6(this.h, (C.float)(left), (C.float)(bottom), (C.float)(width), (C.float)(height), (C.float)(nearPlane), (C.float)(farPlane))
}

func (this *QMatrix4x4) Delete() {
	C.QMatrix4x4_Delete(this.h)
}
