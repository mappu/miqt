package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQUrlQuery(h *C.QUrlQuery) *QUrlQuery {
	return &QUrlQuery{h: h}
}

func newQUrlQuery_U(h unsafe.Pointer) *QUrlQuery {
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
	queryString_Cstring := C.CString(queryString)
	defer C.free(unsafe.Pointer(queryString_Cstring))
	ret := C.QUrlQuery_new3(queryString_Cstring, C.ulong(len(queryString)))
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
	ret := C.QUrlQuery_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QUrlQuery) OperatorNotEqual(other *QUrlQuery) bool {
	ret := C.QUrlQuery_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QUrlQuery) Swap(other *QUrlQuery) {
	C.QUrlQuery_Swap(this.h, other.cPointer())
}

func (this *QUrlQuery) IsEmpty() bool {
	ret := C.QUrlQuery_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QUrlQuery) IsDetached() bool {
	ret := C.QUrlQuery_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QUrlQuery) Clear() {
	C.QUrlQuery_Clear(this.h)
}

func (this *QUrlQuery) SetQuery(queryString string) {
	queryString_Cstring := C.CString(queryString)
	defer C.free(unsafe.Pointer(queryString_Cstring))
	C.QUrlQuery_SetQuery(this.h, queryString_Cstring, C.ulong(len(queryString)))
}

func (this *QUrlQuery) SetQueryDelimiters(valueDelimiter QChar, pairDelimiter QChar) {
	C.QUrlQuery_SetQueryDelimiters(this.h, valueDelimiter.cPointer(), pairDelimiter.cPointer())
}

func (this *QUrlQuery) QueryValueDelimiter() *QChar {
	ret := C.QUrlQuery_QueryValueDelimiter(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrlQuery) QueryPairDelimiter() *QChar {
	ret := C.QUrlQuery_QueryPairDelimiter(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrlQuery) HasQueryItem(key string) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QUrlQuery_HasQueryItem(this.h, key_Cstring, C.ulong(len(key)))
	return (bool)(ret)
}

func (this *QUrlQuery) AddQueryItem(key string, value string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.QUrlQuery_AddQueryItem(this.h, key_Cstring, C.ulong(len(key)), value_Cstring, C.ulong(len(value)))
}

func (this *QUrlQuery) RemoveQueryItem(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QUrlQuery_RemoveQueryItem(this.h, key_Cstring, C.ulong(len(key)))
}

func (this *QUrlQuery) RemoveAllQueryItems(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QUrlQuery_RemoveAllQueryItems(this.h, key_Cstring, C.ulong(len(key)))
}

func QUrlQuery_DefaultQueryValueDelimiter() *QChar {
	ret := C.QUrlQuery_DefaultQueryValueDelimiter()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrlQuery_DefaultQueryPairDelimiter() *QChar {
	ret := C.QUrlQuery_DefaultQueryPairDelimiter()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrlQuery) Delete() {
	C.QUrlQuery_Delete(this.h)
}
