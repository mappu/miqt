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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

QJsonValue* QJsonValue_new6(const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
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
	QJsonValue ret = QJsonValue::fromVariant(*variant);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QVariant* QJsonValue_ToVariant(QJsonValue* self) {
	QVariant ret = const_cast<const QJsonValue*>(self)->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

uintptr_t QJsonValue_Type(QJsonValue* self) {
	QJsonValue::Type ret = const_cast<const QJsonValue*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

bool QJsonValue_IsNull(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->isNull();
}

bool QJsonValue_IsBool(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->isBool();
}

bool QJsonValue_IsDouble(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->isDouble();
}

bool QJsonValue_IsString(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->isString();
}

bool QJsonValue_IsArray(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->isArray();
}

bool QJsonValue_IsObject(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->isObject();
}

bool QJsonValue_IsUndefined(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->isUndefined();
}

bool QJsonValue_ToBool(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->toBool();
}

int QJsonValue_ToInt(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->toInt();
}

double QJsonValue_ToDouble(QJsonValue* self) {
	return const_cast<const QJsonValue*>(self)->toDouble();
}

void QJsonValue_ToString(QJsonValue* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QJsonValue*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QJsonValue_ToStringWithDefaultValue(QJsonValue* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	QString ret = const_cast<const QJsonValue*>(self)->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QJsonArray* QJsonValue_ToArray(QJsonValue* self) {
	QJsonArray ret = const_cast<const QJsonValue*>(self)->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
}

QJsonArray* QJsonValue_ToArrayWithDefaultValue(QJsonValue* self, QJsonArray* defaultValue) {
	QJsonArray ret = const_cast<const QJsonValue*>(self)->toArray(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
}

QJsonObject* QJsonValue_ToObject(QJsonValue* self) {
	QJsonObject ret = const_cast<const QJsonValue*>(self)->toObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

QJsonObject* QJsonValue_ToObjectWithDefaultValue(QJsonValue* self, QJsonObject* defaultValue) {
	QJsonObject ret = const_cast<const QJsonValue*>(self)->toObject(*defaultValue);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

QJsonValue* QJsonValue_OperatorSubscript(QJsonValue* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QJsonValue ret = const_cast<const QJsonValue*>(self)->operator[](key_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

QJsonValue* QJsonValue_OperatorSubscriptWithInt(QJsonValue* self, int i) {
	QJsonValue ret = const_cast<const QJsonValue*>(self)->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonValue*>(new QJsonValue(ret));
}

bool QJsonValue_OperatorEqual(QJsonValue* self, QJsonValue* other) {
	return const_cast<const QJsonValue*>(self)->operator==(*other);
}

bool QJsonValue_OperatorNotEqual(QJsonValue* self, QJsonValue* other) {
	return const_cast<const QJsonValue*>(self)->operator!=(*other);
}

bool QJsonValue_ToBool1(QJsonValue* self, bool defaultValue) {
	return const_cast<const QJsonValue*>(self)->toBool(defaultValue);
}

int QJsonValue_ToInt1(QJsonValue* self, int defaultValue) {
	return const_cast<const QJsonValue*>(self)->toInt(static_cast<int>(defaultValue));
}

double QJsonValue_ToDouble1(QJsonValue* self, double defaultValue) {
	return const_cast<const QJsonValue*>(self)->toDouble(static_cast<double>(defaultValue));
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

QVariant* QJsonValueRef_ToVariant(QJsonValueRef* self) {
	QVariant ret = const_cast<const QJsonValueRef*>(self)->toVariant();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

uintptr_t QJsonValueRef_Type(QJsonValueRef* self) {
	QJsonValue::Type ret = const_cast<const QJsonValueRef*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

bool QJsonValueRef_IsNull(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->isNull();
}

bool QJsonValueRef_IsBool(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->isBool();
}

bool QJsonValueRef_IsDouble(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->isDouble();
}

bool QJsonValueRef_IsString(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->isString();
}

bool QJsonValueRef_IsArray(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->isArray();
}

bool QJsonValueRef_IsObject(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->isObject();
}

bool QJsonValueRef_IsUndefined(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->isUndefined();
}

bool QJsonValueRef_ToBool(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->toBool();
}

int QJsonValueRef_ToInt(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->toInt();
}

double QJsonValueRef_ToDouble(QJsonValueRef* self) {
	return const_cast<const QJsonValueRef*>(self)->toDouble();
}

void QJsonValueRef_ToString(QJsonValueRef* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QJsonValueRef*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QJsonArray* QJsonValueRef_ToArray(QJsonValueRef* self) {
	QJsonArray ret = const_cast<const QJsonValueRef*>(self)->toArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonArray*>(new QJsonArray(ret));
}

QJsonObject* QJsonValueRef_ToObject(QJsonValueRef* self) {
	QJsonObject ret = const_cast<const QJsonValueRef*>(self)->toObject();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

bool QJsonValueRef_ToBoolWithDefaultValue(QJsonValueRef* self, bool defaultValue) {
	return const_cast<const QJsonValueRef*>(self)->toBool(defaultValue);
}

int QJsonValueRef_ToIntWithDefaultValue(QJsonValueRef* self, int defaultValue) {
	return const_cast<const QJsonValueRef*>(self)->toInt(static_cast<int>(defaultValue));
}

double QJsonValueRef_ToDoubleWithDefaultValue(QJsonValueRef* self, double defaultValue) {
	return const_cast<const QJsonValueRef*>(self)->toDouble(static_cast<double>(defaultValue));
}

void QJsonValueRef_ToStringWithDefaultValue(QJsonValueRef* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue, defaultValue_Strlen);
	QString ret = const_cast<const QJsonValueRef*>(self)->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QJsonValueRef_OperatorEqual(QJsonValueRef* self, QJsonValue* other) {
	return const_cast<const QJsonValueRef*>(self)->operator==(*other);
}

bool QJsonValueRef_OperatorNotEqual(QJsonValueRef* self, QJsonValue* other) {
	return const_cast<const QJsonValueRef*>(self)->operator!=(*other);
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
	QJsonValue& ret = self->operator*();
	// Cast returned reference into pointer
	return &ret;
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
	QJsonValueRef& ret = self->operator*();
	// Cast returned reference into pointer
	return &ret;
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

