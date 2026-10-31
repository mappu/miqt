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
	QGeoSatelliteInfo__Undefined  QGeoSatelliteInfo__SatelliteSystem = 0
	QGeoSatelliteInfo__GPS        QGeoSatelliteInfo__SatelliteSystem = 1
	QGeoSatelliteInfo__GLONASS    QGeoSatelliteInfo__SatelliteSystem = 2
	QGeoSatelliteInfo__GALILEO    QGeoSatelliteInfo__SatelliteSystem = 3
	QGeoSatelliteInfo__BEIDOU     QGeoSatelliteInfo__SatelliteSystem = 4
	QGeoSatelliteInfo__QZSS       QGeoSatelliteInfo__SatelliteSystem = 5
	QGeoSatelliteInfo__Multiple   QGeoSatelliteInfo__SatelliteSystem = 255
	QGeoSatelliteInfo__CustomType QGeoSatelliteInfo__SatelliteSystem = 256
)

type QGeoSatelliteInfo struct {
	h  *C.QGeoSatelliteInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoSatelliteInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(other)

	return newQGeoSatelliteInfo(C.QGeoSatelliteInfo_new2(other.cPointer()))
}

func (this *QGeoSatelliteInfo) OperatorAssign(other *QGeoSatelliteInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoSatelliteInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoSatelliteInfo) Swap(other *QGeoSatelliteInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoSatelliteInfo_swap(this.h, other.cPointer())
}

func (this *QGeoSatelliteInfo) SetSatelliteSystem(system QGeoSatelliteInfo__SatelliteSystem) {
	defer runtime.KeepAlive(this)
	C.QGeoSatelliteInfo_setSatelliteSystem(this.h, (C.int)(system))
}

func (this *QGeoSatelliteInfo) SatelliteSystem() QGeoSatelliteInfo__SatelliteSystem {
	defer runtime.KeepAlive(this)
	return (QGeoSatelliteInfo__SatelliteSystem)(C.QGeoSatelliteInfo_satelliteSystem(this.h))
}

func (this *QGeoSatelliteInfo) SetSatelliteIdentifier(satId int) {
	defer runtime.KeepAlive(this)
	C.QGeoSatelliteInfo_setSatelliteIdentifier(this.h, (C.int)(satId))
}

func (this *QGeoSatelliteInfo) SatelliteIdentifier() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QGeoSatelliteInfo_satelliteIdentifier(this.h))
}

func (this *QGeoSatelliteInfo) SetSignalStrength(signalStrength int) {
	defer runtime.KeepAlive(this)
	C.QGeoSatelliteInfo_setSignalStrength(this.h, (C.int)(signalStrength))
}

func (this *QGeoSatelliteInfo) SignalStrength() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QGeoSatelliteInfo_signalStrength(this.h))
}

func (this *QGeoSatelliteInfo) SetAttribute(attribute QGeoSatelliteInfo__Attribute, value float64) {
	defer runtime.KeepAlive(this)
	C.QGeoSatelliteInfo_setAttribute(this.h, (C.int)(attribute), (C.double)(value))
}

func (this *QGeoSatelliteInfo) Attribute(attribute QGeoSatelliteInfo__Attribute) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGeoSatelliteInfo_attribute(this.h, (C.int)(attribute)))
}

func (this *QGeoSatelliteInfo) RemoveAttribute(attribute QGeoSatelliteInfo__Attribute) {
	defer runtime.KeepAlive(this)
	C.QGeoSatelliteInfo_removeAttribute(this.h, (C.int)(attribute))
}

func (this *QGeoSatelliteInfo) HasAttribute(attribute QGeoSatelliteInfo__Attribute) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoSatelliteInfo_hasAttribute(this.h, (C.int)(attribute)))
}

func (this *QGeoSatelliteInfo) Detach() {
	defer runtime.KeepAlive(this)
	C.QGeoSatelliteInfo_detach(this.h)
}

// Delete this object from C++ memory.
func (this *QGeoSatelliteInfo) Delete() {
	C.QGeoSatelliteInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoSatelliteInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoSatelliteInfo_delete((*C.QGeoSatelliteInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}

func QTest_ToString3(info *QGeoSatelliteInfo) string {
	defer runtime.KeepAlive(info)
	_ret := C.miqt_QTest_ToString3(info.cPointer())
	return C.GoString(_ret)
}
