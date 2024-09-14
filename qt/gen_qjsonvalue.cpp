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
#include "qjsonvalue.h"
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

QJsonValue* QJsonValue_new6(struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
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

QJsonValue* QJsonValue_new11(uintptr_t param1) {
	return new QJsonValue(static_cast<QJsonValue::Type>(param1));
}

void QJsonValue_OperatorAssign(QJsonValue* self, QJsonValue* other) {
	self->operator=(*other);
}

void QJsonValue_Swap(QJsonValue* self, QJsonValue* other) {
	self->swap(*other);
}

QJsonValue* QJsonValue_FromVariant(QVariant* variant) {
	QJsonValue _ret = QJsonValue::fromVariant(*variant);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
}

QVariant* QJsonValue_ToVariant(const QJsonValue* self) {
	QVariant _ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

uintptr_t QJsonValue_Type(const QJsonValue* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
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

double QJsonValue_ToDouble(const QJsonValue* self) {
	return self->toDouble();
}

struct miqt_string* QJsonValue_ToString(const QJsonValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QJsonValue_ToStringWithDefaultValue(const QJsonValue* self, struct miqt_string* defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(&defaultValue->data, defaultValue->len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QJsonArray* QJsonValue_ToArray(const QJsonValue* self) {
	QJsonArray _ret = self->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(_ret));
}

QJsonArray* QJsonValue_ToArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue) {
	QJsonArray _ret = self->toArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(_ret));
}

QJsonObject* QJsonValue_ToObject(const QJsonValue* self) {
	QJsonObject _ret = self->toObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(_ret));
}

QJsonObject* QJsonValue_ToObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue) {
	QJsonObject _ret = self->toObject(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(_ret));
}

QJsonValue* QJsonValue_OperatorSubscript(const QJsonValue* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QJsonValue _ret = self->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
}

QJsonValue* QJsonValue_OperatorSubscriptWithInt(const QJsonValue* self, int i) {
	QJsonValue _ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(_ret));
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

double QJsonValue_ToDouble1(const QJsonValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

void QJsonValue_Delete(QJsonValue* self) {
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

void QJsonValueRef_OperatorAssign(QJsonValueRef* self, QJsonValue* val) {
	self->operator=(*val);
}

void QJsonValueRef_OperatorAssignWithVal(QJsonValueRef* self, QJsonValueRef* val) {
	self->operator=(*val);
}

QVariant* QJsonValueRef_ToVariant(const QJsonValueRef* self) {
	QVariant _ret = self->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(_ret));
}

uintptr_t QJsonValueRef_Type(const QJsonValueRef* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
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

double QJsonValueRef_ToDouble(const QJsonValueRef* self) {
	return self->toDouble();
}

struct miqt_string* QJsonValueRef_ToString(const QJsonValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QJsonArray* QJsonValueRef_ToArray(const QJsonValueRef* self) {
	QJsonArray _ret = self->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(_ret));
}

QJsonObject* QJsonValueRef_ToObject(const QJsonValueRef* self) {
	QJsonObject _ret = self->toObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(_ret));
}

bool QJsonValueRef_ToBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValueRef_ToIntWithDefaultValue(const QJsonValueRef* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

double QJsonValueRef_ToDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string* QJsonValueRef_ToStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string* defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(&defaultValue->data, defaultValue->len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QJsonValueRef_OperatorEqual(const QJsonValueRef* self, QJsonValue* other) {
	return self->operator==(*other);
}

bool QJsonValueRef_OperatorNotEqual(const QJsonValueRef* self, QJsonValue* other) {
	return self->operator!=(*other);
}

void QJsonValueRef_Delete(QJsonValueRef* self) {
	delete self;
}

QJsonValuePtr* QJsonValuePtr_new(QJsonValue* val) {
	return new QJsonValuePtr(*val);
}

QJsonValuePtr* QJsonValuePtr_new2(QJsonValuePtr* param1) {
	return new QJsonValuePtr(*param1);
}

QJsonValue* QJsonValuePtr_OperatorMultiply(QJsonValuePtr* self) {
	QJsonValue& _ret = self->operator*();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonValue* QJsonValuePtr_OperatorMinusGreater(QJsonValuePtr* self) {
	return self->operator->();
}

void QJsonValuePtr_OperatorAssign(QJsonValuePtr* self, QJsonValuePtr* param1) {
	self->operator=(*param1);
}

void QJsonValuePtr_Delete(QJsonValuePtr* self) {
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

QJsonValueRef* QJsonValueRefPtr_OperatorMultiply(QJsonValueRefPtr* self) {
	QJsonValueRef& _ret = self->operator*();
	// Cast returned reference into pointer
	return &_ret;
}

QJsonValueRef* QJsonValueRefPtr_OperatorMinusGreater(QJsonValueRefPtr* self) {
	return self->operator->();
}

void QJsonValueRefPtr_OperatorAssign(QJsonValueRefPtr* self, QJsonValueRefPtr* param1) {
	self->operator=(*param1);
}

void QJsonValueRefPtr_Delete(QJsonValueRefPtr* self) {
	delete self;
}

