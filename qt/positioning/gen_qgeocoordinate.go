package positioning

/*

#include "gen_qgeocoordinate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGeoCoordinate__CoordinateType int

const (
	QGeoCoordinate__InvalidCoordinate QGeoCoordinate__CoordinateType = 0
	QGeoCoordinate__Coordinate2D      QGeoCoordinate__CoordinateType = 1
	QGeoCoordinate__Coordinate3D      QGeoCoordinate__CoordinateType = 2
)

type QGeoCoordinate__CoordinateFormat int

const (
	QGeoCoordinate__Degrees                             QGeoCoordinate__CoordinateFormat = 0
	QGeoCoordinate__DegreesWithHemisphere               QGeoCoordinate__CoordinateFormat = 1
	QGeoCoordinate__DegreesMinutes                      QGeoCoordinate__CoordinateFormat = 2
	QGeoCoordinate__DegreesMinutesWithHemisphere        QGeoCoordinate__CoordinateFormat = 3
	QGeoCoordinate__DegreesMinutesSeconds               QGeoCoordinate__CoordinateFormat = 4
	QGeoCoordinate__DegreesMinutesSecondsWithHemisphere QGeoCoordinate__CoordinateFormat = 5
)

type QGeoCoordinate struct {
	h  *C.QGeoCoordinate
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoCoordinate) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QGeoCoordinate) cPointer() *C.QGeoCoordinate {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoCoordinate) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoCoordinate constructs the type using only CGO pointers.
func newQGeoCoordinate(h *C.QGeoCoordinate) *QGeoCoordinate {
	if h == nil {
		return nil
	}

	return &QGeoCoordinate{h: h}
}

// UnsafeNewQGeoCoordinate constructs the type using only unsafe pointers.
func UnsafeNewQGeoCoordinate(h unsafe.Pointer) *QGeoCoordinate {
	return newQGeoCoordinate((*C.QGeoCoordinate)(h))
}

// NewQGeoCoordinate constructs a new QGeoCoordinate object.
func NewQGeoCoordinate() *QGeoCoordinate {

	return newQGeoCoordinate(C.QGeoCoordinate_new())
}

// NewQGeoCoordinate2 constructs a new QGeoCoordinate object.
func NewQGeoCoordinate2(latitude float64, longitude float64) *QGeoCoordinate {

	return newQGeoCoordinate(C.QGeoCoordinate_new2((C.double)(latitude), (C.double)(longitude)))
}

// NewQGeoCoordinate3 constructs a new QGeoCoordinate object.
func NewQGeoCoordinate3(latitude float64, longitude float64, altitude float64) *QGeoCoordinate {

	return newQGeoCoordinate(C.QGeoCoordinate_new3((C.double)(latitude), (C.double)(longitude), (C.double)(altitude)))
}

// NewQGeoCoordinate4 constructs a new QGeoCoordinate object.
func NewQGeoCoordinate4(other *QGeoCoordinate) *QGeoCoordinate {
	defer runtime.KeepAlive(other)

	return newQGeoCoordinate(C.QGeoCoordinate_new4(other.cPointer()))
}

func (this *QGeoCoordinate) OperatorAssign(other *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoCoordinate_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoCoordinate) OperatorEqual(other *QGeoCoordinate) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoCoordinate_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoCoordinate) OperatorNotEqual(other *QGeoCoordinate) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoCoordinate_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoCoordinate) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoCoordinate_isValid(this.h))
}

func (this *QGeoCoordinate) Type() QGeoCoordinate__CoordinateType {
	defer runtime.KeepAlive(this)
	return (QGeoCoordinate__CoordinateType)(C.QGeoCoordinate_type(this.h))
}

func (this *QGeoCoordinate) SetLatitude(latitude float64) {
	defer runtime.KeepAlive(this)
	C.QGeoCoordinate_setLatitude(this.h, (C.double)(latitude))
}

func (this *QGeoCoordinate) Latitude() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoCoordinate_latitude(this.h))
}

func (this *QGeoCoordinate) SetLongitude(longitude float64) {
	defer runtime.KeepAlive(this)
	C.QGeoCoordinate_setLongitude(this.h, (C.double)(longitude))
}

func (this *QGeoCoordinate) Longitude() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoCoordinate_longitude(this.h))
}

func (this *QGeoCoordinate) SetAltitude(altitude float64) {
	defer runtime.KeepAlive(this)
	C.QGeoCoordinate_setAltitude(this.h, (C.double)(altitude))
}

func (this *QGeoCoordinate) Altitude() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoCoordinate_altitude(this.h))
}

func (this *QGeoCoordinate) DistanceTo(other *QGeoCoordinate) float64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (float64)(C.QGeoCoordinate_distanceTo(this.h, other.cPointer()))
}

func (this *QGeoCoordinate) AzimuthTo(other *QGeoCoordinate) float64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (float64)(C.QGeoCoordinate_azimuthTo(this.h, other.cPointer()))
}

func (this *QGeoCoordinate) AtDistanceAndAzimuth(distance float64, azimuth float64) *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoCoordinate_atDistanceAndAzimuth(this.h, (C.double)(distance), (C.double)(azimuth)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoCoordinate) ToString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoCoordinate_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoCoordinate) AtDistanceAndAzimuth2(distance float64, azimuth float64, distanceUp float64) *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoCoordinate_atDistanceAndAzimuth2(this.h, (C.double)(distance), (C.double)(azimuth), (C.double)(distanceUp)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoCoordinate) ToStringWithFormat(format QGeoCoordinate__CoordinateFormat) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoCoordinate_toStringWithFormat(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGeoCoordinate) Delete() {
	C.QGeoCoordinate_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoCoordinate) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoCoordinate_delete((*C.QGeoCoordinate)(gc[0]))
	})
	this.miqtSetGC(gc)
}
