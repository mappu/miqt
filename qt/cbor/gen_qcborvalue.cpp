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
#include <qcborvalue.h>
#include "gen_qcborvalue.h"
#include "_cgo_export.h"

struct miqt_string QCborParserError_ErrorString(const QCborParserError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborParserError_Delete(QCborParserError* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCborParserError*>( self );
	} else {
		delete self;
	}
}

void QCborValue_new(QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue();
	*outptr_QCborValue = ret;
}

void QCborValue_new2(int t_, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<QCborValue::Type>(t_));
	*outptr_QCborValue = ret;
}

void QCborValue_new3(bool b_, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(b_);
	*outptr_QCborValue = ret;
}

void QCborValue_new4(int i, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<int>(i));
	*outptr_QCborValue = ret;
}

void QCborValue_new5(unsigned int u, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<unsigned int>(u));
	*outptr_QCborValue = ret;
}

void QCborValue_new6(long long i, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<qint64>(i));
	*outptr_QCborValue = ret;
}

void QCborValue_new7(double v, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<double>(v));
	*outptr_QCborValue = ret;
}

void QCborValue_new8(uint8_t st, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<QCborSimpleType>(st));
	*outptr_QCborValue = ret;
}

void QCborValue_new9(struct miqt_string ba, QCborValue** outptr_QCborValue) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	QCborValue* ret = new QCborValue(ba_QByteArray);
	*outptr_QCborValue = ret;
}

void QCborValue_new10(struct miqt_string s, QCborValue** outptr_QCborValue) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QCborValue* ret = new QCborValue(s_QString);
	*outptr_QCborValue = ret;
}

void QCborValue_new11(const char* s, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(s);
	*outptr_QCborValue = ret;
}

void QCborValue_new12(QCborArray* a, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(*a);
	*outptr_QCborValue = ret;
}

void QCborValue_new13(QCborMap* m, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(*m);
	*outptr_QCborValue = ret;
}

void QCborValue_new14(uint64_t tag, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<QCborTag>(tag));
	*outptr_QCborValue = ret;
}

void QCborValue_new15(int t_, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<QCborKnownTags>(t_));
	*outptr_QCborValue = ret;
}

void QCborValue_new16(QDateTime* dt, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(*dt);
	*outptr_QCborValue = ret;
}

void QCborValue_new17(QUrl* url, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(*url);
	*outptr_QCborValue = ret;
}

void QCborValue_new18(QRegularExpression* rx, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(*rx);
	*outptr_QCborValue = ret;
}

void QCborValue_new19(QUuid* uuid, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(*uuid);
	*outptr_QCborValue = ret;
}

void QCborValue_new20(QCborValue* other, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(*other);
	*outptr_QCborValue = ret;
}

void QCborValue_new21(uint64_t tag, QCborValue* taggedValue, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<QCborTag>(tag), *taggedValue);
	*outptr_QCborValue = ret;
}

