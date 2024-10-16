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
#include "_cgo_export.h"

struct miqt_string* QJsonParseError_ErrorString(const QJsonParseError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QJsonParseError_Delete(QJsonParseError* self) {
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

void QJsonDocument_OperatorAssign(QJsonDocument* self, QJsonDocument* other) {
	self->operator=(*other);
}

void QJsonDocument_Swap(QJsonDocument* self, QJsonDocument* other) {
	self->swap(*other);
}

QJsonDocument* QJsonDocument_FromRawData(const char* data, int size) {
	return new QJsonDocument(QJsonDocument::fromRawData(data, static_cast<int>(size)));
}

const char* QJsonDocument_RawData(const QJsonDocument* self, int* size) {
	return (const char*) self->rawData(static_cast<int*>(size));
}

QJsonDocument* QJsonDocument_FromBinaryData(QByteArray* data) {
	return new QJsonDocument(QJsonDocument::fromBinaryData(*data));
}

QByteArray* QJsonDocument_ToBinaryData(const QJsonDocument* self) {
	return new QByteArray(self->toBinaryData());
}

QJsonDocument* QJsonDocument_FromVariant(QVariant* variant) {
	return new QJsonDocument(QJsonDocument::fromVariant(*variant));
}

QVariant* QJsonDocument_ToVariant(const QJsonDocument* self) {
	return new QVariant(self->toVariant());
}

QJsonDocument* QJsonDocument_FromJson(QByteArray* json) {
	return new QJsonDocument(QJsonDocument::fromJson(*json));
}

QByteArray* QJsonDocument_ToJson(const QJsonDocument* self) {
	return new QByteArray(self->toJson());
}

QByteArray* QJsonDocument_ToJsonWithFormat(const QJsonDocument* self, int format) {
	return new QByteArray(self->toJson(static_cast<QJsonDocument::JsonFormat>(format)));
}

bool QJsonDocument_IsEmpty(const QJsonDocument* self) {
	return self->isEmpty();
}

bool QJsonDocument_IsArray(const QJsonDocument* self) {
	return self->isArray();
}

bool QJsonDocument_IsObject(const QJsonDocument* self) {
	return self->isObject();
}

QJsonObject* QJsonDocument_Object(const QJsonDocument* self) {
	return new QJsonObject(self->object());
}

QJsonArray* QJsonDocument_Array(const QJsonDocument* self) {
	return new QJsonArray(self->array());
}

void QJsonDocument_SetObject(QJsonDocument* self, QJsonObject* object) {
	self->setObject(*object);
}

void QJsonDocument_SetArray(QJsonDocument* self, QJsonArray* array) {
	self->setArray(*array);
}

QJsonValue* QJsonDocument_OperatorSubscript(const QJsonDocument* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValue* QJsonDocument_OperatorSubscriptWithInt(const QJsonDocument* self, int i) {
	return new QJsonValue(self->operator[](static_cast<int>(i)));
}

bool QJsonDocument_OperatorEqual(const QJsonDocument* self, QJsonDocument* other) {
	return self->operator==(*other);
}

bool QJsonDocument_OperatorNotEqual(const QJsonDocument* self, QJsonDocument* other) {
	return self->operator!=(*other);
}

bool QJsonDocument_IsNull(const QJsonDocument* self) {
	return self->isNull();
}

QJsonDocument* QJsonDocument_FromRawData3(const char* data, int size, int validation) {
	return new QJsonDocument(QJsonDocument::fromRawData(data, static_cast<int>(size), static_cast<QJsonDocument::DataValidation>(validation)));
}

QJsonDocument* QJsonDocument_FromBinaryData2(QByteArray* data, int validation) {
	return new QJsonDocument(QJsonDocument::fromBinaryData(*data, static_cast<QJsonDocument::DataValidation>(validation)));
}

QJsonDocument* QJsonDocument_FromJson2(QByteArray* json, QJsonParseError* error) {
	return new QJsonDocument(QJsonDocument::fromJson(*json, error));
}

void QJsonDocument_Delete(QJsonDocument* self) {
	delete self;
}

