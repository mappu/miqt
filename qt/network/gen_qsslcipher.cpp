#include <QSslCipher>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslcipher.h>
#include "gen_qsslcipher.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

void QSslCipher_operatorAssign(QSslCipher* self, QSslCipher* other) {
	self->operator=(*other);
}

void QSslCipher_swap(QSslCipher* self, QSslCipher* other) {
	self->swap(*other);
}

bool QSslCipher_operatorEqual(const QSslCipher* self, QSslCipher* other) {
	return (*self == *other);
}

bool QSslCipher_operatorNotEqual(const QSslCipher* self, QSslCipher* other) {
	return (*self != *other);
}

bool QSslCipher_isNull(const QSslCipher* self) {
	return self->isNull();
}

struct miqt_string QSslCipher_name(const QSslCipher* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSslCipher_supportedBits(const QSslCipher* self) {
	return self->supportedBits();
}

int QSslCipher_usedBits(const QSslCipher* self) {
	return self->usedBits();
}

struct miqt_string QSslCipher_keyExchangeMethod(const QSslCipher* self) {
	QString _ret = self->keyExchangeMethod();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCipher_authenticationMethod(const QSslCipher* self) {
	QString _ret = self->authenticationMethod();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCipher_encryptionMethod(const QSslCipher* self) {
	QString _ret = self->encryptionMethod();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCipher_protocolString(const QSslCipher* self) {
	QString _ret = self->protocolString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSslCipher_protocol(const QSslCipher* self) {
	QSsl::SslProtocol _ret = self->protocol();
	return static_cast<int>(_ret);
}

void QSslCipher_delete(QSslCipher* self) {
	delete self;
}

