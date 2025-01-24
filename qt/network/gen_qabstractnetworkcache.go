package network

/*

#include "gen_qabstractnetworkcache.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QNetworkCacheMetaData struct {
	h *C.QNetworkCacheMetaData
}

func (this *QNetworkCacheMetaData) cPointer() *C.QNetworkCacheMetaData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkCacheMetaData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkCacheMetaData constructs the type using only CGO pointers.
func newQNetworkCacheMetaData(h *C.QNetworkCacheMetaData) *QNetworkCacheMetaData {
	if h == nil {
		return nil
	}

	return &QNetworkCacheMetaData{h: h}
}

// UnsafeNewQNetworkCacheMetaData constructs the type using only unsafe pointers.
func UnsafeNewQNetworkCacheMetaData(h unsafe.Pointer) *QNetworkCacheMetaData {
	return newQNetworkCacheMetaData((*C.QNetworkCacheMetaData)(h))
}

// NewQNetworkCacheMetaData constructs a new QNetworkCacheMetaData object.
func NewQNetworkCacheMetaData() *QNetworkCacheMetaData {

	return newQNetworkCacheMetaData(C.QNetworkCacheMetaData_new())
}

// NewQNetworkCacheMetaData2 constructs a new QNetworkCacheMetaData object.
func NewQNetworkCacheMetaData2(other *QNetworkCacheMetaData) *QNetworkCacheMetaData {

	return newQNetworkCacheMetaData(C.QNetworkCacheMetaData_new2(other.cPointer()))
}

func (this *QNetworkCacheMetaData) OperatorAssign(other *QNetworkCacheMetaData) {
	C.QNetworkCacheMetaData_OperatorAssign(this.h, other.cPointer())
}

func (this *QNetworkCacheMetaData) Swap(other *QNetworkCacheMetaData) {
	C.QNetworkCacheMetaData_Swap(this.h, other.cPointer())
}

func (this *QNetworkCacheMetaData) OperatorEqual(other *QNetworkCacheMetaData) bool {
	return (bool)(C.QNetworkCacheMetaData_OperatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkCacheMetaData) OperatorNotEqual(other *QNetworkCacheMetaData) bool {
	return (bool)(C.QNetworkCacheMetaData_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkCacheMetaData) IsValid() bool {
	return (bool)(C.QNetworkCacheMetaData_IsValid(this.h))
}

func (this *QNetworkCacheMetaData) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QNetworkCacheMetaData_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCacheMetaData) SetUrl(url *qt.QUrl) {
	C.QNetworkCacheMetaData_SetUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QNetworkCacheMetaData) RawHeaders() []struct {
	First  []byte
	Second []byte
} {
	var _ma C.struct_miqt_array = C.QNetworkCacheMetaData_RawHeaders(this.h)
	_ret := make([]struct {
		First  []byte
		Second []byte
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_lv_mm.values))
		var _lv_first_bytearray C.struct_miqt_string = _lv_First_CArray[0]
		_lv_first_ret := C.GoBytes(unsafe.Pointer(_lv_first_bytearray.data), C.int(int64(_lv_first_bytearray.len)))
		C.free(unsafe.Pointer(_lv_first_bytearray.data))
		_lv_entry_First := _lv_first_ret
		var _lv_second_bytearray C.struct_miqt_string = _lv_Second_CArray[0]
		_lv_second_ret := C.GoBytes(unsafe.Pointer(_lv_second_bytearray.data), C.int(int64(_lv_second_bytearray.len)))
		C.free(unsafe.Pointer(_lv_second_bytearray.data))
		_lv_entry_Second := _lv_second_ret
		_ret[i] = struct {
			First  []byte
			Second []byte
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QNetworkCacheMetaData) SetRawHeaders(headers []struct {
	First  []byte
	Second []byte
}) {
	headers_CArray := (*[0xffff]C.struct_miqt_map)(C.malloc(C.size_t(8 * len(headers))))
	defer C.free(unsafe.Pointer(headers_CArray))
	for i := range headers {
		headers_i_First_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})))))
		defer C.free(unsafe.Pointer(headers_i_First_CArray))
		headers_i_Second_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})))))
		defer C.free(unsafe.Pointer(headers_i_Second_CArray))
		headers_i_First_alias := C.struct_miqt_string{}
		if len(headers[i].First) > 0 {
			headers_i_First_alias.data = (*C.char)(unsafe.Pointer(&headers[i].First[0]))
		} else {
			headers_i_First_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		headers_i_First_alias.len = C.size_t(len(headers[i].First))
		headers_i_First_CArray[0] = headers_i_First_alias
		headers_i_Second_alias := C.struct_miqt_string{}
		if len(headers[i].Second) > 0 {
			headers_i_Second_alias.data = (*C.char)(unsafe.Pointer(&headers[i].Second[0]))
		} else {
			headers_i_Second_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		headers_i_Second_alias.len = C.size_t(len(headers[i].Second))
		headers_i_Second_CArray[0] = headers_i_Second_alias
		headers_i_pair := C.struct_miqt_map{
			len:    1,
			keys:   unsafe.Pointer(headers_i_First_CArray),
			values: unsafe.Pointer(headers_i_Second_CArray),
		}
		headers_CArray[i] = headers_i_pair
	}
	headers_ma := C.struct_miqt_array{len: C.size_t(len(headers)), data: unsafe.Pointer(headers_CArray)}
	C.QNetworkCacheMetaData_SetRawHeaders(this.h, headers_ma)
}

func (this *QNetworkCacheMetaData) LastModified() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QNetworkCacheMetaData_LastModified(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCacheMetaData) SetLastModified(dateTime *qt.QDateTime) {
	C.QNetworkCacheMetaData_SetLastModified(this.h, (*C.QDateTime)(dateTime.UnsafePointer()))
}

func (this *QNetworkCacheMetaData) ExpirationDate() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QNetworkCacheMetaData_ExpirationDate(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCacheMetaData) SetExpirationDate(dateTime *qt.QDateTime) {
	C.QNetworkCacheMetaData_SetExpirationDate(this.h, (*C.QDateTime)(dateTime.UnsafePointer()))
}

func (this *QNetworkCacheMetaData) SaveToDisk() bool {
	return (bool)(C.QNetworkCacheMetaData_SaveToDisk(this.h))
}

func (this *QNetworkCacheMetaData) SetSaveToDisk(allow bool) {
	C.QNetworkCacheMetaData_SetSaveToDisk(this.h, (C.bool)(allow))
}

func (this *QNetworkCacheMetaData) Attributes() map[QNetworkRequest__Attribute]qt.QVariant {
	var _mm C.struct_miqt_map = C.QNetworkCacheMetaData_Attributes(this.h)
	_ret := make(map[QNetworkRequest__Attribute]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (QNetworkRequest__Attribute)(_Keys[i])

		_hashval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QNetworkCacheMetaData) SetAttributes(attributes map[QNetworkRequest__Attribute]qt.QVariant) {
	attributes_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(attributes))))
	defer C.free(unsafe.Pointer(attributes_Keys_CArray))
	attributes_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(attributes))))
	defer C.free(unsafe.Pointer(attributes_Values_CArray))
	attributes_ctr := 0
	for attributes_k, attributes_v := range attributes {
		attributes_Keys_CArray[attributes_ctr] = (C.int)(attributes_k)
		attributes_Values_CArray[attributes_ctr] = (*C.QVariant)(attributes_v.UnsafePointer())
		attributes_ctr++
	}
	attributes_mm := C.struct_miqt_map{
		len:    C.size_t(len(attributes)),
		keys:   unsafe.Pointer(attributes_Keys_CArray),
		values: unsafe.Pointer(attributes_Values_CArray),
	}
	C.QNetworkCacheMetaData_SetAttributes(this.h, attributes_mm)
}

// Delete this object from C++ memory.
func (this *QNetworkCacheMetaData) Delete() {
	C.QNetworkCacheMetaData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkCacheMetaData) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkCacheMetaData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractNetworkCache struct {
	h *C.QAbstractNetworkCache
	*qt.QObject
}

func (this *QAbstractNetworkCache) cPointer() *C.QAbstractNetworkCache {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractNetworkCache) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractNetworkCache constructs the type using only CGO pointers.
func newQAbstractNetworkCache(h *C.QAbstractNetworkCache) *QAbstractNetworkCache {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractNetworkCache_virtbase(h, &outptr_QObject)

	return &QAbstractNetworkCache{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAbstractNetworkCache constructs the type using only unsafe pointers.
func UnsafeNewQAbstractNetworkCache(h unsafe.Pointer) *QAbstractNetworkCache {
	return newQAbstractNetworkCache((*C.QAbstractNetworkCache)(h))
}

func (this *QAbstractNetworkCache) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractNetworkCache_MetaObject(this.h)))
}

func (this *QAbstractNetworkCache) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractNetworkCache_Metacast(this.h, param1_Cstring))
}

func QAbstractNetworkCache_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractNetworkCache_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractNetworkCache) MetaData(url *qt.QUrl) *QNetworkCacheMetaData {
	_goptr := newQNetworkCacheMetaData(C.QAbstractNetworkCache_MetaData(this.h, (*C.QUrl)(url.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractNetworkCache) UpdateMetaData(metaData *QNetworkCacheMetaData) {
	C.QAbstractNetworkCache_UpdateMetaData(this.h, metaData.cPointer())
}

func (this *QAbstractNetworkCache) Data(url *qt.QUrl) *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QAbstractNetworkCache_Data(this.h, (*C.QUrl)(url.UnsafePointer()))))
}

func (this *QAbstractNetworkCache) Remove(url *qt.QUrl) bool {
	return (bool)(C.QAbstractNetworkCache_Remove(this.h, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QAbstractNetworkCache) CacheSize() int64 {
	return (int64)(C.QAbstractNetworkCache_CacheSize(this.h))
}

func (this *QAbstractNetworkCache) Prepare(metaData *QNetworkCacheMetaData) *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QAbstractNetworkCache_Prepare(this.h, metaData.cPointer())))
}

func (this *QAbstractNetworkCache) Insert(device *qt.QIODevice) {
	C.QAbstractNetworkCache_Insert(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAbstractNetworkCache) Clear() {
	C.QAbstractNetworkCache_Clear(this.h)
}

func QAbstractNetworkCache_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractNetworkCache_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractNetworkCache_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractNetworkCache_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractNetworkCache) Delete() {
	C.QAbstractNetworkCache_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractNetworkCache) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractNetworkCache) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
