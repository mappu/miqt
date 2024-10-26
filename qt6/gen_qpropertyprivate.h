#ifndef GEN_QPROPERTYPRIVATE_H
#define GEN_QPROPERTYPRIVATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBindingStorage;
class QPropertyProxyBindingData;
class QUntypedPropertyBinding;
class QUntypedPropertyData;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__BindingFunctionVTable)
typedef QtPrivate::BindingFunctionVTable QtPrivate__BindingFunctionVTable;
#else
class QtPrivate__BindingFunctionVTable;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__MSVCWorkAround)
typedef QtPrivate::MSVCWorkAround QtPrivate__MSVCWorkAround;
#else
class QtPrivate__MSVCWorkAround;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QPropertyBindingData)
typedef QtPrivate::QPropertyBindingData QtPrivate__QPropertyBindingData;
#else
class QtPrivate__QPropertyBindingData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QPropertyBindingFunction)
typedef QtPrivate::QPropertyBindingFunction QtPrivate__QPropertyBindingFunction;
#else
class QtPrivate__QPropertyBindingFunction;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__RefCounted)
typedef QtPrivate::RefCounted QtPrivate__RefCounted;
#else
class QtPrivate__RefCounted;
#endif
#else
typedef struct QBindingStorage QBindingStorage;
typedef struct QPropertyProxyBindingData QPropertyProxyBindingData;
typedef struct QUntypedPropertyBinding QUntypedPropertyBinding;
typedef struct QUntypedPropertyData QUntypedPropertyData;
typedef struct QtPrivate__BindingFunctionVTable QtPrivate__BindingFunctionVTable;
typedef struct QtPrivate__MSVCWorkAround QtPrivate__MSVCWorkAround;
typedef struct QtPrivate__QPropertyBindingData QtPrivate__QPropertyBindingData;
typedef struct QtPrivate__QPropertyBindingFunction QtPrivate__QPropertyBindingFunction;
typedef struct QtPrivate__RefCounted QtPrivate__RefCounted;
#endif

void QtPrivate__RefCounted_AddRef(QtPrivate__RefCounted* self);
bool QtPrivate__RefCounted_Deref(QtPrivate__RefCounted* self);
void QtPrivate__RefCounted_Delete(QtPrivate__RefCounted* self);

void QUntypedPropertyData_Delete(QUntypedPropertyData* self);

void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self);

void QtPrivate__MSVCWorkAround_Delete(QtPrivate__MSVCWorkAround* self);

void QtPrivate__BindingFunctionVTable_Delete(QtPrivate__BindingFunctionVTable* self);

void QtPrivate__QPropertyBindingFunction_Delete(QtPrivate__QPropertyBindingFunction* self);

QtPrivate__QPropertyBindingData* QtPrivate__QPropertyBindingData_new();
bool QtPrivate__QPropertyBindingData_HasBinding(const QtPrivate__QPropertyBindingData* self);
bool QtPrivate__QPropertyBindingData_IsNotificationDelayed(const QtPrivate__QPropertyBindingData* self);
QUntypedPropertyBinding* QtPrivate__QPropertyBindingData_SetBinding(QtPrivate__QPropertyBindingData* self, QUntypedPropertyBinding* newBinding, QUntypedPropertyData* propertyDataPtr);
void QtPrivate__QPropertyBindingData_EvaluateIfDirty(const QtPrivate__QPropertyBindingData* self, QUntypedPropertyData* param1);
void QtPrivate__QPropertyBindingData_RemoveBinding(QtPrivate__QPropertyBindingData* self);
void QtPrivate__QPropertyBindingData_RegisterWithCurrentlyEvaluatingBinding2(const QtPrivate__QPropertyBindingData* self);
void QtPrivate__QPropertyBindingData_NotifyObservers(const QtPrivate__QPropertyBindingData* self, QUntypedPropertyData* propertyDataPtr);
void QtPrivate__QPropertyBindingData_NotifyObservers2(const QtPrivate__QPropertyBindingData* self, QUntypedPropertyData* propertyDataPtr, QBindingStorage* storage);
void QtPrivate__QPropertyBindingData_Delete(QtPrivate__QPropertyBindingData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
