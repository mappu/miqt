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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QJsonParseError_ErrorString(const QJsonParseError* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	QJsonDocument ret = QJsonDocument::fromRawData(data, static_cast<int>(size));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

const char* QJsonDocument_RawData(const QJsonDocument* self, int* size) {
	return (const char*) self->rawData(static_cast<int*>(size));
}

QJsonDocument* QJsonDocument_FromBinaryData(QByteArray* data) {
	QJsonDocument ret = QJsonDocument::fromBinaryData(*data);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

QByteArray* QJsonDocument_ToBinaryData(const QJsonDocument* self) {
	QByteArray ret = self->toBinaryData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QJsonDocument* QJsonDocument_FromVariant(QVariant* variant) {
	QJsonDocument ret = QJsonDocument::fromVariant(*variant);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

QVariant* QJsonDocument_ToVariant(const QJsonDocument* self) {
	QVariant ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QJsonDocument* QJsonDocument_FromJson(QByteArray* json) {
	QJsonDocument ret = QJsonDocument::fromJson(*json);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

QByteArray* QJsonDocument_ToJson(const QJsonDocument* self) {
	QByteArray ret = self->toJson();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QJsonDocument_ToJsonWithFormat(const QJsonDocument* self, uintptr_t format) {
	QByteArray ret = self->toJson(static_cast<QJsonDocument::JsonFormat>(format));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
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
	QJsonObject ret = self->object();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

QJsonArray* QJsonDocument_Array(const QJsonDocument* self) {
	QJsonArray ret = self->array();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
}

void QJsonDocument_SetObject(QJsonDocument* self, QJsonObject* object) {
	self->setObject(*object);
}

void QJsonDocument_SetArray(QJsonDocument* self, QJsonArray* array) {
	self->setArray(*array);
}

QJsonValue* QJsonDocument_OperatorSubscript(const QJsonDocument* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonValue ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonDocument_OperatorSubscriptWithInt(const QJsonDocument* self, int i) {
	QJsonValue ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
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
	QJsonDocument ret = QJsonDocument::fromRawData(data, static_cast<int>(size), static_cast<QJsonDocument::DataValidation>(validation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

QJsonDocument* QJsonDocument_FromBinaryData2(QByteArray* data, uintptr_t validation) {
	QJsonDocument ret = QJsonDocument::fromBinaryData(*data, static_cast<QJsonDocument::DataValidation>(validation));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

QJsonDocument* QJsonDocument_FromJson2(QByteArray* json, QJsonParseError* error) {
	QJsonDocument ret = QJsonDocument::fromJson(*json, error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonDocument*>(new QJsonDocument(ret));
}

void QJsonDocument_Delete(QJsonDocument* self) {
	delete self;
}

