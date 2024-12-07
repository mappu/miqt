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
	h          *C.QWebEngineCertificateError
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QWebEngineCertificateError{h: (*C.QWebEngineCertificateError)(h)}
}

// NewQWebEngineCertificateError constructs a new QWebEngineCertificateError object.
func NewQWebEngineCertificateError(other *QWebEngineCertificateError) *QWebEngineCertificateError {
	var outptr_QWebEngineCertificateError *C.QWebEngineCertificateError = nil

	C.QWebEngineCertificateError_new(other.cPointer(), &outptr_QWebEngineCertificateError)
	ret := newQWebEngineCertificateError(outptr_QWebEngineCertificateError)
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineCertificateError) OperatorAssign(other *QWebEngineCertificateError) {
	C.QWebEngineCertificateError_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineCertificateError) Type() QWebEngineCertificateError__Type {
	return (QWebEngineCertificateError__Type)(C.QWebEngineCertificateError_Type(this.h))
}

func (this *QWebEngineCertificateError) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineCertificateError_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineCertificateError) IsOverridable() bool {
	return (bool)(C.QWebEngineCertificateError_IsOverridable(this.h))
}

func (this *QWebEngineCertificateError) Description() string {
	var _ms C.struct_miqt_string = C.QWebEngineCertificateError_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineCertificateError) Defer() {
	C.QWebEngineCertificateError_Defer(this.h)
}

func (this *QWebEngineCertificateError) RejectCertificate() {
	C.QWebEngineCertificateError_RejectCertificate(this.h)
}

func (this *QWebEngineCertificateError) AcceptCertificate() {
	C.QWebEngineCertificateError_AcceptCertificate(this.h)
}

func (this *QWebEngineCertificateError) CertificateChain() []network.QSslCertificate {
	var _ma C.struct_miqt_array = C.QWebEngineCertificateError_CertificateChain(this.h)
	_ret := make([]network.QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := network.UnsafeNewQSslCertificate(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineCertificateError) Delete() {
	C.QWebEngineCertificateError_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineCertificateError) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineCertificateError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
