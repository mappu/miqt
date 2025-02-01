#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonValuePtr>
#include <QJsonValueRef>
#include <QJsonValueRefPtr>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsonvalue.h>
#include "gen_qjsonvalue.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

void QJsonValue_operatorAssign(QJsonValue* self, QJsonValue* other) {
	self->operator=(*other);
}

void QJsonValue_swap(QJsonValue* self, QJsonValue* other) {
	self->swap(*other);
}

QJsonValue* QJsonValue_fromVariant(QVariant* variant) {
	return new QJsonValue(QJsonValue::fromVariant(*variant));
}

QVariant* QJsonValue_toVariant(const QJsonValue* self) {
	return new QVariant(self->toVariant());
}

int QJsonValue_type(const QJsonValue* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJsonValue_isNull(const QJsonValue* self) {
	return self->isNull();
}

bool QJsonValue_isBool(const QJsonValue* self) {
	return self->isBool();
}

bool QJsonValue_isDouble(const QJsonValue* self) {
	return self->isDouble();
}

bool QJsonValue_isString(const QJsonValue* self) {
	return self->isString();
}

bool QJsonValue_isArray(const QJsonValue* self) {
	return self->isArray();
}

bool QJsonValue_isObject(const QJsonValue* self) {
	return self->isObject();
}

bool QJsonValue_isUndefined(const QJsonValue* self) {
	return self->isUndefined();
}

bool QJsonValue_toBool(const QJsonValue* self) {
	return self->toBool();
}

int QJsonValue_toInt(const QJsonValue* self) {
	return self->toInt();
}

double QJsonValue_toDouble(const QJsonValue* self) {
	return self->toDouble();
}

struct miqt_string QJsonValue_toString(const QJsonValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJsonValue_toStringWithDefaultValue(const QJsonValue* self, struct miqt_string defaultValue) {
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

QJsonArray* QJsonValue_toArray(const QJsonValue* self) {
	return new QJsonArray(self->toArray());
}

QJsonArray* QJsonValue_toArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue) {
	return new QJsonArray(self->toArray(*defaultValue));
}

QJsonObject* QJsonValue_toObject(const QJsonValue* self) {
	return new QJsonObject(self->toObject());
}

QJsonObject* QJsonValue_toObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue) {
	return new QJsonObject(self->toObject(*defaultValue));
}

QJsonValue* QJsonValue_operatorSubscript(const QJsonValue* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValue* QJsonValue_operatorSubscriptWithInt(const QJsonValue* self, int i) {
	return new QJsonValue(self->operator[](static_cast<int>(i)));
}

bool QJsonValue_operatorEqual(const QJsonValue* self, QJsonValue* other) {
	return (*self == *other);
}

bool QJsonValue_operatorNotEqual(const QJsonValue* self, QJsonValue* other) {
	return (*self != *other);
}

bool QJsonValue_toBool1(const QJsonValue* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValue_toInt1(const QJsonValue* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

double QJsonValue_toDouble1(const QJsonValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

void QJsonValue_delete(QJsonValue* self) {
	delete self;
}

QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1) {
	return new QJsonValueRef(*param1);
}

QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, int idx) {
	return new QJsonValueRef(array, static_cast<int>(idx));
}

QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, int idx) {
	return new QJsonValueRef(object, static_cast<int>(idx));
}

QJsonValue* QJsonValueRef_ToQJsonValue(const QJsonValueRef* self) {
	return new QJsonValue(self->operator QJsonValue());
}

void QJsonValueRef_operatorAssign(QJsonValueRef* self, QJsonValue* val) {
	self->operator=(*val);
}

void QJsonValueRef_operatorAssignWithVal(QJsonValueRef* self, QJsonValueRef* val) {
	self->operator=(*val);
}

QVariant* QJsonValueRef_toVariant(const QJsonValueRef* self) {
	return new QVariant(self->toVariant());
}

int QJsonValueRef_type(const QJsonValueRef* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJsonValueRef_isNull(const QJsonValueRef* self) {
	return self->isNull();
}

bool QJsonValueRef_isBool(const QJsonValueRef* self) {
	return self->isBool();
}

bool QJsonValueRef_isDouble(const QJsonValueRef* self) {
	return self->isDouble();
}

bool QJsonValueRef_isString(const QJsonValueRef* self) {
	return self->isString();
}

bool QJsonValueRef_isArray(const QJsonValueRef* self) {
	return self->isArray();
}

bool QJsonValueRef_isObject(const QJsonValueRef* self) {
	return self->isObject();
}

bool QJsonValueRef_isUndefined(const QJsonValueRef* self) {
	return self->isUndefined();
}

bool QJsonValueRef_toBool(const QJsonValueRef* self) {
	return self->toBool();
}

int QJsonValueRef_toInt(const QJsonValueRef* self) {
	return self->toInt();
}

double QJsonValueRef_toDouble(const QJsonValueRef* self) {
	return self->toDouble();
}

struct miqt_string QJsonValueRef_toString(const QJsonValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonArray* QJsonValueRef_toArray(const QJsonValueRef* self) {
	return new QJsonArray(self->toArray());
}

QJsonObject* QJsonValueRef_toObject(const QJsonValueRef* self) {
	return new QJsonObject(self->toObject());
}

bool QJsonValueRef_toBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValueRef_toIntWithDefaultValue(const QJsonValueRef* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

double QJsonValueRef_toDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QJsonValueRef_toStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string defaultValue) {
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

bool QJsonValueRef_operatorEqual(const QJsonValueRef* self, QJsonValue* other) {
	return (*self == *other);
}

bool QJsonValueRef_operatorNotEqual(const QJsonValueRef* self, QJsonValue* other) {
	return (*self != *other);
}

void QJsonValueRef_delete(QJsonValueRef* self) {
	delete self;
}

QJsonValuePtr* QJsonValuePtr_new(QJsonValue* val) {
	return new QJsonValuePtr(*val);
}

QJsonValuePtr* QJsonValuePtr_new2(QJsonValuePtr* param1) {
	return new QJsonValuePtr(*param1);
}

QJsonValue* QJsonValuePtr_operatorMultiply(QJsonValuePtr* self) {
	QJsonValue& _ret = self->operator*();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonValue* QJsonValuePtr_operatorMinusGreater(QJsonValuePtr* self) {
	return self->operator->();
}

void QJsonValuePtr_operatorAssign(QJsonValuePtr* self, QJsonValuePtr* param1) {
	self->operator=(*param1);
}

void QJsonValuePtr_delete(QJsonValuePtr* self) {
	delete self;
}

QJsonValueRefPtr* QJsonValueRefPtr_new(QJsonArray* array, int idx) {
	return new QJsonValueRefPtr(array, static_cast<int>(idx));
}

QJsonValueRefPtr* QJsonValueRefPtr_new2(QJsonObject* object, int idx) {
	return new QJsonValueRefPtr(object, static_cast<int>(idx));
}

QJsonValueRefPtr* QJsonValueRefPtr_new3(QJsonValueRefPtr* param1) {
	return new QJsonValueRefPtr(*param1);
}

QJsonValueRef* QJsonValueRefPtr_operatorMultiply(QJsonValueRefPtr* self) {
	QJsonValueRef& _ret = self->operator*();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonValueRef* QJsonValueRefPtr_operatorMinusGreater(QJsonValueRefPtr* self) {
	return self->operator->();
}

void QJsonValueRefPtr_operatorAssign(QJsonValueRefPtr* self, QJsonValueRefPtr* param1) {
	self->operator=(*param1);
}

void QJsonValueRefPtr_delete(QJsonValueRefPtr* self) {
	delete self;
}

