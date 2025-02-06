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
class QUntypedPropertyData;
#else
typedef struct QMetaType QMetaType;
typedef struct QPropertyBindingError QPropertyBindingError;
typedef struct QPropertyBindingSourceLocation QPropertyBindingSourceLocation;
typedef struct QPropertyNotifier QPropertyNotifier;
typedef struct QPropertyObserver QPropertyObserver;
typedef struct QPropertyObserverBase QPropertyObserverBase;
typedef struct QUntypedBindable QUntypedBindable;
typedef struct QUntypedPropertyBinding QUntypedPropertyBinding;
typedef struct QUntypedPropertyData QUntypedPropertyData;
#endif

QPropertyBindingSourceLocation* QPropertyBindingSourceLocation_new();
QPropertyBindingSourceLocation* QPropertyBindingSourceLocation_new2(QPropertyBindingSourceLocation* param1);
void QPropertyBindingSourceLocation_delete(QPropertyBindingSourceLocation* self);

QPropertyBindingError* QPropertyBindingError_new();
QPropertyBindingError* QPropertyBindingError_new2(int type);
QPropertyBindingError* QPropertyBindingError_new3(QPropertyBindingError* other);
QPropertyBindingError* QPropertyBindingError_new4(int type, struct miqt_string description);
void QPropertyBindingError_operatorAssign(QPropertyBindingError* self, QPropertyBindingError* other);
bool QPropertyBindingError_hasError(const QPropertyBindingError* self);
int QPropertyBindingError_type(const QPropertyBindingError* self);
struct miqt_string QPropertyBindingError_description(const QPropertyBindingError* self);
void QPropertyBindingError_delete(QPropertyBindingError* self);

QUntypedPropertyBinding* QUntypedPropertyBinding_new();
QUntypedPropertyBinding* QUntypedPropertyBinding_new2(QUntypedPropertyBinding* other);
void QUntypedPropertyBinding_operatorAssign(QUntypedPropertyBinding* self, QUntypedPropertyBinding* other);
bool QUntypedPropertyBinding_isNull(const QUntypedPropertyBinding* self);
QPropertyBindingError* QUntypedPropertyBinding_error(const QUntypedPropertyBinding* self);
QMetaType* QUntypedPropertyBinding_valueMetaType(const QUntypedPropertyBinding* self);
void QUntypedPropertyBinding_delete(QUntypedPropertyBinding* self);

QPropertyObserverBase* QPropertyObserverBase_new();
QPropertyObserverBase* QPropertyObserverBase_new2(QPropertyObserverBase* param1);
void QPropertyObserverBase_delete(QPropertyObserverBase* self);

QPropertyObserver* QPropertyObserver_new();
void QPropertyObserver_virtbase(QPropertyObserver* src, QPropertyObserverBase** outptr_QPropertyObserverBase);
void QPropertyObserver_delete(QPropertyObserver* self);

QPropertyNotifier* QPropertyNotifier_new();
void QPropertyNotifier_virtbase(QPropertyNotifier* src, QPropertyObserver** outptr_QPropertyObserver);
void QPropertyNotifier_delete(QPropertyNotifier* self);

QUntypedBindable* QUntypedBindable_new();
QUntypedBindable* QUntypedBindable_new2(QUntypedBindable* param1);
bool QUntypedBindable_isValid(const QUntypedBindable* self);
bool QUntypedBindable_isBindable(const QUntypedBindable* self);
bool QUntypedBindable_isReadOnly(const QUntypedBindable* self);
QUntypedPropertyBinding* QUntypedBindable_makeBinding(const QUntypedBindable* self);
QUntypedPropertyBinding* QUntypedBindable_takeBinding(QUntypedBindable* self);
void QUntypedBindable_observe(const QUntypedBindable* self, QPropertyObserver* observer);
QUntypedPropertyBinding* QUntypedBindable_binding(const QUntypedBindable* self);
bool QUntypedBindable_setBinding(QUntypedBindable* self, QUntypedPropertyBinding* binding);
bool QUntypedBindable_hasBinding(const QUntypedBindable* self);
QMetaType* QUntypedBindable_metaType(const QUntypedBindable* self);
QUntypedPropertyBinding* QUntypedBindable_makeBinding1(const QUntypedBindable* self, QPropertyBindingSourceLocation* location);
void QUntypedBindable_delete(QUntypedBindable* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
