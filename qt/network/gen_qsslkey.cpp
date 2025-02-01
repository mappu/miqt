#include <QByteArray>
#include <QIODevice>
#include <QSslKey>
#include <qsslkey.h>
#include "gen_qsslkey.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSslKey* QSslKey_new() {
	return new QSslKey();
}

QSslKey* QSslKey_new2(struct miqt_string encoded, int algorithm) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

QSslKey* QSslKey_new3(QIODevice* device, int algorithm) {
	return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

QSslKey* QSslKey_new4(void* handle) {
	return new QSslKey(handle);
}

QSslKey* QSslKey_new5(QSslKey* other) {
	return new QSslKey(*other);
}

QSslKey* QSslKey_new6(struct miqt_string encoded, int algorithm, int format) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

QSslKey* QSslKey_new7(struct miqt_string encoded, int algorithm, int format, int type) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(type));
}

QSslKey* QSslKey_new8(struct miqt_string encoded, int algorithm, int format, int type, struct miqt_string passPhrase) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	return new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(type), passPhrase_QByteArray);
}

QSslKey* QSslKey_new9(QIODevice* device, int algorithm, int format) {
	return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

QSslKey* QSslKey_new10(QIODevice* device, int algorithm, int format, int type) {
	return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(type));
}

QSslKey* QSslKey_new11(QIODevice* device, int algorithm, int format, int type, struct miqt_string passPhrase) {
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	return new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(type), passPhrase_QByteArray);
}

QSslKey* QSslKey_new12(void* handle, int type) {
	return new QSslKey(handle, static_cast<QSsl::KeyType>(type));
}

void QSslKey_operatorAssign(QSslKey* self, QSslKey* other) {
	self->operator=(*other);
}

void QSslKey_swap(QSslKey* self, QSslKey* other) {
	self->swap(*other);
}

bool QSslKey_isNull(const QSslKey* self) {
	return self->isNull();
}

void QSslKey_clear(QSslKey* self) {
	self->clear();
}

int QSslKey_length(const QSslKey* self) {
	return self->length();
}

int QSslKey_type(const QSslKey* self) {
	QSsl::KeyType _ret = self->type();
	return static_cast<int>(_ret);
}

int QSslKey_algorithm(const QSslKey* self) {
	QSsl::KeyAlgorithm _ret = self->algorithm();
	return static_cast<int>(_ret);
}

struct miqt_string QSslKey_toPem(const QSslKey* self) {
	QByteArray _qb = self->toPem();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslKey_toDer(const QSslKey* self) {
	QByteArray _qb = self->toDer();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void* QSslKey_handle(const QSslKey* self) {
	Qt::HANDLE _ret = self->handle();
	return static_cast<void*>(_ret);
}

bool QSslKey_operatorEqual(const QSslKey* self, QSslKey* key) {
	return (*self == *key);
}

bool QSslKey_operatorNotEqual(const QSslKey* self, QSslKey* key) {
	return (*self != *key);
}

struct miqt_string QSslKey_toPem1(const QSslKey* self, struct miqt_string passPhrase) {
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	QByteArray _qb = self->toPem(passPhrase_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslKey_toDer1(const QSslKey* self, struct miqt_string passPhrase) {
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	QByteArray _qb = self->toDer(passPhrase_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSslKey_delete(QSslKey* self) {
	delete self;
}

