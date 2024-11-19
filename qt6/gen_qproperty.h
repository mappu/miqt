#pragma once
#ifndef MIQT_QT6_GEN_QPROPERTY_H
#define MIQT_QT6_GEN_QPROPERTY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaType;
class QPropertyBindingError;
class QPropertyBindingSourceLocation;
class QPropertyNotifier;
class QPropertyObserver;
class QPropertyObserverBase;
class QUntypedBindable;
class QUntypedPropertyBinding;
#else
typedef struct QMetaType QMetaType;
typedef struct QPropertyBindingError QPropertyBindingError;
typedef struct QPropertyBindingSourceLocation QPropertyBindingSourceLocation;
typedef struct QPropertyNotifier QPropertyNotifier;
typedef struct QPropertyObserver QPropertyObserver;
typedef struct QPropertyObserverBase QPropertyObserverBase;
typedef struct QUntypedBindable QUntypedBindable;
typedef struct QUntypedPropertyBinding QUntypedPropertyBinding;
#endif

void QPropertyBindingSourceLocation_new(QPropertyBindingSourceLocation** outptr_QPropertyBindingSourceLocation);
void QPropertyBindingSourceLocation_new2(QPropertyBindingSourceLocation* param1, QPropertyBindingSourceLocation** outptr_QPropertyBindingSourceLocation);
void QPropertyBindingSourceLocation_Delete(QPropertyBindingSourceLocation* self, bool isSubclass);

void QPropertyBindingError_new(QPropertyBindingError** outptr_QPropertyBindingError);
void QPropertyBindingError_new2(int typeVal, QPropertyBindingError** outptr_QPropertyBindingError);
void QPropertyBindingError_new3(QPropertyBindingError* other, QPropertyBindingError** outptr_QPropertyBindingError);
void QPropertyBindingError_new4(int typeVal, struct miqt_string description, QPropertyBindingError** outptr_QPropertyBindingError);
void QPropertyBindingError_OperatorAssign(QPropertyBindingError* self, QPropertyBindingError* other);
bool QPropertyBindingError_HasError(const QPropertyBindingError* self);
int QPropertyBindingError_Type(const QPropertyBindingError* self);
struct miqt_string QPropertyBindingError_Description(const QPropertyBindingError* self);
void QPropertyBindingError_Delete(QPropertyBindingError* self, bool isSubclass);

void QUntypedPropertyBinding_new(QUntypedPropertyBinding** outptr_QUntypedPropertyBinding);
void QUntypedPropertyBinding_new2(QUntypedPropertyBinding* other, QUntypedPropertyBinding** outptr_QUntypedPropertyBinding);
void QUntypedPropertyBinding_OperatorAssign(QUntypedPropertyBinding* self, QUntypedPropertyBinding* other);
bool QUntypedPropertyBinding_IsNull(const QUntypedPropertyBinding* self);
QPropertyBindingError* QUntypedPropertyBinding_Error(const QUntypedPropertyBinding* self);
QMetaType* QUntypedPropertyBinding_ValueMetaType(const QUntypedPropertyBinding* self);
void QUntypedPropertyBinding_Delete(QUntypedPropertyBinding* self, bool isSubclass);

void QPropertyObserverBase_new(QPropertyObserverBase** outptr_QPropertyObserverBase);
void QPropertyObserverBase_new2(QPropertyObserverBase* param1, QPropertyObserverBase** outptr_QPropertyObserverBase);
void QPropertyObserverBase_Delete(QPropertyObserverBase* self, bool isSubclass);

void QPropertyObserver_new(QPropertyObserver** outptr_QPropertyObserver, QPropertyObserverBase** outptr_QPropertyObserverBase);
void QPropertyObserver_Delete(QPropertyObserver* self, bool isSubclass);

void QPropertyNotifier_new(QPropertyNotifier** outptr_QPropertyNotifier, QPropertyObserver** outptr_QPropertyObserver, QPropertyObserverBase** outptr_QPropertyObserverBase);
void QPropertyNotifier_Delete(QPropertyNotifier* self, bool isSubclass);

void QUntypedBindable_new(QUntypedBindable** outptr_QUntypedBindable);
void QUntypedBindable_new2(QUntypedBindable* param1, QUntypedBindable** outptr_QUntypedBindable);
bool QUntypedBindable_IsValid(const QUntypedBindable* self);
bool QUntypedBindable_IsBindable(const QUntypedBindable* self);
bool QUntypedBindable_IsReadOnly(const QUntypedBindable* self);
QUntypedPropertyBinding* QUntypedBindable_MakeBinding(const QUntypedBindable* self);
QUntypedPropertyBinding* QUntypedBindable_TakeBinding(QUntypedBindable* self);
void QUntypedBindable_Observe(const QUntypedBindable* self, QPropertyObserver* observer);
QUntypedPropertyBinding* QUntypedBindable_Binding(const QUntypedBindable* self);
bool QUntypedBindable_SetBinding(QUntypedBindable* self, QUntypedPropertyBinding* binding);
bool QUntypedBindable_HasBinding(const QUntypedBindable* self);
QMetaType* QUntypedBindable_MetaType(const QUntypedBindable* self);
QUntypedPropertyBinding* QUntypedBindable_MakeBinding1(const QUntypedBindable* self, QPropertyBindingSourceLocation* location);
void QUntypedBindable_Delete(QUntypedBindable* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
