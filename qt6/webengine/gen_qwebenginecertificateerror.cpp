#include <QList>
#include <QSslCertificate>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineCertificateError>
#include <qwebenginecertificateerror.h>
#include "gen_qwebenginecertificateerror.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineCertificateError* QWebEngineCertificateError_new(QWebEngineCertificateError* other) {
	return new QWebEngineCertificateError(*other);
}

void QWebEngineCertificateError_operatorAssign(QWebEngineCertificateError* self, QWebEngineCertificateError* other) {
	self->operator=(*other);
}

int QWebEngineCertificateError_type(const QWebEngineCertificateError* self) {
	QWebEngineCertificateError::Type _ret = self->type();
	return static_cast<int>(_ret);
}

QUrl* QWebEngineCertificateError_url(const QWebEngineCertificateError* self) {
	return new QUrl(self->url());
}

bool QWebEngineCertificateError_isOverridable(const QWebEngineCertificateError* self) {
	return self->isOverridable();
}

struct miqt_string QWebEngineCertificateError_description(const QWebEngineCertificateError* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineCertificateError_defer(QWebEngineCertificateError* self) {
	self->defer();
}

void QWebEngineCertificateError_rejectCertificate(QWebEngineCertificateError* self) {
	self->rejectCertificate();
}

void QWebEngineCertificateError_acceptCertificate(QWebEngineCertificateError* self) {
	self->acceptCertificate();
}

struct miqt_array /* of QSslCertificate* */  QWebEngineCertificateError_certificateChain(const QWebEngineCertificateError* self) {
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

void QWebEngineCertificateError_delete(QWebEngineCertificateError* self) {
	delete self;
}

