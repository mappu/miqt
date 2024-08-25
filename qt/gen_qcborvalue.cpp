#include "gen_qcborvalue.h"
#include "qcborvalue.h"

#include <QByteArray>
#include <QCborArray>
#include <QCborMap>
#include <QCborParserError>
#include <QCborStreamReader>
#include <QCborValue>
#include <QCborValueRef>
#include <QDateTime>
#include <QJsonValue>
#include <QRegularExpression>
#include <QString>
#include <QUrl>
#include <QUuid>
#include <QVariant>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QCborParserError_ErrorString(QCborParserError* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCborParserError_Delete(QCborParserError* self) {
	delete self;
}

QCborValue* QCborValue_new() {
	return new QCborValue();
}

QCborValue* QCborValue_new2(bool b_) {
	return new QCborValue(b_);
}

QCborValue* QCborValue_new3(int i) {
	return new QCborValue(static_cast<int>(i));
}

QCborValue* QCborValue_new4(unsigned int u) {
	return new QCborValue(static_cast<unsigned int>(u));
}

QCborValue* QCborValue_new5(int64_t i) {
	return new QCborValue((qint64)(i));
}

QCborValue* QCborValue_new6(double v) {
	return new QCborValue(static_cast<double>(v));
}

QCborValue* QCborValue_new7(QByteArray* ba) {
	return new QCborValue(*ba);
}

QCborValue* QCborValue_new8(const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return new QCborValue(s_QString);
}

QCborValue* QCborValue_new9(char* s) {
	return new QCborValue(s);
}

QCborValue* QCborValue_new10(QCborArray* a) {
	return new QCborValue(*a);
}

QCborValue* QCborValue_new11(QCborMap* m) {
	return new QCborValue(*m);
}

QCborValue* QCborValue_new12(QDateTime* dt) {
	return new QCborValue(*dt);
}

QCborValue* QCborValue_new13(QUrl* url) {
	return new QCborValue(*url);
}

QCborValue* QCborValue_new14(QRegularExpression* rx) {
	return new QCborValue(*rx);
}

QCborValue* QCborValue_new15(QUuid* uuid) {
	return new QCborValue(*uuid);
}

QCborValue* QCborValue_new16(QCborValue* other) {
	return new QCborValue(*other);
}

void QCborValue_OperatorAssign(QCborValue* self, QCborValue* other) {
	self->operator=(*other);
}

void QCborValue_Swap(QCborValue* self, QCborValue* other) {
	self->swap(*other);
}

bool QCborValue_IsInteger(QCborValue* self) {
	return self->isInteger();
}

bool QCborValue_IsByteArray(QCborValue* self) {
	return self->isByteArray();
}

bool QCborValue_IsString(QCborValue* self) {
	return self->isString();
}

bool QCborValue_IsArray(QCborValue* self) {
	return self->isArray();
}

bool QCborValue_IsMap(QCborValue* self) {
	return self->isMap();
}

bool QCborValue_IsTag(QCborValue* self) {
	return self->isTag();
}

bool QCborValue_IsFalse(QCborValue* self) {
	return self->isFalse();
}

bool QCborValue_IsTrue(QCborValue* self) {
	return self->isTrue();
}

bool QCborValue_IsBool(QCborValue* self) {
	return self->isBool();
}

bool QCborValue_IsNull(QCborValue* self) {
	return self->isNull();
}

bool QCborValue_IsUndefined(QCborValue* self) {
	return self->isUndefined();
}

bool QCborValue_IsDouble(QCborValue* self) {
	return self->isDouble();
}

bool QCborValue_IsDateTime(QCborValue* self) {
	return self->isDateTime();
}

bool QCborValue_IsUrl(QCborValue* self) {
	return self->isUrl();
}

bool QCborValue_IsRegularExpression(QCborValue* self) {
	return self->isRegularExpression();
}

bool QCborValue_IsUuid(QCborValue* self) {
	return self->isUuid();
}

bool QCborValue_IsInvalid(QCborValue* self) {
	return self->isInvalid();
}

