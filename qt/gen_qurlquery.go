package qt

/*

#include "gen_qurlquery.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QUrlQuery struct {
	h *C.QUrlQuery
}

func (this *QUrlQuery) cPointer() *C.QUrlQuery {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUrlQuery) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQUrlQuery(h *C.QUrlQuery) *QUrlQuery {
	if h == nil {
		return nil
	}
	return &QUrlQuery{h: h}
}

func UnsafeNewQUrlQuery(h unsafe.Pointer) *QUrlQuery {
	return newQUrlQuery((*C.QUrlQuery)(h))
}

// NewQUrlQuery constructs a new QUrlQuery object.
func NewQUrlQuery() *QUrlQuery {
	ret := C.QUrlQuery_new()
	return newQUrlQuery(ret)
}

// NewQUrlQuery2 constructs a new QUrlQuery object.
func NewQUrlQuery2(url *QUrl) *QUrlQuery {
	ret := C.QUrlQuery_new2(url.cPointer())
	return newQUrlQuery(ret)
}

// NewQUrlQuery3 constructs a new QUrlQuery object.
func NewQUrlQuery3(queryString string) *QUrlQuery {
	queryString_ms := C.struct_miqt_string{}
	queryString_ms.data = C.CString(queryString)
	queryString_ms.len = C.size_t(len(queryString))
	defer C.free(unsafe.Pointer(queryString_ms.data))
	ret := C.QUrlQuery_new3(queryString_ms)
	return newQUrlQuery(ret)
}

// NewQUrlQuery4 constructs a new QUrlQuery object.
func NewQUrlQuery4(other *QUrlQuery) *QUrlQuery {
	ret := C.QUrlQuery_new4(other.cPointer())
	return newQUrlQuery(ret)
}

func (this *QUrlQuery) OperatorAssign(other *QUrlQuery) {
	C.QUrlQuery_OperatorAssign(this.h, other.cPointer())
}

func (this *QUrlQuery) OperatorEqual(other *QUrlQuery) bool {
	return (bool)(C.QUrlQuery_OperatorEqual(this.h, other.cPointer()))
}

func (this *QUrlQuery) OperatorNotEqual(other *QUrlQuery) bool {
	return (bool)(C.QUrlQuery_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QUrlQuery) Swap(other *QUrlQuery) {
	C.QUrlQuery_Swap(this.h, other.cPointer())
}

func (this *QUrlQuery) IsEmpty() bool {
	return (bool)(C.QUrlQuery_IsEmpty(this.h))
}

func (this *QUrlQuery) IsDetached() bool {
	return (bool)(C.QUrlQuery_IsDetached(this.h))
}

func (this *QUrlQuery) Clear() {
	C.QUrlQuery_Clear(this.h)
}

func (this *QUrlQuery) Query() string {
	var _ms C.struct_miqt_string = C.QUrlQuery_Query(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrlQuery) SetQuery(queryString string) {
	queryString_ms := C.struct_miqt_string{}
	queryString_ms.data = C.CString(queryString)
	queryString_ms.len = C.size_t(len(queryString))
	defer C.free(unsafe.Pointer(queryString_ms.data))
	C.QUrlQuery_SetQuery(this.h, queryString_ms)
}

func (this *QUrlQuery) ToString() string {
	var _ms C.struct_miqt_string = C.QUrlQuery_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrlQuery) SetQueryDelimiters(valueDelimiter QChar, pairDelimiter QChar) {
	C.QUrlQuery_SetQueryDelimiters(this.h, valueDelimiter.cPointer(), pairDelimiter.cPointer())
}

func (this *QUrlQuery) QueryValueDelimiter() *QChar {
	_ret := C.QUrlQuery_QueryValueDelimiter(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUrlQuery) QueryPairDelimiter() *QChar {
	_ret := C.QUrlQuery_QueryPairDelimiter(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUrlQuery) HasQueryItem(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QUrlQuery_HasQueryItem(this.h, key_ms))
}

func (this *QUrlQuery) AddQueryItem(key string, value string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QUrlQuery_AddQueryItem(this.h, key_ms, value_ms)
}

func (this *QUrlQuery) RemoveQueryItem(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QUrlQuery_RemoveQueryItem(this.h, key_ms)
}

func (this *QUrlQuery) QueryItemValue(key string) string {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	var _ms C.struct_miqt_string = C.QUrlQuery_QueryItemValue(this.h, key_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrlQuery) AllQueryItemValues(key string) []string {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	var _ma C.struct_miqt_array = C.QUrlQuery_AllQueryItemValues(this.h, key_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QUrlQuery) RemoveAllQueryItems(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QUrlQuery_RemoveAllQueryItems(this.h, key_ms)
}

func QUrlQuery_DefaultQueryValueDelimiter() *QChar {
	_ret := C.QUrlQuery_DefaultQueryValueDelimiter()
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUrlQuery_DefaultQueryPairDelimiter() *QChar {
	_ret := C.QUrlQuery_DefaultQueryPairDelimiter()
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUrlQuery) Query1(encoding QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrlQuery_Query1(this.h, (C.int)(encoding))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrlQuery) ToString1(encoding QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrlQuery_ToString1(this.h, (C.int)(encoding))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrlQuery) QueryItemValue2(key string, encoding QUrl__ComponentFormattingOption) string {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	var _ms C.struct_miqt_string = C.QUrlQuery_QueryItemValue2(this.h, key_ms, (C.int)(encoding))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrlQuery) AllQueryItemValues2(key string, encoding QUrl__ComponentFormattingOption) []string {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	var _ma C.struct_miqt_array = C.QUrlQuery_AllQueryItemValues2(this.h, key_ms, (C.int)(encoding))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QUrlQuery) Delete() {
	C.QUrlQuery_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUrlQuery) GoGC() {
	runtime.SetFinalizer(this, func(this *QUrlQuery) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
