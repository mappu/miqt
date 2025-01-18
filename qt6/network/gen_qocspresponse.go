package network

/*

#include "gen_qocspresponse.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QOcspCertificateStatus int

const (
	QOcspCertificateStatus__Good    QOcspCertificateStatus = 0
	QOcspCertificateStatus__Revoked QOcspCertificateStatus = 1
	QOcspCertificateStatus__Unknown QOcspCertificateStatus = 2
)

type QOcspRevocationReason int

const (
	QOcspRevocationReason__None                 QOcspRevocationReason = -1
	QOcspRevocationReason__Unspecified          QOcspRevocationReason = 0
	QOcspRevocationReason__KeyCompromise        QOcspRevocationReason = 1
	QOcspRevocationReason__CACompromise         QOcspRevocationReason = 2
	QOcspRevocationReason__AffiliationChanged   QOcspRevocationReason = 3
	QOcspRevocationReason__Superseded           QOcspRevocationReason = 4
	QOcspRevocationReason__CessationOfOperation QOcspRevocationReason = 5
	QOcspRevocationReason__CertificateHold      QOcspRevocationReason = 6
	QOcspRevocationReason__RemoveFromCRL        QOcspRevocationReason = 7
)

type QOcspResponse struct {
	h *C.QOcspResponse
}

func (this *QOcspResponse) cPointer() *C.QOcspResponse {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QOcspResponse) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQOcspResponse constructs the type using only CGO pointers.
func newQOcspResponse(h *C.QOcspResponse) *QOcspResponse {
	if h == nil {
		return nil
	}

	return &QOcspResponse{h: h}
}

// UnsafeNewQOcspResponse constructs the type using only unsafe pointers.
func UnsafeNewQOcspResponse(h unsafe.Pointer) *QOcspResponse {
	return newQOcspResponse((*C.QOcspResponse)(h))
}

// NewQOcspResponse constructs a new QOcspResponse object.
func NewQOcspResponse() *QOcspResponse {

	return newQOcspResponse(C.QOcspResponse_new())
}

// NewQOcspResponse2 constructs a new QOcspResponse object.
func NewQOcspResponse2(other *QOcspResponse) *QOcspResponse {

	return newQOcspResponse(C.QOcspResponse_new2(other.cPointer()))
}

func (this *QOcspResponse) OperatorAssign(other *QOcspResponse) {
	C.QOcspResponse_OperatorAssign(this.h, other.cPointer())
}

func (this *QOcspResponse) CertificateStatus() QOcspCertificateStatus {
	return (QOcspCertificateStatus)(C.QOcspResponse_CertificateStatus(this.h))
}

func (this *QOcspResponse) RevocationReason() QOcspRevocationReason {
	return (QOcspRevocationReason)(C.QOcspResponse_RevocationReason(this.h))
}

func (this *QOcspResponse) Responder() *QSslCertificate {
	_goptr := newQSslCertificate(C.QOcspResponse_Responder(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOcspResponse) Subject() *QSslCertificate {
	_goptr := newQSslCertificate(C.QOcspResponse_Subject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOcspResponse) Swap(other *QOcspResponse) {
	C.QOcspResponse_Swap(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QOcspResponse) Delete() {
	C.QOcspResponse_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOcspResponse) GoGC() {
	runtime.SetFinalizer(this, func(this *QOcspResponse) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
