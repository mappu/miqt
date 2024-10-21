#include <QBindingStorage>
#include <QPropertyProxyBindingData>
#include <QUntypedPropertyBinding>
#include <QUntypedPropertyData>
#define WORKAROUND_INNER_CLASS_DEFINITION_QUntypedPropertyData__InheritsQUntypedPropertyData
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__BindingFunctionVTable
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__MSVCWorkAround
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QPropertyBindingData
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QPropertyBindingFunction
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__RefCounted
#include <qpropertyprivate.h>
#include "gen_qpropertyprivate.h"
#include "_cgo_export.h"

void QtPrivate__RefCounted_AddRef(QtPrivate__RefCounted* self) {
	self->addRef();
}

bool QtPrivate__RefCounted_Deref(QtPrivate__RefCounted* self) {
	return self->deref();
}

void QtPrivate__RefCounted_Delete(QtPrivate__RefCounted* self) {
	delete self;
}

void QUntypedPropertyData_Delete(QUntypedPropertyData* self) {
	delete self;
}

void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self) {
	delete self;
}

void QtPrivate__MSVCWorkAround_Delete(QtPrivate__MSVCWorkAround* self) {
	delete self;
}

void QtPrivate__BindingFunctionVTable_Delete(QtPrivate__BindingFunctionVTable* self) {
	delete self;
}

void QtPrivate__QPropertyBindingFunction_Delete(QtPrivate__QPropertyBindingFunction* self) {
	delete self;
}

QtPrivate__QPropertyBindingData* QtPrivate__QPropertyBindingData_new() {
	return new QtPrivate::QPropertyBindingData();
}

bool QtPrivate__QPropertyBindingData_HasBinding(const QtPrivate__QPropertyBindingData* self) {
	return self->hasBinding();
}

bool QtPrivate__QPropertyBindingData_IsNotificationDelayed(const QtPrivate__QPropertyBindingData* self) {
	return self->isNotificationDelayed();
}

QUntypedPropertyBinding* QtPrivate__QPropertyBindingData_SetBinding(QtPrivate__QPropertyBindingData* self, QUntypedPropertyBinding* newBinding, QUntypedPropertyData* propertyDataPtr) {
	return new QUntypedPropertyBinding(self->setBinding(*newBinding, propertyDataPtr));
}

void QtPrivate__QPropertyBindingData_EvaluateIfDirty(const QtPrivate__QPropertyBindingData* self, QUntypedPropertyData* param1) {
	self->evaluateIfDirty(param1);
}

void QtPrivate__QPropertyBindingData_RemoveBinding(QtPrivate__QPropertyBindingData* self) {
	self->removeBinding();
}

void QtPrivate__QPropertyBindingData_RegisterWithCurrentlyEvaluatingBinding2(const QtPrivate__QPropertyBindingData* self) {
	self->registerWithCurrentlyEvaluatingBinding();
}

void QtPrivate__QPropertyBindingData_NotifyObservers(const QtPrivate__QPropertyBindingData* self, QUntypedPropertyData* propertyDataPtr) {
	self->notifyObservers(propertyDataPtr);
}

void QtPrivate__QPropertyBindingData_NotifyObservers2(const QtPrivate__QPropertyBindingData* self, QUntypedPropertyData* propertyDataPtr, QBindingStorage* storage) {
	self->notifyObservers(propertyDataPtr, storage);
}

void QtPrivate__QPropertyBindingData_Delete(QtPrivate__QPropertyBindingData* self) {
	delete self;
}

void QUntypedPropertyData__InheritsQUntypedPropertyData_Delete(QUntypedPropertyData__InheritsQUntypedPropertyData* self) {
	delete self;
}

