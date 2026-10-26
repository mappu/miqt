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
	h  *C.QNetworkCookie
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QNetworkCookie) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQNetworkCookie(C.QNetworkCookie_new())
}

// NewQNetworkCookie2 constructs a new QNetworkCookie object.
func NewQNetworkCookie2(other *QNetworkCookie) *QNetworkCookie {
	defer runtime.KeepAlive(other)

	return newQNetworkCookie(C.QNetworkCookie_new2(other.cPointer()))
}

// NewQNetworkCookie3 constructs a new QNetworkCookie object.
func NewQNetworkCookie3(name []byte) *QNetworkCookie {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	return newQNetworkCookie(C.QNetworkCookie_new3(name_alias))
}

// NewQNetworkCookie4 constructs a new QNetworkCookie object.
func NewQNetworkCookie4(name []byte, value []byte) *QNetworkCookie {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))
	value_alias := C.struct_miqt_string{}
	if len(value) > 0 {
		value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	} else {
		value_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	value_alias.len = C.size_t(len(value))

	return newQNetworkCookie(C.QNetworkCookie_new4(name_alias, value_alias))
}

func (this *QNetworkCookie) OperatorAssign(other *QNetworkCookie) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkCookie_operatorAssign(this.h, other.cPointer())
}

func (this *QNetworkCookie) Swap(other *QNetworkCookie) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkCookie_swap(this.h, other.cPointer())
}

func (this *QNetworkCookie) OperatorEqual(other *QNetworkCookie) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QNetworkCookie_operatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkCookie) OperatorNotEqual(other *QNetworkCookie) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QNetworkCookie_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkCookie) IsSecure() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkCookie_isSecure(this.h))
}

func (this *QNetworkCookie) SetSecure(enable bool) {
	defer runtime.KeepAlive(this)
	C.QNetworkCookie_setSecure(this.h, (C.bool)(enable))
}

func (this *QNetworkCookie) IsHttpOnly() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkCookie_isHttpOnly(this.h))
}

func (this *QNetworkCookie) SetHttpOnly(enable bool) {
	defer runtime.KeepAlive(this)
	C.QNetworkCookie_setHttpOnly(this.h, (C.bool)(enable))
}

func (this *QNetworkCookie) IsSessionCookie() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkCookie_isSessionCookie(this.h))
}

func (this *QNetworkCookie) ExpirationDate() *qt.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QNetworkCookie_expirationDate(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCookie) SetExpirationDate(date *qt.QDateTime) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(date)
	C.QNetworkCookie_setExpirationDate(this.h, (*C.QDateTime)(date.UnsafePointer()))
}

func (this *QNetworkCookie) Domain() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QNetworkCookie_domain(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookie) SetDomain(domain string) {
	defer runtime.KeepAlive(this)
	domain_ms := C.struct_miqt_string{}
	domain_ms.data = C.CString(domain)
	domain_ms.len = C.size_t(len(domain))
	defer C.free(unsafe.Pointer(domain_ms.data))
	C.QNetworkCookie_setDomain(this.h, domain_ms)
}

func (this *QNetworkCookie) Path() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QNetworkCookie_path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookie) SetPath(path string) {
	defer runtime.KeepAlive(this)
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QNetworkCookie_setPath(this.h, path_ms)
}

func (this *QNetworkCookie) Name() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkCookie) SetName(cookieName []byte) {
	defer runtime.KeepAlive(this)
	cookieName_alias := C.struct_miqt_string{}
	if len(cookieName) > 0 {
		cookieName_alias.data = (*C.char)(unsafe.Pointer(&cookieName[0]))
	} else {
		cookieName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	cookieName_alias.len = C.size_t(len(cookieName))
	C.QNetworkCookie_setName(this.h, cookieName_alias)
}

func (this *QNetworkCookie) Value() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_value(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkCookie) SetValue(value []byte) {
	defer runtime.KeepAlive(this)
	value_alias := C.struct_miqt_string{}
	if len(value) > 0 {
		value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	} else {
		value_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	value_alias.len = C.size_t(len(value))
	C.QNetworkCookie_setValue(this.h, value_alias)
}

func (this *QNetworkCookie) ToRawForm() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_toRawForm(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkCookie) HasSameIdentifier(other *QNetworkCookie) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QNetworkCookie_hasSameIdentifier(this.h, other.cPointer()))
}

func (this *QNetworkCookie) Normalize(url *qt.QUrl) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(url)
	C.QNetworkCookie_normalize(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func QNetworkCookie_ParseCookies(cookieString []byte) []QNetworkCookie {
	cookieString_alias := C.struct_miqt_string{}
	if len(cookieString) > 0 {
		cookieString_alias.data = (*C.char)(unsafe.Pointer(&cookieString[0]))
	} else {
		cookieString_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	cookieString_alias.len = C.size_t(len(cookieString))
	var _ma C.struct_miqt_array = C.QNetworkCookie_parseCookies(cookieString_alias)
	_ret := make([]QNetworkCookie, int(_ma.len))
	_outCast := unsafe.Slice((**C.QNetworkCookie)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkCookie(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkCookie) ToRawFormWithForm(form QNetworkCookie__RawForm) []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QNetworkCookie_toRawFormWithForm(this.h, (C.int)(form))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QNetworkCookie) Delete() {
	C.QNetworkCookie_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QNetworkCookie) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QNetworkCookie_delete((*C.QNetworkCookie)(gc[0]))
	})
	this.miqtSetGC(gc)
}
