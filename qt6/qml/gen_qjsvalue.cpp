#include <QDateTime>
#include <QJSPrimitiveValue>
#include <QJSValue>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsvalue.h>
#include "gen_qjsvalue.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJSValue* QJSValue_new() {
	return new QJSValue();
}

QJSValue* QJSValue_new2(QJSValue* other) {
	return new QJSValue(*other);
}

QJSValue* QJSValue_new3(bool value) {
	return new QJSValue(value);
}

QJSValue* QJSValue_new4(int value) {
	return new QJSValue(static_cast<int>(value));
}

QJSValue* QJSValue_new5(unsigned int value) {
	return new QJSValue(static_cast<uint>(value));
}

QJSValue* QJSValue_new6(double value) {
	return new QJSValue(static_cast<double>(value));
}

QJSValue* QJSValue_new7(struct miqt_string value) {
	QString value_QString = QString::fromUtf8(value.data, value.len);
	return new QJSValue(value_QString);
}

QJSValue* QJSValue_new8(const char* str) {
	return new QJSValue(str);
}

QJSValue* QJSValue_new9(int value) {
	return new QJSValue(static_cast<QJSValue::SpecialValue>(value));
}

void QJSValue_operatorAssign(QJSValue* self, QJSValue* other) {
	self->operator=(*other);
}

bool QJSValue_isBool(const QJSValue* self) {
	return self->isBool();
}

bool QJSValue_isNumber(const QJSValue* self) {
	return self->isNumber();
}

bool QJSValue_isNull(const QJSValue* self) {
	return self->isNull();
}

bool QJSValue_isString(const QJSValue* self) {
	return self->isString();
}

bool QJSValue_isUndefined(const QJSValue* self) {
	return self->isUndefined();
}

bool QJSValue_isVariant(const QJSValue* self) {
	return self->isVariant();
}

bool QJSValue_isQObject(const QJSValue* self) {
	return self->isQObject();
}

bool QJSValue_isQMetaObject(const QJSValue* self) {
	return self->isQMetaObject();
}

bool QJSValue_isObject(const QJSValue* self) {
	return self->isObject();
}

bool QJSValue_isDate(const QJSValue* self) {
	return self->isDate();
}

bool QJSValue_isRegExp(const QJSValue* self) {
	return self->isRegExp();
}

bool QJSValue_isArray(const QJSValue* self) {
	return self->isArray();
}

bool QJSValue_isError(const QJSValue* self) {
	return self->isError();
}

bool QJSValue_isUrl(const QJSValue* self) {
	return self->isUrl();
}

struct miqt_string QJSValue_toString(const QJSValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QJSValue_toNumber(const QJSValue* self) {
	return self->toNumber();
}

int QJSValue_toInt(const QJSValue* self) {
	qint32 _ret = self->toInt();
	return static_cast<int>(_ret);
}

unsigned int QJSValue_toUInt(const QJSValue* self) {
	quint32 _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

bool QJSValue_toBool(const QJSValue* self) {
	return self->toBool();
}

QVariant* QJSValue_toVariant(const QJSValue* self) {
	return new QVariant(self->toVariant());
}

QVariant* QJSValue_toVariantWithBehavior(const QJSValue* self, int behavior) {
	return new QVariant(self->toVariant(static_cast<QJSValue::ObjectConversionBehavior>(behavior)));
}

QJSPrimitiveValue* QJSValue_toPrimitive(const QJSValue* self) {
	return new QJSPrimitiveValue(self->toPrimitive());
}

QObject* QJSValue_toQObject(const QJSValue* self) {
	return self->toQObject();
}

QMetaObject* QJSValue_toQMetaObject(const QJSValue* self) {
	return (QMetaObject*) self->toQMetaObject();
}

QDateTime* QJSValue_toDateTime(const QJSValue* self) {
	return new QDateTime(self->toDateTime());
}

bool QJSValue_equals(const QJSValue* self, QJSValue* other) {
	return self->equals(*other);
}

bool QJSValue_strictlyEquals(const QJSValue* self, QJSValue* other) {
	return self->strictlyEquals(*other);
}

QJSValue* QJSValue_prototype(const QJSValue* self) {
	return new QJSValue(self->prototype());
}

void QJSValue_setPrototype(QJSValue* self, QJSValue* prototype) {
	self->setPrototype(*prototype);
}

QJSValue* QJSValue_property(const QJSValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QJSValue(self->property(name_QString));
}

void QJSValue_setProperty(QJSValue* self, struct miqt_string name, QJSValue* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setProperty(name_QString, *value);
}

bool QJSValue_hasProperty(const QJSValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasProperty(name_QString);
}

bool QJSValue_hasOwnProperty(const QJSValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasOwnProperty(name_QString);
}

QJSValue* QJSValue_propertyWithArrayIndex(const QJSValue* self, unsigned int arrayIndex) {
	return new QJSValue(self->property(static_cast<quint32>(arrayIndex)));
}

void QJSValue_setProperty2(QJSValue* self, unsigned int arrayIndex, QJSValue* value) {
	self->setProperty(static_cast<quint32>(arrayIndex), *value);
}

bool QJSValue_deleteProperty(QJSValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->deleteProperty(name_QString);
}

bool QJSValue_isCallable(const QJSValue* self) {
	return self->isCallable();
}

QJSValue* QJSValue_call(const QJSValue* self) {
	return new QJSValue(self->call());
}

QJSValue* QJSValue_callWithInstance(const QJSValue* self, QJSValue* instance) {
	return new QJSValue(self->callWithInstance(*instance));
}

QJSValue* QJSValue_callAsConstructor(const QJSValue* self) {
	return new QJSValue(self->callAsConstructor());
}

int QJSValue_errorType(const QJSValue* self) {
	QJSValue::ErrorType _ret = self->errorType();
	return static_cast<int>(_ret);
}

QJSValue* QJSValue_call1(const QJSValue* self, struct miqt_array /* of QJSValue* */  args) {
	QJSValueList args_QList;
	args_QList.reserve(args.len);
	QJSValue** args_arr = static_cast<QJSValue**>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		args_QList.push_back(*(args_arr[i]));
	}
	return new QJSValue(self->call(args_QList));
}

QJSValue* QJSValue_callWithInstance2(const QJSValue* self, QJSValue* instance, struct miqt_array /* of QJSValue* */  args) {
	QJSValueList args_QList;
	args_QList.reserve(args.len);
	QJSValue** args_arr = static_cast<QJSValue**>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		args_QList.push_back(*(args_arr[i]));
	}
	return new QJSValue(self->callWithInstance(*instance, args_QList));
}

QJSValue* QJSValue_callAsConstructor1(const QJSValue* self, struct miqt_array /* of QJSValue* */  args) {
	QJSValueList args_QList;
	args_QList.reserve(args.len);
	QJSValue** args_arr = static_cast<QJSValue**>(args.data);
	for(size_t i = 0; i < args.len; ++i) {
		args_QList.push_back(*(args_arr[i]));
	}
	return new QJSValue(self->callAsConstructor(args_QList));
}

void QJSValue_delete(QJSValue* self) {
	delete self;
}

