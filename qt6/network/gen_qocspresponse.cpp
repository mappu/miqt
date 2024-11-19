#include <QOcspResponse>
#include <QSslCertificate>
#include <qocspresponse.h>
#include "gen_qocspresponse.h"
#include "_cgo_export.h"

void QOcspResponse_new(QOcspResponse** outptr_QOcspResponse) {
	QOcspResponse* ret = new QOcspResponse();
	*outptr_QOcspResponse = ret;
}

void QOcspResponse_new2(QOcspResponse* other, QOcspResponse** outptr_QOcspResponse) {
	QOcspResponse* ret = new QOcspResponse(*other);
	*outptr_QOcspResponse = ret;
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

void QOcspResponse_Delete(QOcspResponse* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QOcspResponse*>( self );
	} else {
		delete self;
	}
}

