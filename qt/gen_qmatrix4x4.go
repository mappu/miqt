package qt

/*

#include "gen_qmatrix4x4.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QMatrix4x4 struct {
	h  *C.QMatrix4x4
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMatrix4x4) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(transform)

	return newQMatrix4x4(C.QMatrix4x4_new6(transform.cPointer()))
}

// NewQMatrix4x47 constructs a new QMatrix4x4 object.
func NewQMatrix4x47(matrix *QMatrix) *QMatrix4x4 {
	defer runtime.KeepAlive(matrix)

	return newQMatrix4x4(C.QMatrix4x4_new7(matrix.cPointer()))
}

// NewQMatrix4x48 constructs a new QMatrix4x4 object.
func NewQMatrix4x48(param1 *QMatrix4x4) *QMatrix4x4 {
	defer runtime.KeepAlive(param1)

	return newQMatrix4x4(C.QMatrix4x4_new8(param1.cPointer()))
}

func (this *QMatrix4x4) Column(index int) *QVector4D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector4D(C.QMatrix4x4_column(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) SetColumn(index int, value *QVector4D) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QMatrix4x4_setColumn(this.h, (C.int)(index), value.cPointer())
}

func (this *QMatrix4x4) Row(index int) *QVector4D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector4D(C.QMatrix4x4_row(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) SetRow(index int, value *QVector4D) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QMatrix4x4_setRow(this.h, (C.int)(index), value.cPointer())
}

func (this *QMatrix4x4) IsAffine() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMatrix4x4_isAffine(this.h))
}

func (this *QMatrix4x4) IsIdentity() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMatrix4x4_isIdentity(this.h))
}

func (this *QMatrix4x4) SetToIdentity() {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_setToIdentity(this.h)
}

func (this *QMatrix4x4) Fill(value float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_fill(this.h, (C.float)(value))
}

func (this *QMatrix4x4) Determinant() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QMatrix4x4_determinant(this.h))
}

func (this *QMatrix4x4) Inverted() *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	_goptr := newQMatrix4x4(C.QMatrix4x4_inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Transposed() *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	_goptr := newQMatrix4x4(C.QMatrix4x4_transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) OperatorPlusAssign(other *QMatrix4x4) *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_ret := newQMatrix4x4(C.QMatrix4x4_operatorPlusAssign(this.h, other.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMatrix4x4) OperatorMinusAssign(other *QMatrix4x4) *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_ret := newQMatrix4x4(C.QMatrix4x4_operatorMinusAssign(this.h, other.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMatrix4x4) OperatorMultiplyAssign(other *QMatrix4x4) *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	_ret := newQMatrix4x4(C.QMatrix4x4_operatorMultiplyAssign(this.h, other.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMatrix4x4) OperatorMultiplyAssignWithFactor(factor float32) *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	_ret := newQMatrix4x4(C.QMatrix4x4_operatorMultiplyAssignWithFactor(this.h, (C.float)(factor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMatrix4x4) OperatorDivideAssign(divisor float32) *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	_ret := newQMatrix4x4(C.QMatrix4x4_operatorDivideAssign(this.h, (C.float)(divisor)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMatrix4x4) OperatorEqual(other *QMatrix4x4) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMatrix4x4_operatorEqual(this.h, other.cPointer()))
}

func (this *QMatrix4x4) OperatorNotEqual(other *QMatrix4x4) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMatrix4x4_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QMatrix4x4) Scale(vector QVector3D) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_scale(this.h, libmiqt.ValueCast[C.struct_miqt_qvector3d](vector))
}

func (this *QMatrix4x4) Translate(vector QVector3D) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_translate(this.h, libmiqt.ValueCast[C.struct_miqt_qvector3d](vector))
}

func (this *QMatrix4x4) Rotate(angle float32, vector QVector3D) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_rotate(this.h, (C.float)(angle), libmiqt.ValueCast[C.struct_miqt_qvector3d](vector))
}

func (this *QMatrix4x4) Scale2(x float32, y float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_scale2(this.h, (C.float)(x), (C.float)(y))
}

func (this *QMatrix4x4) Scale3(x float32, y float32, z float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_scale3(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QMatrix4x4) ScaleWithFactor(factor float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_scaleWithFactor(this.h, (C.float)(factor))
}

func (this *QMatrix4x4) Translate2(x float32, y float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_translate2(this.h, (C.float)(x), (C.float)(y))
}

func (this *QMatrix4x4) Translate3(x float32, y float32, z float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_translate3(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QMatrix4x4) Rotate2(angle float32, x float32, y float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_rotate2(this.h, (C.float)(angle), (C.float)(x), (C.float)(y))
}

func (this *QMatrix4x4) RotateWithQuaternion(quaternion *QQuaternion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(quaternion)
	C.QMatrix4x4_rotateWithQuaternion(this.h, quaternion.cPointer())
}

func (this *QMatrix4x4) Ortho(rect QRect) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_ortho(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](rect))
}

func (this *QMatrix4x4) OrthoWithRect(rect QRectF) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_orthoWithRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect))
}

func (this *QMatrix4x4) Ortho2(left float32, right float32, bottom float32, top float32, nearPlane float32, farPlane float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_ortho2(this.h, (C.float)(left), (C.float)(right), (C.float)(bottom), (C.float)(top), (C.float)(nearPlane), (C.float)(farPlane))
}

func (this *QMatrix4x4) Frustum(left float32, right float32, bottom float32, top float32, nearPlane float32, farPlane float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_frustum(this.h, (C.float)(left), (C.float)(right), (C.float)(bottom), (C.float)(top), (C.float)(nearPlane), (C.float)(farPlane))
}

func (this *QMatrix4x4) Perspective(verticalAngle float32, aspectRatio float32, nearPlane float32, farPlane float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_perspective(this.h, (C.float)(verticalAngle), (C.float)(aspectRatio), (C.float)(nearPlane), (C.float)(farPlane))
}

func (this *QMatrix4x4) LookAt(eye QVector3D, center QVector3D, up QVector3D) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_lookAt(this.h, libmiqt.ValueCast[C.struct_miqt_qvector3d](eye), libmiqt.ValueCast[C.struct_miqt_qvector3d](center), libmiqt.ValueCast[C.struct_miqt_qvector3d](up))
}

func (this *QMatrix4x4) Viewport(rect QRectF) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_viewport(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect))
}

func (this *QMatrix4x4) Viewport2(left float32, bottom float32, width float32, height float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_viewport2(this.h, (C.float)(left), (C.float)(bottom), (C.float)(width), (C.float)(height))
}

func (this *QMatrix4x4) FlipCoordinates() {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_flipCoordinates(this.h)
}

func (this *QMatrix4x4) CopyDataTo(values *float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_copyDataTo(this.h, (*C.float)(unsafe.Pointer(values)))
}

func (this *QMatrix4x4) ToAffine() *QMatrix {
	defer runtime.KeepAlive(this)
	_goptr := newQMatrix(C.QMatrix4x4_toAffine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) ToTransform() *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QMatrix4x4_toTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) ToTransformWithDistanceToPlane(distanceToPlane float32) *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QMatrix4x4_toTransformWithDistanceToPlane(this.h, (C.float)(distanceToPlane)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Map(point QPoint) QPoint {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPoint](C.QMatrix4x4_map(this.h, libmiqt.ValueCast[C.struct_miqt_qpoint](point)))
}

func (this *QMatrix4x4) MapWithPoint(point QPointF) QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QMatrix4x4_mapWithPoint(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](point)))
}

func (this *QMatrix4x4) Map2(point QVector3D) QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QMatrix4x4_map2(this.h, libmiqt.ValueCast[C.struct_miqt_qvector3d](point)))
}

func (this *QMatrix4x4) MapVector(vector QVector3D) QVector3D {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QVector3D](C.QMatrix4x4_mapVector(this.h, libmiqt.ValueCast[C.struct_miqt_qvector3d](vector)))
}

func (this *QMatrix4x4) Map3(point *QVector4D) *QVector4D {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	_goptr := newQVector4D(C.QMatrix4x4_map3(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) MapRect(rect QRect) QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QMatrix4x4_mapRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](rect)))
}

func (this *QMatrix4x4) MapRectWithRect(rect QRectF) QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRectF](C.QMatrix4x4_mapRectWithRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect)))
}

func (this *QMatrix4x4) Data() *float32 {
	defer runtime.KeepAlive(this)
	return (*float32)(unsafe.Pointer(C.QMatrix4x4_data(this.h)))
}

func (this *QMatrix4x4) Data2() *float32 {
	defer runtime.KeepAlive(this)
	return (*float32)(unsafe.Pointer(C.QMatrix4x4_data2(this.h)))
}

func (this *QMatrix4x4) ConstData() *float32 {
	defer runtime.KeepAlive(this)
	return (*float32)(unsafe.Pointer(C.QMatrix4x4_constData(this.h)))
}

func (this *QMatrix4x4) Optimize() {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_optimize(this.h)
}

func (this *QMatrix4x4) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QMatrix4x4_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) InvertedWithInvertible(invertible *bool) *QMatrix4x4 {
	defer runtime.KeepAlive(this)
	_goptr := newQMatrix4x4(C.QMatrix4x4_invertedWithInvertible(this.h, (*C.bool)(unsafe.Pointer(invertible))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix4x4) Rotate3(angle float32, x float32, y float32, z float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_rotate3(this.h, (C.float)(angle), (C.float)(x), (C.float)(y), (C.float)(z))
}

func (this *QMatrix4x4) Viewport3(left float32, bottom float32, width float32, height float32, nearPlane float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_viewport3(this.h, (C.float)(left), (C.float)(bottom), (C.float)(width), (C.float)(height), (C.float)(nearPlane))
}

func (this *QMatrix4x4) Viewport4(left float32, bottom float32, width float32, height float32, nearPlane float32, farPlane float32) {
	defer runtime.KeepAlive(this)
	C.QMatrix4x4_viewport4(this.h, (C.float)(left), (C.float)(bottom), (C.float)(width), (C.float)(height), (C.float)(nearPlane), (C.float)(farPlane))
}

// Delete this object from C++ memory.
func (this *QMatrix4x4) Delete() {
	C.QMatrix4x4_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMatrix4x4) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMatrix4x4_delete((*C.QMatrix4x4)(gc[0]))
	})
	this.miqtSetGC(gc)
}
