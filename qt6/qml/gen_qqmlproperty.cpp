#include <QMetaMethod>
#include <QMetaProperty>
#include <QMetaType>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlProperty>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qqmlproperty.h>
#include "gen_qqmlproperty.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQmlProperty* QQmlProperty_new() {
	return new QQmlProperty();
}

QQmlProperty* QQmlProperty_new2(QObject* param1) {
	return new QQmlProperty(param1);
}

QQmlProperty* QQmlProperty_new3(QObject* param1, QQmlContext* param2) {
	return new QQmlProperty(param1, param2);
}

QQmlProperty* QQmlProperty_new4(QObject* param1, QQmlEngine* param2) {
	return new QQmlProperty(param1, param2);
}

QQmlProperty* QQmlProperty_new5(QObject* param1, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return new QQmlProperty(param1, param2_QString);
}

QQmlProperty* QQmlProperty_new6(QObject* param1, struct miqt_string param2, QQmlContext* param3) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return new QQmlProperty(param1, param2_QString, param3);
}

QQmlProperty* QQmlProperty_new7(QObject* param1, struct miqt_string param2, QQmlEngine* param3) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return new QQmlProperty(param1, param2_QString, param3);
}

QQmlProperty* QQmlProperty_new8(QQmlProperty* param1) {
	return new QQmlProperty(*param1);
}

void QQmlProperty_operatorAssign(QQmlProperty* self, QQmlProperty* param1) {
	self->operator=(*param1);
}

void QQmlProperty_swap(QQmlProperty* self, QQmlProperty* other) {
	self->swap(*other);
}

bool QQmlProperty_operatorEqual(const QQmlProperty* self, QQmlProperty* param1) {
	return (*self == *param1);
}

int QQmlProperty_type(const QQmlProperty* self) {
	QQmlProperty::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QQmlProperty_isValid(const QQmlProperty* self) {
	return self->isValid();
}

bool QQmlProperty_isProperty(const QQmlProperty* self) {
	return self->isProperty();
}

bool QQmlProperty_isSignalProperty(const QQmlProperty* self) {
	return self->isSignalProperty();
}

int QQmlProperty_propertyType(const QQmlProperty* self) {
	return self->propertyType();
}

QMetaType* QQmlProperty_propertyMetaType(const QQmlProperty* self) {
	return new QMetaType(self->propertyMetaType());
}

int QQmlProperty_propertyTypeCategory(const QQmlProperty* self) {
	QQmlProperty::PropertyTypeCategory _ret = self->propertyTypeCategory();
	return static_cast<int>(_ret);
}

const char* QQmlProperty_propertyTypeName(const QQmlProperty* self) {
	return (const char*) self->propertyTypeName();
}

struct miqt_string QQmlProperty_name(const QQmlProperty* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QQmlProperty_read(const QQmlProperty* self) {
	return new QVariant(self->read());
}

QVariant* QQmlProperty_read2(QObject* param1, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return new QVariant(QQmlProperty::read(param1, param2_QString));
}

QVariant* QQmlProperty_read3(QObject* param1, struct miqt_string param2, QQmlContext* param3) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return new QVariant(QQmlProperty::read(param1, param2_QString, param3));
}

QVariant* QQmlProperty_read4(QObject* param1, struct miqt_string param2, QQmlEngine* param3) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return new QVariant(QQmlProperty::read(param1, param2_QString, param3));
}

bool QQmlProperty_write(const QQmlProperty* self, QVariant* param1) {
	return self->write(*param1);
}

bool QQmlProperty_write2(QObject* param1, struct miqt_string param2, QVariant* param3) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return QQmlProperty::write(param1, param2_QString, *param3);
}

bool QQmlProperty_write3(QObject* param1, struct miqt_string param2, QVariant* param3, QQmlContext* param4) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return QQmlProperty::write(param1, param2_QString, *param3, param4);
}

bool QQmlProperty_write4(QObject* param1, struct miqt_string param2, QVariant* param3, QQmlEngine* param4) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return QQmlProperty::write(param1, param2_QString, *param3, param4);
}

bool QQmlProperty_reset(const QQmlProperty* self) {
	return self->reset();
}

bool QQmlProperty_hasNotifySignal(const QQmlProperty* self) {
	return self->hasNotifySignal();
}

bool QQmlProperty_needsNotifySignal(const QQmlProperty* self) {
	return self->needsNotifySignal();
}

bool QQmlProperty_connectNotifySignal(const QQmlProperty* self, QObject* dest, const char* slot) {
	return self->connectNotifySignal(dest, slot);
}

bool QQmlProperty_connectNotifySignal2(const QQmlProperty* self, QObject* dest, int method) {
	return self->connectNotifySignal(dest, static_cast<int>(method));
}

bool QQmlProperty_isWritable(const QQmlProperty* self) {
	return self->isWritable();
}

bool QQmlProperty_isBindable(const QQmlProperty* self) {
	return self->isBindable();
}

bool QQmlProperty_isDesignable(const QQmlProperty* self) {
	return self->isDesignable();
}

bool QQmlProperty_isResettable(const QQmlProperty* self) {
	return self->isResettable();
}

QObject* QQmlProperty_object(const QQmlProperty* self) {
	return self->object();
}

int QQmlProperty_index(const QQmlProperty* self) {
	return self->index();
}

QMetaProperty* QQmlProperty_property(const QQmlProperty* self) {
	return new QMetaProperty(self->property());
}

QMetaMethod* QQmlProperty_method(const QQmlProperty* self) {
	return new QMetaMethod(self->method());
}

void QQmlProperty_delete(QQmlProperty* self) {
	delete self;
}

