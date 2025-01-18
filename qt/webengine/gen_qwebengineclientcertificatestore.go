package webengine

/*

#include "gen_qwebengineclientcertificatestore.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt/network"
	"unsafe"
)

type QWebEngineClientCertificateStore struct {
	h *C.QWebEngineClientCertificateStore
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
	C.QWebEngineClientCertificateStore_Add(this.h, (*C.QSslCertificate)(certificate.UnsafePointer()), (*C.QSslKey)(privateKey.UnsafePointer()))
}

func (this *QWebEngineClientCertificateStore) Certificates() []network.QSslCertificate {
	var _ma C.struct_miqt_array = C.QWebEngineClientCertificateStore_Certificates(this.h)
	_ret := make([]network.QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := network.UnsafeNewQSslCertificate(unsafe.Pointer(_outCast[i]))
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QWebEngineClientCertificateStore) Remove(certificate *network.QSslCertificate) {
	C.QWebEngineClientCertificateStore_Remove(this.h, (*C.QSslCertificate)(certificate.UnsafePointer()))
}

func (this *QWebEngineClientCertificateStore) Clear() {
	C.QWebEngineClientCertificateStore_Clear(this.h)
}
