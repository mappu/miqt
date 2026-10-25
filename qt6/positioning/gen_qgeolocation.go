package positioning

/*

#include "gen_qgeolocation.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QGeoLocation struct {
	h  *C.QGeoLocation
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoLocation) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QGeoLocation) cPointer() *C.QGeoLocation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoLocation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoLocation constructs the type using only CGO pointers.
func newQGeoLocation(h *C.QGeoLocation) *QGeoLocation {
	if h == nil {
		return nil
	}

	return &QGeoLocation{h: h}
}

// UnsafeNewQGeoLocation constructs the type using only unsafe pointers.
func UnsafeNewQGeoLocation(h unsafe.Pointer) *QGeoLocation {
	return newQGeoLocation((*C.QGeoLocation)(h))
}

// NewQGeoLocation constructs a new QGeoLocation object.
func NewQGeoLocation() *QGeoLocation {

	return newQGeoLocation(C.QGeoLocation_new())
}

// NewQGeoLocation2 constructs a new QGeoLocation object.
func NewQGeoLocation2(other *QGeoLocation) *QGeoLocation {
	defer runtime.KeepAlive(other)

	return newQGeoLocation(C.QGeoLocation_new2(other.cPointer()))
}

func (this *QGeoLocation) OperatorAssign(other *QGeoLocation) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoLocation_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoLocation) Swap(other *QGeoLocation) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoLocation_swap(this.h, other.cPointer())
}

func (this *QGeoLocation) Address() *QGeoAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoAddress(C.QGeoLocation_address(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoLocation) SetAddress(address *QGeoAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(address)
	C.QGeoLocation_setAddress(this.h, address.cPointer())
}

func (this *QGeoLocation) Coordinate() *QGeoCoordinate {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoCoordinate(C.QGeoLocation_coordinate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoLocation) SetCoordinate(position *QGeoCoordinate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(position)
	C.QGeoLocation_setCoordinate(this.h, position.cPointer())
}

func (this *QGeoLocation) BoundingShape() *QGeoShape {
	defer runtime.KeepAlive(this)
	_goptr := newQGeoShape(C.QGeoLocation_boundingShape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoLocation) SetBoundingShape(shape *QGeoShape) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(shape)
	C.QGeoLocation_setBoundingShape(this.h, shape.cPointer())
}

func (this *QGeoLocation) ExtendedAttributes() map[string]qt6.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QGeoLocation_extendedAttributes(this.h)
	_ret := make(map[string]qt6.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
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

func (this *QGeoLocation) SetExtendedAttributes(data map[string]qt6.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	data_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(data))))
	defer C.free(unsafe.Pointer(data_Keys_CArray_ptr))
	data_Keys_CArray := unsafe.Slice(data_Keys_CArray_ptr, len(data))
	data_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_Values_CArray_ptr))
	data_Values_CArray := unsafe.Slice(data_Values_CArray_ptr, len(data))
	data_ctr := 0
	for data_k, data_v := range data {
		data_k_ms := C.struct_miqt_string{}
		data_k_ms.data = C.CString(data_k)
		data_k_ms.len = C.size_t(len(data_k))
		defer C.free(unsafe.Pointer(data_k_ms.data))
		data_Keys_CArray[data_ctr] = data_k_ms
		data_Values_CArray[data_ctr] = (*C.QVariant)(data_v.UnsafePointer())
		data_ctr++
	}
	data_mm := C.struct_miqt_map{
		len:    C.size_t(len(data)),
		keys:   unsafe.Pointer(data_Keys_CArray_ptr),
		values: unsafe.Pointer(data_Values_CArray_ptr),
	}
	C.QGeoLocation_setExtendedAttributes(this.h, data_mm)
}

func (this *QGeoLocation) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoLocation_isEmpty(this.h))
}

// Delete this object from C++ memory.
func (this *QGeoLocation) Delete() {
	C.QGeoLocation_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoLocation) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoLocation_delete((*C.QGeoLocation)(gc[0]))
	})
	this.miqtSetGC(gc)
}
