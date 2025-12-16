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
	h *C.QGeoCoordinate
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

	return newQGeoCoordinate(C.QGeoCoordinate_new4(other.cPointer()))
}

func (this *QGeoCoordinate) OperatorAssign(other *QGeoCoordinate) {
	C.QGeoCoordinate_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoCoordinate) Swap(other *QGeoCoordinate) {
	C.QGeoCoordinate_swap(this.h, other.cPointer())
}

func (this *QGeoCoordinate) IsValid() bool {
	return (bool)(C.QGeoCoordinate_isValid(this.h))
}

func (this *QGeoCoordinate) Type() QGeoCoordinate__CoordinateType {
	return (QGeoCoordinate__CoordinateType)(C.QGeoCoordinate_type(this.h))
}

func (this *QGeoCoordinate) SetLatitude(latitude float64) {
	C.QGeoCoordinate_setLatitude(this.h, (C.double)(latitude))
}

func (this *QGeoCoordinate) Latitude() float64 {
	return (float64)(C.QGeoCoordinate_latitude(this.h))
}

func (this *QGeoCoordinate) SetLongitude(longitude float64) {
	C.QGeoCoordinate_setLongitude(this.h, (C.double)(longitude))
}

func (this *QGeoCoordinate) Longitude() float64 {
	return (float64)(C.QGeoCoordinate_longitude(this.h))
}

func (this *QGeoCoordinate) SetAltitude(altitude float64) {
	C.QGeoCoordinate_setAltitude(this.h, (C.double)(altitude))
}

func (this *QGeoCoordinate) Altitude() float64 {
	return (float64)(C.QGeoCoordinate_altitude(this.h))
}

func (this *QGeoCoordinate) DistanceTo(other *QGeoCoordinate) float64 {
	return (float64)(C.QGeoCoordinate_distanceTo(this.h, other.cPointer()))
}

func (this *QGeoCoordinate) AzimuthTo(other *QGeoCoordinate) float64 {
	return (float64)(C.QGeoCoordinate_azimuthTo(this.h, other.cPointer()))
}

func (this *QGeoCoordinate) AtDistanceAndAzimuth(distance float64, azimuth float64) *QGeoCoordinate {
	_goptr := newQGeoCoordinate(C.QGeoCoordinate_atDistanceAndAzimuth(this.h, (C.double)(distance), (C.double)(azimuth)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoCoordinate) ToString() string {
	var _ms C.struct_miqt_string = C.QGeoCoordinate_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoCoordinate) AtDistanceAndAzimuth2(distance float64, azimuth float64, distanceUp float64) *QGeoCoordinate {
	_goptr := newQGeoCoordinate(C.QGeoCoordinate_atDistanceAndAzimuth2(this.h, (C.double)(distance), (C.double)(azimuth), (C.double)(distanceUp)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoCoordinate) ToStringWithFormat(format QGeoCoordinate__CoordinateFormat) string {
	var _ms C.struct_miqt_string = C.QGeoCoordinate_toStringWithFormat(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGeoCoordinate) Delete() {
	C.QGeoCoordinate_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoCoordinate) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoCoordinate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
