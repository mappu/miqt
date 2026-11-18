package qt6

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
	h  *C.QTransform
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTransform) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQTransform(C.QTransform_new((C.int)(param1)))
}

// NewQTransform2 constructs a new QTransform object.
func NewQTransform2() *QTransform {

	return newQTransform(C.QTransform_new2())
}

// NewQTransform3 constructs a new QTransform object.
func NewQTransform3(h11 float64, h12 float64, h13 float64, h21 float64, h22 float64, h23 float64, h31 float64, h32 float64, h33 float64) *QTransform {

	return newQTransform(C.QTransform_new3((C.double)(h11), (C.double)(h12), (C.double)(h13), (C.double)(h21), (C.double)(h22), (C.double)(h23), (C.double)(h31), (C.double)(h32), (C.double)(h33)))
}

// NewQTransform4 constructs a new QTransform object.
func NewQTransform4(h11 float64, h12 float64, h21 float64, h22 float64, dx float64, dy float64) *QTransform {

	return newQTransform(C.QTransform_new4((C.double)(h11), (C.double)(h12), (C.double)(h21), (C.double)(h22), (C.double)(dx), (C.double)(dy)))
}

// NewQTransform5 constructs a new QTransform object.
func NewQTransform5(other *QTransform) *QTransform {
	defer runtime.KeepAlive(other)

	return newQTransform(C.QTransform_new5(other.cPointer()))
}

func (this *QTransform) OperatorAssign(param1 *QTransform) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QTransform_operatorAssign(this.h, param1.cPointer())
}

func (this *QTransform) IsAffine() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTransform_isAffine(this.h))
}

func (this *QTransform) IsIdentity() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTransform_isIdentity(this.h))
}

func (this *QTransform) IsInvertible() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTransform_isInvertible(this.h))
}

func (this *QTransform) IsScaling() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTransform_isScaling(this.h))
}

func (this *QTransform) IsRotating() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTransform_isRotating(this.h))
}

func (this *QTransform) IsTranslating() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTransform_isTranslating(this.h))
}

func (this *QTransform) Type() QTransform__TransformationType {
	defer runtime.KeepAlive(this)
	return (QTransform__TransformationType)(C.QTransform_type(this.h))
}

func (this *QTransform) Determinant() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_determinant(this.h))
}

func (this *QTransform) M11() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m11(this.h))
}

func (this *QTransform) M12() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m12(this.h))
}

func (this *QTransform) M13() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m13(this.h))
}

func (this *QTransform) M21() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m21(this.h))
}

func (this *QTransform) M22() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m22(this.h))
}

func (this *QTransform) M23() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m23(this.h))
}

func (this *QTransform) M31() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m31(this.h))
}

func (this *QTransform) M32() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m32(this.h))
}

func (this *QTransform) M33() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_m33(this.h))
}

func (this *QTransform) Dx() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_dx(this.h))
}

func (this *QTransform) Dy() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTransform_dy(this.h))
}

func (this *QTransform) SetMatrix(m11 float64, m12 float64, m13 float64, m21 float64, m22 float64, m23 float64, m31 float64, m32 float64, m33 float64) {
	defer runtime.KeepAlive(this)
	C.QTransform_setMatrix(this.h, (C.double)(m11), (C.double)(m12), (C.double)(m13), (C.double)(m21), (C.double)(m22), (C.double)(m23), (C.double)(m31), (C.double)(m32), (C.double)(m33))
}

