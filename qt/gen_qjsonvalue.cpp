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
#include "_cgo_export.h"

void QJsonValue_new(QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue();
	*outptr_QJsonValue = ret;
}

void QJsonValue_new2(bool b, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(b);
	*outptr_QJsonValue = ret;
}

void QJsonValue_new3(double n, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(static_cast<double>(n));
	*outptr_QJsonValue = ret;
}

void QJsonValue_new4(int n, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(static_cast<int>(n));
	*outptr_QJsonValue = ret;
}

void QJsonValue_new5(long long v, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(static_cast<qint64>(v));
	*outptr_QJsonValue = ret;
}

void QJsonValue_new6(struct miqt_string s, QJsonValue** outptr_QJsonValue) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QJsonValue* ret = new QJsonValue(s_QString);
	*outptr_QJsonValue = ret;
}

void QJsonValue_new7(const char* s, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(s);
	*outptr_QJsonValue = ret;
}

void QJsonValue_new8(QJsonArray* a, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(*a);
	*outptr_QJsonValue = ret;
}

void QJsonValue_new9(QJsonObject* o, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(*o);
	*outptr_QJsonValue = ret;
}

void QJsonValue_new10(QJsonValue* other, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(*other);
	*outptr_QJsonValue = ret;
}

void QJsonValue_new11(int param1, QJsonValue** outptr_QJsonValue) {
	QJsonValue* ret = new QJsonValue(static_cast<QJsonValue::Type>(param1));
	*outptr_QJsonValue = ret;
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

QJsonValue* QJsonValue_OperatorSubscriptWithInt(const QJsonValue* self, int i) {
	return new QJsonValue(self->operator[](static_cast<int>(i)));
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

void QJsonValue_Delete(QJsonValue* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QJsonValue*>( self );
	} else {
		delete self;
	}
}

void QJsonValueRef_new(QJsonValueRef* param1, QJsonValueRef** outptr_QJsonValueRef) {
	QJsonValueRef* ret = new QJsonValueRef(*param1);
	*outptr_QJsonValueRef = ret;
}

void QJsonValueRef_new2(QJsonArray* array, int idx, QJsonValueRef** outptr_QJsonValueRef) {
	QJsonValueRef* ret = new QJsonValueRef(array, static_cast<int>(idx));
	*outptr_QJsonValueRef = ret;
}

void QJsonValueRef_new3(QJsonObject* object, int idx, QJsonValueRef** outptr_QJsonValueRef) {
	QJsonValueRef* ret = new QJsonValueRef(object, static_cast<int>(idx));
	*outptr_QJsonValueRef = ret;
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

bool QJsonValueRef_ToBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValueRef_ToIntWithDefaultValue(const QJsonValueRef* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

double QJsonValueRef_ToDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QJsonValueRef_ToStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string defaultValue) {
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

bool QJsonValueRef_OperatorEqual(const QJsonValueRef* self, QJsonValue* other) {
	return self->operator==(*other);
}

bool QJsonValueRef_OperatorNotEqual(const QJsonValueRef* self, QJsonValue* other) {
	return self->operator!=(*other);
}

void QJsonValueRef_Delete(QJsonValueRef* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QJsonValueRef*>( self );
	} else {
		delete self;
	}
}

void QJsonValuePtr_new(QJsonValue* val, QJsonValuePtr** outptr_QJsonValuePtr) {
	QJsonValuePtr* ret = new QJsonValuePtr(*val);
	*outptr_QJsonValuePtr = ret;
}

void QJsonValuePtr_new2(QJsonValuePtr* param1, QJsonValuePtr** outptr_QJsonValuePtr) {
	QJsonValuePtr* ret = new QJsonValuePtr(*param1);
	*outptr_QJsonValuePtr = ret;
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

void QJsonValuePtr_Delete(QJsonValuePtr* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QJsonValuePtr*>( self );
	} else {
		delete self;
	}
}

void QJsonValueRefPtr_new(QJsonArray* array, int idx, QJsonValueRefPtr** outptr_QJsonValueRefPtr) {
	QJsonValueRefPtr* ret = new QJsonValueRefPtr(array, static_cast<int>(idx));
	*outptr_QJsonValueRefPtr = ret;
}

void QJsonValueRefPtr_new2(QJsonObject* object, int idx, QJsonValueRefPtr** outptr_QJsonValueRefPtr) {
	QJsonValueRefPtr* ret = new QJsonValueRefPtr(object, static_cast<int>(idx));
	*outptr_QJsonValueRefPtr = ret;
}

void QJsonValueRefPtr_new3(QJsonValueRefPtr* param1, QJsonValueRefPtr** outptr_QJsonValueRefPtr) {
	QJsonValueRefPtr* ret = new QJsonValueRefPtr(*param1);
	*outptr_QJsonValueRefPtr = ret;
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

void QJsonValueRefPtr_Delete(QJsonValueRefPtr* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QJsonValueRefPtr*>( self );
	} else {
		delete self;
	}
}

