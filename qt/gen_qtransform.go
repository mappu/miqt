package qt

/*

#include "gen_qtransform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTransform__TransformationType int

const (
	QTransform__TxNone      QTransform__TransformationType = 0
	QTransform__TxTranslate QTransform__TransformationType = 1
	QTransform__TxScale     QTransform__TransformationType = 2
	QTransform__TxRotate    QTransform__TransformationType = 4
	QTransform__TxShear     QTransform__TransformationType = 8
	QTransform__TxProject   QTransform__TransformationType = 16
)

type QTransform struct {
	h          *C.QTransform
	isSubclass bool
}

func (this *QTransform) cPointer() *C.QTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTransform constructs the type using only CGO pointers.
func newQTransform(h *C.QTransform) *QTransform {
	if h == nil {
		return nil
	}

	return &QTransform{h: h}
}

// UnsafeNewQTransform constructs the type using only unsafe pointers.
func UnsafeNewQTransform(h unsafe.Pointer) *QTransform {
	return newQTransform((*C.QTransform)(h))
}

// NewQTransform constructs a new QTransform object.
func NewQTransform(param1 Initialization) *QTransform {

	ret := newQTransform(C.QTransform_new((C.int)(param1)))
	ret.isSubclass = true
	return ret
}

// NewQTransform2 constructs a new QTransform object.
func NewQTransform2() *QTransform {

	ret := newQTransform(C.QTransform_new2())
	ret.isSubclass = true
	return ret
}

// NewQTransform3 constructs a new QTransform object.
func NewQTransform3(h11 float64, h12 float64, h13 float64, h21 float64, h22 float64, h23 float64, h31 float64, h32 float64) *QTransform {

	ret := newQTransform(C.QTransform_new3((C.double)(h11), (C.double)(h12), (C.double)(h13), (C.double)(h21), (C.double)(h22), (C.double)(h23), (C.double)(h31), (C.double)(h32)))
	ret.isSubclass = true
	return ret
}

// NewQTransform4 constructs a new QTransform object.
func NewQTransform4(h11 float64, h12 float64, h21 float64, h22 float64, dx float64, dy float64) *QTransform {

	ret := newQTransform(C.QTransform_new4((C.double)(h11), (C.double)(h12), (C.double)(h21), (C.double)(h22), (C.double)(dx), (C.double)(dy)))
	ret.isSubclass = true
	return ret
}

// NewQTransform5 constructs a new QTransform object.
func NewQTransform5(mtx *QMatrix) *QTransform {

	ret := newQTransform(C.QTransform_new5(mtx.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQTransform6 constructs a new QTransform object.
func NewQTransform6(other *QTransform) *QTransform {

	ret := newQTransform(C.QTransform_new6(other.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQTransform7 constructs a new QTransform object.
func NewQTransform7(h11 float64, h12 float64, h13 float64, h21 float64, h22 float64, h23 float64, h31 float64, h32 float64, h33 float64) *QTransform {

	ret := newQTransform(C.QTransform_new7((C.double)(h11), (C.double)(h12), (C.double)(h13), (C.double)(h21), (C.double)(h22), (C.double)(h23), (C.double)(h31), (C.double)(h32), (C.double)(h33)))
	ret.isSubclass = true
	return ret
}

func (this *QTransform) OperatorAssign(param1 *QTransform) {
	C.QTransform_OperatorAssign(this.h, param1.cPointer())
}

func (this *QTransform) IsAffine() bool {
	return (bool)(C.QTransform_IsAffine(this.h))
}

func (this *QTransform) IsIdentity() bool {
	return (bool)(C.QTransform_IsIdentity(this.h))
}

func (this *QTransform) IsInvertible() bool {
	return (bool)(C.QTransform_IsInvertible(this.h))
}

func (this *QTransform) IsScaling() bool {
	return (bool)(C.QTransform_IsScaling(this.h))
}

func (this *QTransform) IsRotating() bool {
	return (bool)(C.QTransform_IsRotating(this.h))
}

func (this *QTransform) IsTranslating() bool {
	return (bool)(C.QTransform_IsTranslating(this.h))
}

func (this *QTransform) Type() QTransform__TransformationType {
	return (QTransform__TransformationType)(C.QTransform_Type(this.h))
}

func (this *QTransform) Determinant() float64 {
	return (float64)(C.QTransform_Determinant(this.h))
}

func (this *QTransform) Det() float64 {
	return (float64)(C.QTransform_Det(this.h))
}

func (this *QTransform) M11() float64 {
	return (float64)(C.QTransform_M11(this.h))
}

func (this *QTransform) M12() float64 {
	return (float64)(C.QTransform_M12(this.h))
}

func (this *QTransform) M13() float64 {
	return (float64)(C.QTransform_M13(this.h))
}

func (this *QTransform) M21() float64 {
	return (float64)(C.QTransform_M21(this.h))
}

func (this *QTransform) M22() float64 {
	return (float64)(C.QTransform_M22(this.h))
}

func (this *QTransform) M23() float64 {
	return (float64)(C.QTransform_M23(this.h))
}

func (this *QTransform) M31() float64 {
	return (float64)(C.QTransform_M31(this.h))
}

func (this *QTransform) M32() float64 {
	return (float64)(C.QTransform_M32(this.h))
}

func (this *QTransform) M33() float64 {
	return (float64)(C.QTransform_M33(this.h))
}

func (this *QTransform) Dx() float64 {
	return (float64)(C.QTransform_Dx(this.h))
}

func (this *QTransform) Dy() float64 {
	return (float64)(C.QTransform_Dy(this.h))
}

func (this *QTransform) SetMatrix(m11 float64, m12 float64, m13 float64, m21 float64, m22 float64, m23 float64, m31 float64, m32 float64, m33 float64) {
	C.QTransform_SetMatrix(this.h, (C.double)(m11), (C.double)(m12), (C.double)(m13), (C.double)(m21), (C.double)(m22), (C.double)(m23), (C.double)(m31), (C.double)(m32), (C.double)(m33))
}

func (this *QTransform) Inverted() *QTransform {
	_goptr := newQTransform(C.QTransform_Inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Adjoint() *QTransform {
	_goptr := newQTransform(C.QTransform_Adjoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Transposed() *QTransform {
	_goptr := newQTransform(C.QTransform_Transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Translate(dx float64, dy float64) *QTransform {
	return newQTransform(C.QTransform_Translate(this.h, (C.double)(dx), (C.double)(dy)))
}

func (this *QTransform) Scale(sx float64, sy float64) *QTransform {
	return newQTransform(C.QTransform_Scale(this.h, (C.double)(sx), (C.double)(sy)))
}

func (this *QTransform) Shear(sh float64, sv float64) *QTransform {
	return newQTransform(C.QTransform_Shear(this.h, (C.double)(sh), (C.double)(sv)))
}

func (this *QTransform) Rotate(a float64) *QTransform {
	return newQTransform(C.QTransform_Rotate(this.h, (C.double)(a)))
}

func (this *QTransform) RotateRadians(a float64) *QTransform {
	return newQTransform(C.QTransform_RotateRadians(this.h, (C.double)(a)))
}

func (this *QTransform) OperatorEqual(param1 *QTransform) bool {
	return (bool)(C.QTransform_OperatorEqual(this.h, param1.cPointer()))
}

func (this *QTransform) OperatorNotEqual(param1 *QTransform) bool {
	return (bool)(C.QTransform_OperatorNotEqual(this.h, param1.cPointer()))
}

func (this *QTransform) OperatorMultiplyAssign(param1 *QTransform) *QTransform {
	return newQTransform(C.QTransform_OperatorMultiplyAssign(this.h, param1.cPointer()))
}

func (this *QTransform) OperatorMultiply(o *QTransform) *QTransform {
	_goptr := newQTransform(C.QTransform_OperatorMultiply(this.h, o.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Reset() {
	C.QTransform_Reset(this.h)
}

func (this *QTransform) Map(p *QPoint) *QPoint {
	_goptr := newQPoint(C.QTransform_Map(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQPointF(p *QPointF) *QPointF {
	_goptr := newQPointF(C.QTransform_MapWithQPointF(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQLine(l *QLine) *QLine {
	_goptr := newQLine(C.QTransform_MapWithQLine(this.h, l.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQLineF(l *QLineF) *QLineF {
	_goptr := newQLineF(C.QTransform_MapWithQLineF(this.h, l.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQRegion(r *QRegion) *QRegion {
	_goptr := newQRegion(C.QTransform_MapWithQRegion(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQPainterPath(p *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QTransform_MapWithQPainterPath(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapRect(param1 *QRect) *QRect {
	_goptr := newQRect(C.QTransform_MapRect(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapRectWithQRectF(param1 *QRectF) *QRectF {
	_goptr := newQRectF(C.QTransform_MapRectWithQRectF(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Map2(x int, y int, tx *int, ty *int) {
	C.QTransform_Map2(this.h, (C.int)(x), (C.int)(y), (*C.int)(unsafe.Pointer(tx)), (*C.int)(unsafe.Pointer(ty)))
}

func (this *QTransform) Map3(x float64, y float64, tx *float64, ty *float64) {
	C.QTransform_Map3(this.h, (C.double)(x), (C.double)(y), (*C.double)(unsafe.Pointer(tx)), (*C.double)(unsafe.Pointer(ty)))
}

func (this *QTransform) ToAffine() *QMatrix {
	return newQMatrix(C.QTransform_ToAffine(this.h))
}

func (this *QTransform) OperatorMultiplyAssignWithDiv(div float64) *QTransform {
	return newQTransform(C.QTransform_OperatorMultiplyAssignWithDiv(this.h, (C.double)(div)))
}

func (this *QTransform) OperatorDivideAssign(div float64) *QTransform {
	return newQTransform(C.QTransform_OperatorDivideAssign(this.h, (C.double)(div)))
}

func (this *QTransform) OperatorPlusAssign(div float64) *QTransform {
	return newQTransform(C.QTransform_OperatorPlusAssign(this.h, (C.double)(div)))
}

func (this *QTransform) OperatorMinusAssign(div float64) *QTransform {
	return newQTransform(C.QTransform_OperatorMinusAssign(this.h, (C.double)(div)))
}

func QTransform_FromTranslate(dx float64, dy float64) *QTransform {
	_goptr := newQTransform(C.QTransform_FromTranslate((C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTransform_FromScale(dx float64, dy float64) *QTransform {
	_goptr := newQTransform(C.QTransform_FromScale((C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Inverted1(invertible *bool) *QTransform {
	_goptr := newQTransform(C.QTransform_Inverted1(this.h, (*C.bool)(unsafe.Pointer(invertible))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Rotate2(a float64, axis Axis) *QTransform {
	return newQTransform(C.QTransform_Rotate2(this.h, (C.double)(a), (C.int)(axis)))
}

func (this *QTransform) RotateRadians2(a float64, axis Axis) *QTransform {
	return newQTransform(C.QTransform_RotateRadians2(this.h, (C.double)(a), (C.int)(axis)))
}

// Delete this object from C++ memory.
func (this *QTransform) Delete() {
	C.QTransform_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTransform) GoGC() {
	runtime.SetFinalizer(this, func(this *QTransform) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
