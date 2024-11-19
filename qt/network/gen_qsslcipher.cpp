#include <QSslCipher>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslcipher.h>
#include "gen_qsslcipher.h"
#include "_cgo_export.h"

void QSslCipher_new(QSslCipher** outptr_QSslCipher) {
	QSslCipher* ret = new QSslCipher();
	*outptr_QSslCipher = ret;
}

void QSslCipher_new2(struct miqt_string name, QSslCipher** outptr_QSslCipher) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QSslCipher* ret = new QSslCipher(name_QString);
	*outptr_QSslCipher = ret;
}

void QSslCipher_new3(struct miqt_string name, int protocol, QSslCipher** outptr_QSslCipher) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QSslCipher* ret = new QSslCipher(name_QString, static_cast<QSsl::SslProtocol>(protocol));
	*outptr_QSslCipher = ret;
}

void QSslCipher_new4(QSslCipher* other, QSslCipher** outptr_QSslCipher) {
	QSslCipher* ret = new QSslCipher(*other);
	*outptr_QSslCipher = ret;
}

void QSslCipher_OperatorAssign(QSslCipher* self, QSslCipher* other) {
	self->operator=(*other);
}

void QSslCipher_Swap(QSslCipher* self, QSslCipher* other) {
	self->swap(*other);
}

bool QSslCipher_OperatorEqual(const QSslCipher* self, QSslCipher* other) {
	return self->operator==(*other);
}

bool QSslCipher_OperatorNotEqual(const QSslCipher* self, QSslCipher* other) {
	return self->operator!=(*other);
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

