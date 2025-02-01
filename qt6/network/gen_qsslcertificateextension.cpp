#include <QSslCertificateExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsslcertificateextension.h>
#include "gen_qsslcertificateextension.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSslCertificateExtension* QSslCertificateExtension_new() {
	return new QSslCertificateExtension();
}

QSslCertificateExtension* QSslCertificateExtension_new2(QSslCertificateExtension* other) {
	return new QSslCertificateExtension(*other);
}

void QSslCertificateExtension_operatorAssign(QSslCertificateExtension* self, QSslCertificateExtension* other) {
	self->operator=(*other);
}

void QSslCertificateExtension_swap(QSslCertificateExtension* self, QSslCertificateExtension* other) {
	self->swap(*other);
}

struct miqt_string QSslCertificateExtension_oid(const QSslCertificateExtension* self) {
	QString _ret = self->oid();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCertificateExtension_name(const QSslCertificateExtension* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QSslCertificateExtension_value(const QSslCertificateExtension* self) {
	return new QVariant(self->value());
}

bool QSslCertificateExtension_isCritical(const QSslCertificateExtension* self) {
	return self->isCritical();
}

bool QSslCertificateExtension_isSupported(const QSslCertificateExtension* self) {
	return self->isSupported();
}

void QSslCertificateExtension_delete(QSslCertificateExtension* self) {
	delete self;
}

