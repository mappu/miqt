package positioning

/*

#include "gen_qgeoareamonitorinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QGeoAreaMonitorInfo struct {
	h  *C.QGeoAreaMonitorInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoAreaMonitorInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(other)

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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoAreaMonitorInfo_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoAreaMonitorInfo) OperatorEqual(other *QGeoAreaMonitorInfo) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoAreaMonitorInfo_operatorEqual(this.h, other.cPointer()))
}

func (this *QGeoAreaMonitorInfo) OperatorNotEqual(other *QGeoAreaMonitorInfo) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGeoAreaMonitorInfo_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGeoAreaMonitorInfo) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorInfo_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAreaMonitorInfo) SetName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QGeoAreaMonitorInfo_setName(this.h, name_ms)
}

func (this *QGeoAreaMonitorInfo) Identifier() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorInfo_identifier(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAreaMonitorInfo) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoAreaMonitorInfo_isValid(this.h))
}

func (this *QGeoAreaMonitorInfo) Area() *QGeoShape {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoShape(C.QGeoAreaMonitorInfo_area(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoAreaMonitorInfo) SetArea(newShape *QGeoShape) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(newShape)
	C.QGeoAreaMonitorInfo_setArea(this.h, newShape.cPointer())
}

func (this *QGeoAreaMonitorInfo) Expiration() *qt.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QGeoAreaMonitorInfo_expiration(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoAreaMonitorInfo) SetExpiration(expiry *qt.QDateTime) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(expiry)
	C.QGeoAreaMonitorInfo_setExpiration(this.h, (*C.QDateTime)(expiry.UnsafePointer()))
}

func (this *QGeoAreaMonitorInfo) IsPersistent() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoAreaMonitorInfo_isPersistent(this.h))
}

func (this *QGeoAreaMonitorInfo) SetPersistent(isPersistent bool) {
	defer runtime.KeepAlive(this)
	C.QGeoAreaMonitorInfo_setPersistent(this.h, (C.bool)(isPersistent))
}

func (this *QGeoAreaMonitorInfo) NotificationParameters() map[string]qt.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QGeoAreaMonitorInfo_notificationParameters(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QGeoAreaMonitorInfo) SetNotificationParameters(parameters map[string]qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parameters)
	parameters_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray_ptr))
	parameters_Keys_CArray := unsafe.Slice(parameters_Keys_CArray_ptr, len(parameters))
	parameters_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray_ptr))
	parameters_Values_CArray := unsafe.Slice(parameters_Values_CArray_ptr, len(parameters))
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
		keys:   unsafe.Pointer(parameters_Keys_CArray_ptr),
		values: unsafe.Pointer(parameters_Values_CArray_ptr),
	}
	C.QGeoAreaMonitorInfo_setNotificationParameters(this.h, parameters_mm)
}

// Delete this object from C++ memory.
func (this *QGeoAreaMonitorInfo) Delete() {
	C.QGeoAreaMonitorInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoAreaMonitorInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoAreaMonitorInfo_delete((*C.QGeoAreaMonitorInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}
