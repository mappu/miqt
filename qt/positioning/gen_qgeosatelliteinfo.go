package positioning

/*

#include "gen_qgeosatelliteinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGeoSatelliteInfo__Attribute int

const (
	QGeoSatelliteInfo__Elevation QGeoSatelliteInfo__Attribute = 0
	QGeoSatelliteInfo__Azimuth   QGeoSatelliteInfo__Attribute = 1
)

type QGeoSatelliteInfo__SatelliteSystem int

const (
	QGeoSatelliteInfo__Undefined QGeoSatelliteInfo__SatelliteSystem = 0
	QGeoSatelliteInfo__GPS       QGeoSatelliteInfo__SatelliteSystem = 1
	QGeoSatelliteInfo__GLONASS   QGeoSatelliteInfo__SatelliteSystem = 2
)

type QGeoSatelliteInfo struct {
	h *C.QGeoSatelliteInfo
}

func (this *QGeoSatelliteInfo) cPointer() *C.QGeoSatelliteInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoSatelliteInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoSatelliteInfo constructs the type using only CGO pointers.
func newQGeoSatelliteInfo(h *C.QGeoSatelliteInfo) *QGeoSatelliteInfo {
	if h == nil {
		return nil
	}

	return &QGeoSatelliteInfo{h: h}
}

// UnsafeNewQGeoSatelliteInfo constructs the type using only unsafe pointers.
func UnsafeNewQGeoSatelliteInfo(h unsafe.Pointer) *QGeoSatelliteInfo {
	return newQGeoSatelliteInfo((*C.QGeoSatelliteInfo)(h))
}

// NewQGeoSatelliteInfo constructs a new QGeoSatelliteInfo object.
func NewQGeoSatelliteInfo() *QGeoSatelliteInfo {

	return newQGeoSatelliteInfo(C.QGeoSatelliteInfo_new())
}

// NewQGeoSatelliteInfo2 constructs a new QGeoSatelliteInfo object.
func NewQGeoSatelliteInfo2(other *QGeoSatelliteInfo) *QGeoSatelliteInfo {

	return newQGeoSatelliteInfo(C.QGeoSatelliteInfo_new2(other.cPointer()))
}

func (this *QGeoSatelliteInfo) OperatorAssign(other *QGeoSatelliteInfo) {
	C.QGeoSatelliteInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoSatelliteInfo) OperatorEqual(other *QGeoSatelliteInfo) bool {
	return (bool)(C.QGeoSatelliteInfo_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoSatelliteInfo) OperatorNotEqual(other *QGeoSatelliteInfo) bool {
	return (bool)(C.QGeoSatelliteInfo_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoSatelliteInfo) SetSatelliteSystem(system QGeoSatelliteInfo__SatelliteSystem) {
	C.QGeoSatelliteInfo_setSatelliteSystem(this.h, (C.int)(system))
}

func (this *QGeoSatelliteInfo) SatelliteSystem() QGeoSatelliteInfo__SatelliteSystem {
	return (QGeoSatelliteInfo__SatelliteSystem)(C.QGeoSatelliteInfo_satelliteSystem(this.h))
}

func (this *QGeoSatelliteInfo) SetSatelliteIdentifier(satId int) {
	C.QGeoSatelliteInfo_setSatelliteIdentifier(this.h, (C.int)(satId))
}

func (this *QGeoSatelliteInfo) SatelliteIdentifier() int {
	return (int)(C.QGeoSatelliteInfo_satelliteIdentifier(this.h))
}

func (this *QGeoSatelliteInfo) SetSignalStrength(signalStrength int) {
	C.QGeoSatelliteInfo_setSignalStrength(this.h, (C.int)(signalStrength))
}

func (this *QGeoSatelliteInfo) SignalStrength() int {
	return (int)(C.QGeoSatelliteInfo_signalStrength(this.h))
}

func (this *QGeoSatelliteInfo) SetAttribute(attribute QGeoSatelliteInfo__Attribute, value float64) {
	C.QGeoSatelliteInfo_setAttribute(this.h, (C.int)(attribute), (C.double)(value))
}

func (this *QGeoSatelliteInfo) Attribute(attribute QGeoSatelliteInfo__Attribute) float64 {
	return (float64)(C.QGeoSatelliteInfo_attribute(this.h, (C.int)(attribute)))
}

func (this *QGeoSatelliteInfo) RemoveAttribute(attribute QGeoSatelliteInfo__Attribute) {
	C.QGeoSatelliteInfo_removeAttribute(this.h, (C.int)(attribute))
}

func (this *QGeoSatelliteInfo) HasAttribute(attribute QGeoSatelliteInfo__Attribute) bool {
	return (bool)(C.QGeoSatelliteInfo_hasAttribute(this.h, (C.int)(attribute)))
}

// Delete this object from C++ memory.
func (this *QGeoSatelliteInfo) Delete() {
	C.QGeoSatelliteInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoSatelliteInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoSatelliteInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
