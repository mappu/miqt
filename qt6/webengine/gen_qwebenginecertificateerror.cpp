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

QWebEngineCertificateError* QWebEngineCertificateError_new(QWebEngineCertificateError* other) {
	return new QWebEngineCertificateError(*other);
}

void QWebEngineCertificateError_OperatorAssign(QWebEngineCertificateError* self, QWebEngineCertificateError* other) {
	self->operator=(*other);
}

int QWebEngineCertificateError_Type(const QWebEngineCertificateError* self) {
	QWebEngineCertificateError::Type _ret = self->type();
	return static_cast<int>(_ret);
}

QUrl* QWebEngineCertificateError_Url(const QWebEngineCertificateError* self) {
	return new QUrl(self->url());
}

bool QWebEngineCertificateError_IsOverridable(const QWebEngineCertificateError* self) {
	return self->isOverridable();
}

struct miqt_string QWebEngineCertificateError_Description(const QWebEngineCertificateError* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineCertificateError_Defer(QWebEngineCertificateError* self) {
	self->defer();
}

void QWebEngineCertificateError_RejectCertificate(QWebEngineCertificateError* self) {
	self->rejectCertificate();
}

void QWebEngineCertificateError_AcceptCertificate(QWebEngineCertificateError* self) {
	self->acceptCertificate();
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

