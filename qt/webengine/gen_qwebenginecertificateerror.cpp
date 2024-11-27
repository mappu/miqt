#include <QList>
#include <QSslCertificate>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineCertificateError>
#include <qwebenginecertificateerror.h>
#include "gen_qwebenginecertificateerror.h"
#include "_cgo_export.h"

void QWebEngineCertificateError_new(int error, QUrl* url, bool overridable, struct miqt_string errorDescription, QWebEngineCertificateError** outptr_QWebEngineCertificateError) {
	QString errorDescription_QString = QString::fromUtf8(errorDescription.data, errorDescription.len);
	QWebEngineCertificateError* ret = new QWebEngineCertificateError(static_cast<int>(error), *url, overridable, errorDescription_QString);
	*outptr_QWebEngineCertificateError = ret;
}

void QWebEngineCertificateError_new2(QWebEngineCertificateError* other, QWebEngineCertificateError** outptr_QWebEngineCertificateError) {
	QWebEngineCertificateError* ret = new QWebEngineCertificateError(*other);
	*outptr_QWebEngineCertificateError = ret;
}

int QWebEngineCertificateError_Error(const QWebEngineCertificateError* self) {
	QWebEngineCertificateError::Error _ret = self->error();
	return static_cast<int>(_ret);
}

QUrl* QWebEngineCertificateError_Url(const QWebEngineCertificateError* self) {
	return new QUrl(self->url());
}

bool QWebEngineCertificateError_IsOverridable(const QWebEngineCertificateError* self) {
	return self->isOverridable();
}

struct miqt_string QWebEngineCertificateError_ErrorDescription(const QWebEngineCertificateError* self) {
	QString _ret = self->errorDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineCertificateError_OperatorAssign(QWebEngineCertificateError* self, QWebEngineCertificateError* other) {
	self->operator=(*other);
}

void QWebEngineCertificateError_Defer(QWebEngineCertificateError* self) {
	self->defer();
}

bool QWebEngineCertificateError_Deferred(const QWebEngineCertificateError* self) {
	return self->deferred();
}

void QWebEngineCertificateError_RejectCertificate(QWebEngineCertificateError* self) {
	self->rejectCertificate();
}

void QWebEngineCertificateError_IgnoreCertificateError(QWebEngineCertificateError* self) {
	self->ignoreCertificateError();
}

bool QWebEngineCertificateError_Answered(const QWebEngineCertificateError* self) {
	return self->answered();
}

struct miqt_array /* of QSslCertificate* */  QWebEngineCertificateError_CertificateChain(const QWebEngineCertificateError* self) {
	QList<QSslCertificate> _ret = self->certificateChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebEngineCertificateError_Delete(QWebEngineCertificateError* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineCertificateError*>( self );
	} else {
		delete self;
	}
}

