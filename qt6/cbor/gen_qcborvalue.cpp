#include <QByteArray>
#include <QCborArray>
#include <QCborMap>
#include <QCborParserError>
#include <QCborStreamReader>
#include <QCborStreamWriter>
#include <QCborValue>
#include <QCborValueConstRef>
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
#include <qcborvalue.h>
#include "gen_qcborvalue.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QCborParserError_errorString(const QCborParserError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborParserError_delete(QCborParserError* self) {
	delete self;
}

QCborValue* QCborValue_new() {
	return new (std::nothrow) QCborValue();
}

QCborValue* QCborValue_new2(int t_) {
	return new (std::nothrow) QCborValue(static_cast<QCborValue::Type>(t_));
}

QCborValue* QCborValue_new3(bool b_) {
	return new (std::nothrow) QCborValue(b_);
}

QCborValue* QCborValue_new4(int i) {
	return new (std::nothrow) QCborValue(static_cast<int>(i));
}

QCborValue* QCborValue_new5(unsigned int u) {
	return new (std::nothrow) QCborValue(static_cast<unsigned int>(u));
}

QCborValue* QCborValue_new6(long long i) {
	return new (std::nothrow) QCborValue(static_cast<qint64>(i));
}

QCborValue* QCborValue_new7(double v) {
	return new (std::nothrow) QCborValue(static_cast<double>(v));
}

QCborValue* QCborValue_new8(uint8_t st) {
	return new (std::nothrow) QCborValue(static_cast<QCborSimpleType>(st));
}

QCborValue* QCborValue_new9(struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return new (std::nothrow) QCborValue(ba_QByteArray);
}

QCborValue* QCborValue_new10(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new (std::nothrow) QCborValue(s_QString);
}

QCborValue* QCborValue_new11(const char* s) {
	return new (std::nothrow) QCborValue(s);
}

QCborValue* QCborValue_new12(QCborArray* a) {
	return new (std::nothrow) QCborValue(*a);
}

QCborValue* QCborValue_new13(QCborMap* m) {
	return new (std::nothrow) QCborValue(*m);
}

QCborValue* QCborValue_new14(uint64_t tag) {
	return new (std::nothrow) QCborValue(static_cast<QCborTag>(tag));
}

QCborValue* QCborValue_new15(int t_) {
	return new (std::nothrow) QCborValue(static_cast<QCborKnownTags>(t_));
}

QCborValue* QCborValue_new16(QDateTime* dt) {
	return new (std::nothrow) QCborValue(*dt);
}

QCborValue* QCborValue_new17(QUrl* url) {
	return new (std::nothrow) QCborValue(*url);
}

QCborValue* QCborValue_new18(QRegularExpression* rx) {
	return new (std::nothrow) QCborValue(*rx);
}

QCborValue* QCborValue_new19(QUuid* uuid) {
	return new (std::nothrow) QCborValue(*uuid);
}

QCborValue* QCborValue_new20(QCborValue* other) {
	return new (std::nothrow) QCborValue(*other);
}

QCborValue* QCborValue_new21(uint64_t tag, QCborValue* taggedValue) {
	return new (std::nothrow) QCborValue(static_cast<QCborTag>(tag), *taggedValue);
}

QCborValue* QCborValue_new22(int t_, QCborValue* tv) {
	return new (std::nothrow) QCborValue(static_cast<QCborKnownTags>(t_), *tv);
}

void QCborValue_operatorAssign(QCborValue* self, QCborValue* other) {
	self->operator=(*other);
}

void QCborValue_swap(QCborValue* self, QCborValue* other) {
	self->swap(*other);
}

