package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtransform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTransform struct {
	h *C.QTransform
}

func (this *QTransform) cPointer() *C.QTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTransform(h *C.QTransform) *QTransform {
	return &QTransform{h: h}
}

func newQTransform_U(h unsafe.Pointer) *QTransform {
	return newQTransform((*C.QTransform)(h))
}

// NewQTransform constructs a new QTransform object.
func NewQTransform() *QTransform {
	ret := C.QTransform_new()
	return newQTransform(ret)
}

// NewQTransform2 constructs a new QTransform object.
func NewQTransform2(h11 float64, h12 float64, h13 float64, h21 float64, h22 float64, h23 float64, h31 float64, h32 float64) *QTransform {
	ret := C.QTransform_new2((C.double)(h11), (C.double)(h12), (C.double)(h13), (C.double)(h21), (C.double)(h22), (C.double)(h23), (C.double)(h31), (C.double)(h32))
	return newQTransform(ret)
}

// NewQTransform3 constructs a new QTransform object.
func NewQTransform3(h11 float64, h12 float64, h21 float64, h22 float64, dx float64, dy float64) *QTransform {
	ret := C.QTransform_new3((C.double)(h11), (C.double)(h12), (C.double)(h21), (C.double)(h22), (C.double)(dx), (C.double)(dy))
	return newQTransform(ret)
}

// NewQTransform4 constructs a new QTransform object.
func NewQTransform4(mtx *QMatrix) *QTransform {
	ret := C.QTransform_new4(mtx.cPointer())
	return newQTransform(ret)
}

// NewQTransform5 constructs a new QTransform object.
func NewQTransform5(other *QTransform) *QTransform {
	ret := C.QTransform_new5(other.cPointer())
	return newQTransform(ret)
}

// NewQTransform6 constructs a new QTransform object.
func NewQTransform6(h11 float64, h12 float64, h13 float64, h21 float64, h22 float64, h23 float64, h31 float64, h32 float64, h33 float64) *QTransform {
	ret := C.QTransform_new6((C.double)(h11), (C.double)(h12), (C.double)(h13), (C.double)(h21), (C.double)(h22), (C.double)(h23), (C.double)(h31), (C.double)(h32), (C.double)(h33))
	return newQTransform(ret)
}

func (this *QTransform) OperatorAssign(param1 *QTransform) {
	C.QTransform_OperatorAssign(this.h, param1.cPointer())
}

func (this *QTransform) IsAffine() bool {
	ret := C.QTransform_IsAffine(this.h)
	return (bool)(ret)
}

func (this *QTransform) IsIdentity() bool {
	ret := C.QTransform_IsIdentity(this.h)
	return (bool)(ret)
}

func (this *QTransform) IsInvertible() bool {
	ret := C.QTransform_IsInvertible(this.h)
	return (bool)(ret)
}

func (this *QTransform) IsScaling() bool {
	ret := C.QTransform_IsScaling(this.h)
	return (bool)(ret)
}

func (this *QTransform) IsRotating() bool {
	ret := C.QTransform_IsRotating(this.h)
	return (bool)(ret)
}

func (this *QTransform) IsTranslating() bool {
	ret := C.QTransform_IsTranslating(this.h)
	return (bool)(ret)
}

func (this *QTransform) Determinant() float64 {
	ret := C.QTransform_Determinant(this.h)
	return (float64)(ret)
}

func (this *QTransform) Det() float64 {
	ret := C.QTransform_Det(this.h)
	return (float64)(ret)
}

func (this *QTransform) M11() float64 {
	ret := C.QTransform_M11(this.h)
	return (float64)(ret)
}

func (this *QTransform) M12() float64 {
	ret := C.QTransform_M12(this.h)
	return (float64)(ret)
}

func (this *QTransform) M13() float64 {
	ret := C.QTransform_M13(this.h)
	return (float64)(ret)
}

func (this *QTransform) M21() float64 {
	ret := C.QTransform_M21(this.h)
	return (float64)(ret)
}

func (this *QTransform) M22() float64 {
	ret := C.QTransform_M22(this.h)
	return (float64)(ret)
}

func (this *QTransform) M23() float64 {
	ret := C.QTransform_M23(this.h)
	return (float64)(ret)
}

func (this *QTransform) M31() float64 {
	ret := C.QTransform_M31(this.h)
	return (float64)(ret)
}

func (this *QTransform) M32() float64 {
	ret := C.QTransform_M32(this.h)
	return (float64)(ret)
}

func (this *QTransform) M33() float64 {
	ret := C.QTransform_M33(this.h)
	return (float64)(ret)
}

func (this *QTransform) Dx() float64 {
	ret := C.QTransform_Dx(this.h)
	return (float64)(ret)
}

func (this *QTransform) Dy() float64 {
	ret := C.QTransform_Dy(this.h)
	return (float64)(ret)
}

