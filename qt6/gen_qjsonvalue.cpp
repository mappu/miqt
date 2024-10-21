#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonValueConstRef>
#include <QJsonValueRef>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsonvalue.h>
#include "gen_qjsonvalue.h"
#include "_cgo_export.h"

QJsonValue* QJsonValue_new() {
	return new QJsonValue();
}

QJsonValue* QJsonValue_new2(bool b) {
	return new QJsonValue(b);
}

QJsonValue* QJsonValue_new3(double n) {
	return new QJsonValue(static_cast<double>(n));
}

QJsonValue* QJsonValue_new4(int n) {
	return new QJsonValue(static_cast<int>(n));
}

QJsonValue* QJsonValue_new5(long long v) {
	return new QJsonValue(static_cast<qint64>(v));
}

QJsonValue* QJsonValue_new6(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new QJsonValue(s_QString);
}

QJsonValue* QJsonValue_new7(const char* s) {
	return new QJsonValue(s);
}

QJsonValue* QJsonValue_new8(QJsonArray* a) {
	return new QJsonValue(*a);
}

QJsonValue* QJsonValue_new9(QJsonObject* o) {
	return new QJsonValue(*o);
}

QJsonValue* QJsonValue_new10(QJsonValue* other) {
	return new QJsonValue(*other);
}

QJsonValue* QJsonValue_new11(int param1) {
	return new QJsonValue(static_cast<QJsonValue::Type>(param1));
}

void QJsonValue_OperatorAssign(QJsonValue* self, QJsonValue* other) {
	self->operator=(*other);
}

void QJsonValue_Swap(QJsonValue* self, QJsonValue* other) {
	self->swap(*other);
}

QJsonValue* QJsonValue_FromVariant(QVariant* variant) {
	return new QJsonValue(QJsonValue::fromVariant(*variant));
}

QVariant* QJsonValue_ToVariant(const QJsonValue* self) {
	return new QVariant(self->toVariant());
}