int QCborValue_type(const QCborValue* self) {
	QCborValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QCborValue_isInteger(const QCborValue* self) {
	return self->isInteger();
}

bool QCborValue_isByteArray(const QCborValue* self) {
	return self->isByteArray();
}

bool QCborValue_isString(const QCborValue* self) {
	return self->isString();
}

bool QCborValue_isArray(const QCborValue* self) {
	return self->isArray();
}

bool QCborValue_isMap(const QCborValue* self) {
	return self->isMap();
}

bool QCborValue_isTag(const QCborValue* self) {
	return self->isTag();
}

bool QCborValue_isFalse(const QCborValue* self) {
	return self->isFalse();
}

bool QCborValue_isTrue(const QCborValue* self) {
	return self->isTrue();
}

bool QCborValue_isBool(const QCborValue* self) {
	return self->isBool();
}

bool QCborValue_isNull(const QCborValue* self) {
	return self->isNull();
}

bool QCborValue_isUndefined(const QCborValue* self) {
	return self->isUndefined();
}

bool QCborValue_isDouble(const QCborValue* self) {
	return self->isDouble();
}

bool QCborValue_isDateTime(const QCborValue* self) {
	return self->isDateTime();
}

bool QCborValue_isUrl(const QCborValue* self) {
	return self->isUrl();
}

bool QCborValue_isRegularExpression(const QCborValue* self) {
	return self->isRegularExpression();
}

bool QCborValue_isUuid(const QCborValue* self) {
	return self->isUuid();
}

bool QCborValue_isInvalid(const QCborValue* self) {
	return self->isInvalid();
}

bool QCborValue_isContainer(const QCborValue* self) {
	return self->isContainer();
}

bool QCborValue_isSimpleType(const QCborValue* self) {
	return self->isSimpleType();
}

bool QCborValue_isSimpleTypeWithSt(const QCborValue* self, uint8_t st) {
	return self->isSimpleType(static_cast<QCborSimpleType>(st));
}

uint8_t QCborValue_toSimpleType(const QCborValue* self) {
	QCborSimpleType _ret = self->toSimpleType();
	return static_cast<uint8_t>(_ret);
}

long long QCborValue_toInteger(const QCborValue* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

bool QCborValue_toBool(const QCborValue* self) {
	return self->toBool();
}

double QCborValue_toDouble(const QCborValue* self) {
	return self->toDouble();
}

uint64_t QCborValue_tag(const QCborValue* self) {
	QCborTag _ret = self->tag();
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValue_taggedValue(const QCborValue* self) {
	return new QCborValue(self->taggedValue());
}

struct miqt_string QCborValue_toByteArray(const QCborValue* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValue_toString(const QCborValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QCborValue_toDateTime(const QCborValue* self) {
	return new QDateTime(self->toDateTime());
}

QUrl* QCborValue_toUrl(const QCborValue* self) {
	return new QUrl(self->toUrl());
}

QRegularExpression* QCborValue_toRegularExpression(const QCborValue* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QUuid* QCborValue_toUuid(const QCborValue* self) {
	return new QUuid(self->toUuid());
}

QCborArray* QCborValue_toArray(const QCborValue* self) {
	return new QCborArray(self->toArray());
}

QCborArray* QCborValue_toArrayWithDefaultValue(const QCborValue* self, QCborArray* defaultValue) {
	return new QCborArray(self->toArray(*defaultValue));
}

QCborMap* QCborValue_toMap(const QCborValue* self) {
	return new QCborMap(self->toMap());
}

QCborMap* QCborValue_toMapWithDefaultValue(const QCborValue* self, QCborMap* defaultValue) {
	return new QCborMap(self->toMap(*defaultValue));
}

QCborValue* QCborValue_operatorSubscript(const QCborValue* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborValue_operatorSubscript2(const QCborValue* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValue_operatorSubscript3(QCborValue* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValue_operatorSubscript5(QCborValue* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValueRef(self->operator[](key_QString));
}

int QCborValue_compare(const QCborValue* self, QCborValue* other) {
	return self->compare(*other);
}

bool QCborValue_operatorEqual(const QCborValue* self, QCborValue* other) {
	return (*self == *other);
}

bool QCborValue_operatorNotEqual(const QCborValue* self, QCborValue* other) {
	return (*self != *other);
}

bool QCborValue_operatorLesser(const QCborValue* self, QCborValue* other) {
	return (*self < *other);
}

QCborValue* QCborValue_fromVariant(QVariant* variant) {
	return new QCborValue(QCborValue::fromVariant(*variant));
}

QVariant* QCborValue_toVariant(const QCborValue* self) {
	return new QVariant(self->toVariant());
}

QCborValue* QCborValue_fromJsonValue(QJsonValue* v) {
	return new QCborValue(QCborValue::fromJsonValue(*v));
}

QJsonValue* QCborValue_toJsonValue(const QCborValue* self) {
	return new QJsonValue(self->toJsonValue());
}

QCborValue* QCborValue_fromCbor(QCborStreamReader* reader) {
	return new QCborValue(QCborValue::fromCbor(*reader));
}

QCborValue* QCborValue_fromCborWithBa(struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return new QCborValue(QCborValue::fromCbor(ba_QByteArray));
}

QCborValue* QCborValue_fromCbor2(const char* data, ptrdiff_t len) {
	return new QCborValue(QCborValue::fromCbor(data, (qsizetype)(len)));
}

QCborValue* QCborValue_fromCbor3(const unsigned char* data, ptrdiff_t len) {
	return new QCborValue(QCborValue::fromCbor(static_cast<const quint8*>(data), (qsizetype)(len)));
}

struct miqt_string QCborValue_toCbor(const QCborValue* self) {
	QByteArray _qb = self->toCbor();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValue_toCborWithWriter(const QCborValue* self, QCborStreamWriter* writer) {
	self->toCbor(*writer);
}

struct miqt_string QCborValue_toDiagnosticNotation(const QCborValue* self) {
	QString _ret = self->toDiagnosticNotation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uint8_t QCborValue_toSimpleTypeWithDefaultValue(const QCborValue* self, uint8_t defaultValue) {
	QCborSimpleType _ret = self->toSimpleType(static_cast<QCborSimpleType>(defaultValue));
	return static_cast<uint8_t>(_ret);
}

long long QCborValue_toIntegerWithDefaultValue(const QCborValue* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

bool QCborValue_toBoolWithDefaultValue(const QCborValue* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValue_toDoubleWithDefaultValue(const QCborValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

uint64_t QCborValue_tagWithDefaultValue(const QCborValue* self, uint64_t defaultValue) {
	QCborTag _ret = self->tag(static_cast<QCborTag>(defaultValue));
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValue_taggedValueWithDefaultValue(const QCborValue* self, QCborValue* defaultValue) {
	return new QCborValue(self->taggedValue(*defaultValue));
}

struct miqt_string QCborValue_toByteArrayWithDefaultValue(const QCborValue* self, struct miqt_string defaultValue) {
	QByteArray defaultValue_QByteArray(defaultValue.data, defaultValue.len);
	QByteArray _qb = self->toByteArray(defaultValue_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValue_toStringWithDefaultValue(const QCborValue* self, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QCborValue_toDateTimeWithDefaultValue(const QCborValue* self, QDateTime* defaultValue) {
	return new QDateTime(self->toDateTime(*defaultValue));
}

QUrl* QCborValue_toUrlWithDefaultValue(const QCborValue* self, QUrl* defaultValue) {
	return new QUrl(self->toUrl(*defaultValue));
}

QRegularExpression* QCborValue_toRegularExpressionWithDefaultValue(const QCborValue* self, QRegularExpression* defaultValue) {
	return new QRegularExpression(self->toRegularExpression(*defaultValue));
}

QUuid* QCborValue_toUuidWithDefaultValue(const QCborValue* self, QUuid* defaultValue) {
	return new QUuid(self->toUuid(*defaultValue));
}

QCborValue* QCborValue_fromCbor4(struct miqt_string ba, QCborParserError* error) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return new QCborValue(QCborValue::fromCbor(ba_QByteArray, error));
}

QCborValue* QCborValue_fromCbor5(const char* data, ptrdiff_t len, QCborParserError* error) {
	return new QCborValue(QCborValue::fromCbor(data, (qsizetype)(len), error));
}

QCborValue* QCborValue_fromCbor6(const unsigned char* data, ptrdiff_t len, QCborParserError* error) {
	return new QCborValue(QCborValue::fromCbor(static_cast<const quint8*>(data), (qsizetype)(len), error));
}

struct miqt_string QCborValue_toCborWithOpt(const QCborValue* self, int opt) {
	QByteArray _qb = self->toCbor(static_cast<QCborValue::EncodingOptions>(opt));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValue_toCbor2(const QCborValue* self, QCborStreamWriter* writer, int opt) {
	self->toCbor(*writer, static_cast<QCborValue::EncodingOptions>(opt));
}

struct miqt_string QCborValue_toDiagnosticNotationWithOpts(const QCborValue* self, int opts) {
	QString _ret = self->toDiagnosticNotation(static_cast<QCborValue::DiagnosticNotationOptions>(opts));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborValue_delete(QCborValue* self) {
	delete self;
}

QCborValueConstRef* QCborValueConstRef_new(QCborValueConstRef* param1) {
	return new (std::nothrow) QCborValueConstRef(*param1);
}

QCborValue* QCborValueConstRef_ToQCborValue(const QCborValueConstRef* self) {
	return new QCborValue(self->operator QCborValue());
}

int QCborValueConstRef_type(const QCborValueConstRef* self) {
	QCborValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QCborValueConstRef_isInteger(const QCborValueConstRef* self) {
	return self->isInteger();
}

bool QCborValueConstRef_isByteArray(const QCborValueConstRef* self) {
	return self->isByteArray();
}

bool QCborValueConstRef_isString(const QCborValueConstRef* self) {
	return self->isString();
}

bool QCborValueConstRef_isArray(const QCborValueConstRef* self) {
	return self->isArray();
}

bool QCborValueConstRef_isMap(const QCborValueConstRef* self) {
	return self->isMap();
}

bool QCborValueConstRef_isTag(const QCborValueConstRef* self) {
	return self->isTag();
}

bool QCborValueConstRef_isFalse(const QCborValueConstRef* self) {
	return self->isFalse();
}

bool QCborValueConstRef_isTrue(const QCborValueConstRef* self) {
	return self->isTrue();
}

bool QCborValueConstRef_isBool(const QCborValueConstRef* self) {
	return self->isBool();
}

bool QCborValueConstRef_isNull(const QCborValueConstRef* self) {
	return self->isNull();
}

bool QCborValueConstRef_isUndefined(const QCborValueConstRef* self) {
	return self->isUndefined();
}

bool QCborValueConstRef_isDouble(const QCborValueConstRef* self) {
	return self->isDouble();
}

bool QCborValueConstRef_isDateTime(const QCborValueConstRef* self) {
	return self->isDateTime();
}

bool QCborValueConstRef_isUrl(const QCborValueConstRef* self) {
	return self->isUrl();
}

bool QCborValueConstRef_isRegularExpression(const QCborValueConstRef* self) {
	return self->isRegularExpression();
}

bool QCborValueConstRef_isUuid(const QCborValueConstRef* self) {
	return self->isUuid();
}

bool QCborValueConstRef_isInvalid(const QCborValueConstRef* self) {
	return self->isInvalid();
}

bool QCborValueConstRef_isContainer(const QCborValueConstRef* self) {
	return self->isContainer();
}

bool QCborValueConstRef_isSimpleType(const QCborValueConstRef* self) {
	return self->isSimpleType();
}

bool QCborValueConstRef_isSimpleTypeWithSt(const QCborValueConstRef* self, uint8_t st) {
	return self->isSimpleType(static_cast<QCborSimpleType>(st));
}

uint8_t QCborValueConstRef_toSimpleType(const QCborValueConstRef* self) {
	QCborSimpleType _ret = self->toSimpleType();
	return static_cast<uint8_t>(_ret);
}

uint64_t QCborValueConstRef_tag(const QCborValueConstRef* self) {
	QCborTag _ret = self->tag();
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValueConstRef_taggedValue(const QCborValueConstRef* self) {
	return new QCborValue(self->taggedValue());
}

long long QCborValueConstRef_toInteger(const QCborValueConstRef* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

bool QCborValueConstRef_toBool(const QCborValueConstRef* self) {
	return self->toBool();
}

double QCborValueConstRef_toDouble(const QCborValueConstRef* self) {
	return self->toDouble();
}

struct miqt_string QCborValueConstRef_toByteArray(const QCborValueConstRef* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValueConstRef_toString(const QCborValueConstRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QCborValueConstRef_toDateTime(const QCborValueConstRef* self) {
	return new QDateTime(self->toDateTime());
}

QUrl* QCborValueConstRef_toUrl(const QCborValueConstRef* self) {
	return new QUrl(self->toUrl());
}

QRegularExpression* QCborValueConstRef_toRegularExpression(const QCborValueConstRef* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QUuid* QCborValueConstRef_toUuid(const QCborValueConstRef* self) {
	return new QUuid(self->toUuid());
}

QCborArray* QCborValueConstRef_toArray(const QCborValueConstRef* self) {
	return new QCborArray(self->toArray());
}

QCborArray* QCborValueConstRef_toArrayWithQCborArray(const QCborValueConstRef* self, QCborArray* a) {
	return new QCborArray(self->toArray(*a));
}

QCborMap* QCborValueConstRef_toMap(const QCborValueConstRef* self) {
	return new QCborMap(self->toMap());
}

QCborMap* QCborValueConstRef_toMapWithQCborMap(const QCborValueConstRef* self, QCborMap* m) {
	return new QCborMap(self->toMap(*m));
}

QCborValue* QCborValueConstRef_operatorSubscript(const QCborValueConstRef* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborValueConstRef_operatorSubscript2(const QCborValueConstRef* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

int QCborValueConstRef_compare(const QCborValueConstRef* self, QCborValue* other) {
	return self->compare(*other);
}

bool QCborValueConstRef_operatorEqual(const QCborValueConstRef* self, QCborValue* other) {
	return (*self == *other);
}

bool QCborValueConstRef_operatorNotEqual(const QCborValueConstRef* self, QCborValue* other) {
	return (*self != *other);
}

bool QCborValueConstRef_operatorLesser(const QCborValueConstRef* self, QCborValue* other) {
	return (*self < *other);
}

QVariant* QCborValueConstRef_toVariant(const QCborValueConstRef* self) {
	return new QVariant(self->toVariant());
}

QJsonValue* QCborValueConstRef_toJsonValue(const QCborValueConstRef* self) {
	return new QJsonValue(self->toJsonValue());
}

struct miqt_string QCborValueConstRef_toCbor(const QCborValueConstRef* self) {
	QByteArray _qb = self->toCbor();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValueConstRef_toCborWithWriter(const QCborValueConstRef* self, QCborStreamWriter* writer) {
	self->toCbor(*writer);
}

struct miqt_string QCborValueConstRef_toDiagnosticNotation(const QCborValueConstRef* self) {
	QString _ret = self->toDiagnosticNotation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uint8_t QCborValueConstRef_toSimpleTypeWithDefaultValue(const QCborValueConstRef* self, uint8_t defaultValue) {
	QCborSimpleType _ret = self->toSimpleType(static_cast<QCborSimpleType>(defaultValue));
	return static_cast<uint8_t>(_ret);
}

uint64_t QCborValueConstRef_tagWithDefaultValue(const QCborValueConstRef* self, uint64_t defaultValue) {
	QCborTag _ret = self->tag(static_cast<QCborTag>(defaultValue));
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValueConstRef_taggedValueWithDefaultValue(const QCborValueConstRef* self, QCborValue* defaultValue) {
	return new QCborValue(self->taggedValue(*defaultValue));
}

long long QCborValueConstRef_toIntegerWithDefaultValue(const QCborValueConstRef* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

bool QCborValueConstRef_toBoolWithDefaultValue(const QCborValueConstRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValueConstRef_toDoubleWithDefaultValue(const QCborValueConstRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QCborValueConstRef_toByteArrayWithDefaultValue(const QCborValueConstRef* self, struct miqt_string defaultValue) {
	QByteArray defaultValue_QByteArray(defaultValue.data, defaultValue.len);
	QByteArray _qb = self->toByteArray(defaultValue_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValueConstRef_toStringWithDefaultValue(const QCborValueConstRef* self, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QCborValueConstRef_toDateTimeWithDefaultValue(const QCborValueConstRef* self, QDateTime* defaultValue) {
	return new QDateTime(self->toDateTime(*defaultValue));
}

QUrl* QCborValueConstRef_toUrlWithDefaultValue(const QCborValueConstRef* self, QUrl* defaultValue) {
	return new QUrl(self->toUrl(*defaultValue));
}

QRegularExpression* QCborValueConstRef_toRegularExpressionWithDefaultValue(const QCborValueConstRef* self, QRegularExpression* defaultValue) {
	return new QRegularExpression(self->toRegularExpression(*defaultValue));
}

QUuid* QCborValueConstRef_toUuidWithDefaultValue(const QCborValueConstRef* self, QUuid* defaultValue) {
	return new QUuid(self->toUuid(*defaultValue));
}

struct miqt_string QCborValueConstRef_toCborWithOpt(const QCborValueConstRef* self, int opt) {
	QByteArray _qb = self->toCbor(static_cast<QCborValue::EncodingOptions>(opt));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValueConstRef_toCbor2(const QCborValueConstRef* self, QCborStreamWriter* writer, int opt) {
	self->toCbor(*writer, static_cast<QCborValue::EncodingOptions>(opt));
}

struct miqt_string QCborValueConstRef_toDiagnosticNotationWithOpt(const QCborValueConstRef* self, int opt) {
	QString _ret = self->toDiagnosticNotation(static_cast<QCborValue::DiagnosticNotationOptions>(opt));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborValueConstRef_delete(QCborValueConstRef* self) {
	delete self;
}

QCborValueRef* QCborValueRef_new(QCborValueRef* param1) {
	return new (std::nothrow) QCborValueRef(*param1);
}

void QCborValueRef_virtbase(QCborValueRef* src, QCborValueConstRef** outptr_QCborValueConstRef) {
	*outptr_QCborValueConstRef = static_cast<QCborValueConstRef*>(src);
}

void QCborValueRef_operatorAssign(QCborValueRef* self, QCborValue* other) {
	self->operator=(*other);
}

void QCborValueRef_operatorAssignWithOther(QCborValueRef* self, QCborValueRef* other) {
	self->operator=(*other);
}

QCborValueRef* QCborValueRef_operatorSubscript(QCborValueRef* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValueRef_operatorSubscript2(QCborValueRef* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValueRef(self->operator[](key_QString));
}

QCborValue* QCborValueRef_ToQCborValue(const QCborValueRef* self) {
	return new QCborValue(self->operator QCborValue());
}

int QCborValueRef_type(const QCborValueRef* self) {
	QCborValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QCborValueRef_isInteger(const QCborValueRef* self) {
	return self->isInteger();
}

bool QCborValueRef_isByteArray(const QCborValueRef* self) {
	return self->isByteArray();
}

bool QCborValueRef_isString(const QCborValueRef* self) {
	return self->isString();
}

bool QCborValueRef_isArray(const QCborValueRef* self) {
	return self->isArray();
}

bool QCborValueRef_isMap(const QCborValueRef* self) {
	return self->isMap();
}

bool QCborValueRef_isTag(const QCborValueRef* self) {
	return self->isTag();
}

bool QCborValueRef_isFalse(const QCborValueRef* self) {
	return self->isFalse();
}

bool QCborValueRef_isTrue(const QCborValueRef* self) {
	return self->isTrue();
}

bool QCborValueRef_isBool(const QCborValueRef* self) {
	return self->isBool();
}

bool QCborValueRef_isNull(const QCborValueRef* self) {
	return self->isNull();
}

bool QCborValueRef_isUndefined(const QCborValueRef* self) {
	return self->isUndefined();
}

bool QCborValueRef_isDouble(const QCborValueRef* self) {
	return self->isDouble();
}

bool QCborValueRef_isDateTime(const QCborValueRef* self) {
	return self->isDateTime();
}

bool QCborValueRef_isUrl(const QCborValueRef* self) {
	return self->isUrl();
}

bool QCborValueRef_isRegularExpression(const QCborValueRef* self) {
	return self->isRegularExpression();
}

bool QCborValueRef_isUuid(const QCborValueRef* self) {
	return self->isUuid();
}

bool QCborValueRef_isInvalid(const QCborValueRef* self) {
	return self->isInvalid();
}

bool QCborValueRef_isContainer(const QCborValueRef* self) {
	return self->isContainer();
}

bool QCborValueRef_isSimpleType(const QCborValueRef* self) {
	return self->isSimpleType();
}

bool QCborValueRef_isSimpleTypeWithSt(const QCborValueRef* self, uint8_t st) {
	return self->isSimpleType(static_cast<QCborSimpleType>(st));
}

uint8_t QCborValueRef_toSimpleType(const QCborValueRef* self) {
	QCborSimpleType _ret = self->toSimpleType();
	return static_cast<uint8_t>(_ret);
}

uint64_t QCborValueRef_tag(const QCborValueRef* self) {
	QCborTag _ret = self->tag();
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValueRef_taggedValue(const QCborValueRef* self) {
	return new QCborValue(self->taggedValue());
}

long long QCborValueRef_toInteger(const QCborValueRef* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

bool QCborValueRef_toBool(const QCborValueRef* self) {
	return self->toBool();
}

double QCborValueRef_toDouble(const QCborValueRef* self) {
	return self->toDouble();
}

struct miqt_string QCborValueRef_toByteArray(const QCborValueRef* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValueRef_toString(const QCborValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QCborValueRef_toDateTime(const QCborValueRef* self) {
	return new QDateTime(self->toDateTime());
}

QUrl* QCborValueRef_toUrl(const QCborValueRef* self) {
	return new QUrl(self->toUrl());
}

QRegularExpression* QCborValueRef_toRegularExpression(const QCborValueRef* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QUuid* QCborValueRef_toUuid(const QCborValueRef* self) {
	return new QUuid(self->toUuid());
}

QCborArray* QCborValueRef_toArray(const QCborValueRef* self) {
	return new QCborArray(self->toArray());
}

QCborArray* QCborValueRef_toArrayWithQCborArray(const QCborValueRef* self, QCborArray* a) {
	return new QCborArray(self->toArray(*a));
}

QCborMap* QCborValueRef_toMap(const QCborValueRef* self) {
	return new QCborMap(self->toMap());
}

QCborMap* QCborValueRef_toMapWithQCborMap(const QCborValueRef* self, QCborMap* m) {
	return new QCborMap(self->toMap(*m));
}

QCborValue* QCborValueRef_operatorSubscript3(const QCborValueRef* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborValueRef_operatorSubscript5(const QCborValueRef* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

int QCborValueRef_compare(const QCborValueRef* self, QCborValue* other) {
	return self->compare(*other);
}

bool QCborValueRef_operatorEqual(const QCborValueRef* self, QCborValue* other) {
	return (*self == *other);
}

bool QCborValueRef_operatorNotEqual(const QCborValueRef* self, QCborValue* other) {
	return (*self != *other);
}

bool QCborValueRef_operatorLesser(const QCborValueRef* self, QCborValue* other) {
	return (*self < *other);
}

QVariant* QCborValueRef_toVariant(const QCborValueRef* self) {
	return new QVariant(self->toVariant());
}

QJsonValue* QCborValueRef_toJsonValue(const QCborValueRef* self) {
	return new QJsonValue(self->toJsonValue());
}

struct miqt_string QCborValueRef_toCbor(QCborValueRef* self) {
	QByteArray _qb = self->toCbor();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValueRef_toCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer) {
	self->toCbor(*writer);
}

struct miqt_string QCborValueRef_toDiagnosticNotation(QCborValueRef* self) {
	QString _ret = self->toDiagnosticNotation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uint8_t QCborValueRef_toSimpleTypeWithDefaultValue(const QCborValueRef* self, uint8_t defaultValue) {
	QCborSimpleType _ret = self->toSimpleType(static_cast<QCborSimpleType>(defaultValue));
	return static_cast<uint8_t>(_ret);
}

uint64_t QCborValueRef_tagWithDefaultValue(const QCborValueRef* self, uint64_t defaultValue) {
	QCborTag _ret = self->tag(static_cast<QCborTag>(defaultValue));
	return static_cast<uint64_t>(_ret);
}

QCborValue* QCborValueRef_taggedValueWithDefaultValue(const QCborValueRef* self, QCborValue* defaultValue) {
	return new QCborValue(self->taggedValue(*defaultValue));
}

long long QCborValueRef_toIntegerWithDefaultValue(const QCborValueRef* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

bool QCborValueRef_toBoolWithDefaultValue(const QCborValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValueRef_toDoubleWithDefaultValue(const QCborValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QCborValueRef_toByteArrayWithDefaultValue(const QCborValueRef* self, struct miqt_string defaultValue) {
	QByteArray defaultValue_QByteArray(defaultValue.data, defaultValue.len);
	QByteArray _qb = self->toByteArray(defaultValue_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValueRef_toStringWithDefaultValue(const QCborValueRef* self, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QCborValueRef_toDateTimeWithDefaultValue(const QCborValueRef* self, QDateTime* defaultValue) {
	return new QDateTime(self->toDateTime(*defaultValue));
}

QUrl* QCborValueRef_toUrlWithDefaultValue(const QCborValueRef* self, QUrl* defaultValue) {
	return new QUrl(self->toUrl(*defaultValue));
}

QRegularExpression* QCborValueRef_toRegularExpressionWithDefaultValue(const QCborValueRef* self, QRegularExpression* defaultValue) {
	return new QRegularExpression(self->toRegularExpression(*defaultValue));
}

QUuid* QCborValueRef_toUuidWithDefaultValue(const QCborValueRef* self, QUuid* defaultValue) {
	return new QUuid(self->toUuid(*defaultValue));
}

struct miqt_string QCborValueRef_toCborWithOpt(QCborValueRef* self, int opt) {
	QByteArray _qb = self->toCbor(static_cast<QCborValue::EncodingOptions>(opt));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValueRef_toCbor2(QCborValueRef* self, QCborStreamWriter* writer, int opt) {
	self->toCbor(*writer, static_cast<QCborValue::EncodingOptions>(opt));
}

struct miqt_string QCborValueRef_toDiagnosticNotationWithOpt(QCborValueRef* self, int opt) {
	QString _ret = self->toDiagnosticNotation(static_cast<QCborValue::DiagnosticNotationOptions>(opt));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborValueRef_delete(QCborValueRef* self) {
	delete self;
}