void QCborValue_new22(int t_, QCborValue* tv, QCborValue** outptr_QCborValue) {
	QCborValue* ret = new QCborValue(static_cast<QCborKnownTags>(t_), *tv);
	*outptr_QCborValue = ret;
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

struct miqt_string QCborValue_ToByteArray(const QCborValue* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValue_ToString(const QCborValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

QCborValue* QCborValue_OperatorSubscript(const QCborValue* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborValue_OperatorSubscript2(const QCborValue* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValue_OperatorSubscript3(QCborValue* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValue_OperatorSubscript5(QCborValue* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
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

QCborValue* QCborValue_FromCborWithBa(struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return new QCborValue(QCborValue::fromCbor(ba_QByteArray));
}

QCborValue* QCborValue_FromCbor2(const char* data, ptrdiff_t lenVal) {
	return new QCborValue(QCborValue::fromCbor(data, (qsizetype)(lenVal)));
}

QCborValue* QCborValue_FromCbor3(const unsigned char* data, ptrdiff_t lenVal) {
	return new QCborValue(QCborValue::fromCbor(static_cast<const quint8*>(data), (qsizetype)(lenVal)));
}

struct miqt_string QCborValue_ToCbor(QCborValue* self) {
	QByteArray _qb = self->toCbor();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValue_ToCborWithWriter(QCborValue* self, QCborStreamWriter* writer) {
	self->toCbor(*writer);
}

struct miqt_string QCborValue_ToDiagnosticNotation(const QCborValue* self) {
	QString _ret = self->toDiagnosticNotation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

struct miqt_string QCborValue_ToByteArray1(const QCborValue* self, struct miqt_string defaultValue) {
	QByteArray defaultValue_QByteArray(defaultValue.data, defaultValue.len);
	QByteArray _qb = self->toByteArray(defaultValue_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValue_ToString1(const QCborValue* self, struct miqt_string defaultValue) {
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

QCborValue* QCborValue_FromCbor22(struct miqt_string ba, QCborParserError* error) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return new QCborValue(QCborValue::fromCbor(ba_QByteArray, error));
}

QCborValue* QCborValue_FromCbor32(const char* data, ptrdiff_t lenVal, QCborParserError* error) {
	return new QCborValue(QCborValue::fromCbor(data, (qsizetype)(lenVal), error));
}

QCborValue* QCborValue_FromCbor33(const unsigned char* data, ptrdiff_t lenVal, QCborParserError* error) {
	return new QCborValue(QCborValue::fromCbor(static_cast<const quint8*>(data), (qsizetype)(lenVal), error));
}

struct miqt_string QCborValue_ToCbor1(QCborValue* self, int opt) {
	QByteArray _qb = self->toCbor(static_cast<QCborValue::EncodingOptions>(opt));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValue_ToCbor2(QCborValue* self, QCborStreamWriter* writer, int opt) {
	self->toCbor(*writer, static_cast<QCborValue::EncodingOptions>(opt));
}

struct miqt_string QCborValue_ToDiagnosticNotation1(const QCborValue* self, int opts) {
	QString _ret = self->toDiagnosticNotation(static_cast<QCborValue::DiagnosticNotationOptions>(opts));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborValue_Delete(QCborValue* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCborValue*>( self );
	} else {
		delete self;
	}
}

void QCborValueRef_new(QCborValueRef* param1, QCborValueRef** outptr_QCborValueRef) {
	QCborValueRef* ret = new QCborValueRef(*param1);
	*outptr_QCborValueRef = ret;
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

struct miqt_string QCborValueRef_ToByteArray(const QCborValueRef* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValueRef_ToString(const QCborValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

QCborValue* QCborValueRef_OperatorSubscript(const QCborValueRef* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QCborValue(self->operator[](key_QString));
}

QCborValue* QCborValueRef_OperatorSubscript2(const QCborValueRef* self, long long key) {
	return new QCborValue(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValueRef_OperatorSubscript3(QCborValueRef* self, long long key) {
	return new QCborValueRef(self->operator[](static_cast<qint64>(key)));
}

QCborValueRef* QCborValueRef_OperatorSubscript5(QCborValueRef* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
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

struct miqt_string QCborValueRef_ToCbor(QCborValueRef* self) {
	QByteArray _qb = self->toCbor();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValueRef_ToCborWithWriter(QCborValueRef* self, QCborStreamWriter* writer) {
	self->toCbor(*writer);
}

struct miqt_string QCborValueRef_ToDiagnosticNotation(QCborValueRef* self) {
	QString _ret = self->toDiagnosticNotation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

struct miqt_string QCborValueRef_ToByteArray1(const QCborValueRef* self, struct miqt_string defaultValue) {
	QByteArray defaultValue_QByteArray(defaultValue.data, defaultValue.len);
	QByteArray _qb = self->toByteArray(defaultValue_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QCborValueRef_ToString1(const QCborValueRef* self, struct miqt_string defaultValue) {
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

struct miqt_string QCborValueRef_ToCbor1(QCborValueRef* self, int opt) {
	QByteArray _qb = self->toCbor(static_cast<QCborValue::EncodingOptions>(opt));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QCborValueRef_ToCbor2(QCborValueRef* self, QCborStreamWriter* writer, int opt) {
	self->toCbor(*writer, static_cast<QCborValue::EncodingOptions>(opt));
}

struct miqt_string QCborValueRef_ToDiagnosticNotation1(QCborValueRef* self, int opt) {
	QString _ret = self->toDiagnosticNotation(static_cast<QCborValue::DiagnosticNotationOptions>(opt));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborValueRef_Delete(QCborValueRef* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCborValueRef*>( self );
	} else {
		delete self;
	}
}

