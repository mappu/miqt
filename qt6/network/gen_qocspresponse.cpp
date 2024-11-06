#include <QOcspResponse>
#include <QSslCertificate>
#include <qocspresponse.h>
#include "gen_qocspresponse.h"
#include "_cgo_export.h"

QOcspResponse* QOcspResponse_new() {
	return new QOcspResponse();
}

QOcspResponse* QOcspResponse_new2(QOcspResponse* other) {
	return new QOcspResponse(*other);
}

void QOcspResponse_OperatorAssign(QOcspResponse* self, QOcspResponse* other) {
	self->operator=(*other);
}

int QOcspResponse_CertificateStatus(const QOcspResponse* self) {
	QOcspCertificateStatus _ret = self->certificateStatus();
	return static_cast<int>(_ret);
}

int QOcspResponse_RevocationReason(const QOcspResponse* self) {
	QOcspRevocationReason _ret = self->revocationReason();
	return static_cast<int>(_ret);
}

QSslCertificate* QOcspResponse_Responder(const QOcspResponse* self) {
	return new QSslCertificate(self->responder());
}

QSslCertificate* QOcspResponse_Subject(const QOcspResponse* self) {
	return new QSslCertificate(self->subject());
}

void QOcspResponse_Swap(QOcspResponse* self, QOcspResponse* other) {
	self->swap(*other);
}

void QOcspResponse_Delete(QOcspResponse* self) {
	delete self;
}