func (this *QTransform) Inverted() *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QTransform_inverted(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Adjoint() *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QTransform_adjoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Transposed() *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QTransform_transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Translate(dx float64, dy float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_translate(this.h, (C.double)(dx), (C.double)(dy)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) Scale(sx float64, sy float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_scale(this.h, (C.double)(sx), (C.double)(sy)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) Shear(sh float64, sv float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_shear(this.h, (C.double)(sh), (C.double)(sv)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) Rotate(a float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_rotate(this.h, (C.double)(a)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) RotateRadians(a float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_rotateRadians(this.h, (C.double)(a)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) OperatorEqual(param1 *QTransform) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QTransform_operatorEqual(this.h, param1.cPointer()))
}

func (this *QTransform) OperatorNotEqual(param1 *QTransform) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QTransform_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QTransform) OperatorMultiplyAssign(param1 *QTransform) *QTransform {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_ret := newQTransform(C.QTransform_operatorMultiplyAssign(this.h, param1.cPointer()))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) OperatorMultiply(o *QTransform) *QTransform {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(o)
	_goptr := newQTransform(C.QTransform_operatorMultiply(this.h, o.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QTransform_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Reset() {
	defer runtime.KeepAlive(this)
	C.QTransform_reset(this.h)
}

func (this *QTransform) Map(p *QPoint) *QPoint {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_goptr := newQPoint(C.QTransform_map(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQPointF(p *QPointF) *QPointF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_goptr := newQPointF(C.QTransform_mapWithQPointF(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQLine(l *QLine) *QLine {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(l)
	_goptr := newQLine(C.QTransform_mapWithQLine(this.h, l.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQLineF(l *QLineF) *QLineF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(l)
	_goptr := newQLineF(C.QTransform_mapWithQLineF(this.h, l.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQRegion(r *QRegion) *QRegion {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	_goptr := newQRegion(C.QTransform_mapWithQRegion(this.h, r.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapWithQPainterPath(p *QPainterPath) *QPainterPath {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	_goptr := newQPainterPath(C.QTransform_mapWithQPainterPath(this.h, p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapRect(param1 *QRect) *QRect {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := newQRect(C.QTransform_mapRect(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) MapRectWithQRectF(param1 *QRectF) *QRectF {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := newQRectF(C.QTransform_mapRectWithQRectF(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Map2(x int, y int, tx *int, ty *int) {
	defer runtime.KeepAlive(this)
	C.QTransform_map2(this.h, (C.int)(x), (C.int)(y), (*C.int)(unsafe.Pointer(tx)), (*C.int)(unsafe.Pointer(ty)))
}

func (this *QTransform) Map3(x float64, y float64, tx *float64, ty *float64) {
	defer runtime.KeepAlive(this)
	C.QTransform_map3(this.h, (C.double)(x), (C.double)(y), (*C.double)(unsafe.Pointer(tx)), (*C.double)(unsafe.Pointer(ty)))
}

func (this *QTransform) OperatorMultiplyAssignWithDiv(div float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_operatorMultiplyAssignWithDiv(this.h, (C.double)(div)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) OperatorDivideAssign(div float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_operatorDivideAssign(this.h, (C.double)(div)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) OperatorPlusAssign(div float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_operatorPlusAssign(this.h, (C.double)(div)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) OperatorMinusAssign(div float64) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_operatorMinusAssign(this.h, (C.double)(div)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func QTransform_FromTranslate(dx float64, dy float64) *QTransform {
	_goptr := newQTransform(C.QTransform_fromTranslate((C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTransform_FromScale(dx float64, dy float64) *QTransform {
	_goptr := newQTransform(C.QTransform_fromScale((C.double)(dx), (C.double)(dy)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) InvertedWithInvertible(invertible *bool) *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QTransform_invertedWithInvertible(this.h, (*C.bool)(unsafe.Pointer(invertible))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTransform) Rotate2(a float64, axis Axis) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_rotate2(this.h, (C.double)(a), (C.int)(axis)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTransform) RotateRadians2(a float64, axis Axis) *QTransform {
	defer runtime.KeepAlive(this)
	_ret := newQTransform(C.QTransform_rotateRadians2(this.h, (C.double)(a), (C.int)(axis)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

// Delete this object from C++ memory.
func (this *QTransform) Delete() {
	C.QTransform_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTransform) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTransform_delete((*C.QTransform)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QFuzzyCompare6(t1 *QTransform, t2 *QTransform) bool {
	defer runtime.KeepAlive(t1)
	defer runtime.KeepAlive(t2)
	return (bool)(C.miqt_QFuzzyCompare6(t1.cPointer(), t2.cPointer()))
}
