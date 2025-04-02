#include <QDateTime>
#include <QJSEngine>
#include <QJSManagedValue>
#include <QJSPrimitiveValue>
#include <QJSValue>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpression>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qjsmanagedvalue.h>
#include "gen_qjsmanagedvalue.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJSManagedValue* QJSManagedValue_new() {
	return new QJSManagedValue();
}

QJSManagedValue* QJSManagedValue_new2(QJSValue* value, QJSEngine* engine) {
	return new QJSManagedValue(*value, engine);
}

QJSManagedValue* QJSManagedValue_new3(QJSPrimitiveValue* value, QJSEngine* engine) {
	return new QJSManagedValue(*value, engine);
}

QJSManagedValue* QJSManagedValue_new4(QVariant* variant, QJSEngine* engine) {
	return new QJSManagedValue(*variant, engine);
}

QJSManagedValue* QJSManagedValue_new5(struct miqt_string string, QJSEngine* engine) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QJSManagedValue(string_QString, engine);
}

bool QJSManagedValue_equals(const QJSManagedValue* self, QJSManagedValue* other) {
	return self->equals(*other);
}

bool QJSManagedValue_strictlyEquals(const QJSManagedValue* self, QJSManagedValue* other) {
	return self->strictlyEquals(*other);
}

QJSEngine* QJSManagedValue_engine(const QJSManagedValue* self) {
	return self->engine();
}

QJSManagedValue* QJSManagedValue_prototype(const QJSManagedValue* self) {
	return new QJSManagedValue(self->prototype());
}

void QJSManagedValue_setPrototype(QJSManagedValue* self, QJSManagedValue* prototype) {
	self->setPrototype(*prototype);
}

