#include <QSslCertificateExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsslcertificateextension.h>
#include "gen_qsslcertificateextension.h"
#include "_cgo_export.h"

void QSslCertificateExtension_new(QSslCertificateExtension** outptr_QSslCertificateExtension) {
	QSslCertificateExtension* ret = new QSslCertificateExtension();
	*outptr_QSslCertificateExtension = ret;
}

void QSslCertificateExtension_new2(QSslCertificateExtension* other, QSslCertificateExtension** outptr_QSslCertificateExtension) {
	QSslCertificateExtension* ret = new QSslCertificateExtension(*other);
	*outptr_QSslCertificateExtension = ret;
}

void QSslCertificateExtension_OperatorAssign(QSslCertificateExtension* self, QSslCertificateExtension* other) {
	self->operator=(*other);
}

void QSslCertificateExtension_Swap(QSslCertificateExtension* self, QSslCertificateExtension* other) {
	self->swap(*other);
}

struct miqt_string QSslCertificateExtension_Oid(const QSslCertificateExtension* self) {
	QString _ret = self->oid();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCertificateExtension_Name(const QSslCertificateExtension* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QSslCertificateExtension_Value(const QSslCertificateExtension* self) {
	return new QVariant(self->value());
}

bool QSslCertificateExtension_IsCritical(const QSslCertificateExtension* self) {
	return self->isCritical();
}

bool QSslCertificateExtension_IsSupported(const QSslCertificateExtension* self) {
	return self->isSupported();
}

void QSslCertificateExtension_Delete(QSslCertificateExtension* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSslCertificateExtension*>( self );
	} else {
		delete self;
	}
}

