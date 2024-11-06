package network

/*

#include "gen_qnetworkcookiejar.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QNetworkCookieJar struct {
	h *C.QNetworkCookieJar
	*qt.QObject
}

func (this *QNetworkCookieJar) cPointer() *C.QNetworkCookieJar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkCookieJar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQNetworkCookieJar(h *C.QNetworkCookieJar) *QNetworkCookieJar {
	if h == nil {
		return nil
	}
	return &QNetworkCookieJar{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQNetworkCookieJar(h unsafe.Pointer) *QNetworkCookieJar {
	return newQNetworkCookieJar((*C.QNetworkCookieJar)(h))
}

// NewQNetworkCookieJar constructs a new QNetworkCookieJar object.
func NewQNetworkCookieJar() *QNetworkCookieJar {
	ret := C.QNetworkCookieJar_new()
	return newQNetworkCookieJar(ret)
}

// NewQNetworkCookieJar2 constructs a new QNetworkCookieJar object.
func NewQNetworkCookieJar2(parent *qt.QObject) *QNetworkCookieJar {
	ret := C.QNetworkCookieJar_new2((*C.QObject)(parent.UnsafePointer()))
	return newQNetworkCookieJar(ret)
}

func (this *QNetworkCookieJar) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkCookieJar_MetaObject(this.h)))
}

func (this *QNetworkCookieJar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkCookieJar_Metacast(this.h, param1_Cstring))
}

func QNetworkCookieJar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookieJar) CookiesForUrl(url *qt.QUrl) []QNetworkCookie {
	var _ma C.struct_miqt_array = C.QNetworkCookieJar_CookiesForUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
	_ret := make([]QNetworkCookie, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkCookie)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkCookie(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkCookieJar) SetCookiesFromUrl(cookieList []QNetworkCookie, url *qt.QUrl) bool {
	cookieList_CArray := (*[0xffff]*C.QNetworkCookie)(C.malloc(C.size_t(8 * len(cookieList))))
	defer C.free(unsafe.Pointer(cookieList_CArray))
	for i := range cookieList {
		cookieList_CArray[i] = cookieList[i].cPointer()
	}
	cookieList_ma := C.struct_miqt_array{len: C.size_t(len(cookieList)), data: unsafe.Pointer(cookieList_CArray)}
	return (bool)(C.QNetworkCookieJar_SetCookiesFromUrl(this.h, cookieList_ma, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QNetworkCookieJar) InsertCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_InsertCookie(this.h, cookie.cPointer()))
}

func (this *QNetworkCookieJar) UpdateCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_UpdateCookie(this.h, cookie.cPointer()))
}

func (this *QNetworkCookieJar) DeleteCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_DeleteCookie(this.h, cookie.cPointer()))
}

func QNetworkCookieJar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QNetworkCookieJar) Delete() {
	C.QNetworkCookieJar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkCookieJar) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkCookieJar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
