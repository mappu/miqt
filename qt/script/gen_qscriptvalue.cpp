#include <QDateTime>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QRegExp>
#include <QScriptClass>
#include <QScriptEngine>
#include <QScriptString>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qscriptvalue.h>
#include "gen_qscriptvalue.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScriptValue* QScriptValue_new() {
	return new QScriptValue();
}

QScriptValue* QScriptValue_new2(QScriptValue* other) {
	return new QScriptValue(*other);
}

QScriptValue* QScriptValue_new3(QScriptEngine* engine, int val) {
	return new QScriptValue(engine, static_cast<QScriptValue::SpecialValue>(val));
}

QScriptValue* QScriptValue_new4(QScriptEngine* engine, bool val) {
	return new QScriptValue(engine, val);
}

QScriptValue* QScriptValue_new5(QScriptEngine* engine, int val) {
	return new QScriptValue(engine, static_cast<int>(val));
}

QScriptValue* QScriptValue_new6(QScriptEngine* engine, unsigned int val) {
	return new QScriptValue(engine, static_cast<uint>(val));
}

QScriptValue* QScriptValue_new7(QScriptEngine* engine, double val) {
	return new QScriptValue(engine, static_cast<qsreal>(val));
}

QScriptValue* QScriptValue_new8(QScriptEngine* engine, struct miqt_string val) {
	QString val_QString = QString::fromUtf8(val.data, val.len);
	return new QScriptValue(engine, val_QString);
}

QScriptValue* QScriptValue_new9(QScriptEngine* engine, const char* val) {
	return new QScriptValue(engine, val);
}

QScriptValue* QScriptValue_new10(int value) {
	return new QScriptValue(static_cast<QScriptValue::SpecialValue>(value));
}

QScriptValue* QScriptValue_new11(bool value) {
	return new QScriptValue(value);
}

QScriptValue* QScriptValue_new12(int value) {
	return new QScriptValue(static_cast<int>(value));
}

QScriptValue* QScriptValue_new13(unsigned int value) {
	return new QScriptValue(static_cast<uint>(value));
}

QScriptValue* QScriptValue_new14(double value) {
	return new QScriptValue(static_cast<qsreal>(value));
}

QScriptValue* QScriptValue_new15(struct miqt_string value) {
	QString value_QString = QString::fromUtf8(value.data, value.len);
	return new QScriptValue(value_QString);
}

QScriptValue* QScriptValue_new16(const char* value) {
	return new QScriptValue(value);
}

void QScriptValue_operatorAssign(QScriptValue* self, QScriptValue* other) {
	self->operator=(*other);
}

QScriptEngine* QScriptValue_engine(const QScriptValue* self) {
	return self->engine();
}

bool QScriptValue_isValid(const QScriptValue* self) {
	return self->isValid();
}

bool QScriptValue_isBool(const QScriptValue* self) {
	return self->isBool();
}

bool QScriptValue_isBoolean(const QScriptValue* self) {
	return self->isBoolean();
}

bool QScriptValue_isNumber(const QScriptValue* self) {
	return self->isNumber();
}

bool QScriptValue_isFunction(const QScriptValue* self) {
	return self->isFunction();
}

bool QScriptValue_isNull(const QScriptValue* self) {
	return self->isNull();
}

bool QScriptValue_isString(const QScriptValue* self) {
	return self->isString();
}

bool QScriptValue_isUndefined(const QScriptValue* self) {
	return self->isUndefined();
}

bool QScriptValue_isVariant(const QScriptValue* self) {
	return self->isVariant();
}

bool QScriptValue_isQObject(const QScriptValue* self) {
	return self->isQObject();
}

bool QScriptValue_isQMetaObject(const QScriptValue* self) {
	return self->isQMetaObject();
}

bool QScriptValue_isObject(const QScriptValue* self) {
	return self->isObject();
}

bool QScriptValue_isDate(const QScriptValue* self) {
	return self->isDate();
}

bool QScriptValue_isRegExp(const QScriptValue* self) {
	return self->isRegExp();
}

bool QScriptValue_isArray(const QScriptValue* self) {
	return self->isArray();
}

bool QScriptValue_isError(const QScriptValue* self) {
	return self->isError();
}

