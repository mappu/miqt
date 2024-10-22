#include <QMetaType>
#include <QPropertyBindingError>
#include <QPropertyBindingSourceLocation>
#include <QPropertyNotifier>
#include <QPropertyObserver>
#include <QPropertyObserverBase>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUntypedBindable>
#include <QUntypedPropertyBinding>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QBindableInterface
#include <qproperty.h>
#include "gen_qproperty.h"
#include "_cgo_export.h"

QPropertyBindingSourceLocation* QPropertyBindingSourceLocation_new() {
	return new QPropertyBindingSourceLocation();
}

QPropertyBindingSourceLocation* QPropertyBindingSourceLocation_new2(QPropertyBindingSourceLocation* param1) {
	return new QPropertyBindingSourceLocation(*param1);
}

void QPropertyBindingSourceLocation_Delete(QPropertyBindingSourceLocation* self) {
	delete self;
}

QPropertyBindingError* QPropertyBindingError_new() {
	return new QPropertyBindingError();
}

QPropertyBindingError* QPropertyBindingError_new2(int typeVal) {
	return new QPropertyBindingError(static_cast<QPropertyBindingError::Type>(typeVal));
}

QPropertyBindingError* QPropertyBindingError_new3(QPropertyBindingError* other) {
	return new QPropertyBindingError(*other);
}

QPropertyBindingError* QPropertyBindingError_new4(int typeVal, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new QPropertyBindingError(static_cast<QPropertyBindingError::Type>(typeVal), description_QString);
}

void QPropertyBindingError_OperatorAssign(QPropertyBindingError* self, QPropertyBindingError* other) {
	self->operator=(*other);
}

bool QPropertyBindingError_HasError(const QPropertyBindingError* self) {
	return self->hasError();
}

int QPropertyBindingError_Type(const QPropertyBindingError* self) {
	QPropertyBindingError::Type _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QPropertyBindingError_Description(const QPropertyBindingError* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPropertyBindingError_Delete(QPropertyBindingError* self) {
	delete self;
}

QUntypedPropertyBinding* QUntypedPropertyBinding_new() {
	return new QUntypedPropertyBinding();
}

QUntypedPropertyBinding* QUntypedPropertyBinding_new2(QUntypedPropertyBinding* other) {
	return new QUntypedPropertyBinding(*other);
}

void QUntypedPropertyBinding_OperatorAssign(QUntypedPropertyBinding* self, QUntypedPropertyBinding* other) {
	self->operator=(*other);
}

bool QUntypedPropertyBinding_IsNull(const QUntypedPropertyBinding* self) {
	return self->isNull();
}

QPropertyBindingError* QUntypedPropertyBinding_Error(const QUntypedPropertyBinding* self) {
	return new QPropertyBindingError(self->error());
}

QMetaType* QUntypedPropertyBinding_ValueMetaType(const QUntypedPropertyBinding* self) {
	return new QMetaType(self->valueMetaType());
}

void QUntypedPropertyBinding_Delete(QUntypedPropertyBinding* self) {
	delete self;
}

QPropertyObserverBase* QPropertyObserverBase_new() {
	return new QPropertyObserverBase();
}

QPropertyObserverBase* QPropertyObserverBase_new2(QPropertyObserverBase* param1) {
	return new QPropertyObserverBase(*param1);
}

void QPropertyObserverBase_Delete(QPropertyObserverBase* self) {
	delete self;
}

QPropertyObserver* QPropertyObserver_new() {
	return new QPropertyObserver();
}

void QPropertyObserver_Delete(QPropertyObserver* self) {
	delete self;
}

QPropertyNotifier* QPropertyNotifier_new() {
	return new QPropertyNotifier();
}

void QPropertyNotifier_Delete(QPropertyNotifier* self) {
	delete self;
}

void QtPrivate__QBindableInterface_Delete(QtPrivate__QBindableInterface* self) {
	delete self;
}

QUntypedBindable* QUntypedBindable_new() {
	return new QUntypedBindable();
}

QUntypedBindable* QUntypedBindable_new2(QUntypedBindable* param1) {
	return new QUntypedBindable(*param1);
}

bool QUntypedBindable_IsValid(const QUntypedBindable* self) {
	return self->isValid();
}

bool QUntypedBindable_IsBindable(const QUntypedBindable* self) {
	return self->isBindable();
}

bool QUntypedBindable_IsReadOnly(const QUntypedBindable* self) {
	return self->isReadOnly();
}

QUntypedPropertyBinding* QUntypedBindable_MakeBinding(const QUntypedBindable* self) {
	return new QUntypedPropertyBinding(self->makeBinding());
}

QUntypedPropertyBinding* QUntypedBindable_TakeBinding(QUntypedBindable* self) {
	return new QUntypedPropertyBinding(self->takeBinding());
}

void QUntypedBindable_Observe(const QUntypedBindable* self, QPropertyObserver* observer) {
	self->observe(observer);
}

QUntypedPropertyBinding* QUntypedBindable_Binding(const QUntypedBindable* self) {
	return new QUntypedPropertyBinding(self->binding());
}

bool QUntypedBindable_SetBinding(QUntypedBindable* self, QUntypedPropertyBinding* binding) {
	return self->setBinding(*binding);
}

bool QUntypedBindable_HasBinding(const QUntypedBindable* self) {
	return self->hasBinding();
}

QMetaType* QUntypedBindable_MetaType(const QUntypedBindable* self) {
	return new QMetaType(self->metaType());
}

QUntypedPropertyBinding* QUntypedBindable_MakeBinding1(const QUntypedBindable* self, QPropertyBindingSourceLocation* location) {
	return new QUntypedPropertyBinding(self->makeBinding(*location));
}

void QUntypedBindable_Delete(QUntypedBindable* self) {
	delete self;
}

