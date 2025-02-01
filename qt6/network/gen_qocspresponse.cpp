#include <QOcspResponse>
#include <QSslCertificate>
#include <qocspresponse.h>
#include "gen_qocspresponse.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QOcspResponse* QOcspResponse_new() {
	return new QOcspResponse();
}

QOcspResponse* QOcspResponse_new2(QOcspResponse* other) {
	return new QOcspResponse(*other);
}

void QOcspResponse_operatorAssign(QOcspResponse* self, QOcspResponse* other) {
	self->operator=(*other);
}

int QOcspResponse_certificateStatus(const QOcspResponse* self) {
	QOcspCertificateStatus _ret = self->certificateStatus();
	return static_cast<int>(_ret);
}

int QOcspResponse_revocationReason(const QOcspResponse* self) {
	QOcspRevocationReason _ret = self->revocationReason();
	return static_cast<int>(_ret);
}

QSslCertificate* QOcspResponse_responder(const QOcspResponse* self) {
	return new QSslCertificate(self->responder());
}

QSslCertificate* QOcspResponse_subject(const QOcspResponse* self) {
	return new QSslCertificate(self->subject());
}

void QOcspResponse_swap(QOcspResponse* self, QOcspResponse* other) {
	self->swap(*other);
}

void QOcspResponse_delete(QOcspResponse* self) {
	delete self;
}

