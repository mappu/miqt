#include <QByteArray>
#include <QCborArray>
#include <QCborMap>
#include <QCborParserError>
#include <QCborStreamReader>
#include <QCborStreamWriter>
#include <QCborValue>
#include <QCborValueRef>
#include <QDateTime>
#include <QJsonValue>
#include <QRegularExpression>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUuid>
#include <QVariant>
#include "qcborvalue.h"
#include "gen_qcborvalue.h"
#include "_cgo_export.h"

struct miqt_string* QCborParserError_ErrorString(const QCborParserError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCborParserError_Delete(QCborParserError* self) {
	delete self;
}

QCborValue* QCborValue_new() {
	return new QCborValue();
}

QCborValue* QCborValue_new2(uintptr_t t_) {
	return new QCborValue(static_cast<QCborValue::Type>(t_));
}

QCborValue* QCborValue_new3(bool b_) {
	return new QCborValue(b_);
}

QCborValue* QCborValue_new4(int i) {
	return new QCborValue(static_cast<int>(i));
}

QCborValue* QCborValue_new5(unsigned int u) {
	return new QCborValue(static_cast<unsigned int>(u));
}

QCborValue* QCborValue_new6(long long i) {
	return new QCborValue(static_cast<qint64>(i));
}

QCborValue* QCborValue_new7(double v) {
	return new QCborValue(static_cast<double>(v));
}

QCborValue* QCborValue_new8(QByteArray* ba) {
	return new QCborValue(*ba);
}

QCborValue* QCborValue_new9(struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return new QCborValue(s_QString);
}

QCborValue* QCborValue_new10(const char* s) {
	return new QCborValue(s);
}

QCborValue* QCborValue_new11(QCborArray* a) {
	return new QCborValue(*a);
}

QCborValue* QCborValue_new12(QCborMap* m) {
	return new QCborValue(*m);
}

QCborValue* QCborValue_new13(QDateTime* dt) {
	return new QCborValue(*dt);
}

QCborValue* QCborValue_new14(QUrl* url) {
	return new QCborValue(*url);
}

QCborValue* QCborValue_new15(QRegularExpression* rx) {
	return new QCborValue(*rx);
}

QCborValue* QCborValue_new16(QUuid* uuid) {
	return new QCborValue(*uuid);
}

QCborValue* QCborValue_new17(QCborValue* other) {
	return new QCborValue(*other);
}

void QCborValue_OperatorAssign(QCborValue* self, QCborValue* other) {
	self->operator=(*other);
}

void QCborValue_Swap(QCborValue* self, QCborValue* other) {
	self->swap(*other);
}

uintptr_t QCborValue_Type(const QCborValue* self) {
	QCborValue::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

bool QCborValue_IsInteger(const QCborValue* self) {
	return self->isInteger();
}

bool QCborValue_IsByteArray(const QCborValue* self) {
	return self->isByteArray();
}

bool QCborValue_IsString(const QCborValue* self) {
	return self->isString();
}

bool QCborValue_IsArray(const QCborValue* self) {
	return self->isArray();
}

bool QCborValue_IsMap(const QCborValue* self) {
	return self->isMap();
}

bool QCborValue_IsTag(const QCborValue* self) {
	return self->isTag();
}

bool QCborValue_IsFalse(const QCborValue* self) {
	return self->isFalse();
}

bool QCborValue_IsTrue(const QCborValue* self) {
	return self->isTrue();
}

bool QCborValue_IsBool(const QCborValue* self) {
	return self->isBool();
}

bool QCborValue_IsNull(const QCborValue* self) {
	return self->isNull();
}

bool QCborValue_IsUndefined(const QCborValue* self) {
	return self->isUndefined();
}

bool QCborValue_IsDouble(const QCborValue* self) {
	return self->isDouble();
}

bool QCborValue_IsDateTime(const QCborValue* self) {
	return self->isDateTime();
}

bool QCborValue_IsUrl(const QCborValue* self) {
	return self->isUrl();
}

bool QCborValue_IsRegularExpression(const QCborValue* self) {
	return self->isRegularExpression();
}

bool QCborValue_IsUuid(const QCborValue* self) {
	return self->isUuid();
}

bool QCborValue_IsInvalid(const QCborValue* self) {
	return self->isInvalid();
}

bool QCborValue_IsContainer(const QCborValue* self) {
	return self->isContainer();
}

bool QCborValue_IsSimpleType(const QCborValue* self) {
	return self->isSimpleType();
}

long long QCborValue_ToInteger(const QCborValue* self) {
	return self->toInteger();
}

bool QCborValue_ToBool(const QCborValue* self) {
	return self->toBool();
}

double QCborValue_ToDouble(const QCborValue* self) {
	return self->toDouble();
}

QCborValue* QCborValue_TaggedValue(const QCborValue* self) {
	QCborValue _ret = self->taggedValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QByteArray* QCborValue_ToByteArray(const QCborValue* self) {
	QByteArray _ret = self->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_string* QCborValue_ToString(const QCborValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValue_ToDateTime(const QCborValue* self) {
	QDateTime _ret = self->toDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

QUrl* QCborValue_ToUrl(const QCborValue* self) {
	QUrl _ret = self->toUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QRegularExpression* QCborValue_ToRegularExpression(const QCborValue* self) {
	QRegularExpression _ret = self->toRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(_ret));
}

QUuid* QCborValue_ToUuid(const QCborValue* self) {
	QUuid _ret = self->toUuid();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(_ret));
}

QCborArray* QCborValue_ToArray(const QCborValue* self) {
	QCborArray _ret = self->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(_ret));
}

QCborArray* QCborValue_ToArrayWithDefaultValue(const QCborValue* self, QCborArray* defaultValue) {
	QCborArray _ret = self->toArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(_ret));
}

QCborMap* QCborValue_ToMap(const QCborValue* self) {
	QCborMap _ret = self->toMap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(_ret));
}

QCborMap* QCborValue_ToMapWithDefaultValue(const QCborValue* self, QCborMap* defaultValue) {
	QCborMap _ret = self->toMap(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(_ret));
}

QCborValue* QCborValue_OperatorSubscript(const QCborValue* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QCborValue _ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValue* QCborValue_OperatorSubscript2(const QCborValue* self, long long key) {
	QCborValue _ret = self->operator[](static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValueRef* QCborValue_OperatorSubscript3(QCborValue* self, long long key) {
	QCborValueRef _ret = self->operator[](static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(_ret));
}

QCborValueRef* QCborValue_OperatorSubscript5(QCborValue* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QCborValueRef _ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(_ret));
}

int QCborValue_Compare(const QCborValue* self, QCborValue* other) {
	return self->compare(*other);
}

bool QCborValue_OperatorEqual(const QCborValue* self, QCborValue* other) {
	return self->operator==(*other);
}

bool QCborValue_OperatorNotEqual(const QCborValue* self, QCborValue* other) {
	return self->operator!=(*other);
}

bool QCborValue_OperatorLesser(const QCborValue* self, QCborValue* other) {
	return self->operator<(*other);
}

QCborValue* QCborValue_FromVariant(QVariant* variant) {
	QCborValue _ret = QCborValue::fromVariant(*variant);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QVariant* QCborValue_ToVariant(const QCborValue* self) {
	QVariant _ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

QCborValue* QCborValue_FromJsonValue(QJsonValue* v) {
	QCborValue _ret = QCborValue::fromJsonValue(*v);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QJsonValue* QCborValue_ToJsonValue(const QCborValue* self) {
	QJsonValue _ret = self->toJsonValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
}

QCborValue* QCborValue_FromCbor(QCborStreamReader* reader) {
	QCborValue _ret = QCborValue::fromCbor(*reader);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValue* QCborValue_FromCborWithBa(QByteArray* ba) {
	QCborValue _ret = QCborValue::fromCbor(*ba);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValue* QCborValue_FromCbor2(const char* data, size_t lenVal) {
	QCborValue _ret = QCborValue::fromCbor(data, static_cast<qsizetype>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValue* QCborValue_FromCbor3(const unsigned char* data, size_t lenVal) {
	QCborValue _ret = QCborValue::fromCbor(static_cast<const quint8*>(data), static_cast<qsizetype>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QByteArray* QCborValue_ToCbor(QCborValue* self) {
	QByteArray _ret = self->toCbor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

void QCborValue_ToCborWithWriter(QCborValue* self, QCborStreamWriter* writer) {
	self->toCbor(*writer);
}

struct miqt_string* QCborValue_ToDiagnosticNotation(const QCborValue* self) {
	QString _ret = self->toDiagnosticNotation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

long long QCborValue_ToInteger1(const QCborValue* self, long long defaultValue) {
	return self->toInteger(static_cast<qint64>(defaultValue));
}

bool QCborValue_ToBool1(const QCborValue* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValue_ToDouble1(const QCborValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

QCborValue* QCborValue_TaggedValue1(const QCborValue* self, QCborValue* defaultValue) {
	QCborValue _ret = self->taggedValue(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QByteArray* QCborValue_ToByteArray1(const QCborValue* self, QByteArray* defaultValue) {
	QByteArray _ret = self->toByteArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_string* QCborValue_ToString1(const QCborValue* self, struct miqt_string* defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(&defaultValue->data, defaultValue->len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValue_ToDateTime1(const QCborValue* self, QDateTime* defaultValue) {
	QDateTime _ret = self->toDateTime(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

QUrl* QCborValue_ToUrl1(const QCborValue* self, QUrl* defaultValue) {
	QUrl _ret = self->toUrl(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QRegularExpression* QCborValue_ToRegularExpression1(const QCborValue* self, QRegularExpression* defaultValue) {
	QRegularExpression _ret = self->toRegularExpression(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(_ret));
}

QUuid* QCborValue_ToUuid1(const QCborValue* self, QUuid* defaultValue) {
	QUuid _ret = self->toUuid(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(_ret));
}

QCborValue* QCborValue_FromCbor22(QByteArray* ba, QCborParserError* error) {
	QCborValue _ret = QCborValue::fromCbor(*ba, error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValue* QCborValue_FromCbor32(const char* data, size_t lenVal, QCborParserError* error) {
	QCborValue _ret = QCborValue::fromCbor(data, static_cast<qsizetype>(lenVal), error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValue* QCborValue_FromCbor33(const unsigned char* data, size_t lenVal, QCborParserError* error) {
	QCborValue _ret = QCborValue::fromCbor(static_cast<const quint8*>(data), static_cast<qsizetype>(lenVal), error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QByteArray* QCborValue_ToCbor1(QCborValue* self, int opt) {
	QByteArray _ret = self->toCbor(static_cast<QCborValue::EncodingOptions>(opt));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

void QCborValue_ToCbor2(QCborValue* self, QCborStreamWriter* writer, int opt) {
	self->toCbor(*writer, static_cast<QCborValue::EncodingOptions>(opt));
}

struct miqt_string* QCborValue_ToDiagnosticNotation1(const QCborValue* self, int opts) {
	QString _ret = self->toDiagnosticNotation(static_cast<QCborValue::DiagnosticNotationOptions>(opts));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCborValue_Delete(QCborValue* self) {
	delete self;
}

QCborValueRef* QCborValueRef_new(QCborValueRef* param1) {
	return new QCborValueRef(*param1);
}

void QCborValueRef_OperatorAssign(QCborValueRef* self, QCborValue* other) {
	self->operator=(*other);
}

void QCborValueRef_OperatorAssignWithOther(QCborValueRef* self, QCborValueRef* other) {
	self->operator=(*other);
}

uintptr_t QCborValueRef_Type(const QCborValueRef* self) {
	QCborValue::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

bool QCborValueRef_IsInteger(const QCborValueRef* self) {
	return self->isInteger();
}

bool QCborValueRef_IsByteArray(const QCborValueRef* self) {
	return self->isByteArray();
}

bool QCborValueRef_IsString(const QCborValueRef* self) {
	return self->isString();
}

bool QCborValueRef_IsArray(const QCborValueRef* self) {
	return self->isArray();
}

bool QCborValueRef_IsMap(const QCborValueRef* self) {
	return self->isMap();
}

bool QCborValueRef_IsTag(const QCborValueRef* self) {
	return self->isTag();
}

bool QCborValueRef_IsFalse(const QCborValueRef* self) {
	return self->isFalse();
}

bool QCborValueRef_IsTrue(const QCborValueRef* self) {
	return self->isTrue();
}

bool QCborValueRef_IsBool(const QCborValueRef* self) {
	return self->isBool();
}

bool QCborValueRef_IsNull(const QCborValueRef* self) {
	return self->isNull();
}

bool QCborValueRef_IsUndefined(const QCborValueRef* self) {
	return self->isUndefined();
}

bool QCborValueRef_IsDouble(const QCborValueRef* self) {
	return self->isDouble();
}

bool QCborValueRef_IsDateTime(const QCborValueRef* self) {
	return self->isDateTime();
}

bool QCborValueRef_IsUrl(const QCborValueRef* self) {
	return self->isUrl();
}

bool QCborValueRef_IsRegularExpression(const QCborValueRef* self) {
	return self->isRegularExpression();
}

bool QCborValueRef_IsUuid(const QCborValueRef* self) {
	return self->isUuid();
}

bool QCborValueRef_IsInvalid(const QCborValueRef* self) {
	return self->isInvalid();
}

bool QCborValueRef_IsContainer(const QCborValueRef* self) {
	return self->isContainer();
}

bool QCborValueRef_IsSimpleType(const QCborValueRef* self) {
	return self->isSimpleType();
}

QCborValue* QCborValueRef_TaggedValue(const QCborValueRef* self) {
	QCborValue _ret = self->taggedValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

long long QCborValueRef_ToInteger(const QCborValueRef* self) {
	return self->toInteger();
}

bool QCborValueRef_ToBool(const QCborValueRef* self) {
	return self->toBool();
}

double QCborValueRef_ToDouble(const QCborValueRef* self) {
	return self->toDouble();
}

QByteArray* QCborValueRef_ToByteArray(const QCborValueRef* self) {
	QByteArray _ret = self->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_string* QCborValueRef_ToString(const QCborValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValueRef_ToDateTime(const QCborValueRef* self) {
	QDateTime _ret = self->toDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

QUrl* QCborValueRef_ToUrl(const QCborValueRef* self) {
	QUrl _ret = self->toUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QRegularExpression* QCborValueRef_ToRegularExpression(const QCborValueRef* self) {
	QRegularExpression _ret = self->toRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(_ret));
}

QUuid* QCborValueRef_ToUuid(const QCborValueRef* self) {
	QUuid _ret = self->toUuid();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(_ret));
}

QCborArray* QCborValueRef_ToArray(const QCborValueRef* self) {
	QCborArray _ret = self->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(_ret));
}

QCborArray* QCborValueRef_ToArrayWithQCborArray(const QCborValueRef* self, QCborArray* a) {
	QCborArray _ret = self->toArray(*a);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(_ret));
}

QCborMap* QCborValueRef_ToMap(const QCborValueRef* self) {
	QCborMap _ret = self->toMap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(_ret));
}

QCborMap* QCborValueRef_ToMapWithQCborMap(const QCborValueRef* self, QCborMap* m) {
	QCborMap _ret = self->toMap(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(_ret));
}

QCborValue* QCborValueRef_OperatorSubscript(const QCborValueRef* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QCborValue _ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValue* QCborValueRef_OperatorSubscript2(const QCborValueRef* self, long long key) {
	QCborValue _ret = self->operator[](static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

QCborValueRef* QCborValueRef_OperatorSubscript3(QCborValueRef* self, long long key) {
	QCborValueRef _ret = self->operator[](static_cast<qint64>(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(_ret));
}

QCborValueRef* QCborValueRef_OperatorSubscript5(QCborValueRef* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QCborValueRef _ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(_ret));
}

int QCborValueRef_Compare(const QCborValueRef* self, QCborValue* other) {
	return self->compare(*other);
}

bool QCborValueRef_OperatorEqual(const QCborValueRef* self, QCborValue* other) {
	return self->operator==(*other);
}

bool QCborValueRef_OperatorNotEqual(const QCborValueRef* self, QCborValue* other) {
	return self->operator!=(*other);
}

bool QCborValueRef_OperatorLesser(const QCborValueRef* self, QCborValue* other) {
	return self->operator<(*other);
}

QVariant* QCborValueRef_ToVariant(const QCborValueRef* self) {
	QVariant _ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

QJsonValue* QCborValueRef_ToJsonValue(const QCborValueRef* self) {
	QJsonValue _ret = self->toJsonValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
}

QByteArray* QCborValueRef_ToCbor(QCborValueRef* self) {
	QByteArray _ret = self->toCbor();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

void QCborValueRef_ToCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer) {
	self->toCbor(*writer);
}

struct miqt_string* QCborValueRef_ToDiagnosticNotation(QCborValueRef* self) {
	QString _ret = self->toDiagnosticNotation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QCborValue* QCborValueRef_TaggedValue1(const QCborValueRef* self, QCborValue* defaultValue) {
	QCborValue _ret = self->taggedValue(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(_ret));
}

long long QCborValueRef_ToInteger1(const QCborValueRef* self, long long defaultValue) {
	return self->toInteger(static_cast<qint64>(defaultValue));
}

bool QCborValueRef_ToBool1(const QCborValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValueRef_ToDouble1(const QCborValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

QByteArray* QCborValueRef_ToByteArray1(const QCborValueRef* self, QByteArray* defaultValue) {
	QByteArray _ret = self->toByteArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_string* QCborValueRef_ToString1(const QCborValueRef* self, struct miqt_string* defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(&defaultValue->data, defaultValue->len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValueRef_ToDateTime1(const QCborValueRef* self, QDateTime* defaultValue) {
	QDateTime _ret = self->toDateTime(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(_ret));
}

QUrl* QCborValueRef_ToUrl1(const QCborValueRef* self, QUrl* defaultValue) {
	QUrl _ret = self->toUrl(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(_ret));
}

QRegularExpression* QCborValueRef_ToRegularExpression1(const QCborValueRef* self, QRegularExpression* defaultValue) {
	QRegularExpression _ret = self->toRegularExpression(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(_ret));
}

QUuid* QCborValueRef_ToUuid1(const QCborValueRef* self, QUuid* defaultValue) {
	QUuid _ret = self->toUuid(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(_ret));
}

QByteArray* QCborValueRef_ToCbor1(QCborValueRef* self, int opt) {
	QByteArray _ret = self->toCbor(static_cast<QCborValue::EncodingOptions>(opt));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

void QCborValueRef_ToCbor2(QCborValueRef* self, QCborStreamWriter* writer, int opt) {
	self->toCbor(*writer, static_cast<QCborValue::EncodingOptions>(opt));
}

struct miqt_string* QCborValueRef_ToDiagnosticNotation1(QCborValueRef* self, int opt) {
	QString _ret = self->toDiagnosticNotation(static_cast<QCborValue::DiagnosticNotationOptions>(opt));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCborValueRef_Delete(QCborValueRef* self) {
	delete self;
}

