package webengine

/*

#include "gen_qwebengineclientcertificatestore.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6/network"
	"runtime"
	"unsafe"
)

type QWebEngineClientCertificateStore struct {
	h  *C.QWebEngineClientCertificateStore
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineClientCertificateStore) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebEngineClientCertificateStore) cPointer() *C.QWebEngineClientCertificateStore {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineClientCertificateStore) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineClientCertificateStore constructs the type using only CGO pointers.
func newQWebEngineClientCertificateStore(h *C.QWebEngineClientCertificateStore) *QWebEngineClientCertificateStore {
	if h == nil {
		return nil
	}

	return &QWebEngineClientCertificateStore{h: h}
}

// UnsafeNewQWebEngineClientCertificateStore constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineClientCertificateStore(h unsafe.Pointer) *QWebEngineClientCertificateStore {
	return newQWebEngineClientCertificateStore((*C.QWebEngineClientCertificateStore)(h))
}

func (this *QWebEngineClientCertificateStore) Add(certificate *network.QSslCertificate, privateKey *network.QSslKey) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(certificate)
	defer runtime.KeepAlive(privateKey)
	C.QWebEngineClientCertificateStore_add(this.h, (*C.QSslCertificate)(certificate.UnsafePointer()), (*C.QSslKey)(privateKey.UnsafePointer()))
}

func (this *QWebEngineClientCertificateStore) Certificates() []network.QSslCertificate {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebEngineClientCertificateStore_certificates(this.h)
	_ret := make([]network.QSslCertificate, int(_ma.len))
	_outCast := unsafe.Slice((**C.QSslCertificate)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := network.UnsafeNewQSslCertificate(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineClientCertificateStore) Remove(certificate *network.QSslCertificate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(certificate)
	C.QWebEngineClientCertificateStore_remove(this.h, (*C.QSslCertificate)(certificate.UnsafePointer()))
}

func (this *QWebEngineClientCertificateStore) Clear() {
	defer runtime.KeepAlive(this)
	C.QWebEngineClientCertificateStore_clear(this.h)
}
