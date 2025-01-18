package network

/*

#include "gen_qsslerror.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSslError__SslError int

const (
	QSslError__NoError                             QSslError__SslError = 0
	QSslError__UnableToGetIssuerCertificate        QSslError__SslError = 1
	QSslError__UnableToDecryptCertificateSignature QSslError__SslError = 2
	QSslError__UnableToDecodeIssuerPublicKey       QSslError__SslError = 3
	QSslError__CertificateSignatureFailed          QSslError__SslError = 4
	QSslError__CertificateNotYetValid              QSslError__SslError = 5
	QSslError__CertificateExpired                  QSslError__SslError = 6
	QSslError__InvalidNotBeforeField               QSslError__SslError = 7
	QSslError__InvalidNotAfterField                QSslError__SslError = 8
	QSslError__SelfSignedCertificate               QSslError__SslError = 9
	QSslError__SelfSignedCertificateInChain        QSslError__SslError = 10
	QSslError__UnableToGetLocalIssuerCertificate   QSslError__SslError = 11
	QSslError__UnableToVerifyFirstCertificate      QSslError__SslError = 12
	QSslError__CertificateRevoked                  QSslError__SslError = 13
	QSslError__InvalidCaCertificate                QSslError__SslError = 14
	QSslError__PathLengthExceeded                  QSslError__SslError = 15
	QSslError__InvalidPurpose                      QSslError__SslError = 16
	QSslError__CertificateUntrusted                QSslError__SslError = 17
	QSslError__CertificateRejected                 QSslError__SslError = 18
	QSslError__SubjectIssuerMismatch               QSslError__SslError = 19
	QSslError__AuthorityIssuerSerialNumberMismatch QSslError__SslError = 20
	QSslError__NoPeerCertificate                   QSslError__SslError = 21
	QSslError__HostNameMismatch                    QSslError__SslError = 22
	QSslError__NoSslSupport                        QSslError__SslError = 23
	QSslError__CertificateBlacklisted              QSslError__SslError = 24
	QSslError__CertificateStatusUnknown            QSslError__SslError = 25
	QSslError__OcspNoResponseFound                 QSslError__SslError = 26
	QSslError__OcspMalformedRequest                QSslError__SslError = 27
	QSslError__OcspMalformedResponse               QSslError__SslError = 28
	QSslError__OcspInternalError                   QSslError__SslError = 29
	QSslError__OcspTryLater                        QSslError__SslError = 30
	QSslError__OcspSigRequred                      QSslError__SslError = 31
	QSslError__OcspUnauthorized                    QSslError__SslError = 32
	QSslError__OcspResponseCannotBeTrusted         QSslError__SslError = 33
	QSslError__OcspResponseCertIdUnknown           QSslError__SslError = 34
	QSslError__OcspResponseExpired                 QSslError__SslError = 35
	QSslError__OcspStatusUnknown                   QSslError__SslError = 36
	QSslError__UnspecifiedError                    QSslError__SslError = -1
)

type QSslError struct {
	h          *C.QSslError
	isSubclass bool
}

func (this *QSslError) cPointer() *C.QSslError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslError constructs the type using only CGO pointers.
func newQSslError(h *C.QSslError) *QSslError {
	if h == nil {
		return nil
	}

	return &QSslError{h: h}
}

// UnsafeNewQSslError constructs the type using only unsafe pointers.
func UnsafeNewQSslError(h unsafe.Pointer) *QSslError {
	return newQSslError((*C.QSslError)(h))
}

// NewQSslError constructs a new QSslError object.
func NewQSslError() *QSslError {

	ret := newQSslError(C.QSslError_new())
	ret.isSubclass = true
	return ret
}

// NewQSslError2 constructs a new QSslError object.
func NewQSslError2(error QSslError__SslError) *QSslError {

	ret := newQSslError(C.QSslError_new2((C.int)(error)))
	ret.isSubclass = true
	return ret
}

// NewQSslError3 constructs a new QSslError object.
func NewQSslError3(error QSslError__SslError, certificate *QSslCertificate) *QSslError {

	ret := newQSslError(C.QSslError_new3((C.int)(error), certificate.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQSslError4 constructs a new QSslError object.
func NewQSslError4(other *QSslError) *QSslError {

	ret := newQSslError(C.QSslError_new4(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QSslError) Swap(other *QSslError) {
	C.QSslError_Swap(this.h, other.cPointer())
}

func (this *QSslError) OperatorAssign(other *QSslError) {
	C.QSslError_OperatorAssign(this.h, other.cPointer())
}

func (this *QSslError) OperatorEqual(other *QSslError) bool {
	return (bool)(C.QSslError_OperatorEqual(this.h, other.cPointer()))
}

func (this *QSslError) OperatorNotEqual(other *QSslError) bool {
	return (bool)(C.QSslError_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QSslError) Error() QSslError__SslError {
	return (QSslError__SslError)(C.QSslError_Error(this.h))
}

func (this *QSslError) ErrorString() string {
	var _ms C.struct_miqt_string = C.QSslError_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslError) Certificate() *QSslCertificate {
	_goptr := newQSslCertificate(C.QSslError_Certificate(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSslError) Delete() {
	C.QSslError_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslError) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
