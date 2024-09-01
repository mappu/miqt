package qt

/*

#include "gen_qvector4d.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QVector4D struct {
	h *C.QVector4D
}

func (this *QVector4D) cPointer() *C.QVector4D {
	if this == nil {
		return nil
	}
	return this.h
}

func newQVector4D(h *C.QVector4D) *QVector4D {
	if h == nil {
		return nil
	}
	return &QVector4D{h: h}
}

func newQVector4D_U(h unsafe.Pointer) *QVector4D {
	return newQVector4D((*C.QVector4D)(h))
}

// NewQVector4D constructs a new QVector4D object.
func NewQVector4D() *QVector4D {
	ret := C.QVector4D_new()
	return newQVector4D(ret)
}

// NewQVector4D2 constructs a new QVector4D object.
func NewQVector4D2(param1 uintptr) *QVector4D {
	ret := C.QVector4D_new2((C.uintptr_t)(param1))
	return newQVector4D(ret)
}

// NewQVector4D3 constructs a new QVector4D object.
func NewQVector4D3(xpos float32, ypos float32, zpos float32, wpos float32) *QVector4D {
	ret := C.QVector4D_new3((C.float)(xpos), (C.float)(ypos), (C.float)(zpos), (C.float)(wpos))
	return newQVector4D(ret)
}

// NewQVector4D4 constructs a new QVector4D object.
func NewQVector4D4(point *QPoint) *QVector4D {
	ret := C.QVector4D_new4(point.cPointer())
	return newQVector4D(ret)
}

// NewQVector4D5 constructs a new QVector4D object.
func NewQVector4D5(point *QPointF) *QVector4D {
	ret := C.QVector4D_new5(point.cPointer())
	return newQVector4D(ret)
}

// NewQVector4D6 constructs a new QVector4D object.
func NewQVector4D6(vector *QVector2D) *QVector4D {
	ret := C.QVector4D_new6(vector.cPointer())
	return newQVector4D(ret)
}

// NewQVector4D7 constructs a new QVector4D object.
func NewQVector4D7(vector *QVector2D, zpos float32, wpos float32) *QVector4D {
	ret := C.QVector4D_new7(vector.cPointer(), (C.float)(zpos), (C.float)(wpos))
	return newQVector4D(ret)
}

// NewQVector4D8 constructs a new QVector4D object.
func NewQVector4D8(vector *QVector3D) *QVector4D {
	ret := C.QVector4D_new8(vector.cPointer())
	return newQVector4D(ret)
}

// NewQVector4D9 constructs a new QVector4D object.
func NewQVector4D9(vector *QVector3D, wpos float32) *QVector4D {
	ret := C.QVector4D_new9(vector.cPointer(), (C.float)(wpos))
	return newQVector4D(ret)
}

// NewQVector4D10 constructs a new QVector4D object.
func NewQVector4D10(param1 *QVector4D) *QVector4D {
	ret := C.QVector4D_new10(param1.cPointer())
	return newQVector4D(ret)
}

func (this *QVector4D) IsNull() bool {
	ret := C.QVector4D_IsNull(this.h)
	return (bool)(ret)
}

func (this *QVector4D) X() float32 {
	ret := C.QVector4D_X(this.h)
	return (float32)(ret)
}

func (this *QVector4D) Y() float32 {
	ret := C.QVector4D_Y(this.h)
	return (float32)(ret)
}

func (this *QVector4D) Z() float32 {
	ret := C.QVector4D_Z(this.h)
	return (float32)(ret)
}

func (this *QVector4D) W() float32 {
	ret := C.QVector4D_W(this.h)
	return (float32)(ret)
}

func (this *QVector4D) SetX(x float32) {
	C.QVector4D_SetX(this.h, (C.float)(x))
}

func (this *QVector4D) SetY(y float32) {
	C.QVector4D_SetY(this.h, (C.float)(y))
}

func (this *QVector4D) SetZ(z float32) {
	C.QVector4D_SetZ(this.h, (C.float)(z))
}

func (this *QVector4D) SetW(w float32) {
	C.QVector4D_SetW(this.h, (C.float)(w))
}

func (this *QVector4D) OperatorSubscript(i int) float32 {
	ret := C.QVector4D_OperatorSubscript(this.h, (C.int)(i))
	return (float32)(ret)
}

func (this *QVector4D) Length() float32 {
	ret := C.QVector4D_Length(this.h)
	return (float32)(ret)
}

func (this *QVector4D) LengthSquared() float32 {
	ret := C.QVector4D_LengthSquared(this.h)
	return (float32)(ret)
}

func (this *QVector4D) Normalized() *QVector4D {
	ret := C.QVector4D_Normalized(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector4D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector4D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVector4D) Normalize() {
	C.QVector4D_Normalize(this.h)
}

func (this *QVector4D) OperatorPlusAssign(vector *QVector4D) *QVector4D {
	ret := C.QVector4D_OperatorPlusAssign(this.h, vector.cPointer())
	return newQVector4D_U(unsafe.Pointer(ret))
}

func (this *QVector4D) OperatorMinusAssign(vector *QVector4D) *QVector4D {
	ret := C.QVector4D_OperatorMinusAssign(this.h, vector.cPointer())
	return newQVector4D_U(unsafe.Pointer(ret))
}

func (this *QVector4D) OperatorMultiplyAssign(factor float32) *QVector4D {
	ret := C.QVector4D_OperatorMultiplyAssign(this.h, (C.float)(factor))
	return newQVector4D_U(unsafe.Pointer(ret))
}

func (this *QVector4D) OperatorMultiplyAssignWithVector(vector *QVector4D) *QVector4D {
	ret := C.QVector4D_OperatorMultiplyAssignWithVector(this.h, vector.cPointer())
	return newQVector4D_U(unsafe.Pointer(ret))
}

func (this *QVector4D) OperatorDivideAssign(divisor float32) *QVector4D {
	ret := C.QVector4D_OperatorDivideAssign(this.h, (C.float)(divisor))
	return newQVector4D_U(unsafe.Pointer(ret))
}

func (this *QVector4D) OperatorDivideAssignWithVector(vector *QVector4D) *QVector4D {
	ret := C.QVector4D_OperatorDivideAssignWithVector(this.h, vector.cPointer())
	return newQVector4D_U(unsafe.Pointer(ret))
}

func QVector4D_DotProduct(v1 *QVector4D, v2 *QVector4D) float32 {
	ret := C.QVector4D_DotProduct(v1.cPointer(), v2.cPointer())
	return (float32)(ret)
}

func (this *QVector4D) ToVector2D() *QVector2D {
	ret := C.QVector4D_ToVector2D(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector2D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector2D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVector4D) ToVector2DAffine() *QVector2D {
	ret := C.QVector4D_ToVector2DAffine(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector2D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector2D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVector4D) ToVector3D() *QVector3D {
	ret := C.QVector4D_ToVector3D(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVector4D) ToVector3DAffine() *QVector3D {
	ret := C.QVector4D_ToVector3DAffine(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVector4D) ToPoint() *QPoint {
	ret := C.QVector4D_ToPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVector4D) ToPointF() *QPointF {
	ret := C.QVector4D_ToPointF(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVector4D) Delete() {
	C.QVector4D_Delete(this.h)
}
