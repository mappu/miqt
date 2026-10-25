package webengine

/*

#include "gen_qwebenginecertificateerror.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/network"
	"runtime"
	"unsafe"
)

type QWebEngineCertificateError__Type int

const (
	QWebEngineCertificateError__SslPinnedKeyNotInCertificateChain   QWebEngineCertificateError__Type = -150
	QWebEngineCertificateError__CertificateCommonNameInvalid        QWebEngineCertificateError__Type = -200
	QWebEngineCertificateError__CertificateDateInvalid              QWebEngineCertificateError__Type = -201
	QWebEngineCertificateError__CertificateAuthorityInvalid         QWebEngineCertificateError__Type = -202
	QWebEngineCertificateError__CertificateContainsErrors           QWebEngineCertificateError__Type = -203
	QWebEngineCertificateError__CertificateNoRevocationMechanism    QWebEngineCertificateError__Type = -204
	QWebEngineCertificateError__CertificateUnableToCheckRevocation  QWebEngineCertificateError__Type = -205
	QWebEngineCertificateError__CertificateRevoked                  QWebEngineCertificateError__Type = -206
	QWebEngineCertificateError__CertificateInvalid                  QWebEngineCertificateError__Type = -207
	QWebEngineCertificateError__CertificateWeakSignatureAlgorithm   QWebEngineCertificateError__Type = -208
	QWebEngineCertificateError__CertificateNonUniqueName            QWebEngineCertificateError__Type = -210
	QWebEngineCertificateError__CertificateWeakKey                  QWebEngineCertificateError__Type = -211
	QWebEngineCertificateError__CertificateNameConstraintViolation  QWebEngineCertificateError__Type = -212
	QWebEngineCertificateError__CertificateValidityTooLong          QWebEngineCertificateError__Type = -213
	QWebEngineCertificateError__CertificateTransparencyRequired     QWebEngineCertificateError__Type = -214
	QWebEngineCertificateError__CertificateSymantecLegacy           QWebEngineCertificateError__Type = -215
	QWebEngineCertificateError__CertificateKnownInterceptionBlocked QWebEngineCertificateError__Type = -217
	QWebEngineCertificateError__SslObsoleteVersion                  QWebEngineCertificateError__Type = -218
)

type QWebEngineCertificateError struct {
	h  *C.QWebEngineCertificateError
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineCertificateError) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebEngineCertificateError) cPointer() *C.QWebEngineCertificateError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineCertificateError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineCertificateError constructs the type using only CGO pointers.
func newQWebEngineCertificateError(h *C.QWebEngineCertificateError) *QWebEngineCertificateError {
	if h == nil {
		return nil
	}

	return &QWebEngineCertificateError{h: h}
}

// UnsafeNewQWebEngineCertificateError constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineCertificateError(h unsafe.Pointer) *QWebEngineCertificateError {
	return newQWebEngineCertificateError((*C.QWebEngineCertificateError)(h))
}

// NewQWebEngineCertificateError constructs a new QWebEngineCertificateError object.
func NewQWebEngineCertificateError(other *QWebEngineCertificateError) *QWebEngineCertificateError {
	defer runtime.KeepAlive(other)

	return newQWebEngineCertificateError(C.QWebEngineCertificateError_new(other.cPointer()))
}

func (this *QWebEngineCertificateError) OperatorAssign(other *QWebEngineCertificateError) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QWebEngineCertificateError_operatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineCertificateError) Type() QWebEngineCertificateError__Type {
	defer runtime.KeepAlive(this)
	return (QWebEngineCertificateError__Type)(C.QWebEngineCertificateError_type(this.h))
}

func (this *QWebEngineCertificateError) Url() *qt6.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineCertificateError_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineCertificateError) IsOverridable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebEngineCertificateError_isOverridable(this.h))
}

func (this *QWebEngineCertificateError) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWebEngineCertificateError_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineCertificateError) Defer() {
	defer runtime.KeepAlive(this)
	C.QWebEngineCertificateError_defer(this.h)
}

func (this *QWebEngineCertificateError) RejectCertificate() {
	defer runtime.KeepAlive(this)
	C.QWebEngineCertificateError_rejectCertificate(this.h)
}

func (this *QWebEngineCertificateError) AcceptCertificate() {
	defer runtime.KeepAlive(this)
	C.QWebEngineCertificateError_acceptCertificate(this.h)
}

func (this *QWebEngineCertificateError) CertificateChain() []network.QSslCertificate {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebEngineCertificateError_certificateChain(this.h)
	_ret := make([]network.QSslCertificate, int(_ma.len))
	_outCast := unsafe.Slice((**C.QSslCertificate)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := network.UnsafeNewQSslCertificate(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineCertificateError) Delete() {
	C.QWebEngineCertificateError_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebEngineCertificateError) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebEngineCertificateError_delete((*C.QWebEngineCertificateError)(gc[0]))
	})
	this.miqtSetGC(gc)
}