func (this *QTransform) SetMatrix(m11 float64, m12 float64, m13 float64, m21 float64, m22 float64, m23 float64, m31 float64, m32 float64, m33 float64) {
	C.QTransform_SetMatrix(this.h, (C.double)(m11), (C.double)(m12), (C.double)(m13), (C.double)(m21), (C.double)(m22), (C.double)(m23), (C.double)(m31), (C.double)(m32), (C.double)(m33))
}

func (this *QTransform) Inverted() *QTransform {
	ret := C.QTransform_Inverted(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) Adjoint() *QTransform {
	ret := C.QTransform_Adjoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) Transposed() *QTransform {
	ret := C.QTransform_Transposed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) Translate(dx float64, dy float64) *QTransform {
	ret := C.QTransform_Translate(this.h, (C.double)(dx), (C.double)(dy))
	return newQTransform_U(unsafe.Pointer(ret))
}

func (this *QTransform) Scale(sx float64, sy float64) *QTransform {
	ret := C.QTransform_Scale(this.h, (C.double)(sx), (C.double)(sy))
	return newQTransform_U(unsafe.Pointer(ret))
}

func (this *QTransform) Shear(sh float64, sv float64) *QTransform {
	ret := C.QTransform_Shear(this.h, (C.double)(sh), (C.double)(sv))
	return newQTransform_U(unsafe.Pointer(ret))
}

func (this *QTransform) OperatorEqual(param1 *QTransform) bool {
	ret := C.QTransform_OperatorEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QTransform) OperatorNotEqual(param1 *QTransform) bool {
	ret := C.QTransform_OperatorNotEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QTransform) OperatorMultiplyAssign(param1 *QTransform) *QTransform {
	ret := C.QTransform_OperatorMultiplyAssign(this.h, param1.cPointer())
	return newQTransform_U(unsafe.Pointer(ret))
}

func (this *QTransform) OperatorMultiply(o *QTransform) *QTransform {
	ret := C.QTransform_OperatorMultiply(this.h, o.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) Reset() {
	C.QTransform_Reset(this.h)
}

func (this *QTransform) Map(p *QPoint) *QPoint {
	ret := C.QTransform_Map(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) MapWithQPointF(p *QPointF) *QPointF {
	ret := C.QTransform_MapWithQPointF(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) MapWithQLine(l *QLine) *QLine {
	ret := C.QTransform_MapWithQLine(this.h, l.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) MapWithQLineF(l *QLineF) *QLineF {
	ret := C.QTransform_MapWithQLineF(this.h, l.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) MapWithQRegion(r *QRegion) *QRegion {
	ret := C.QTransform_MapWithQRegion(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) MapWithQPainterPath(p *QPainterPath) *QPainterPath {
	ret := C.QTransform_MapWithQPainterPath(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) MapRect(param1 *QRect) *QRect {
	ret := C.QTransform_MapRect(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) MapRectWithQRectF(param1 *QRectF) *QRectF {
	ret := C.QTransform_MapRectWithQRectF(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) Map2(x int, y int, tx *int, ty *int) {
	C.QTransform_Map2(this.h, (C.int)(x), (C.int)(y), (*C.int)(unsafe.Pointer(tx)), (*C.int)(unsafe.Pointer(ty)))
}

func (this *QTransform) Map3(x float64, y float64, tx *float64, ty *float64) {
	C.QTransform_Map3(this.h, (C.double)(x), (C.double)(y), (*C.double)(unsafe.Pointer(tx)), (*C.double)(unsafe.Pointer(ty)))
}

func (this *QTransform) ToAffine() *QMatrix {
	ret := C.QTransform_ToAffine(this.h)
	return newQMatrix_U(unsafe.Pointer(ret))
}

func (this *QTransform) OperatorMultiplyAssignWithDiv(div float64) *QTransform {
	ret := C.QTransform_OperatorMultiplyAssignWithDiv(this.h, (C.double)(div))
	return newQTransform_U(unsafe.Pointer(ret))
}

func (this *QTransform) OperatorDivideAssign(div float64) *QTransform {
	ret := C.QTransform_OperatorDivideAssign(this.h, (C.double)(div))
	return newQTransform_U(unsafe.Pointer(ret))
}

func (this *QTransform) OperatorPlusAssign(div float64) *QTransform {
	ret := C.QTransform_OperatorPlusAssign(this.h, (C.double)(div))
	return newQTransform_U(unsafe.Pointer(ret))
}

func (this *QTransform) OperatorMinusAssign(div float64) *QTransform {
	ret := C.QTransform_OperatorMinusAssign(this.h, (C.double)(div))
	return newQTransform_U(unsafe.Pointer(ret))
}

func QTransform_FromTranslate(dx float64, dy float64) *QTransform {
	ret := C.QTransform_FromTranslate((C.double)(dx), (C.double)(dy))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTransform_FromScale(dx float64, dy float64) *QTransform {
	ret := C.QTransform_FromScale((C.double)(dx), (C.double)(dy))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) Inverted1(invertible *bool) *QTransform {
	ret := C.QTransform_Inverted1(this.h, (*C.bool)(unsafe.Pointer(invertible)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTransform) Delete() {
	C.QTransform_Delete(this.h)
}
