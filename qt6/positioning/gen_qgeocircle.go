package positioning

/*

#include "gen_qgeocircle.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGeoCircle struct {
	h  *C.QGeoCircle
	gc *[1]unsafe.Pointer
	*QGeoShape
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoCircle) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGeoShape.miqtSetGC(gc)
}

func (this *QGeoCircle) cPointer() *C.QGeoCircle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoCircle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoCircle constructs the type using only CGO pointers.
func newQGeoCircle(h *C.QGeoCircle) *QGeoCircle {
	if h == nil {
		return nil
	}
	var outptr_QGeoShape *C.QGeoShape = nil
	C.QGeoCircle_virtbase(h, &outptr_QGeoShape)

	return &QGeoCircle{h: h,
		QGeoShape: newQGeoShape(outptr_QGeoShape)}
}

// UnsafeNewQGeoCircle constructs the type using only unsafe pointers.
func UnsafeNewQGeoCircle(h unsafe.Pointer) *QGeoCircle {
	return newQGeoCircle((*C.QGeoCircle)(h))
}

// NewQGeoCircle constructs a new QGeoCircle object.
func NewQGeoCircle() *QGeoCircle {

	return newQGeoCircle(C.QGeoCircle_new())
}

// NewQGeoCircle2 constructs a new QGeoCircle object.
func NewQGeoCircle2(center *QGeoCoordinate) *QGeoCircle {
	defer runtime.KeepAlive(center)

	return newQGeoCircle(C.QGeoCircle_new2(center.cPointer()))
}

// NewQGeoCircle3 constructs a new QGeoCircle object.
func NewQGeoCircle3(other *QGeoCircle) *QGeoCircle {
	defer runtime.KeepAlive(other)

	return newQGeoCircle(C.QGeoCircle_new3(other.cPointer()))
}

// NewQGeoCircle4 constructs a new QGeoCircle object.
func NewQGeoCircle4(other *QGeoShape) *QGeoCircle {
	defer runtime.KeepAlive(other)

	return newQGeoCircle(C.QGeoCircle_new4(other.cPointer()))
}

// NewQGeoCircle5 constructs a new QGeoCircle object.
func NewQGeoCircle5(center *QGeoCoordinate, radius float64) *QGeoCircle {
	defer runtime.KeepAlive(center)

	return newQGeoCircle(C.QGeoCircle_new5(center.cPointer(), (C.double)(radius)))
}

func (this *QGeoCircle) OperatorAssign(other *QGeoCircle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoCircle_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoCircle) SetCenter(center *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(center)
	C.QGeoCircle_setCenter(this.h, center.cPointer())
}

func (this *QGeoCircle) Center() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoCircle_center(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoCircle) SetRadius(radius float64) {
	defer runtime.KeepAlive(this)
	C.QGeoCircle_setRadius(this.h, (C.double)(radius))
}

func (this *QGeoCircle) Radius() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoCircle_radius(this.h))
}

func (this *QGeoCircle) Translate(degreesLatitude float64, degreesLongitude float64) {
	defer runtime.KeepAlive(this)
	C.QGeoCircle_translate(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude))
}

func (this *QGeoCircle) Translated(degreesLatitude float64, degreesLongitude float64) *QGeoCircle {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCircle(C.QGeoCircle_translated(this.h, (C.double)(degreesLatitude), (C.double)(degreesLongitude)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoCircle) ExtendCircle(coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoCircle_extendCircle(this.h, coordinate.cPointer())
}

func (this *QGeoCircle) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoCircle_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGeoCircle) Delete() {
	C.QGeoCircle_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoCircle) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoCircle_delete((*C.QGeoCircle)(gc[0]))
	})
	this.miqtSetGC(gc)
}
