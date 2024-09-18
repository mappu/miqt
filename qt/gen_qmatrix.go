package qt

/*

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
func NewQMatrix(param1 Initialization) *QMatrix {
	ret := C.QMatrix_new((C.int)(param1))
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
	return (float64)(C.QMatrix_M11(this.h))
}

func (this *QMatrix) M12() float64 {
	return (float64)(C.QMatrix_M12(this.h))
}

func (this *QMatrix) M21() float64 {
	return (float64)(C.QMatrix_M21(this.h))
}

func (this *QMatrix) M22() float64 {
	return (float64)(C.QMatrix_M22(this.h))
}

func (this *QMatrix) Dx() float64 {
	return (float64)(C.QMatrix_Dx(this.h))
}

func (this *QMatrix) Dy() float64 {
	return (float64)(C.QMatrix_Dy(this.h))
}

func (this *QMatrix) Map(x int, y int, tx *int, ty *int) {
	C.QMatrix_Map(this.h, (C.int)(x), (C.int)(y), (*C.int)(unsafe.Pointer(tx)), (*C.int)(unsafe.Pointer(ty)))
}

func (this *QMatrix) Map2(x float64, y float64, tx *float64, ty *float64) {
	C.QMatrix_Map2(this.h, (C.double)(x), (C.double)(y), (*C.double)(unsafe.Pointer(tx)), (*C.double)(unsafe.Pointer(ty)))
}

func (this *QMatrix) MapRect(param1 *QRect) *QRect {
	_ret := C.QMatrix_MapRect(this.h, param1.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) MapRectWithQRectF(param1 *QRectF) *QRectF {
	_ret := C.QMatrix_MapRectWithQRectF(this.h, param1.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) MapWithQPoint(p *QPoint) *QPoint {
	_ret := C.QMatrix_MapWithQPoint(this.h, p.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) MapWithQPointF(p *QPointF) *QPointF {
	_ret := C.QMatrix_MapWithQPointF(this.h, p.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) MapWithQLine(l *QLine) *QLine {
	_ret := C.QMatrix_MapWithQLine(this.h, l.cPointer())
	_goptr := newQLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) MapWithQLineF(l *QLineF) *QLineF {
	_ret := C.QMatrix_MapWithQLineF(this.h, l.cPointer())
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) MapWithQRegion(r *QRegion) *QRegion {
	_ret := C.QMatrix_MapWithQRegion(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) MapWithQPainterPath(p *QPainterPath) *QPainterPath {
	_ret := C.QMatrix_MapWithQPainterPath(this.h, p.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) Reset() {
	C.QMatrix_Reset(this.h)
}

func (this *QMatrix) IsIdentity() bool {
	return (bool)(C.QMatrix_IsIdentity(this.h))
}

func (this *QMatrix) Translate(dx float64, dy float64) *QMatrix {
	return newQMatrix_U(unsafe.Pointer(C.QMatrix_Translate(this.h, (C.double)(dx), (C.double)(dy))))
}

func (this *QMatrix) Scale(sx float64, sy float64) *QMatrix {
	return newQMatrix_U(unsafe.Pointer(C.QMatrix_Scale(this.h, (C.double)(sx), (C.double)(sy))))
}

func (this *QMatrix) Shear(sh float64, sv float64) *QMatrix {
	return newQMatrix_U(unsafe.Pointer(C.QMatrix_Shear(this.h, (C.double)(sh), (C.double)(sv))))
}

func (this *QMatrix) Rotate(a float64) *QMatrix {
	return newQMatrix_U(unsafe.Pointer(C.QMatrix_Rotate(this.h, (C.double)(a))))
}

func (this *QMatrix) IsInvertible() bool {
	return (bool)(C.QMatrix_IsInvertible(this.h))
}

func (this *QMatrix) Determinant() float64 {
	return (float64)(C.QMatrix_Determinant(this.h))
}

func (this *QMatrix) Inverted() *QMatrix {
	_ret := C.QMatrix_Inverted(this.h)
	_goptr := newQMatrix(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) OperatorEqual(param1 *QMatrix) bool {
	return (bool)(C.QMatrix_OperatorEqual(this.h, param1.cPointer()))
}

func (this *QMatrix) OperatorNotEqual(param1 *QMatrix) bool {
	return (bool)(C.QMatrix_OperatorNotEqual(this.h, param1.cPointer()))
}

func (this *QMatrix) OperatorMultiplyAssign(param1 *QMatrix) *QMatrix {
	return newQMatrix_U(unsafe.Pointer(C.QMatrix_OperatorMultiplyAssign(this.h, param1.cPointer())))
}

func (this *QMatrix) OperatorMultiply(o *QMatrix) *QMatrix {
	_ret := C.QMatrix_OperatorMultiply(this.h, o.cPointer())
	_goptr := newQMatrix(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMatrix) Inverted1(invertible *bool) *QMatrix {
	_ret := C.QMatrix_Inverted1(this.h, (*C.bool)(unsafe.Pointer(invertible)))
	_goptr := newQMatrix(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QMatrix) Delete() {
	C.QMatrix_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMatrix) GoGC() {
	runtime.SetFinalizer(this, func(this *QMatrix) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
