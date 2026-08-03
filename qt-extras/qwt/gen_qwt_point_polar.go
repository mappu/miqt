package qwt

/*

#include "gen_qwt_point_polar.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPointPolar struct {
	h *C.QwtPointPolar
}

func (this *QwtPointPolar) cPointer() *C.QwtPointPolar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPointPolar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPointPolar constructs the type using only CGO pointers.
func newQwtPointPolar(h *C.QwtPointPolar) *QwtPointPolar {
	if h == nil {
		return nil
	}

	return &QwtPointPolar{h: h}
}

// UnsafeNewQwtPointPolar constructs the type using only unsafe pointers.
func UnsafeNewQwtPointPolar(h unsafe.Pointer) *QwtPointPolar {
	return newQwtPointPolar((*C.QwtPointPolar)(h))
}

// NewQwtPointPolar constructs a new QwtPointPolar object.
func NewQwtPointPolar() *QwtPointPolar {

	return newQwtPointPolar(C.QwtPointPolar_new())
}

// NewQwtPointPolar2 constructs a new QwtPointPolar object.
func NewQwtPointPolar2(azimuth float64, radius float64) *QwtPointPolar {

	return newQwtPointPolar(C.QwtPointPolar_new2((C.double)(azimuth), (C.double)(radius)))
}

// NewQwtPointPolar3 constructs a new QwtPointPolar object.
func NewQwtPointPolar3(param1 *QwtPointPolar) *QwtPointPolar {

	return newQwtPointPolar(C.QwtPointPolar_new3(param1.cPointer()))
}

// NewQwtPointPolar4 constructs a new QwtPointPolar object.
func NewQwtPointPolar4(param1 *qt.QPointF) *QwtPointPolar {

	return newQwtPointPolar(C.QwtPointPolar_new4((*C.QPointF)(param1.UnsafePointer())))
}

func (this *QwtPointPolar) SetPoint(point *qt.QPointF) {
	C.QwtPointPolar_setPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QwtPointPolar) ToPoint() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPointPolar_toPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPointPolar) IsValid() bool {
	return (bool)(C.QwtPointPolar_isValid(this.h))
}

func (this *QwtPointPolar) IsNull() bool {
	return (bool)(C.QwtPointPolar_isNull(this.h))
}

func (this *QwtPointPolar) Radius() float64 {
	return (float64)(C.QwtPointPolar_radius(this.h))
}

func (this *QwtPointPolar) Azimuth() float64 {
	return (float64)(C.QwtPointPolar_azimuth(this.h))
}

func (this *QwtPointPolar) SetRadius(radius float64) {
	C.QwtPointPolar_setRadius(this.h, (C.double)(radius))
}

func (this *QwtPointPolar) SetAzimuth(azimuth float64) {
	C.QwtPointPolar_setAzimuth(this.h, (C.double)(azimuth))
}

func (this *QwtPointPolar) OperatorEqual(param1 *QwtPointPolar) bool {
	return (bool)(C.QwtPointPolar_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtPointPolar) OperatorNotEqual(param1 *QwtPointPolar) bool {
	return (bool)(C.QwtPointPolar_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtPointPolar) Normalized() *QwtPointPolar {
	_goptr := newQwtPointPolar(C.QwtPointPolar_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QwtPointPolar) Delete() {
	C.QwtPointPolar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPointPolar) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPointPolar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
