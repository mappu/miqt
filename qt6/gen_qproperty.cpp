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

void QPropertyBindingSourceLocation_new(QPropertyBindingSourceLocation** outptr_QPropertyBindingSourceLocation) {
	QPropertyBindingSourceLocation* ret = new QPropertyBindingSourceLocation();
	*outptr_QPropertyBindingSourceLocation = ret;
}

void QPropertyBindingSourceLocation_new2(QPropertyBindingSourceLocation* param1, QPropertyBindingSourceLocation** outptr_QPropertyBindingSourceLocation) {
	QPropertyBindingSourceLocation* ret = new QPropertyBindingSourceLocation(*param1);
	*outptr_QPropertyBindingSourceLocation = ret;
}

void QPropertyBindingSourceLocation_Delete(QPropertyBindingSourceLocation* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPropertyBindingSourceLocation*>( self );
	} else {
		delete self;
	}
}

void QPropertyBindingError_new(QPropertyBindingError** outptr_QPropertyBindingError) {
	QPropertyBindingError* ret = new QPropertyBindingError();
	*outptr_QPropertyBindingError = ret;
}

void QPropertyBindingError_new2(int typeVal, QPropertyBindingError** outptr_QPropertyBindingError) {
	QPropertyBindingError* ret = new QPropertyBindingError(static_cast<QPropertyBindingError::Type>(typeVal));
	*outptr_QPropertyBindingError = ret;
}

void QPropertyBindingError_new3(QPropertyBindingError* other, QPropertyBindingError** outptr_QPropertyBindingError) {
	QPropertyBindingError* ret = new QPropertyBindingError(*other);
	*outptr_QPropertyBindingError = ret;
}

void QPropertyBindingError_new4(int typeVal, struct miqt_string description, QPropertyBindingError** outptr_QPropertyBindingError) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	QPropertyBindingError* ret = new QPropertyBindingError(static_cast<QPropertyBindingError::Type>(typeVal), description_QString);
	*outptr_QPropertyBindingError = ret;
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

void QPropertyBindingError_Delete(QPropertyBindingError* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPropertyBindingError*>( self );
	} else {
		delete self;
	}
}

void QUntypedPropertyBinding_new(QUntypedPropertyBinding** outptr_QUntypedPropertyBinding) {
	QUntypedPropertyBinding* ret = new QUntypedPropertyBinding();
	*outptr_QUntypedPropertyBinding = ret;
}

void QUntypedPropertyBinding_new2(QUntypedPropertyBinding* other, QUntypedPropertyBinding** outptr_QUntypedPropertyBinding) {
	QUntypedPropertyBinding* ret = new QUntypedPropertyBinding(*other);
	*outptr_QUntypedPropertyBinding = ret;
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

void QUntypedPropertyBinding_Delete(QUntypedPropertyBinding* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QUntypedPropertyBinding*>( self );
	} else {
		delete self;
	}
}

void QPropertyObserverBase_new(QPropertyObserverBase** outptr_QPropertyObserverBase) {
	QPropertyObserverBase* ret = new QPropertyObserverBase();
	*outptr_QPropertyObserverBase = ret;
}

void QPropertyObserverBase_new2(QPropertyObserverBase* param1, QPropertyObserverBase** outptr_QPropertyObserverBase) {
	QPropertyObserverBase* ret = new QPropertyObserverBase(*param1);
	*outptr_QPropertyObserverBase = ret;
}

void QPropertyObserverBase_Delete(QPropertyObserverBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPropertyObserverBase*>( self );
	} else {
		delete self;
	}
}

void QPropertyObserver_new(QPropertyObserver** outptr_QPropertyObserver, QPropertyObserverBase** outptr_QPropertyObserverBase) {
	QPropertyObserver* ret = new QPropertyObserver();
	*outptr_QPropertyObserver = ret;
	*outptr_QPropertyObserverBase = static_cast<QPropertyObserverBase*>(ret);
}

void QPropertyObserver_Delete(QPropertyObserver* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPropertyObserver*>( self );
	} else {
		delete self;
	}
}

void QPropertyNotifier_new(QPropertyNotifier** outptr_QPropertyNotifier, QPropertyObserver** outptr_QPropertyObserver, QPropertyObserverBase** outptr_QPropertyObserverBase) {
	QPropertyNotifier* ret = new QPropertyNotifier();
	*outptr_QPropertyNotifier = ret;
	*outptr_QPropertyObserver = static_cast<QPropertyObserver*>(ret);
	*outptr_QPropertyObserverBase = static_cast<QPropertyObserverBase*>(ret);
}

void QPropertyNotifier_Delete(QPropertyNotifier* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPropertyNotifier*>( self );
	} else {
		delete self;
	}
}

void QtPrivate__QBindableInterface_Delete(QtPrivate__QBindableInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::QBindableInterface*>( self );
	} else {
		delete self;
	}
}

void QUntypedBindable_new(QUntypedBindable** outptr_QUntypedBindable) {
	QUntypedBindable* ret = new QUntypedBindable();
	*outptr_QUntypedBindable = ret;
}

void QUntypedBindable_new2(QUntypedBindable* param1, QUntypedBindable** outptr_QUntypedBindable) {
	QUntypedBindable* ret = new QUntypedBindable(*param1);
	*outptr_QUntypedBindable = ret;
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

void QUntypedBindable_Delete(QUntypedBindable* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QUntypedBindable*>( self );
	} else {
		delete self;
	}
}

