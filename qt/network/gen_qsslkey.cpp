#include <QByteArray>
#include <QIODevice>
#include <QSslKey>
#include <qsslkey.h>
#include "gen_qsslkey.h"
#include "_cgo_export.h"

void QSslKey_new(QSslKey** outptr_QSslKey) {
	QSslKey* ret = new QSslKey();
	*outptr_QSslKey = ret;
}

void QSslKey_new2(struct miqt_string encoded, int algorithm, QSslKey** outptr_QSslKey) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	QSslKey* ret = new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm));
	*outptr_QSslKey = ret;
}

void QSslKey_new3(QIODevice* device, int algorithm, QSslKey** outptr_QSslKey) {
	QSslKey* ret = new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm));
	*outptr_QSslKey = ret;
}

void QSslKey_new4(void* handle, QSslKey** outptr_QSslKey) {
	QSslKey* ret = new QSslKey(handle);
	*outptr_QSslKey = ret;
}

void QSslKey_new5(QSslKey* other, QSslKey** outptr_QSslKey) {
	QSslKey* ret = new QSslKey(*other);
	*outptr_QSslKey = ret;
}

void QSslKey_new6(struct miqt_string encoded, int algorithm, int format, QSslKey** outptr_QSslKey) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	QSslKey* ret = new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
	*outptr_QSslKey = ret;
}

void QSslKey_new7(struct miqt_string encoded, int algorithm, int format, int typeVal, QSslKey** outptr_QSslKey) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	QSslKey* ret = new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal));
	*outptr_QSslKey = ret;
}

void QSslKey_new8(struct miqt_string encoded, int algorithm, int format, int typeVal, struct miqt_string passPhrase, QSslKey** outptr_QSslKey) {
	QByteArray encoded_QByteArray(encoded.data, encoded.len);
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	QSslKey* ret = new QSslKey(encoded_QByteArray, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal), passPhrase_QByteArray);
	*outptr_QSslKey = ret;
}

void QSslKey_new9(QIODevice* device, int algorithm, int format, QSslKey** outptr_QSslKey) {
	QSslKey* ret = new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
	*outptr_QSslKey = ret;
}

void QSslKey_new10(QIODevice* device, int algorithm, int format, int typeVal, QSslKey** outptr_QSslKey) {
	QSslKey* ret = new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal));
	*outptr_QSslKey = ret;
}

void QSslKey_new11(QIODevice* device, int algorithm, int format, int typeVal, struct miqt_string passPhrase, QSslKey** outptr_QSslKey) {
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	QSslKey* ret = new QSslKey(device, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), static_cast<QSsl::KeyType>(typeVal), passPhrase_QByteArray);
	*outptr_QSslKey = ret;
}

void QSslKey_new12(void* handle, int typeVal, QSslKey** outptr_QSslKey) {
	QSslKey* ret = new QSslKey(handle, static_cast<QSsl::KeyType>(typeVal));
	*outptr_QSslKey = ret;
}

void QSslKey_OperatorAssign(QSslKey* self, QSslKey* other) {
	self->operator=(*other);
}

void QSslKey_Swap(QSslKey* self, QSslKey* other) {
	self->swap(*other);
}

bool QSslKey_IsNull(const QSslKey* self) {
	return self->isNull();
}

void QSslKey_Clear(QSslKey* self) {
	self->clear();
}

int QSslKey_Length(const QSslKey* self) {
	return self->length();
}

int QSslKey_Type(const QSslKey* self) {
	QSsl::KeyType _ret = self->type();
	return static_cast<int>(_ret);
}

int QSslKey_Algorithm(const QSslKey* self) {
	QSsl::KeyAlgorithm _ret = self->algorithm();
	return static_cast<int>(_ret);
}

struct miqt_string QSslKey_ToPem(const QSslKey* self) {
	QByteArray _qb = self->toPem();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslKey_ToDer(const QSslKey* self) {
	QByteArray _qb = self->toDer();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void* QSslKey_Handle(const QSslKey* self) {
	Qt::HANDLE _ret = self->handle();
	return static_cast<void*>(_ret);
}

bool QSslKey_OperatorEqual(const QSslKey* self, QSslKey* key) {
	return (*self == *key);
}

bool QSslKey_OperatorNotEqual(const QSslKey* self, QSslKey* key) {
	return (*self != *key);
}

struct miqt_string QSslKey_ToPem1(const QSslKey* self, struct miqt_string passPhrase) {
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	QByteArray _qb = self->toPem(passPhrase_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslKey_ToDer1(const QSslKey* self, struct miqt_string passPhrase) {
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	QByteArray _qb = self->toDer(passPhrase_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSslKey_Delete(QSslKey* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSslKey*>( self );
	} else {
		delete self;
	}
}

