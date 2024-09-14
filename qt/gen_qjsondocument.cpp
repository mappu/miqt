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
#include "qjsondocument.h"
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
	QJsonDocument _ret = QJsonDocument::fromRawData(data, static_cast<int>(size));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

const char* QJsonDocument_RawData(const QJsonDocument* self, int* size) {
	return (const char*) self->rawData(static_cast<int*>(size));
}

QJsonDocument* QJsonDocument_FromBinaryData(QByteArray* data) {
	QJsonDocument _ret = QJsonDocument::fromBinaryData(*data);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

QByteArray* QJsonDocument_ToBinaryData(const QJsonDocument* self) {
	QByteArray _ret = self->toBinaryData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QJsonDocument* QJsonDocument_FromVariant(QVariant* variant) {
	QJsonDocument _ret = QJsonDocument::fromVariant(*variant);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

QVariant* QJsonDocument_ToVariant(const QJsonDocument* self) {
	QVariant _ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

QJsonDocument* QJsonDocument_FromJson(QByteArray* json) {
	QJsonDocument _ret = QJsonDocument::fromJson(*json);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

QByteArray* QJsonDocument_ToJson(const QJsonDocument* self) {
	QByteArray _ret = self->toJson();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QByteArray* QJsonDocument_ToJsonWithFormat(const QJsonDocument* self, uintptr_t format) {
	QByteArray _ret = self->toJson(static_cast<QJsonDocument::JsonFormat>(format));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
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
	QJsonObject _ret = self->object();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(_ret));
}

QJsonArray* QJsonDocument_Array(const QJsonDocument* self) {
	QJsonArray _ret = self->array();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(_ret));
}

void QJsonDocument_SetObject(QJsonDocument* self, QJsonObject* object) {
	self->setObject(*object);
}

void QJsonDocument_SetArray(QJsonDocument* self, QJsonArray* array) {
	self->setArray(*array);
}

QJsonValue* QJsonDocument_OperatorSubscript(const QJsonDocument* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QJsonValue _ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
}

QJsonValue* QJsonDocument_OperatorSubscriptWithInt(const QJsonDocument* self, int i) {
	QJsonValue _ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
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

QJsonDocument* QJsonDocument_FromRawData3(const char* data, int size, uintptr_t validation) {
	QJsonDocument _ret = QJsonDocument::fromRawData(data, static_cast<int>(size), static_cast<QJsonDocument::DataValidation>(validation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

QJsonDocument* QJsonDocument_FromBinaryData2(QByteArray* data, uintptr_t validation) {
	QJsonDocument _ret = QJsonDocument::fromBinaryData(*data, static_cast<QJsonDocument::DataValidation>(validation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

QJsonDocument* QJsonDocument_FromJson2(QByteArray* json, QJsonParseError* error) {
	QJsonDocument _ret = QJsonDocument::fromJson(*json, error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(_ret));
}

void QJsonDocument_Delete(QJsonDocument* self) {
	delete self;
}

