package qwt

/*

#include "gen_qwt_point_3d.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPoint3D struct {
	h *C.QwtPoint3D
}

func (this *QwtPoint3D) cPointer() *C.QwtPoint3D {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPoint3D) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPoint3D constructs the type using only CGO pointers.
func newQwtPoint3D(h *C.QwtPoint3D) *QwtPoint3D {
	if h == nil {
		return nil
	}

	return &QwtPoint3D{h: h}
}

// UnsafeNewQwtPoint3D constructs the type using only unsafe pointers.
func UnsafeNewQwtPoint3D(h unsafe.Pointer) *QwtPoint3D {
	return newQwtPoint3D((*C.QwtPoint3D)(h))
}

// NewQwtPoint3D constructs a new QwtPoint3D object.
func NewQwtPoint3D() *QwtPoint3D {

	return newQwtPoint3D(C.QwtPoint3D_new())
}

// NewQwtPoint3D2 constructs a new QwtPoint3D object.
func NewQwtPoint3D2(x float64, y float64, z float64) *QwtPoint3D {

	return newQwtPoint3D(C.QwtPoint3D_new2((C.double)(x), (C.double)(y), (C.double)(z)))
}

// NewQwtPoint3D3 constructs a new QwtPoint3D object.
func NewQwtPoint3D3(param1 *QwtPoint3D) *QwtPoint3D {

	return newQwtPoint3D(C.QwtPoint3D_new3(param1.cPointer()))
}

// NewQwtPoint3D4 constructs a new QwtPoint3D object.
func NewQwtPoint3D4(param1 *qt.QPointF) *QwtPoint3D {

	return newQwtPoint3D(C.QwtPoint3D_new4((*C.QPointF)(param1.UnsafePointer())))
}

func (this *QwtPoint3D) IsNull() bool {
	return (bool)(C.QwtPoint3D_isNull(this.h))
}

func (this *QwtPoint3D) X() float64 {
	return (float64)(C.QwtPoint3D_x(this.h))
}

func (this *QwtPoint3D) Y() float64 {
	return (float64)(C.QwtPoint3D_y(this.h))
}

func (this *QwtPoint3D) Z() float64 {
	return (float64)(C.QwtPoint3D_z(this.h))
}

func (this *QwtPoint3D) SetX(x float64) {
	C.QwtPoint3D_setX(this.h, (C.double)(x))
}

func (this *QwtPoint3D) SetY(y float64) {
	C.QwtPoint3D_setY(this.h, (C.double)(y))
}

func (this *QwtPoint3D) SetZ(y float64) {
	C.QwtPoint3D_setZ(this.h, (C.double)(y))
}

func (this *QwtPoint3D) ToPoint() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPoint3D_toPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPoint3D) OperatorEqual(param1 *QwtPoint3D) bool {
	return (bool)(C.QwtPoint3D_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtPoint3D) OperatorNotEqual(param1 *QwtPoint3D) bool {
	return (bool)(C.QwtPoint3D_operatorNotEqual(this.h, param1.cPointer()))
}

// Delete this object from C++ memory.
func (this *QwtPoint3D) Delete() {
	C.QwtPoint3D_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPoint3D) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPoint3D) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
