package positioning

/*

#include "gen_qgeopositioninfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QGeoPositionInfo__Attribute int

const (
	QGeoPositionInfo__Direction          QGeoPositionInfo__Attribute = 0
	QGeoPositionInfo__GroundSpeed        QGeoPositionInfo__Attribute = 1
	QGeoPositionInfo__VerticalSpeed      QGeoPositionInfo__Attribute = 2
	QGeoPositionInfo__MagneticVariation  QGeoPositionInfo__Attribute = 3
	QGeoPositionInfo__HorizontalAccuracy QGeoPositionInfo__Attribute = 4
	QGeoPositionInfo__VerticalAccuracy   QGeoPositionInfo__Attribute = 5
)

type QGeoPositionInfo struct {
	h  *C.QGeoPositionInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoPositionInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QGeoPositionInfo) cPointer() *C.QGeoPositionInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoPositionInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoPositionInfo constructs the type using only CGO pointers.
func newQGeoPositionInfo(h *C.QGeoPositionInfo) *QGeoPositionInfo {
	if h == nil {
		return nil
	}

	return &QGeoPositionInfo{h: h}
}

// UnsafeNewQGeoPositionInfo constructs the type using only unsafe pointers.
func UnsafeNewQGeoPositionInfo(h unsafe.Pointer) *QGeoPositionInfo {
	return newQGeoPositionInfo((*C.QGeoPositionInfo)(h))
}

// NewQGeoPositionInfo constructs a new QGeoPositionInfo object.
func NewQGeoPositionInfo() *QGeoPositionInfo {

	return newQGeoPositionInfo(C.QGeoPositionInfo_new())
}

// NewQGeoPositionInfo2 constructs a new QGeoPositionInfo object.
func NewQGeoPositionInfo2(coordinate *QGeoCoordinate, updateTime *qt.QDateTime) *QGeoPositionInfo {
	defer runtime.KeepAlive(coordinate)
	defer runtime.KeepAlive(updateTime)

	return newQGeoPositionInfo(C.QGeoPositionInfo_new2(coordinate.cPointer(), (*C.QDateTime)(updateTime.UnsafePointer())))
}

// NewQGeoPositionInfo3 constructs a new QGeoPositionInfo object.
func NewQGeoPositionInfo3(other *QGeoPositionInfo) *QGeoPositionInfo {
	defer runtime.KeepAlive(other)

	return newQGeoPositionInfo(C.QGeoPositionInfo_new3(other.cPointer()))
}

func (this *QGeoPositionInfo) OperatorAssign(other *QGeoPositionInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoPositionInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoPositionInfo) OperatorEqual(other *QGeoPositionInfo) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoPositionInfo_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoPositionInfo) OperatorNotEqual(other *QGeoPositionInfo) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoPositionInfo_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoPositionInfo) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoPositionInfo_isValid(this.h))
}

func (this *QGeoPositionInfo) SetTimestamp(timestamp *qt.QDateTime) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(timestamp)
	C.QGeoPositionInfo_setTimestamp(this.h, (*C.QDateTime)(timestamp.UnsafePointer()))
}

func (this *QGeoPositionInfo) Timestamp() *qt.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QGeoPositionInfo_timestamp(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoPositionInfo) SetCoordinate(coordinate *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(coordinate)
	C.QGeoPositionInfo_setCoordinate(this.h, coordinate.cPointer())
}

func (this *QGeoPositionInfo) Coordinate() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoPositionInfo_coordinate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoPositionInfo) SetAttribute(attribute QGeoPositionInfo__Attribute, value float64) {
	defer runtime.KeepAlive(this)
	C.QGeoPositionInfo_setAttribute(this.h, (C.int)(attribute), (C.double)(value))
}

func (this *QGeoPositionInfo) Attribute(attribute QGeoPositionInfo__Attribute) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoPositionInfo_attribute(this.h, (C.int)(attribute)))
}

func (this *QGeoPositionInfo) RemoveAttribute(attribute QGeoPositionInfo__Attribute) {
	defer runtime.KeepAlive(this)
	C.QGeoPositionInfo_removeAttribute(this.h, (C.int)(attribute))
}

func (this *QGeoPositionInfo) HasAttribute(attribute QGeoPositionInfo__Attribute) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoPositionInfo_hasAttribute(this.h, (C.int)(attribute)))
}

// Delete this object from C++ memory.
func (this *QGeoPositionInfo) Delete() {
	C.QGeoPositionInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoPositionInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoPositionInfo_delete((*C.QGeoPositionInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}
