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

QCborValue* QCborValue_new2(int t_) {
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

QCborValue* QCborValue_new8(uint8_t st) {
	return new QCborValue(static_cast<QCborSimpleType>(st));
}

QCborValue* QCborValue_new9(QByteArray* ba) {
	return new QCborValue(*ba);
}

QCborValue* QCborValue_new10(struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return new QCborValue(s_QString);
}

QCborValue* QCborValue_new11(const char* s) {
	return new QCborValue(s);
}

QCborValue* QCborValue_new12(QCborArray* a) {
	return new QCborValue(*a);
}

QCborValue* QCborValue_new13(QCborMap* m) {
	return new QCborValue(*m);
}

QCborValue* QCborValue_new14(uint64_t tag) {
	return new QCborValue(static_cast<QCborTag>(tag));
}

QCborValue* QCborValue_new15(int t_) {
	return new QCborValue(static_cast<QCborKnownTags>(t_));
}

QCborValue* QCborValue_new16(QDateTime* dt) {
	return new QCborValue(*dt);
}

QCborValue* QCborValue_new17(QUrl* url) {
	return new QCborValue(*url);
}

QCborValue* QCborValue_new18(QRegularExpression* rx) {
	return new QCborValue(*rx);
}

QCborValue* QCborValue_new19(QUuid* uuid) {
	return new QCborValue(*uuid);
}

QCborValue* QCborValue_new20(QCborValue* other) {
	return new QCborValue(*other);
}

QCborValue* QCborValue_new21(uint64_t tag, QCborValue* taggedValue) {
	return new QCborValue(static_cast<QCborTag>(tag), *taggedValue);
}

QCborValue* QCborValue_new22(int t_, QCborValue* tv) {
	return new QCborValue(static_cast<QCborKnownTags>(t_), *tv);
}

void QCborValue_OperatorAssign(QCborValue* self, QCborValue* other) {
	self->operator=(*other);
}

void QCborValue_Swap(QCborValue* self, QCborValue* other) {
	self->swap(*other);
}

int QCborValue_Type(const QCborValue* self) {
	QCborValue::Type _ret = self->type();
	return static_cast<int>(_ret);
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

bool QCborValue_IsSimpleTypeWithSt(const QCborValue* self, uint8_t st) {
	return self->isSimpleType(static_cast<QCborSimpleType>(st));
}

uint8_t QCborValue_ToSimpleType(const QCborValue* self) {
	QCborSimpleType _ret = self->toSimpleType();
	return static_cast<uint8_t>(_ret);
}

long long QCborValue_ToInteger(const QCborValue* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

bool QCborValue_ToBool(const QCborValue* self) {
	return self->toBool();
}

double QCborValue_ToDouble(const QCborValue* self) {
	return self->toDouble();
}

uint64_t QCborValue_Tag(const QCborValue* self) {
	QCborTag _ret = self->tag();
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValue_TaggedValue(const QCborValue* self) {
	return new QCborValue(self->taggedValue());
}

QByteArray* QCborValue_ToByteArray(const QCborValue* self) {
	return new QByteArray(self->toByteArray());
}

struct miqt_string* QCborValue_ToString(const QCborValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValue_ToDateTime(const QCborValue* self) {
	return new QDateTime(self->toDateTime());
}

QUrl* QCborValue_ToUrl(const QCborValue* self) {
	return new QUrl(self->toUrl());
}

QRegularExpression* QCborValue_ToRegularExpression(const QCborValue* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QUuid* QCborValue_ToUuid(const QCborValue* self) {
	return new QUuid(self->toUuid());
}

QCborArray* QCborValue_ToArray(const QCborValue* self) {
	return new QCborArray(self->toArray());
}

QCborArray* QCborValue_ToArrayWithDefaultValue(const QCborValue* self, QCborArray* defaultValue) {
	return new QCborArray(self->toArray(*defaultValue));
}

QCborMap* QCborValue_ToMap(const QCborValue* self) {
	return new QCborMap(self->toMap());
}

QCborMap* QCborValue_ToMapWithDefaultValue(const QCborValue* self, QCborMap* defaultValue) {
	return new QCborMap(self->toMap(*defaultValue));
}

QCborValue* QCborValue_OperatorSubscript(const QCborValue* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborValue_OperatorSubscript2(const QCborValue* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValue_OperatorSubscript3(QCborValue* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValue_OperatorSubscript5(QCborValue* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QCborValueRef(self->operator[](key_QString));
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
	return new QCborValue(QCborValue::fromVariant(*variant));
}

QVariant* QCborValue_ToVariant(const QCborValue* self) {
	return new QVariant(self->toVariant());
}

QCborValue* QCborValue_FromJsonValue(QJsonValue* v) {
	return new QCborValue(QCborValue::fromJsonValue(*v));
}

QJsonValue* QCborValue_ToJsonValue(const QCborValue* self) {
	return new QJsonValue(self->toJsonValue());
}

QCborValue* QCborValue_FromCbor(QCborStreamReader* reader) {
	return new QCborValue(QCborValue::fromCbor(*reader));
}

QCborValue* QCborValue_FromCborWithBa(QByteArray* ba) {
	return new QCborValue(QCborValue::fromCbor(*ba));
}

QCborValue* QCborValue_FromCbor2(const char* data, ptrdiff_t lenVal) {
	return new QCborValue(QCborValue::fromCbor(data, (qsizetype)(lenVal)));
}

QCborValue* QCborValue_FromCbor3(const unsigned char* data, ptrdiff_t lenVal) {
	return new QCborValue(QCborValue::fromCbor(static_cast<const quint8*>(data), (qsizetype)(lenVal)));
}

QByteArray* QCborValue_ToCbor(QCborValue* self) {
	return new QByteArray(self->toCbor());
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

uint8_t QCborValue_ToSimpleType1(const QCborValue* self, uint8_t defaultValue) {
	QCborSimpleType _ret = self->toSimpleType(static_cast<QCborSimpleType>(defaultValue));
	return static_cast<uint8_t>(_ret);
}

long long QCborValue_ToInteger1(const QCborValue* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

bool QCborValue_ToBool1(const QCborValue* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValue_ToDouble1(const QCborValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

uint64_t QCborValue_Tag1(const QCborValue* self, uint64_t defaultValue) {
	QCborTag _ret = self->tag(static_cast<QCborTag>(defaultValue));
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValue_TaggedValue1(const QCborValue* self, QCborValue* defaultValue) {
	return new QCborValue(self->taggedValue(*defaultValue));
}

QByteArray* QCborValue_ToByteArray1(const QCborValue* self, QByteArray* defaultValue) {
	return new QByteArray(self->toByteArray(*defaultValue));
}

struct miqt_string* QCborValue_ToString1(const QCborValue* self, struct miqt_string* defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(&defaultValue->data, defaultValue->len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValue_ToDateTime1(const QCborValue* self, QDateTime* defaultValue) {
	return new QDateTime(self->toDateTime(*defaultValue));
}

QUrl* QCborValue_ToUrl1(const QCborValue* self, QUrl* defaultValue) {
	return new QUrl(self->toUrl(*defaultValue));
}

QRegularExpression* QCborValue_ToRegularExpression1(const QCborValue* self, QRegularExpression* defaultValue) {
	return new QRegularExpression(self->toRegularExpression(*defaultValue));
}

QUuid* QCborValue_ToUuid1(const QCborValue* self, QUuid* defaultValue) {
	return new QUuid(self->toUuid(*defaultValue));
}

QCborValue* QCborValue_FromCbor22(QByteArray* ba, QCborParserError* error) {
	return new QCborValue(QCborValue::fromCbor(*ba, error));
}

QCborValue* QCborValue_FromCbor32(const char* data, ptrdiff_t lenVal, QCborParserError* error) {
	return new QCborValue(QCborValue::fromCbor(data, (qsizetype)(lenVal), error));
}

QCborValue* QCborValue_FromCbor33(const unsigned char* data, ptrdiff_t lenVal, QCborParserError* error) {
	return new QCborValue(QCborValue::fromCbor(static_cast<const quint8*>(data), (qsizetype)(lenVal), error));
}

QByteArray* QCborValue_ToCbor1(QCborValue* self, int opt) {
	return new QByteArray(self->toCbor(static_cast<QCborValue::EncodingOptions>(opt)));
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

int QCborValueRef_Type(const QCborValueRef* self) {
	QCborValue::Type _ret = self->type();
	return static_cast<int>(_ret);
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

bool QCborValueRef_IsSimpleTypeWithSt(const QCborValueRef* self, uint8_t st) {
	return self->isSimpleType(static_cast<QCborSimpleType>(st));
}

uint64_t QCborValueRef_Tag(const QCborValueRef* self) {
	QCborTag _ret = self->tag();
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValueRef_TaggedValue(const QCborValueRef* self) {
	return new QCborValue(self->taggedValue());
}

long long QCborValueRef_ToInteger(const QCborValueRef* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

bool QCborValueRef_ToBool(const QCborValueRef* self) {
	return self->toBool();
}

double QCborValueRef_ToDouble(const QCborValueRef* self) {
	return self->toDouble();
}

QByteArray* QCborValueRef_ToByteArray(const QCborValueRef* self) {
	return new QByteArray(self->toByteArray());
}

struct miqt_string* QCborValueRef_ToString(const QCborValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValueRef_ToDateTime(const QCborValueRef* self) {
	return new QDateTime(self->toDateTime());
}

QUrl* QCborValueRef_ToUrl(const QCborValueRef* self) {
	return new QUrl(self->toUrl());
}

QRegularExpression* QCborValueRef_ToRegularExpression(const QCborValueRef* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QUuid* QCborValueRef_ToUuid(const QCborValueRef* self) {
	return new QUuid(self->toUuid());
}

QCborArray* QCborValueRef_ToArray(const QCborValueRef* self) {
	return new QCborArray(self->toArray());
}

QCborArray* QCborValueRef_ToArrayWithQCborArray(const QCborValueRef* self, QCborArray* a) {
	return new QCborArray(self->toArray(*a));
}

QCborMap* QCborValueRef_ToMap(const QCborValueRef* self) {
	return new QCborMap(self->toMap());
}

QCborMap* QCborValueRef_ToMapWithQCborMap(const QCborValueRef* self, QCborMap* m) {
	return new QCborMap(self->toMap(*m));
}

QCborValue* QCborValueRef_OperatorSubscript(const QCborValueRef* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborValueRef_OperatorSubscript2(const QCborValueRef* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValueRef_OperatorSubscript3(QCborValueRef* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValueRef_OperatorSubscript5(QCborValueRef* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return new QCborValueRef(self->operator[](key_QString));
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
	return new QVariant(self->toVariant());
}

QJsonValue* QCborValueRef_ToJsonValue(const QCborValueRef* self) {
	return new QJsonValue(self->toJsonValue());
}

QByteArray* QCborValueRef_ToCbor(QCborValueRef* self) {
	return new QByteArray(self->toCbor());
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

uint64_t QCborValueRef_Tag1(const QCborValueRef* self, uint64_t defaultValue) {
	QCborTag _ret = self->tag(static_cast<QCborTag>(defaultValue));
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValueRef_TaggedValue1(const QCborValueRef* self, QCborValue* defaultValue) {
	return new QCborValue(self->taggedValue(*defaultValue));
}

long long QCborValueRef_ToInteger1(const QCborValueRef* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

bool QCborValueRef_ToBool1(const QCborValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValueRef_ToDouble1(const QCborValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

QByteArray* QCborValueRef_ToByteArray1(const QCborValueRef* self, QByteArray* defaultValue) {
	return new QByteArray(self->toByteArray(*defaultValue));
}

struct miqt_string* QCborValueRef_ToString1(const QCborValueRef* self, struct miqt_string* defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(&defaultValue->data, defaultValue->len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDateTime* QCborValueRef_ToDateTime1(const QCborValueRef* self, QDateTime* defaultValue) {
	return new QDateTime(self->toDateTime(*defaultValue));
}

QUrl* QCborValueRef_ToUrl1(const QCborValueRef* self, QUrl* defaultValue) {
	return new QUrl(self->toUrl(*defaultValue));
}

QRegularExpression* QCborValueRef_ToRegularExpression1(const QCborValueRef* self, QRegularExpression* defaultValue) {
	return new QRegularExpression(self->toRegularExpression(*defaultValue));
}

QUuid* QCborValueRef_ToUuid1(const QCborValueRef* self, QUuid* defaultValue) {
	return new QUuid(self->toUuid(*defaultValue));
}

QByteArray* QCborValueRef_ToCbor1(QCborValueRef* self, int opt) {
	return new QByteArray(self->toCbor(static_cast<QCborValue::EncodingOptions>(opt)));
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

