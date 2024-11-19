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
	h          *C.QVector4D
	isSubclass bool
}

func (this *QVector4D) cPointer() *C.QVector4D {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVector4D) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVector4D constructs the type using only CGO pointers.
func newQVector4D(h *C.QVector4D) *QVector4D {
	if h == nil {
		return nil
	}
	return &QVector4D{h: h}
}

// UnsafeNewQVector4D constructs the type using only unsafe pointers.
func UnsafeNewQVector4D(h unsafe.Pointer) *QVector4D {
	if h == nil {
		return nil
	}

	return &QVector4D{h: (*C.QVector4D)(h)}
}

// NewQVector4D constructs a new QVector4D object.
func NewQVector4D() *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new(&outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D2 constructs a new QVector4D object.
func NewQVector4D2(param1 Initialization) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new2((C.int)(param1), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D3 constructs a new QVector4D object.
func NewQVector4D3(xpos float32, ypos float32, zpos float32, wpos float32) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new3((C.float)(xpos), (C.float)(ypos), (C.float)(zpos), (C.float)(wpos), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D4 constructs a new QVector4D object.
func NewQVector4D4(point *QPoint) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new4(point.cPointer(), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D5 constructs a new QVector4D object.
func NewQVector4D5(point *QPointF) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new5(point.cPointer(), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D6 constructs a new QVector4D object.
func NewQVector4D6(vector *QVector2D) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new6(vector.cPointer(), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D7 constructs a new QVector4D object.
func NewQVector4D7(vector *QVector2D, zpos float32, wpos float32) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new7(vector.cPointer(), (C.float)(zpos), (C.float)(wpos), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D8 constructs a new QVector4D object.
func NewQVector4D8(vector *QVector3D) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new8(vector.cPointer(), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D9 constructs a new QVector4D object.
func NewQVector4D9(vector *QVector3D, wpos float32) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new9(vector.cPointer(), (C.float)(wpos), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

// NewQVector4D10 constructs a new QVector4D object.
func NewQVector4D10(param1 *QVector4D) *QVector4D {
	var outptr_QVector4D *C.QVector4D = nil

	C.QVector4D_new10(param1.cPointer(), &outptr_QVector4D)
	ret := newQVector4D(outptr_QVector4D)
	ret.isSubclass = true
	return ret
}

func (this *QVector4D) IsNull() bool {
	return (bool)(C.QVector4D_IsNull(this.h))
}

func (this *QVector4D) X() float32 {
	return (float32)(C.QVector4D_X(this.h))
}

func (this *QVector4D) Y() float32 {
	return (float32)(C.QVector4D_Y(this.h))
}

func (this *QVector4D) Z() float32 {
	return (float32)(C.QVector4D_Z(this.h))
}

func (this *QVector4D) W() float32 {
	return (float32)(C.QVector4D_W(this.h))
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
	return (float32)(C.QVector4D_OperatorSubscript(this.h, (C.int)(i)))
}

func (this *QVector4D) Length() float32 {
	return (float32)(C.QVector4D_Length(this.h))
}

func (this *QVector4D) LengthSquared() float32 {
	return (float32)(C.QVector4D_LengthSquared(this.h))
}

func (this *QVector4D) Normalized() *QVector4D {
	_ret := C.QVector4D_Normalized(this.h)
	_goptr := newQVector4D(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) Normalize() {
	C.QVector4D_Normalize(this.h)
}

func (this *QVector4D) OperatorPlusAssign(vector *QVector4D) *QVector4D {
	return UnsafeNewQVector4D(unsafe.Pointer(C.QVector4D_OperatorPlusAssign(this.h, vector.cPointer())))
}

func (this *QVector4D) OperatorMinusAssign(vector *QVector4D) *QVector4D {
	return UnsafeNewQVector4D(unsafe.Pointer(C.QVector4D_OperatorMinusAssign(this.h, vector.cPointer())))
}

func (this *QVector4D) OperatorMultiplyAssign(factor float32) *QVector4D {
	return UnsafeNewQVector4D(unsafe.Pointer(C.QVector4D_OperatorMultiplyAssign(this.h, (C.float)(factor))))
}

func (this *QVector4D) OperatorMultiplyAssignWithVector(vector *QVector4D) *QVector4D {
	return UnsafeNewQVector4D(unsafe.Pointer(C.QVector4D_OperatorMultiplyAssignWithVector(this.h, vector.cPointer())))
}

func (this *QVector4D) OperatorDivideAssign(divisor float32) *QVector4D {
	return UnsafeNewQVector4D(unsafe.Pointer(C.QVector4D_OperatorDivideAssign(this.h, (C.float)(divisor))))
}

func (this *QVector4D) OperatorDivideAssignWithVector(vector *QVector4D) *QVector4D {
	return UnsafeNewQVector4D(unsafe.Pointer(C.QVector4D_OperatorDivideAssignWithVector(this.h, vector.cPointer())))
}

func QVector4D_DotProduct(v1 *QVector4D, v2 *QVector4D) float32 {
	return (float32)(C.QVector4D_DotProduct(v1.cPointer(), v2.cPointer()))
}

func (this *QVector4D) ToVector2D() *QVector2D {
	_ret := C.QVector4D_ToVector2D(this.h)
	_goptr := newQVector2D(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector2DAffine() *QVector2D {
	_ret := C.QVector4D_ToVector2DAffine(this.h)
	_goptr := newQVector2D(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector3D() *QVector3D {
	_ret := C.QVector4D_ToVector3D(this.h)
	_goptr := newQVector3D(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToVector3DAffine() *QVector3D {
	_ret := C.QVector4D_ToVector3DAffine(this.h)
	_goptr := newQVector3D(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToPoint() *QPoint {
	_ret := C.QVector4D_ToPoint(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVector4D) ToPointF() *QPointF {
	_ret := C.QVector4D_ToPointF(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVector4D) Delete() {
	C.QVector4D_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVector4D) GoGC() {
	runtime.SetFinalizer(this, func(this *QVector4D) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
