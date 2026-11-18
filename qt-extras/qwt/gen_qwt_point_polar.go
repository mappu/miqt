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
	h  *C.QwtPointPolar
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPointPolar) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQwtPointPolar(C.QwtPointPolar_new3(param1.cPointer()))
}

// NewQwtPointPolar4 constructs a new QwtPointPolar object.
func NewQwtPointPolar4(param1 *qt.QPointF) *QwtPointPolar {
	defer runtime.KeepAlive(param1)

	return newQwtPointPolar(C.QwtPointPolar_new4((*C.QPointF)(param1.UnsafePointer())))
}

func (this *QwtPointPolar) SetPoint(point *qt.QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	C.QwtPointPolar_setPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QwtPointPolar) ToPoint() *qt.QPointF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPointPolar_toPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPointPolar) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPointPolar_isValid(this.h))
}

func (this *QwtPointPolar) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPointPolar_isNull(this.h))
}

func (this *QwtPointPolar) Radius() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPointPolar_radius(this.h))
}

func (this *QwtPointPolar) Azimuth() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPointPolar_azimuth(this.h))
}

func (this *QwtPointPolar) SetRadius(radius float64) {
	defer runtime.KeepAlive(this)
	C.QwtPointPolar_setRadius(this.h, (C.double)(radius))
}

func (this *QwtPointPolar) SetAzimuth(azimuth float64) {
	defer runtime.KeepAlive(this)
	C.QwtPointPolar_setAzimuth(this.h, (C.double)(azimuth))
}

func (this *QwtPointPolar) OperatorEqual(param1 *QwtPointPolar) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QwtPointPolar_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtPointPolar) OperatorNotEqual(param1 *QwtPointPolar) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QwtPointPolar_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtPointPolar) Normalized() *QwtPointPolar {
	defer runtime.KeepAlive(this)
	_goptr := newQwtPointPolar(C.QwtPointPolar_normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QwtPointPolar) Delete() {
	C.QwtPointPolar_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPointPolar) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPointPolar_delete((*C.QwtPointPolar)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QwtPolar2Pos2(pole *qt.QPoint, radius float64, angle float64) *qt.QPoint {
	defer runtime.KeepAlive(pole)
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.miqt_QwtPolar2Pos2((*C.QPoint)(pole.UnsafePointer()), (C.double)(radius), (C.double)(angle))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDegree2Pos2(pole *qt.QPoint, radius float64, angle float64) *qt.QPoint {
	defer runtime.KeepAlive(pole)
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.miqt_QwtDegree2Pos2((*C.QPoint)(pole.UnsafePointer()), (C.double)(radius), (C.double)(angle))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtPolar2Pos3(pole *qt.QPointF, radius float64, angle float64) *qt.QPointF {
	defer runtime.KeepAlive(pole)
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.miqt_QwtPolar2Pos3((*C.QPointF)(pole.UnsafePointer()), (C.double)(radius), (C.double)(angle))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtDegree2Pos3(pole *qt.QPointF, radius float64, angle float64) *qt.QPointF {
	defer runtime.KeepAlive(pole)
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.miqt_QwtDegree2Pos3((*C.QPointF)(pole.UnsafePointer()), (C.double)(radius), (C.double)(angle))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtFastPolar2Pos2(pole *qt.QPointF, radius float64, angle float64) *qt.QPointF {
	defer runtime.KeepAlive(pole)
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.miqt_QwtFastPolar2Pos2((*C.QPointF)(pole.UnsafePointer()), (C.double)(radius), (C.double)(angle))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtFastDegree2Pos2(pole *qt.QPointF, radius float64, angle float64) *qt.QPointF {
	defer runtime.KeepAlive(pole)
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.miqt_QwtFastDegree2Pos2((*C.QPointF)(pole.UnsafePointer()), (C.double)(radius), (C.double)(angle))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtFastPos2PolarWithPos(pos *qt.QPointF) *QwtPointPolar {
	defer runtime.KeepAlive(pos)
	_goptr := newQwtPointPolar(C.miqt_QwtFastPos2PolarWithPos((*C.QPointF)(pos.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}
