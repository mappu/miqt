package positioning

/*

#include "gen_qgeopositioninfosourcefactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QGeoPositionInfoSourceFactory struct {
	h *C.QGeoPositionInfoSourceFactory
}

func (this *QGeoPositionInfoSourceFactory) cPointer() *C.QGeoPositionInfoSourceFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoPositionInfoSourceFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoPositionInfoSourceFactory constructs the type using only CGO pointers.
func newQGeoPositionInfoSourceFactory(h *C.QGeoPositionInfoSourceFactory) *QGeoPositionInfoSourceFactory {
	if h == nil {
		return nil
	}

	return &QGeoPositionInfoSourceFactory{h: h}
}

// UnsafeNewQGeoPositionInfoSourceFactory constructs the type using only unsafe pointers.
func UnsafeNewQGeoPositionInfoSourceFactory(h unsafe.Pointer) *QGeoPositionInfoSourceFactory {
	return newQGeoPositionInfoSourceFactory((*C.QGeoPositionInfoSourceFactory)(h))
}

func (this *QGeoPositionInfoSourceFactory) PositionInfoSource(parent *qt6.QObject, parameters map[string]qt6.QVariant) *QGeoPositionInfoSource {
	parameters_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray))
	parameters_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray))
	parameters_ctr := 0
	for parameters_k, parameters_v := range parameters {
		parameters_k_ms := C.struct_miqt_string{}
		parameters_k_ms.data = C.CString(parameters_k)
		parameters_k_ms.len = C.size_t(len(parameters_k))
		defer C.free(unsafe.Pointer(parameters_k_ms.data))
		parameters_Keys_CArray[parameters_ctr] = parameters_k_ms
		parameters_Values_CArray[parameters_ctr] = (*C.QVariant)(parameters_v.UnsafePointer())
		parameters_ctr++
	}
	parameters_mm := C.struct_miqt_map{
		len:    C.size_t(len(parameters)),
		keys:   unsafe.Pointer(parameters_Keys_CArray),
		values: unsafe.Pointer(parameters_Values_CArray),
	}
	return newQGeoPositionInfoSource(C.QGeoPositionInfoSourceFactory_positionInfoSource(this.h, (*C.QObject)(parent.UnsafePointer()), parameters_mm))
}

func (this *QGeoPositionInfoSourceFactory) SatelliteInfoSource(parent *qt6.QObject, parameters map[string]qt6.QVariant) *QGeoSatelliteInfoSource {
	parameters_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray))
	parameters_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray))
	parameters_ctr := 0
	for parameters_k, parameters_v := range parameters {
		parameters_k_ms := C.struct_miqt_string{}
		parameters_k_ms.data = C.CString(parameters_k)
		parameters_k_ms.len = C.size_t(len(parameters_k))
		defer C.free(unsafe.Pointer(parameters_k_ms.data))
		parameters_Keys_CArray[parameters_ctr] = parameters_k_ms
		parameters_Values_CArray[parameters_ctr] = (*C.QVariant)(parameters_v.UnsafePointer())
		parameters_ctr++
	}
	parameters_mm := C.struct_miqt_map{
		len:    C.size_t(len(parameters)),
		keys:   unsafe.Pointer(parameters_Keys_CArray),
		values: unsafe.Pointer(parameters_Values_CArray),
	}
	return newQGeoSatelliteInfoSource(C.QGeoPositionInfoSourceFactory_satelliteInfoSource(this.h, (*C.QObject)(parent.UnsafePointer()), parameters_mm))
}

func (this *QGeoPositionInfoSourceFactory) AreaMonitor(parent *qt6.QObject, parameters map[string]qt6.QVariant) *QGeoAreaMonitorSource {
	parameters_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray))
	parameters_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray))
	parameters_ctr := 0
	for parameters_k, parameters_v := range parameters {
		parameters_k_ms := C.struct_miqt_string{}
		parameters_k_ms.data = C.CString(parameters_k)
		parameters_k_ms.len = C.size_t(len(parameters_k))
		defer C.free(unsafe.Pointer(parameters_k_ms.data))
		parameters_Keys_CArray[parameters_ctr] = parameters_k_ms
		parameters_Values_CArray[parameters_ctr] = (*C.QVariant)(parameters_v.UnsafePointer())
		parameters_ctr++
	}
	parameters_mm := C.struct_miqt_map{
		len:    C.size_t(len(parameters)),
		keys:   unsafe.Pointer(parameters_Keys_CArray),
		values: unsafe.Pointer(parameters_Values_CArray),
	}
	return newQGeoAreaMonitorSource(C.QGeoPositionInfoSourceFactory_areaMonitor(this.h, (*C.QObject)(parent.UnsafePointer()), parameters_mm))
}

func (this *QGeoPositionInfoSourceFactory) OperatorAssign(param1 *QGeoPositionInfoSourceFactory) {
	C.QGeoPositionInfoSourceFactory_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QGeoPositionInfoSourceFactory) Delete() {
	C.QGeoPositionInfoSourceFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoPositionInfoSourceFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoPositionInfoSourceFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
