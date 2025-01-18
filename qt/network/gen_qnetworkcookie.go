package network

/*

#include "gen_qnetworkcookie.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QNetworkCookie__RawForm int

const (
	QNetworkCookie__NameAndValueOnly QNetworkCookie__RawForm = 0
	QNetworkCookie__Full             QNetworkCookie__RawForm = 1
)

type QNetworkCookie struct {
	h          *C.QNetworkCookie
	isSubclass bool
}

func (this *QNetworkCookie) cPointer() *C.QNetworkCookie {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkCookie) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkCookie constructs the type using only CGO pointers.
func newQNetworkCookie(h *C.QNetworkCookie) *QNetworkCookie {
	if h == nil {
		return nil
	}

	return &QNetworkCookie{h: h}
}

// UnsafeNewQNetworkCookie constructs the type using only unsafe pointers.
func UnsafeNewQNetworkCookie(h unsafe.Pointer) *QNetworkCookie {
	return newQNetworkCookie((*C.QNetworkCookie)(h))
}

// NewQNetworkCookie constructs a new QNetworkCookie object.
func NewQNetworkCookie() *QNetworkCookie {

	ret := newQNetworkCookie(C.QNetworkCookie_new())
	ret.isSubclass = true
	return ret
}

// NewQNetworkCookie2 constructs a new QNetworkCookie object.
func NewQNetworkCookie2(other *QNetworkCookie) *QNetworkCookie {

	ret := newQNetworkCookie(C.QNetworkCookie_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQNetworkCookie3 constructs a new QNetworkCookie object.
func NewQNetworkCookie3(name []byte) *QNetworkCookie {
	name_alias := C.struct_miqt_string{}
	name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	name_alias.len = C.size_t(len(name))

	ret := newQNetworkCookie(C.QNetworkCookie_new3(name_alias))
	ret.isSubclass = true
	return ret
}

// NewQNetworkCookie4 constructs a new QNetworkCookie object.
func NewQNetworkCookie4(name []byte, value []byte) *QNetworkCookie {
	name_alias := C.struct_miqt_string{}
	name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	name_alias.len = C.size_t(len(name))
	value_alias := C.struct_miqt_string{}
	value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	value_alias.len = C.size_t(len(value))

	ret := newQNetworkCookie(C.QNetworkCookie_new4(name_alias, value_alias))
	ret.isSubclass = true
	return ret
}

func (this *QNetworkCookie) OperatorAssign(other *QNetworkCookie) {
	C.QNetworkCookie_OperatorAssign(this.h, other.cPointer())
}

func (this *QNetworkCookie) Swap(other *QNetworkCookie) {
	C.QNetworkCookie_Swap(this.h, other.cPointer())
}

func (this *QNetworkCookie) OperatorEqual(other *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookie_OperatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkCookie) OperatorNotEqual(other *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookie_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkCookie) IsSecure() bool {
	return (bool)(C.QNetworkCookie_IsSecure(this.h))
}

func (this *QNetworkCookie) SetSecure(enable bool) {
	C.QNetworkCookie_SetSecure(this.h, (C.bool)(enable))
}

func (this *QNetworkCookie) IsHttpOnly() bool {
	return (bool)(C.QNetworkCookie_IsHttpOnly(this.h))
}

func (this *QNetworkCookie) SetHttpOnly(enable bool) {
	C.QNetworkCookie_SetHttpOnly(this.h, (C.bool)(enable))
}

func (this *QNetworkCookie) IsSessionCookie() bool {
	return (bool)(C.QNetworkCookie_IsSessionCookie(this.h))
}

func (this *QNetworkCookie) ExpirationDate() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QNetworkCookie_ExpirationDate(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCookie) SetExpirationDate(date *qt.QDateTime) {
	C.QNetworkCookie_SetExpirationDate(this.h, (*C.QDateTime)(date.UnsafePointer()))
}

func (this *QNetworkCookie) Domain() string {
	var _ms C.struct_miqt_string = C.QNetworkCookie_Domain(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookie) SetDomain(domain string) {
	domain_ms := C.struct_miqt_string{}
	domain_ms.data = C.CString(domain)
	domain_ms.len = C.size_t(len(domain))
	defer C.free(unsafe.Pointer(domain_ms.data))
	C.QNetworkCookie_SetDomain(this.h, domain_ms)
}

func (this *QNetworkCookie) Path() string {
	var _ms C.struct_miqt_string = C.QNetworkCookie_Path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookie) SetPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QNetworkCookie_SetPath(this.h, path_ms)
}

func (this *QNetworkCookie) Name() []byte {
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_Name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkCookie) SetName(cookieName []byte) {
	cookieName_alias := C.struct_miqt_string{}
	cookieName_alias.data = (*C.char)(unsafe.Pointer(&cookieName[0]))
	cookieName_alias.len = C.size_t(len(cookieName))
	C.QNetworkCookie_SetName(this.h, cookieName_alias)
}

func (this *QNetworkCookie) Value() []byte {
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_Value(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkCookie) SetValue(value []byte) {
	value_alias := C.struct_miqt_string{}
	value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	value_alias.len = C.size_t(len(value))
	C.QNetworkCookie_SetValue(this.h, value_alias)
}

func (this *QNetworkCookie) ToRawForm() []byte {
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_ToRawForm(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkCookie) HasSameIdentifier(other *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookie_HasSameIdentifier(this.h, other.cPointer()))
}

func (this *QNetworkCookie) Normalize(url *qt.QUrl) {
	C.QNetworkCookie_Normalize(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func QNetworkCookie_ParseCookies(cookieString []byte) []QNetworkCookie {
	cookieString_alias := C.struct_miqt_string{}
	cookieString_alias.data = (*C.char)(unsafe.Pointer(&cookieString[0]))
	cookieString_alias.len = C.size_t(len(cookieString))
	var _ma C.struct_miqt_array = C.QNetworkCookie_ParseCookies(cookieString_alias)
	_ret := make([]QNetworkCookie, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkCookie)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkCookie(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkCookie) ToRawForm1(form QNetworkCookie__RawForm) []byte {
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_ToRawForm1(this.h, (C.int)(form))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QNetworkCookie) Delete() {
	C.QNetworkCookie_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkCookie) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkCookie) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
