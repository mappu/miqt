package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmatrix.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMatrix struct {
	h *C.QMatrix
}

func (this *QMatrix) cPointer() *C.QMatrix {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMatrix(h *C.QMatrix) *QMatrix {
	if h == nil {
		return nil
	}
	return &QMatrix{h: h}
}

func newQMatrix_U(h unsafe.Pointer) *QMatrix {
	return newQMatrix((*C.QMatrix)(h))
}

// NewQMatrix constructs a new QMatrix object.
func NewQMatrix(param1 uintptr) *QMatrix {
	ret := C.QMatrix_new((C.uintptr_t)(param1))
	return newQMatrix(ret)
}

// NewQMatrix2 constructs a new QMatrix object.
func NewQMatrix2() *QMatrix {
	ret := C.QMatrix_new2()
	return newQMatrix(ret)
}

// NewQMatrix3 constructs a new QMatrix object.
func NewQMatrix3(m11 float64, m12 float64, m21 float64, m22 float64, dx float64, dy float64) *QMatrix {
	ret := C.QMatrix_new3((C.double)(m11), (C.double)(m12), (C.double)(m21), (C.double)(m22), (C.double)(dx), (C.double)(dy))
	return newQMatrix(ret)
}

// NewQMatrix4 constructs a new QMatrix object.
func NewQMatrix4(other *QMatrix) *QMatrix {
	ret := C.QMatrix_new4(other.cPointer())
	return newQMatrix(ret)
}

func (this *QMatrix) OperatorAssign(param1 *QMatrix) {
	C.QMatrix_OperatorAssign(this.h, param1.cPointer())
}

func (this *QMatrix) SetMatrix(m11 float64, m12 float64, m21 float64, m22 float64, dx float64, dy float64) {
	C.QMatrix_SetMatrix(this.h, (C.double)(m11), (C.double)(m12), (C.double)(m21), (C.double)(m22), (C.double)(dx), (C.double)(dy))
}

func (this *QMatrix) M11() float64 {
	ret := C.QMatrix_M11(this.h)
	return (float64)(ret)
}

func (this *QMatrix) M12() float64 {
	ret := C.QMatrix_M12(this.h)
	return (float64)(ret)
}

func (this *QMatrix) M21() float64 {
	ret := C.QMatrix_M21(this.h)
	return (float64)(ret)
}

func (this *QMatrix) M22() float64 {
	ret := C.QMatrix_M22(this.h)
	return (float64)(ret)
}

func (this *QMatrix) Dx() float64 {
	ret := C.QMatrix_Dx(this.h)
	return (float64)(ret)
}

func (this *QMatrix) Dy() float64 {
	ret := C.QMatrix_Dy(this.h)
	return (float64)(ret)
}

func (this *QMatrix) Map(x int, y int, tx *int, ty *int) {
	C.QMatrix_Map(this.h, (C.int)(x), (C.int)(y), (*C.int)(unsafe.Pointer(tx)), (*C.int)(unsafe.Pointer(ty)))
}

func (this *QMatrix) Map2(x float64, y float64, tx *float64, ty *float64) {
	C.QMatrix_Map2(this.h, (C.double)(x), (C.double)(y), (*C.double)(unsafe.Pointer(tx)), (*C.double)(unsafe.Pointer(ty)))
}

func (this *QMatrix) MapRect(param1 *QRect) *QRect {
	ret := C.QMatrix_MapRect(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) MapRectWithQRectF(param1 *QRectF) *QRectF {
	ret := C.QMatrix_MapRectWithQRectF(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) MapWithQPoint(p *QPoint) *QPoint {
	ret := C.QMatrix_MapWithQPoint(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) MapWithQPointF(p *QPointF) *QPointF {
	ret := C.QMatrix_MapWithQPointF(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) MapWithQLine(l *QLine) *QLine {
	ret := C.QMatrix_MapWithQLine(this.h, l.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) MapWithQLineF(l *QLineF) *QLineF {
	ret := C.QMatrix_MapWithQLineF(this.h, l.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) MapWithQRegion(r *QRegion) *QRegion {
	ret := C.QMatrix_MapWithQRegion(this.h, r.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) MapWithQPainterPath(p *QPainterPath) *QPainterPath {
	ret := C.QMatrix_MapWithQPainterPath(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) Reset() {
	C.QMatrix_Reset(this.h)
}

func (this *QMatrix) IsIdentity() bool {
	ret := C.QMatrix_IsIdentity(this.h)
	return (bool)(ret)
}

func (this *QMatrix) Translate(dx float64, dy float64) *QMatrix {
	ret := C.QMatrix_Translate(this.h, (C.double)(dx), (C.double)(dy))
	return newQMatrix_U(unsafe.Pointer(ret))
}

func (this *QMatrix) Scale(sx float64, sy float64) *QMatrix {
	ret := C.QMatrix_Scale(this.h, (C.double)(sx), (C.double)(sy))
	return newQMatrix_U(unsafe.Pointer(ret))
}

func (this *QMatrix) Shear(sh float64, sv float64) *QMatrix {
	ret := C.QMatrix_Shear(this.h, (C.double)(sh), (C.double)(sv))
	return newQMatrix_U(unsafe.Pointer(ret))
}

func (this *QMatrix) Rotate(a float64) *QMatrix {
	ret := C.QMatrix_Rotate(this.h, (C.double)(a))
	return newQMatrix_U(unsafe.Pointer(ret))
}

func (this *QMatrix) IsInvertible() bool {
	ret := C.QMatrix_IsInvertible(this.h)
	return (bool)(ret)
}

func (this *QMatrix) Determinant() float64 {
	ret := C.QMatrix_Determinant(this.h)
	return (float64)(ret)
}

func (this *QMatrix) Inverted() *QMatrix {
	ret := C.QMatrix_Inverted(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) OperatorEqual(param1 *QMatrix) bool {
	ret := C.QMatrix_OperatorEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QMatrix) OperatorNotEqual(param1 *QMatrix) bool {
	ret := C.QMatrix_OperatorNotEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QMatrix) OperatorMultiplyAssign(param1 *QMatrix) *QMatrix {
	ret := C.QMatrix_OperatorMultiplyAssign(this.h, param1.cPointer())
	return newQMatrix_U(unsafe.Pointer(ret))
}

func (this *QMatrix) OperatorMultiply(o *QMatrix) *QMatrix {
	ret := C.QMatrix_OperatorMultiply(this.h, o.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) Inverted1(invertible *bool) *QMatrix {
	ret := C.QMatrix_Inverted1(this.h, (*C.bool)(unsafe.Pointer(invertible)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMatrix) Delete() {
	C.QMatrix_Delete(this.h)
}
