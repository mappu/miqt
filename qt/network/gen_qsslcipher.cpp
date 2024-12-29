#include <QSslCipher>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslcipher.h>
#include "gen_qsslcipher.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QSslCipher* QSslCipher_new() {
	return new QSslCipher();
}

QSslCipher* QSslCipher_new2(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QSslCipher(name_QString);
}

QSslCipher* QSslCipher_new3(struct miqt_string name, int protocol) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QSslCipher(name_QString, static_cast<QSsl::SslProtocol>(protocol));
}

QSslCipher* QSslCipher_new4(QSslCipher* other) {
	return new QSslCipher(*other);
}

void QSslCipher_OperatorAssign(QSslCipher* self, QSslCipher* other) {
	self->operator=(*other);
}

void QSslCipher_Swap(QSslCipher* self, QSslCipher* other) {
	self->swap(*other);
}

bool QSslCipher_OperatorEqual(const QSslCipher* self, QSslCipher* other) {
	return (*self == *other);
}

bool QSslCipher_OperatorNotEqual(const QSslCipher* self, QSslCipher* other) {
	return (*self != *other);
}

bool QSslCipher_IsNull(const QSslCipher* self) {
	return self->isNull();
}

struct miqt_string QSslCipher_Name(const QSslCipher* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSslCipher_SupportedBits(const QSslCipher* self) {
	return self->supportedBits();
}

int QSslCipher_UsedBits(const QSslCipher* self) {
	return self->usedBits();
}

struct miqt_string QSslCipher_KeyExchangeMethod(const QSslCipher* self) {
	QString _ret = self->keyExchangeMethod();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCipher_AuthenticationMethod(const QSslCipher* self) {
	QString _ret = self->authenticationMethod();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCipher_EncryptionMethod(const QSslCipher* self) {
	QString _ret = self->encryptionMethod();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCipher_ProtocolString(const QSslCipher* self) {
	QString _ret = self->protocolString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSslCipher_Protocol(const QSslCipher* self) {
	QSsl::SslProtocol _ret = self->protocol();
	return static_cast<int>(_ret);
}

void QSslCipher_Delete(QSslCipher* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSslCipher*>( self );
	} else {
		delete self;
	}
}

