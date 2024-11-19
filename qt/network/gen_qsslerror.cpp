#include <QSslCertificate>
#include <QSslError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslerror.h>
#include "gen_qsslerror.h"
#include "_cgo_export.h"

void QSslError_new(QSslError** outptr_QSslError) {
	QSslError* ret = new QSslError();
	*outptr_QSslError = ret;
}

void QSslError_new2(int error, QSslError** outptr_QSslError) {
	QSslError* ret = new QSslError(static_cast<QSslError::SslError>(error));
	*outptr_QSslError = ret;
}

void QSslError_new3(int error, QSslCertificate* certificate, QSslError** outptr_QSslError) {
	QSslError* ret = new QSslError(static_cast<QSslError::SslError>(error), *certificate);
	*outptr_QSslError = ret;
}

void QSslError_new4(QSslError* other, QSslError** outptr_QSslError) {
	QSslError* ret = new QSslError(*other);
	*outptr_QSslError = ret;
}

void QSslError_Swap(QSslError* self, QSslError* other) {
	self->swap(*other);
}

void QSslError_OperatorAssign(QSslError* self, QSslError* other) {
	self->operator=(*other);
}

bool QSslError_OperatorEqual(const QSslError* self, QSslError* other) {
	return self->operator==(*other);
}

bool QSslError_OperatorNotEqual(const QSslError* self, QSslError* other) {
	return self->operator!=(*other);
}

int QSslError_Error(const QSslError* self) {
	QSslError::SslError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QSslError_ErrorString(const QSslError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSslCertificate* QSslError_Certificate(const QSslError* self) {
	return new QSslCertificate(self->certificate());
}

void QSslError_Delete(QSslError* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSslError*>( self );
	} else {
		delete self;
	}
}