int QJsonValue_Type(const QJsonValue* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJsonValue_IsNull(const QJsonValue* self) {
	return self->isNull();
}

bool QJsonValue_IsBool(const QJsonValue* self) {
	return self->isBool();
}

bool QJsonValue_IsDouble(const QJsonValue* self) {
	return self->isDouble();
}

bool QJsonValue_IsString(const QJsonValue* self) {
	return self->isString();
}

bool QJsonValue_IsArray(const QJsonValue* self) {
	return self->isArray();
}

bool QJsonValue_IsObject(const QJsonValue* self) {
	return self->isObject();
}

bool QJsonValue_IsUndefined(const QJsonValue* self) {
	return self->isUndefined();
}

bool QJsonValue_ToBool(const QJsonValue* self) {
	return self->toBool();
}

int QJsonValue_ToInt(const QJsonValue* self) {
	return self->toInt();
}

long long QJsonValue_ToInteger(const QJsonValue* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

double QJsonValue_ToDouble(const QJsonValue* self) {
	return self->toDouble();
}

struct miqt_string QJsonValue_ToString(const QJsonValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJsonValue_ToStringWithDefaultValue(const QJsonValue* self, struct miqt_string defaultValue) {
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

QJsonArray* QJsonValue_ToArray(const QJsonValue* self) {
	return new QJsonArray(self->toArray());
}

QJsonArray* QJsonValue_ToArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue) {
	return new QJsonArray(self->toArray(*defaultValue));
}

QJsonObject* QJsonValue_ToObject(const QJsonValue* self) {
	return new QJsonObject(self->toObject());
}

QJsonObject* QJsonValue_ToObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue) {
	return new QJsonObject(self->toObject(*defaultValue));
}

QJsonValue* QJsonValue_OperatorSubscript(const QJsonValue* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValue* QJsonValue_OperatorSubscriptWithQsizetype(const QJsonValue* self, ptrdiff_t i) {
	return new QJsonValue(self->operator[]((qsizetype)(i)));
}

bool QJsonValue_OperatorEqual(const QJsonValue* self, QJsonValue* other) {
	return self->operator==(*other);
}

bool QJsonValue_OperatorNotEqual(const QJsonValue* self, QJsonValue* other) {
	return self->operator!=(*other);
}

bool QJsonValue_ToBool1(const QJsonValue* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValue_ToInt1(const QJsonValue* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

long long QJsonValue_ToInteger1(const QJsonValue* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

double QJsonValue_ToDouble1(const QJsonValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

void QJsonValue_Delete(QJsonValue* self) {
	delete self;
}

QJsonValueConstRef* QJsonValueConstRef_new(QJsonValueConstRef* param1) {
	return new QJsonValueConstRef(*param1);
}

QVariant* QJsonValueConstRef_ToVariant(const QJsonValueConstRef* self) {
	return new QVariant(self->toVariant());
}

int QJsonValueConstRef_Type(const QJsonValueConstRef* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJsonValueConstRef_IsNull(const QJsonValueConstRef* self) {
	return self->isNull();
}

bool QJsonValueConstRef_IsBool(const QJsonValueConstRef* self) {
	return self->isBool();
}

bool QJsonValueConstRef_IsDouble(const QJsonValueConstRef* self) {
	return self->isDouble();
}

bool QJsonValueConstRef_IsString(const QJsonValueConstRef* self) {
	return self->isString();
}

bool QJsonValueConstRef_IsArray(const QJsonValueConstRef* self) {
	return self->isArray();
}

bool QJsonValueConstRef_IsObject(const QJsonValueConstRef* self) {
	return self->isObject();
}

bool QJsonValueConstRef_IsUndefined(const QJsonValueConstRef* self) {
	return self->isUndefined();
}

bool QJsonValueConstRef_ToBool(const QJsonValueConstRef* self) {
	return self->toBool();
}

int QJsonValueConstRef_ToInt(const QJsonValueConstRef* self) {
	return self->toInt();
}

long long QJsonValueConstRef_ToInteger(const QJsonValueConstRef* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

double QJsonValueConstRef_ToDouble(const QJsonValueConstRef* self) {
	return self->toDouble();
}

struct miqt_string QJsonValueConstRef_ToString(const QJsonValueConstRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonArray* QJsonValueConstRef_ToArray(const QJsonValueConstRef* self) {
	return new QJsonArray(self->toArray());
}

QJsonObject* QJsonValueConstRef_ToObject(const QJsonValueConstRef* self) {
	return new QJsonObject(self->toObject());
}

QJsonValue* QJsonValueConstRef_OperatorSubscriptWithQsizetype(const QJsonValueConstRef* self, ptrdiff_t i) {
	return new QJsonValue(self->operator[]((qsizetype)(i)));
}

bool QJsonValueConstRef_OperatorEqual(const QJsonValueConstRef* self, QJsonValue* other) {
	return self->operator==(*other);
}

bool QJsonValueConstRef_OperatorNotEqual(const QJsonValueConstRef* self, QJsonValue* other) {
	return self->operator!=(*other);
}

bool QJsonValueConstRef_ToBool1(const QJsonValueConstRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValueConstRef_ToInt1(const QJsonValueConstRef* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

long long QJsonValueConstRef_ToInteger1(const QJsonValueConstRef* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

double QJsonValueConstRef_ToDouble1(const QJsonValueConstRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QJsonValueConstRef_ToString1(const QJsonValueConstRef* self, struct miqt_string defaultValue) {
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

void QJsonValueConstRef_Delete(QJsonValueConstRef* self) {
	delete self;
}

QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1) {
	return new QJsonValueRef(*param1);
}

QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, ptrdiff_t idx) {
	return new QJsonValueRef(array, (qsizetype)(idx));
}

QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, ptrdiff_t idx) {
	return new QJsonValueRef(object, (qsizetype)(idx));
}

void QJsonValueRef_OperatorAssign(QJsonValueRef* self, QJsonValue* val) {
	self->operator=(*val);
}

void QJsonValueRef_OperatorAssignWithVal(QJsonValueRef* self, QJsonValueRef* val) {
	self->operator=(*val);
}

QVariant* QJsonValueRef_ToVariant(const QJsonValueRef* self) {
	return new QVariant(self->toVariant());
}

int QJsonValueRef_Type(const QJsonValueRef* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJsonValueRef_IsNull(const QJsonValueRef* self) {
	return self->isNull();
}

bool QJsonValueRef_IsBool(const QJsonValueRef* self) {
	return self->isBool();
}

bool QJsonValueRef_IsDouble(const QJsonValueRef* self) {
	return self->isDouble();
}

bool QJsonValueRef_IsString(const QJsonValueRef* self) {
	return self->isString();
}

bool QJsonValueRef_IsArray(const QJsonValueRef* self) {
	return self->isArray();
}

bool QJsonValueRef_IsObject(const QJsonValueRef* self) {
	return self->isObject();
}

bool QJsonValueRef_IsUndefined(const QJsonValueRef* self) {
	return self->isUndefined();
}

bool QJsonValueRef_ToBool(const QJsonValueRef* self) {
	return self->toBool();
}

int QJsonValueRef_ToInt(const QJsonValueRef* self) {
	return self->toInt();
}

long long QJsonValueRef_ToInteger(const QJsonValueRef* self) {
	qint64 _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

double QJsonValueRef_ToDouble(const QJsonValueRef* self) {
	return self->toDouble();
}

struct miqt_string QJsonValueRef_ToString(const QJsonValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonArray* QJsonValueRef_ToArray(const QJsonValueRef* self) {
	return new QJsonArray(self->toArray());
}

QJsonObject* QJsonValueRef_ToObject(const QJsonValueRef* self) {
	return new QJsonObject(self->toObject());
}

QJsonValue* QJsonValueRef_OperatorSubscriptWithQsizetype(const QJsonValueRef* self, ptrdiff_t i) {
	return new QJsonValue(self->operator[]((qsizetype)(i)));
}

bool QJsonValueRef_OperatorEqual(const QJsonValueRef* self, QJsonValue* other) {
	return self->operator==(*other);
}

bool QJsonValueRef_OperatorNotEqual(const QJsonValueRef* self, QJsonValue* other) {
	return self->operator!=(*other);
}

bool QJsonValueRef_ToBool1(const QJsonValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValueRef_ToInt1(const QJsonValueRef* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

long long QJsonValueRef_ToInteger1(const QJsonValueRef* self, long long defaultValue) {
	qint64 _ret = self->toInteger(static_cast<qint64>(defaultValue));
	return static_cast<long long>(_ret);
}

double QJsonValueRef_ToDouble1(const QJsonValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QJsonValueRef_ToString1(const QJsonValueRef* self, struct miqt_string defaultValue) {
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

void QJsonValueRef_Delete(QJsonValueRef* self) {
	delete self;
}

