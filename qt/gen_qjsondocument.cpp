#include <QByteArray>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsondocument.h>
#include "gen_qjsondocument.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QJsonParseError_errorString(const QJsonParseError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QJsonParseError_delete(QJsonParseError* self) {
	delete self;
}

QJsonDocument* QJsonDocument_new() {
	return new QJsonDocument();
}

QJsonDocument* QJsonDocument_new2(QJsonObject* object) {
	return new QJsonDocument(*object);
}

QJsonDocument* QJsonDocument_new3(QJsonArray* array) {
	return new QJsonDocument(*array);
}

QJsonDocument* QJsonDocument_new4(QJsonDocument* other) {
	return new QJsonDocument(*other);
}

void QJsonDocument_operatorAssign(QJsonDocument* self, QJsonDocument* other) {
	self->operator=(*other);
}

void QJsonDocument_swap(QJsonDocument* self, QJsonDocument* other) {
	self->swap(*other);
}

QJsonDocument* QJsonDocument_fromRawData(const char* data, int size) {
	return new QJsonDocument(QJsonDocument::fromRawData(data, static_cast<int>(size)));
}

const char* QJsonDocument_rawData(const QJsonDocument* self, int* size) {
	return (const char*) self->rawData(static_cast<int*>(size));
}

QJsonDocument* QJsonDocument_fromBinaryData(struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QJsonDocument(QJsonDocument::fromBinaryData(data_QByteArray));
}

struct miqt_string QJsonDocument_toBinaryData(const QJsonDocument* self) {
	QByteArray _qb = self->toBinaryData();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QJsonDocument* QJsonDocument_fromVariant(QVariant* variant) {
	return new QJsonDocument(QJsonDocument::fromVariant(*variant));
}

QVariant* QJsonDocument_toVariant(const QJsonDocument* self) {
	return new QVariant(self->toVariant());
}

QJsonDocument* QJsonDocument_fromJson(struct miqt_string json) {
	QByteArray json_QByteArray(json.data, json.len);
	return new QJsonDocument(QJsonDocument::fromJson(json_QByteArray));
}

struct miqt_string QJsonDocument_toJson(const QJsonDocument* self) {
	QByteArray _qb = self->toJson();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QJsonDocument_toJsonWithFormat(const QJsonDocument* self, int format) {
	QByteArray _qb = self->toJson(static_cast<QJsonDocument::JsonFormat>(format));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QJsonDocument_isEmpty(const QJsonDocument* self) {
	return self->isEmpty();
}

bool QJsonDocument_isArray(const QJsonDocument* self) {
	return self->isArray();
}

bool QJsonDocument_isObject(const QJsonDocument* self) {
	return self->isObject();
}

QJsonObject* QJsonDocument_object(const QJsonDocument* self) {
	return new QJsonObject(self->object());
}

QJsonArray* QJsonDocument_array(const QJsonDocument* self) {
	return new QJsonArray(self->array());
}

void QJsonDocument_setObject(QJsonDocument* self, QJsonObject* object) {
	self->setObject(*object);
}

void QJsonDocument_setArray(QJsonDocument* self, QJsonArray* array) {
	self->setArray(*array);
}

QJsonValue* QJsonDocument_operatorSubscript(const QJsonDocument* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValue* QJsonDocument_operatorSubscriptWithInt(const QJsonDocument* self, int i) {
	return new QJsonValue(self->operator[](static_cast<int>(i)));
}

bool QJsonDocument_operatorEqual(const QJsonDocument* self, QJsonDocument* other) {
	return (*self == *other);
}

bool QJsonDocument_operatorNotEqual(const QJsonDocument* self, QJsonDocument* other) {
	return (*self != *other);
}

bool QJsonDocument_isNull(const QJsonDocument* self) {
	return self->isNull();
}

QJsonDocument* QJsonDocument_fromRawData3(const char* data, int size, int validation) {
	return new QJsonDocument(QJsonDocument::fromRawData(data, static_cast<int>(size), static_cast<QJsonDocument::DataValidation>(validation)));
}

QJsonDocument* QJsonDocument_fromBinaryData2(struct miqt_string data, int validation) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QJsonDocument(QJsonDocument::fromBinaryData(data_QByteArray, static_cast<QJsonDocument::DataValidation>(validation)));
}

QJsonDocument* QJsonDocument_fromJson2(struct miqt_string json, QJsonParseError* error) {
	QByteArray json_QByteArray(json.data, json.len);
	return new QJsonDocument(QJsonDocument::fromJson(json_QByteArray, error));
}

void QJsonDocument_delete(QJsonDocument* self) {
	delete self;
}

