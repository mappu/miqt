package webengine

/*

#include "gen_qwebengineclientcertificateselection.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"unsafe"
)

type QWebEngineClientCertificateSelection struct {
	h  *C.QWebEngineClientCertificateSelection
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineClientCertificateSelection) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebEngineClientCertificateSelection) cPointer() *C.QWebEngineClientCertificateSelection {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineClientCertificateSelection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineClientCertificateSelection constructs the type using only CGO pointers.
func newQWebEngineClientCertificateSelection(h *C.QWebEngineClientCertificateSelection) *QWebEngineClientCertificateSelection {
	if h == nil {
		return nil
	}

	return &QWebEngineClientCertificateSelection{h: h}
}

// UnsafeNewQWebEngineClientCertificateSelection constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineClientCertificateSelection(h unsafe.Pointer) *QWebEngineClientCertificateSelection {
	return newQWebEngineClientCertificateSelection((*C.QWebEngineClientCertificateSelection)(h))
}

// NewQWebEngineClientCertificateSelection constructs a new QWebEngineClientCertificateSelection object.
func NewQWebEngineClientCertificateSelection(param1 *QWebEngineClientCertificateSelection) *QWebEngineClientCertificateSelection {
	defer runtime.KeepAlive(param1)

	return newQWebEngineClientCertificateSelection(C.QWebEngineClientCertificateSelection_new(param1.cPointer()))
}

func (this *QWebEngineClientCertificateSelection) OperatorAssign(param1 *QWebEngineClientCertificateSelection) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QWebEngineClientCertificateSelection_operatorAssign(this.h, param1.cPointer())
}

func (this *QWebEngineClientCertificateSelection) Host() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineClientCertificateSelection_host(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineClientCertificateSelection) Select(certificate *network.QSslCertificate) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(certificate)
	C.QWebEngineClientCertificateSelection_select(this.h, (*C.QSslCertificate)(certificate.UnsafePointer()))
}

func (this *QWebEngineClientCertificateSelection) SelectNone() {
	defer runtime.KeepAlive(this)
	C.QWebEngineClientCertificateSelection_selectNone(this.h)
}

func (this *QWebEngineClientCertificateSelection) Certificates() []network.QSslCertificate {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebEngineClientCertificateSelection_certificates(this.h)
	_ret := make([]network.QSslCertificate, int(_ma.len))
	_outCast := unsafe.Slice((**C.QSslCertificate)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := network.UnsafeNewQSslCertificate(unsafe.Pointer(_outCast[i]))
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineClientCertificateSelection) Delete() {
	C.QWebEngineClientCertificateSelection_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebEngineClientCertificateSelection) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebEngineClientCertificateSelection_delete((*C.QWebEngineClientCertificateSelection)(gc[0]))
	})
	this.miqtSetGC(gc)
}