struct miqt_string QScriptValue_toString(const QScriptValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QScriptValue_toNumber(const QScriptValue* self) {
	qsreal _ret = self->toNumber();
	return static_cast<double>(_ret);
}

bool QScriptValue_toBool(const QScriptValue* self) {
	return self->toBool();
}

bool QScriptValue_toBoolean(const QScriptValue* self) {
	return self->toBoolean();
}

double QScriptValue_toInteger(const QScriptValue* self) {
	qsreal _ret = self->toInteger();
	return static_cast<double>(_ret);
}

int QScriptValue_toInt32(const QScriptValue* self) {
	qint32 _ret = self->toInt32();
	return static_cast<int>(_ret);
}

unsigned int QScriptValue_toUInt32(const QScriptValue* self) {
	quint32 _ret = self->toUInt32();
	return static_cast<unsigned int>(_ret);
}

uint16_t QScriptValue_toUInt16(const QScriptValue* self) {
	quint16 _ret = self->toUInt16();
	return static_cast<uint16_t>(_ret);
}

QVariant* QScriptValue_toVariant(const QScriptValue* self) {
	return new QVariant(self->toVariant());
}

QObject* QScriptValue_toQObject(const QScriptValue* self) {
	return self->toQObject();
}

QMetaObject* QScriptValue_toQMetaObject(const QScriptValue* self) {
	return (QMetaObject*) self->toQMetaObject();
}

QScriptValue* QScriptValue_toObject(const QScriptValue* self) {
	return new QScriptValue(self->toObject());
}

QDateTime* QScriptValue_toDateTime(const QScriptValue* self) {
	return new QDateTime(self->toDateTime());
}

QRegExp* QScriptValue_toRegExp(const QScriptValue* self) {
	return new QRegExp(self->toRegExp());
}

bool QScriptValue_instanceOf(const QScriptValue* self, QScriptValue* other) {
	return self->instanceOf(*other);
}

bool QScriptValue_lessThan(const QScriptValue* self, QScriptValue* other) {
	return self->lessThan(*other);
}

bool QScriptValue_equals(const QScriptValue* self, QScriptValue* other) {
	return self->equals(*other);
}

bool QScriptValue_strictlyEquals(const QScriptValue* self, QScriptValue* other) {
	return self->strictlyEquals(*other);
}

QScriptValue* QScriptValue_prototype(const QScriptValue* self) {
	return new QScriptValue(self->prototype());
}

void QScriptValue_setPrototype(QScriptValue* self, QScriptValue* prototype) {
	self->setPrototype(*prototype);
}

QScriptValue* QScriptValue_scope(const QScriptValue* self) {
	return new QScriptValue(self->scope());
}

void QScriptValue_setScope(QScriptValue* self, QScriptValue* scope) {
	self->setScope(*scope);
}

QScriptValue* QScriptValue_property(const QScriptValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QScriptValue(self->property(name_QString));
}

void QScriptValue_setProperty(QScriptValue* self, struct miqt_string name, QScriptValue* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setProperty(name_QString, *value);
}

QScriptValue* QScriptValue_propertyWithArrayIndex(const QScriptValue* self, unsigned int arrayIndex) {
	return new QScriptValue(self->property(static_cast<quint32>(arrayIndex)));
}

void QScriptValue_setProperty2(QScriptValue* self, unsigned int arrayIndex, QScriptValue* value) {
	self->setProperty(static_cast<quint32>(arrayIndex), *value);
}

QScriptValue* QScriptValue_propertyWithName(const QScriptValue* self, QScriptString* name) {
	return new QScriptValue(self->property(*name));
}

void QScriptValue_setProperty3(QScriptValue* self, QScriptString* name, QScriptValue* value) {
	self->setProperty(*name, *value);
}

int QScriptValue_propertyFlags(const QScriptValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QScriptValue::PropertyFlags _ret = self->propertyFlags(name_QString);
	return static_cast<int>(_ret);
}

int QScriptValue_propertyFlagsWithName(const QScriptValue* self, QScriptString* name) {
	QScriptValue::PropertyFlags _ret = self->propertyFlags(*name);
	return static_cast<int>(_ret);
}

QScriptValue* QScriptValue_call(QScriptValue* self) {
	return new QScriptValue(self->call());
}

QScriptValue* QScriptValue_call2(QScriptValue* self, QScriptValue* thisObject, QScriptValue* arguments) {
	return new QScriptValue(self->call(*thisObject, *arguments));
}

QScriptValue* QScriptValue_construct(QScriptValue* self) {
	return new QScriptValue(self->construct());
}

QScriptValue* QScriptValue_constructWithArguments(QScriptValue* self, QScriptValue* arguments) {
	return new QScriptValue(self->construct(*arguments));
}

QScriptValue* QScriptValue_data(const QScriptValue* self) {
	return new QScriptValue(self->data());
}

void QScriptValue_setData(QScriptValue* self, QScriptValue* data) {
	self->setData(*data);
}

QScriptClass* QScriptValue_scriptClass(const QScriptValue* self) {
	return self->scriptClass();
}

void QScriptValue_setScriptClass(QScriptValue* self, QScriptClass* scriptClass) {
	self->setScriptClass(scriptClass);
}

long long QScriptValue_objectId(const QScriptValue* self) {
	qint64 _ret = self->objectId();
	return static_cast<long long>(_ret);
}

QScriptValue* QScriptValue_property2(const QScriptValue* self, struct miqt_string name, int* mode) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QScriptValue(self->property(name_QString, (const QScriptValue::ResolveFlags&)(*mode)));
}

