package qt

/*

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

func (this *QMatrix4x4) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMatrix4x4 constructs the type using only CGO pointers.
func newQMatrix4x4(h *C.QMatrix4x4) *QMatrix4x4 {
	if h == nil {
		return nil
	}

	return &QMatrix4x4{h: h}
}

// UnsafeNewQMatrix4x4 constructs the type using only unsafe pointers.
func UnsafeNewQMatrix4x4(h unsafe.Pointer) *QMatrix4x4 {
	return newQMatrix4x4((*C.QMatrix4x4)(h))
}

// NewQMatrix4x4 constructs a new QMatrix4x4 object.
func NewQMatrix4x4() *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new())
}

// NewQMatrix4x42 constructs a new QMatrix4x4 object.
func NewQMatrix4x42(param1 Initialization) *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new2((C.int)(param1)))
}

// NewQMatrix4x43 constructs a new QMatrix4x4 object.
func NewQMatrix4x43(values *float32) *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new3((*C.float)(unsafe.Pointer(values))))
}

// NewQMatrix4x44 constructs a new QMatrix4x4 object.
func NewQMatrix4x44(m11 float32, m12 float32, m13 float32, m14 float32, m21 float32, m22 float32, m23 float32, m24 float32, m31 float32, m32 float32, m33 float32, m34 float32, m41 float32, m42 float32, m43 float32, m44 float32) *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new4((C.float)(m11), (C.float)(m12), (C.float)(m13), (C.float)(m14), (C.float)(m21), (C.float)(m22), (C.float)(m23), (C.float)(m24), (C.float)(m31), (C.float)(m32), (C.float)(m33), (C.float)(m34), (C.float)(m41), (C.float)(m42), (C.float)(m43), (C.float)(m44)))
}

// NewQMatrix4x45 constructs a new QMatrix4x4 object.
func NewQMatrix4x45(values *float32, cols int, rows int) *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new5((*C.float)(unsafe.Pointer(values)), (C.int)(cols), (C.int)(rows)))
}

// NewQMatrix4x46 constructs a new QMatrix4x4 object.
func NewQMatrix4x46(transform *QTransform) *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new6(transform.cPointer()))
}

// NewQMatrix4x47 constructs a new QMatrix4x4 object.
func NewQMatrix4x47(matrix *QMatrix) *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new7(matrix.cPointer()))
}

// NewQMatrix4x48 constructs a new QMatrix4x4 object.
func NewQMatrix4x48(param1 *QMatrix4x4) *QMatrix4x4 {

	return newQMatrix4x4(C.QMatrix4x4_new8(param1.cPointer()))
}

func (this *QMatrix4x4) Column(index int) *QVector4D {
	_goptr := newQVector4D(C.QMatrix4x4_Column(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) SetColumn(index int, value *QVector4D) {
	C.QMatrix4x4_SetColumn(this.h, (C.int)(index), value.cPointer())
}

func (this *QMatrix4x4) Row(index int) *QVector4D {
	_goptr := newQVector4D(C.QMatrix4x4_Row(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) SetRow(index int, value *QVector4D) {
	C.QMatrix4x4_SetRow(this.h, (C.int)(index), value.cPointer())
}

func (this *QMatrix4x4) IsAffine() bool {
	return (bool)(C.QMatrix4x4_IsAffine(this.h))
}

func (this *QMatrix4x4) IsIdentity() bool {
	return (bool)(C.QMatrix4x4_IsIdentity(this.h))
}

func (this *QMatrix4x4) SetToIdentity() {
	C.QMatrix4x4_SetToIdentity(this.h)
}

func (this *QMatrix4x4) Fill(value float32) {
	C.QMatrix4x4_Fill(this.h, (C.float)(value))
}

func (this *QMatrix4x4) Determinant() float64 {
	return (float64)(C.QMatrix4x4_Determinant(this.h))
}

func (this *QMatrix4x4) Inverted() *QMatrix4x4 {
	_goptr := newQMatrix4x4(C.QMatrix4x4_Inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Transposed() *QMatrix4x4 {
	_goptr := newQMatrix4x4(C.QMatrix4x4_Transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) OperatorPlusAssign(other *QMatrix4x4) *QMatrix4x4 {
	return newQMatrix4x4(C.QMatrix4x4_OperatorPlusAssign(this.h, other.cPointer()))
}

func (this *QMatrix4x4) OperatorMinusAssign(other *QMatrix4x4) *QMatrix4x4 {
	return newQMatrix4x4(C.QMatrix4x4_OperatorMinusAssign(this.h, other.cPointer()))
}

func (this *QMatrix4x4) OperatorMultiplyAssign(other *QMatrix4x4) *QMatrix4x4 {
	return newQMatrix4x4(C.QMatrix4x4_OperatorMultiplyAssign(this.h, other.cPointer()))
}

func (this *QMatrix4x4) OperatorMultiplyAssignWithFactor(factor float32) *QMatrix4x4 {
	return newQMatrix4x4(C.QMatrix4x4_OperatorMultiplyAssignWithFactor(this.h, (C.float)(factor)))
}

func (this *QMatrix4x4) OperatorDivideAssign(divisor float32) *QMatrix4x4 {
	return newQMatrix4x4(C.QMatrix4x4_OperatorDivideAssign(this.h, (C.float)(divisor)))
}

func (this *QMatrix4x4) OperatorEqual(other *QMatrix4x4) bool {
	return (bool)(C.QMatrix4x4_OperatorEqual(this.h, other.cPointer()))
}

func (this *QMatrix4x4) OperatorNotEqual(other *QMatrix4x4) bool {
	return (bool)(C.QMatrix4x4_OperatorNotEqual(this.h, other.cPointer()))
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
	_goptr := newQMatrix(C.QMatrix4x4_ToAffine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) ToTransform() *QTransform {
	_goptr := newQTransform(C.QMatrix4x4_ToTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) ToTransformWithDistanceToPlane(distanceToPlane float32) *QTransform {
	_goptr := newQTransform(C.QMatrix4x4_ToTransformWithDistanceToPlane(this.h, (C.float)(distanceToPlane)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Map(point *QPoint) *QPoint {
	_goptr := newQPoint(C.QMatrix4x4_Map(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) MapWithPoint(point *QPointF) *QPointF {
	_goptr := newQPointF(C.QMatrix4x4_MapWithPoint(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Map2(point *QVector3D) *QVector3D {
	_goptr := newQVector3D(C.QMatrix4x4_Map2(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) MapVector(vector *QVector3D) *QVector3D {
	_goptr := newQVector3D(C.QMatrix4x4_MapVector(this.h, vector.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Map3(point *QVector4D) *QVector4D {
	_goptr := newQVector4D(C.QMatrix4x4_Map3(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) MapRect(rect *QRect) *QRect {
	_goptr := newQRect(C.QMatrix4x4_MapRect(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) MapRectWithRect(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QMatrix4x4_MapRectWithRect(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Data() *float32 {
	return (*float32)(unsafe.Pointer(C.QMatrix4x4_Data(this.h)))
}

func (this *QMatrix4x4) Data2() *float32 {
	return (*float32)(unsafe.Pointer(C.QMatrix4x4_Data2(this.h)))
}

func (this *QMatrix4x4) ConstData() *float32 {
	return (*float32)(unsafe.Pointer(C.QMatrix4x4_ConstData(this.h)))
}

func (this *QMatrix4x4) Optimize() {
	C.QMatrix4x4_Optimize(this.h)
}

func (this *QMatrix4x4) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QMatrix4x4_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Inverted1(invertible *bool) *QMatrix4x4 {
	_goptr := newQMatrix4x4(C.QMatrix4x4_Inverted1(this.h, (*C.bool)(unsafe.Pointer(invertible))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

// Delete this object from C++ memory.
func (this *QMatrix4x4) Delete() {
	C.QMatrix4x4_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMatrix4x4) GoGC() {
	runtime.SetFinalizer(this, func(this *QMatrix4x4) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