int QJSManagedValue_type(const QJSManagedValue* self) {
	QJSManagedValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJSManagedValue_isUndefined(const QJSManagedValue* self) {
	return self->isUndefined();
}

bool QJSManagedValue_isBoolean(const QJSManagedValue* self) {
	return self->isBoolean();
}

bool QJSManagedValue_isNumber(const QJSManagedValue* self) {
	return self->isNumber();
}

bool QJSManagedValue_isString(const QJSManagedValue* self) {
	return self->isString();
}

bool QJSManagedValue_isObject(const QJSManagedValue* self) {
	return self->isObject();
}

bool QJSManagedValue_isSymbol(const QJSManagedValue* self) {
	return self->isSymbol();
}

bool QJSManagedValue_isFunction(const QJSManagedValue* self) {
	return self->isFunction();
}

bool QJSManagedValue_isInteger(const QJSManagedValue* self) {
	return self->isInteger();
}

bool QJSManagedValue_isNull(const QJSManagedValue* self) {
	return self->isNull();
}

bool QJSManagedValue_isRegularExpression(const QJSManagedValue* self) {
	return self->isRegularExpression();
}

bool QJSManagedValue_isArray(const QJSManagedValue* self) {
	return self->isArray();
}

bool QJSManagedValue_isUrl(const QJSManagedValue* self) {
	return self->isUrl();
}

bool QJSManagedValue_isVariant(const QJSManagedValue* self) {
	return self->isVariant();
}

bool QJSManagedValue_isQObject(const QJSManagedValue* self) {
	return self->isQObject();
}

bool QJSManagedValue_isQMetaObject(const QJSManagedValue* self) {
	return self->isQMetaObject();
}

bool QJSManagedValue_isDate(const QJSManagedValue* self) {
	return self->isDate();
}

bool QJSManagedValue_isError(const QJSManagedValue* self) {
	return self->isError();
}

bool QJSManagedValue_isJsMetaType(const QJSManagedValue* self) {
	return self->isJsMetaType();
}

struct miqt_string QJSManagedValue_toString(const QJSManagedValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QJSManagedValue_toNumber(const QJSManagedValue* self) {
	return self->toNumber();
}

bool QJSManagedValue_toBoolean(const QJSManagedValue* self) {
	return self->toBoolean();
}

QJSPrimitiveValue* QJSManagedValue_toPrimitive(const QJSManagedValue* self) {
	return new QJSPrimitiveValue(self->toPrimitive());
}

QJSValue* QJSManagedValue_toJSValue(const QJSManagedValue* self) {
	return new QJSValue(self->toJSValue());
}

QVariant* QJSManagedValue_toVariant(const QJSManagedValue* self) {
	return new QVariant(self->toVariant());
}

int QJSManagedValue_toInteger(const QJSManagedValue* self) {
	return self->toInteger();
}

QRegularExpression* QJSManagedValue_toRegularExpression(const QJSManagedValue* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QUrl* QJSManagedValue_toUrl(const QJSManagedValue* self) {
	return new QUrl(self->toUrl());
}

QObject* QJSManagedValue_toQObject(const QJSManagedValue* self) {
	return self->toQObject();
}

QMetaObject* QJSManagedValue_toQMetaObject(const QJSManagedValue* self) {
	return (QMetaObject*) self->toQMetaObject();
}

QDateTime* QJSManagedValue_toDateTime(const QJSManagedValue* self) {
	return new QDateTime(self->toDateTime());
}

bool QJSManagedValue_hasProperty(const QJSManagedValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasProperty(name_QString);
}

bool QJSManagedValue_hasOwnProperty(const QJSManagedValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->hasOwnProperty(name_QString);
}

QJSValue* QJSManagedValue_property(const QJSManagedValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QJSValue(self->property(name_QString));
}

void QJSManagedValue_setProperty(QJSManagedValue* self, struct miqt_string name, QJSValue* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setProperty(name_QString, *value);
}

bool QJSManagedValue_deleteProperty(QJSManagedValue* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->deleteProperty(name_QString);
}

bool QJSManagedValue_hasPropertyWithArrayIndex(const QJSManagedValue* self, unsigned int arrayIndex) {
	return self->hasProperty(static_cast<quint32>(arrayIndex));
}

bool QJSManagedValue_hasOwnPropertyWithArrayIndex(const QJSManagedValue* self, unsigned int arrayIndex) {
	return self->hasOwnProperty(static_cast<quint32>(arrayIndex));
}

QJSValue* QJSManagedValue_propertyWithArrayIndex(const QJSManagedValue* self, unsigned int arrayIndex) {
	return new QJSValue(self->property(static_cast<quint32>(arrayIndex)));
}

void QJSManagedValue_setProperty2(QJSManagedValue* self, unsigned int arrayIndex, QJSValue* value) {
	self->setProperty(static_cast<quint32>(arrayIndex), *value);
}

bool QJSManagedValue_deletePropertyWithArrayIndex(QJSManagedValue* self, unsigned int arrayIndex) {
	return self->deleteProperty(static_cast<quint32>(arrayIndex));
}

QJSValue* QJSManagedValue_call(const QJSManagedValue* self) {
	return new QJSValue(self->call());
}

QJSValue* QJSManagedValue_callWithInstance(const QJSManagedValue* self, QJSValue* instance) {
	return new QJSValue(self->callWithInstance(*instance));
}

QJSValue* QJSManagedValue_callAsConstructor(const QJSManagedValue* self) {
	return new QJSValue(self->callAsConstructor());
}

QJSManagedValue* QJSManagedValue_jsMetaType(const QJSManagedValue* self) {
	return new QJSManagedValue(self->jsMetaType());
}

struct miqt_array /* of struct miqt_string */  QJSManagedValue_jsMetaMembers(const QJSManagedValue* self) {
	QStringList _ret = self->jsMetaMembers();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QJSManagedValue* QJSManagedValue_jsMetaInstantiate(const QJSManagedValue* self) {
	return new QJSManagedValue(self->jsMetaInstantiate());
}

QJSValue* QJSManagedValue_call1(const QJSManagedValue* self, struct miqt_array /* of QJSValue* */  arguments) {
	QJSValueList arguments_QList;
	arguments_QList.reserve(arguments.len);
	QJSValue** arguments_arr = static_cast<QJSValue**>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		arguments_QList.push_back(*(arguments_arr[i]));
	}
	return new QJSValue(self->call(arguments_QList));
}

QJSValue* QJSManagedValue_callWithInstance2(const QJSManagedValue* self, QJSValue* instance, struct miqt_array /* of QJSValue* */  arguments) {
	QJSValueList arguments_QList;
	arguments_QList.reserve(arguments.len);
	QJSValue** arguments_arr = static_cast<QJSValue**>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		arguments_QList.push_back(*(arguments_arr[i]));
	}
	return new QJSValue(self->callWithInstance(*instance, arguments_QList));
}

QJSValue* QJSManagedValue_callAsConstructor1(const QJSManagedValue* self, struct miqt_array /* of QJSValue* */  arguments) {
	QJSValueList arguments_QList;
	arguments_QList.reserve(arguments.len);
	QJSValue** arguments_arr = static_cast<QJSValue**>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		arguments_QList.push_back(*(arguments_arr[i]));
	}
	return new QJSValue(self->callAsConstructor(arguments_QList));
}

QJSManagedValue* QJSManagedValue_jsMetaInstantiate1(const QJSManagedValue* self, struct miqt_array /* of QJSValue* */  values) {
	QJSValueList values_QList;
	values_QList.reserve(values.len);
	QJSValue** values_arr = static_cast<QJSValue**>(values.data);
	for(size_t i = 0; i < values.len; ++i) {
		values_QList.push_back(*(values_arr[i]));
	}
	return new QJSManagedValue(self->jsMetaInstantiate(values_QList));
}

void QJSManagedValue_delete(QJSManagedValue* self) {
	delete self;
}