void QScriptValue_setProperty32(QScriptValue* self, struct miqt_string name, QScriptValue* value, int* flags) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setProperty(name_QString, *value, (const QScriptValue::PropertyFlags&)(*flags));
}

QScriptValue* QScriptValue_property22(const QScriptValue* self, unsigned int arrayIndex, int* mode) {
	return new QScriptValue(self->property(static_cast<quint32>(arrayIndex), (const QScriptValue::ResolveFlags&)(*mode)));
}

void QScriptValue_setProperty33(QScriptValue* self, unsigned int arrayIndex, QScriptValue* value, int* flags) {
	self->setProperty(static_cast<quint32>(arrayIndex), *value, (const QScriptValue::PropertyFlags&)(*flags));
}

QScriptValue* QScriptValue_property23(const QScriptValue* self, QScriptString* name, int* mode) {
	return new QScriptValue(self->property(*name, (const QScriptValue::ResolveFlags&)(*mode)));
}

void QScriptValue_setProperty34(QScriptValue* self, QScriptString* name, QScriptValue* value, int* flags) {
	self->setProperty(*name, *value, (const QScriptValue::PropertyFlags&)(*flags));
}

int QScriptValue_propertyFlags2(const QScriptValue* self, struct miqt_string name, int* mode) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QScriptValue::PropertyFlags _ret = self->propertyFlags(name_QString, (const QScriptValue::ResolveFlags&)(*mode));
	return static_cast<int>(_ret);
}

int QScriptValue_propertyFlags22(const QScriptValue* self, QScriptString* name, int* mode) {
	QScriptValue::PropertyFlags _ret = self->propertyFlags(*name, (const QScriptValue::ResolveFlags&)(*mode));
	return static_cast<int>(_ret);
}

QScriptValue* QScriptValue_call1(QScriptValue* self, QScriptValue* thisObject) {
	return new QScriptValue(self->call(*thisObject));
}

QScriptValue* QScriptValue_call22(QScriptValue* self, QScriptValue* thisObject, struct miqt_array /* of QScriptValue* */  args) {
	QScriptValueList args_QList;
	args_QList.reserve(args.len);
	QScriptValue** args_arr = static_cast<QScriptValue**>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		args_QList.push_back(*(args_arr[i]));
	}
	return new QScriptValue(self->call(*thisObject, args_QList));
}

QScriptValue* QScriptValue_construct1(QScriptValue* self, struct miqt_array /* of QScriptValue* */  args) {
	QScriptValueList args_QList;
	args_QList.reserve(args.len);
	QScriptValue** args_arr = static_cast<QScriptValue**>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		args_QList.push_back(*(args_arr[i]));
	}
	return new QScriptValue(self->construct(args_QList));
}

void QScriptValue_delete(QScriptValue* self) {
	delete self;
}

