package positioning

/*

#include "gen_qgeoareamonitorinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QGeoAreaMonitorInfo struct {
	h *C.QGeoAreaMonitorInfo
}

func (this *QGeoAreaMonitorInfo) cPointer() *C.QGeoAreaMonitorInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoAreaMonitorInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoAreaMonitorInfo constructs the type using only CGO pointers.
func newQGeoAreaMonitorInfo(h *C.QGeoAreaMonitorInfo) *QGeoAreaMonitorInfo {
	if h == nil {
		return nil
	}

	return &QGeoAreaMonitorInfo{h: h}
}

// UnsafeNewQGeoAreaMonitorInfo constructs the type using only unsafe pointers.
func UnsafeNewQGeoAreaMonitorInfo(h unsafe.Pointer) *QGeoAreaMonitorInfo {
	return newQGeoAreaMonitorInfo((*C.QGeoAreaMonitorInfo)(h))
}

// NewQGeoAreaMonitorInfo constructs a new QGeoAreaMonitorInfo object.
func NewQGeoAreaMonitorInfo() *QGeoAreaMonitorInfo {

	return newQGeoAreaMonitorInfo(C.QGeoAreaMonitorInfo_new())
}

// NewQGeoAreaMonitorInfo2 constructs a new QGeoAreaMonitorInfo object.
func NewQGeoAreaMonitorInfo2(other *QGeoAreaMonitorInfo) *QGeoAreaMonitorInfo {

	return newQGeoAreaMonitorInfo(C.QGeoAreaMonitorInfo_new2(other.cPointer()))
}

// NewQGeoAreaMonitorInfo3 constructs a new QGeoAreaMonitorInfo object.
func NewQGeoAreaMonitorInfo3(name string) *QGeoAreaMonitorInfo {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQGeoAreaMonitorInfo(C.QGeoAreaMonitorInfo_new3(name_ms))
}

func (this *QGeoAreaMonitorInfo) OperatorAssign(other *QGeoAreaMonitorInfo) {
	C.QGeoAreaMonitorInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoAreaMonitorInfo) Swap(other *QGeoAreaMonitorInfo) {
	C.QGeoAreaMonitorInfo_swap(this.h, other.cPointer())
}

func (this *QGeoAreaMonitorInfo) Name() string {
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorInfo_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAreaMonitorInfo) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QGeoAreaMonitorInfo_setName(this.h, name_ms)
}

func (this *QGeoAreaMonitorInfo) Identifier() string {
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorInfo_identifier(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAreaMonitorInfo) IsValid() bool {
	return (bool)(C.QGeoAreaMonitorInfo_isValid(this.h))
}

func (this *QGeoAreaMonitorInfo) Area() *QGeoShape {
	_goptr := newQGeoShape(C.QGeoAreaMonitorInfo_area(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoAreaMonitorInfo) SetArea(newShape *QGeoShape) {
	C.QGeoAreaMonitorInfo_setArea(this.h, newShape.cPointer())
}

func (this *QGeoAreaMonitorInfo) Expiration() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QGeoAreaMonitorInfo_expiration(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoAreaMonitorInfo) SetExpiration(expiry *qt6.QDateTime) {
	C.QGeoAreaMonitorInfo_setExpiration(this.h, (*C.QDateTime)(expiry.UnsafePointer()))
}

func (this *QGeoAreaMonitorInfo) IsPersistent() bool {
	return (bool)(C.QGeoAreaMonitorInfo_isPersistent(this.h))
}

func (this *QGeoAreaMonitorInfo) SetPersistent(isPersistent bool) {
	C.QGeoAreaMonitorInfo_setPersistent(this.h, (C.bool)(isPersistent))
}

func (this *QGeoAreaMonitorInfo) NotificationParameters() map[string]qt6.QVariant {
	var _mm C.struct_miqt_map = C.QGeoAreaMonitorInfo_notificationParameters(this.h)
	_ret := make(map[string]qt6.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QGeoAreaMonitorInfo) SetNotificationParameters(parameters map[string]qt6.QVariant) {
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
	C.QGeoAreaMonitorInfo_setNotificationParameters(this.h, parameters_mm)
}

func (this *QGeoAreaMonitorInfo) Detach() {
	C.QGeoAreaMonitorInfo_detach(this.h)
}

// Delete this object from C++ memory.
func (this *QGeoAreaMonitorInfo) Delete() {
	C.QGeoAreaMonitorInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoAreaMonitorInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoAreaMonitorInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