bool QCborValue_IsContainer(QCborValue* self) {
	return self->isContainer();
}

bool QCborValue_IsSimpleType(QCborValue* self) {
	return self->isSimpleType();
}

int64_t QCborValue_ToInteger(QCborValue* self) {
	return self->toInteger();
}

bool QCborValue_ToBool(QCborValue* self) {
	return self->toBool();
}

double QCborValue_ToDouble(QCborValue* self) {
	return self->toDouble();
}

QCborValue* QCborValue_TaggedValue(QCborValue* self) {
	QCborValue ret = self->taggedValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QByteArray* QCborValue_ToByteArray(QCborValue* self) {
	QByteArray ret = self->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QCborValue_ToString(QCborValue* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QCborValue_ToDateTime(QCborValue* self) {
	QDateTime ret = self->toDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QUrl* QCborValue_ToUrl(QCborValue* self) {
	QUrl ret = self->toUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QRegularExpression* QCborValue_ToRegularExpression(QCborValue* self) {
	QRegularExpression ret = self->toRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

QUuid* QCborValue_ToUuid(QCborValue* self) {
	QUuid ret = self->toUuid();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QCborArray* QCborValue_ToArray(QCborValue* self) {
	QCborArray ret = self->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(ret));
}

QCborArray* QCborValue_ToArrayWithDefaultValue(QCborValue* self, QCborArray* defaultValue) {
	QCborArray ret = self->toArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(ret));
}

QCborMap* QCborValue_ToMap(QCborValue* self) {
	QCborMap ret = self->toMap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(ret));
}

QCborMap* QCborValue_ToMapWithDefaultValue(QCborValue* self, QCborMap* defaultValue) {
	QCborMap ret = self->toMap(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(ret));
}

QCborValue* QCborValue_OperatorSubscript(QCborValue* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborValue_OperatorSubscriptWithKey(QCborValue* self, int64_t key) {
	QCborValue ret = self->operator[]((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborValue_OperatorSubscript2(QCborValue* self, int64_t key) {
	QCborValueRef ret = self->operator[]((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborValue_OperatorSubscript3(QCborValue* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValueRef ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

int QCborValue_Compare(QCborValue* self, QCborValue* other) {
	return self->compare(*other);
}

bool QCborValue_OperatorEqual(QCborValue* self, QCborValue* other) {
	return self->operator==(*other);
}

bool QCborValue_OperatorNotEqual(QCborValue* self, QCborValue* other) {
	return self->operator!=(*other);
}

bool QCborValue_OperatorLesser(QCborValue* self, QCborValue* other) {
	return self->operator<(*other);
}

QCborValue* QCborValue_FromVariant(QVariant* variant) {
	QCborValue ret = QCborValue::fromVariant(*variant);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QVariant* QCborValue_ToVariant(QCborValue* self) {
	QVariant ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QCborValue* QCborValue_FromJsonValue(QJsonValue* v) {
	QCborValue ret = QCborValue::fromJsonValue(*v);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QJsonValue* QCborValue_ToJsonValue(QCborValue* self) {
	QJsonValue ret = self->toJsonValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QCborValue* QCborValue_FromCbor(QCborStreamReader* reader) {
	QCborValue ret = QCborValue::fromCbor(*reader);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborValue_FromCborWithBa(QByteArray* ba) {
	QCborValue ret = QCborValue::fromCbor(*ba);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborValue_FromCbor2(char* data, size_t lenVal) {
	QCborValue ret = QCborValue::fromCbor(data, static_cast<qsizetype>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborValue_FromCbor3(uint8_t* data, size_t lenVal) {
	QCborValue ret = QCborValue::fromCbor(static_cast<quint8*>(data), static_cast<qsizetype>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

int64_t QCborValue_ToInteger1(QCborValue* self, int64_t defaultValue) {
	return self->toInteger((qint64)(defaultValue));
}

bool QCborValue_ToBool1(QCborValue* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValue_ToDouble1(QCborValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

QCborValue* QCborValue_TaggedValue1(QCborValue* self, QCborValue* defaultValue) {
	QCborValue ret = self->taggedValue(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QByteArray* QCborValue_ToByteArray1(QCborValue* self, QByteArray* defaultValue) {
	QByteArray ret = self->toByteArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QCborValue_ToString1(QCborValue* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	QString ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QCborValue_ToDateTime1(QCborValue* self, QDateTime* defaultValue) {
	QDateTime ret = self->toDateTime(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QUrl* QCborValue_ToUrl1(QCborValue* self, QUrl* defaultValue) {
	QUrl ret = self->toUrl(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QRegularExpression* QCborValue_ToRegularExpression1(QCborValue* self, QRegularExpression* defaultValue) {
	QRegularExpression ret = self->toRegularExpression(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

QUuid* QCborValue_ToUuid1(QCborValue* self, QUuid* defaultValue) {
	QUuid ret = self->toUuid(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QCborValue* QCborValue_FromCbor22(QByteArray* ba, QCborParserError* error) {
	QCborValue ret = QCborValue::fromCbor(*ba, error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborValue_FromCbor32(char* data, size_t lenVal, QCborParserError* error) {
	QCborValue ret = QCborValue::fromCbor(data, static_cast<qsizetype>(lenVal), error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborValue_FromCbor33(uint8_t* data, size_t lenVal, QCborParserError* error) {
	QCborValue ret = QCborValue::fromCbor(static_cast<quint8*>(data), static_cast<qsizetype>(lenVal), error);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
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

bool QCborValueRef_IsInteger(QCborValueRef* self) {
	return self->isInteger();
}

bool QCborValueRef_IsByteArray(QCborValueRef* self) {
	return self->isByteArray();
}

bool QCborValueRef_IsString(QCborValueRef* self) {
	return self->isString();
}

bool QCborValueRef_IsArray(QCborValueRef* self) {
	return self->isArray();
}

bool QCborValueRef_IsMap(QCborValueRef* self) {
	return self->isMap();
}

bool QCborValueRef_IsTag(QCborValueRef* self) {
	return self->isTag();
}

bool QCborValueRef_IsFalse(QCborValueRef* self) {
	return self->isFalse();
}

bool QCborValueRef_IsTrue(QCborValueRef* self) {
	return self->isTrue();
}

bool QCborValueRef_IsBool(QCborValueRef* self) {
	return self->isBool();
}

bool QCborValueRef_IsNull(QCborValueRef* self) {
	return self->isNull();
}

bool QCborValueRef_IsUndefined(QCborValueRef* self) {
	return self->isUndefined();
}

bool QCborValueRef_IsDouble(QCborValueRef* self) {
	return self->isDouble();
}

bool QCborValueRef_IsDateTime(QCborValueRef* self) {
	return self->isDateTime();
}

bool QCborValueRef_IsUrl(QCborValueRef* self) {
	return self->isUrl();
}

bool QCborValueRef_IsRegularExpression(QCborValueRef* self) {
	return self->isRegularExpression();
}

bool QCborValueRef_IsUuid(QCborValueRef* self) {
	return self->isUuid();
}

bool QCborValueRef_IsInvalid(QCborValueRef* self) {
	return self->isInvalid();
}

bool QCborValueRef_IsContainer(QCborValueRef* self) {
	return self->isContainer();
}

bool QCborValueRef_IsSimpleType(QCborValueRef* self) {
	return self->isSimpleType();
}

QCborValue* QCborValueRef_TaggedValue(QCborValueRef* self) {
	QCborValue ret = self->taggedValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

int64_t QCborValueRef_ToInteger(QCborValueRef* self) {
	return self->toInteger();
}

bool QCborValueRef_ToBool(QCborValueRef* self) {
	return self->toBool();
}

double QCborValueRef_ToDouble(QCborValueRef* self) {
	return self->toDouble();
}

QByteArray* QCborValueRef_ToByteArray(QCborValueRef* self) {
	QByteArray ret = self->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QCborValueRef_ToString(QCborValueRef* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QCborValueRef_ToDateTime(QCborValueRef* self) {
	QDateTime ret = self->toDateTime();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QUrl* QCborValueRef_ToUrl(QCborValueRef* self) {
	QUrl ret = self->toUrl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QRegularExpression* QCborValueRef_ToRegularExpression(QCborValueRef* self) {
	QRegularExpression ret = self->toRegularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

QUuid* QCborValueRef_ToUuid(QCborValueRef* self) {
	QUuid ret = self->toUuid();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QCborArray* QCborValueRef_ToArray(QCborValueRef* self) {
	QCborArray ret = self->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(ret));
}

QCborArray* QCborValueRef_ToArrayWithQCborArray(QCborValueRef* self, QCborArray* a) {
	QCborArray ret = self->toArray(*a);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborArray*>(new QCborArray(ret));
}

QCborMap* QCborValueRef_ToMap(QCborValueRef* self) {
	QCborMap ret = self->toMap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(ret));
}

QCborMap* QCborValueRef_ToMapWithQCborMap(QCborValueRef* self, QCborMap* m) {
	QCborMap ret = self->toMap(*m);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborMap*>(new QCborMap(ret));
}

QCborValue* QCborValueRef_OperatorSubscript(QCborValueRef* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValue ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValue* QCborValueRef_OperatorSubscriptWithKey(QCborValueRef* self, int64_t key) {
	QCborValue ret = self->operator[]((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

QCborValueRef* QCborValueRef_OperatorSubscript2(QCborValueRef* self, int64_t key) {
	QCborValueRef ret = self->operator[]((qint64)(key));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

QCborValueRef* QCborValueRef_OperatorSubscript3(QCborValueRef* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QCborValueRef ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValueRef*>(new QCborValueRef(ret));
}

int QCborValueRef_Compare(QCborValueRef* self, QCborValue* other) {
	return self->compare(*other);
}

bool QCborValueRef_OperatorEqual(QCborValueRef* self, QCborValue* other) {
	return self->operator==(*other);
}

bool QCborValueRef_OperatorNotEqual(QCborValueRef* self, QCborValue* other) {
	return self->operator!=(*other);
}

bool QCborValueRef_OperatorLesser(QCborValueRef* self, QCborValue* other) {
	return self->operator<(*other);
}

QVariant* QCborValueRef_ToVariant(QCborValueRef* self) {
	QVariant ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QJsonValue* QCborValueRef_ToJsonValue(QCborValueRef* self) {
	QJsonValue ret = self->toJsonValue();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QCborValue* QCborValueRef_TaggedValue1(QCborValueRef* self, QCborValue* defaultValue) {
	QCborValue ret = self->taggedValue(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCborValue*>(new QCborValue(ret));
}

int64_t QCborValueRef_ToInteger1(QCborValueRef* self, int64_t defaultValue) {
	return self->toInteger((qint64)(defaultValue));
}

bool QCborValueRef_ToBool1(QCborValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

double QCborValueRef_ToDouble1(QCborValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

QByteArray* QCborValueRef_ToByteArray1(QCborValueRef* self, QByteArray* defaultValue) {
	QByteArray ret = self->toByteArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QCborValueRef_ToString1(QCborValueRef* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	QString ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDateTime* QCborValueRef_ToDateTime1(QCborValueRef* self, QDateTime* defaultValue) {
	QDateTime ret = self->toDateTime(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QUrl* QCborValueRef_ToUrl1(QCborValueRef* self, QUrl* defaultValue) {
	QUrl ret = self->toUrl(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

QRegularExpression* QCborValueRef_ToRegularExpression1(QCborValueRef* self, QRegularExpression* defaultValue) {
	QRegularExpression ret = self->toRegularExpression(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

QUuid* QCborValueRef_ToUuid1(QCborValueRef* self, QUuid* defaultValue) {
	QUuid ret = self->toUuid(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

void QCborValueRef_Delete(QCborValueRef* self) {
	delete self;
}

