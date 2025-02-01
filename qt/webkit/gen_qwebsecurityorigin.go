package webkit

/*

#include "gen_qwebsecurityorigin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebSecurityOrigin__SubdomainSetting int

const (
	QWebSecurityOrigin__AllowSubdomains    QWebSecurityOrigin__SubdomainSetting = 0
	QWebSecurityOrigin__DisallowSubdomains QWebSecurityOrigin__SubdomainSetting = 1
)

type QWebSecurityOrigin struct {
	h *C.QWebSecurityOrigin
}

func (this *QWebSecurityOrigin) cPointer() *C.QWebSecurityOrigin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSecurityOrigin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSecurityOrigin constructs the type using only CGO pointers.
func newQWebSecurityOrigin(h *C.QWebSecurityOrigin) *QWebSecurityOrigin {
	if h == nil {
		return nil
	}

	return &QWebSecurityOrigin{h: h}
}

// UnsafeNewQWebSecurityOrigin constructs the type using only unsafe pointers.
func UnsafeNewQWebSecurityOrigin(h unsafe.Pointer) *QWebSecurityOrigin {
	return newQWebSecurityOrigin((*C.QWebSecurityOrigin)(h))
}

// NewQWebSecurityOrigin constructs a new QWebSecurityOrigin object.
func NewQWebSecurityOrigin(url *qt.QUrl) *QWebSecurityOrigin {

	return newQWebSecurityOrigin(C.QWebSecurityOrigin_new((*C.QUrl)(url.UnsafePointer())))
}

// NewQWebSecurityOrigin2 constructs a new QWebSecurityOrigin object.
func NewQWebSecurityOrigin2(other *QWebSecurityOrigin) *QWebSecurityOrigin {

	return newQWebSecurityOrigin(C.QWebSecurityOrigin_new2(other.cPointer()))
}

func QWebSecurityOrigin_AllOrigins() []QWebSecurityOrigin {
	var _ma C.struct_miqt_array = C.QWebSecurityOrigin_allOrigins()
	_ret := make([]QWebSecurityOrigin, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebSecurityOrigin)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebSecurityOrigin(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QWebSecurityOrigin_AddLocalScheme(scheme string) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	C.QWebSecurityOrigin_addLocalScheme(scheme_ms)
}

func QWebSecurityOrigin_RemoveLocalScheme(scheme string) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	C.QWebSecurityOrigin_removeLocalScheme(scheme_ms)
}

func QWebSecurityOrigin_LocalSchemes() []string {
	var _ma C.struct_miqt_array = C.QWebSecurityOrigin_localSchemes()
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

func (this *QWebSecurityOrigin) AddAccessWhitelistEntry(scheme string, host string, subdomainSetting QWebSecurityOrigin__SubdomainSetting) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QWebSecurityOrigin_addAccessWhitelistEntry(this.h, scheme_ms, host_ms, (C.int)(subdomainSetting))
}

func (this *QWebSecurityOrigin) RemoveAccessWhitelistEntry(scheme string, host string, subdomainSetting QWebSecurityOrigin__SubdomainSetting) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QWebSecurityOrigin_removeAccessWhitelistEntry(this.h, scheme_ms, host_ms, (C.int)(subdomainSetting))
}

func (this *QWebSecurityOrigin) Scheme() string {
	var _ms C.struct_miqt_string = C.QWebSecurityOrigin_scheme(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSecurityOrigin) Host() string {
	var _ms C.struct_miqt_string = C.QWebSecurityOrigin_host(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSecurityOrigin) Port() int {
	return (int)(C.QWebSecurityOrigin_port(this.h))
}

func (this *QWebSecurityOrigin) DatabaseUsage() int64 {
	return (int64)(C.QWebSecurityOrigin_databaseUsage(this.h))
}

func (this *QWebSecurityOrigin) DatabaseQuota() int64 {
	return (int64)(C.QWebSecurityOrigin_databaseQuota(this.h))
}

func (this *QWebSecurityOrigin) SetDatabaseQuota(quota int64) {
	C.QWebSecurityOrigin_setDatabaseQuota(this.h, (C.longlong)(quota))
}

func (this *QWebSecurityOrigin) SetApplicationCacheQuota(quota int64) {
	C.QWebSecurityOrigin_setApplicationCacheQuota(this.h, (C.longlong)(quota))
}

func (this *QWebSecurityOrigin) Databases() []QWebDatabase {
	var _ma C.struct_miqt_array = C.QWebSecurityOrigin_databases(this.h)
	_ret := make([]QWebDatabase, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebDatabase)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebDatabase(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebSecurityOrigin) OperatorAssign(other *QWebSecurityOrigin) {
	C.QWebSecurityOrigin_operatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebSecurityOrigin) Delete() {
	C.QWebSecurityOrigin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSecurityOrigin) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSecurityOrigin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
