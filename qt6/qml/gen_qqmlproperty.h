#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLPROPERTY_H
#define MIQT_QT6_QML_GEN_QQMLPROPERTY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaProperty;
class QMetaType;
class QObject;
class QQmlContext;
class QQmlEngine;
class QQmlProperty;
class QVariant;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaType QMetaType;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlProperty QQmlProperty;
typedef struct QVariant QVariant;
#endif

QQmlProperty* QQmlProperty_new();
QQmlProperty* QQmlProperty_new2(QObject* param1);
QQmlProperty* QQmlProperty_new3(QObject* param1, QQmlContext* param2);
QQmlProperty* QQmlProperty_new4(QObject* param1, QQmlEngine* param2);
QQmlProperty* QQmlProperty_new5(QObject* param1, struct miqt_string param2);
QQmlProperty* QQmlProperty_new6(QObject* param1, struct miqt_string param2, QQmlContext* param3);
QQmlProperty* QQmlProperty_new7(QObject* param1, struct miqt_string param2, QQmlEngine* param3);
QQmlProperty* QQmlProperty_new8(QQmlProperty* param1);
void QQmlProperty_operatorAssign(QQmlProperty* self, QQmlProperty* param1);
void QQmlProperty_swap(QQmlProperty* self, QQmlProperty* other);
bool QQmlProperty_operatorEqual(const QQmlProperty* self, QQmlProperty* param1);
int QQmlProperty_type(const QQmlProperty* self);
bool QQmlProperty_isValid(const QQmlProperty* self);
bool QQmlProperty_isProperty(const QQmlProperty* self);
bool QQmlProperty_isSignalProperty(const QQmlProperty* self);
int QQmlProperty_propertyType(const QQmlProperty* self);
QMetaType* QQmlProperty_propertyMetaType(const QQmlProperty* self);
int QQmlProperty_propertyTypeCategory(const QQmlProperty* self);
const char* QQmlProperty_propertyTypeName(const QQmlProperty* self);
struct miqt_string QQmlProperty_name(const QQmlProperty* self);
QVariant* QQmlProperty_read(const QQmlProperty* self);
QVariant* QQmlProperty_read2(QObject* param1, struct miqt_string param2);
QVariant* QQmlProperty_read3(QObject* param1, struct miqt_string param2, QQmlContext* param3);
QVariant* QQmlProperty_read4(QObject* param1, struct miqt_string param2, QQmlEngine* param3);
bool QQmlProperty_write(const QQmlProperty* self, QVariant* param1);
bool QQmlProperty_write2(QObject* param1, struct miqt_string param2, QVariant* param3);
bool QQmlProperty_write3(QObject* param1, struct miqt_string param2, QVariant* param3, QQmlContext* param4);
bool QQmlProperty_write4(QObject* param1, struct miqt_string param2, QVariant* param3, QQmlEngine* param4);
bool QQmlProperty_reset(const QQmlProperty* self);
bool QQmlProperty_hasNotifySignal(const QQmlProperty* self);
bool QQmlProperty_needsNotifySignal(const QQmlProperty* self);
bool QQmlProperty_connectNotifySignal(const QQmlProperty* self, QObject* dest, const char* slot);
bool QQmlProperty_connectNotifySignal2(const QQmlProperty* self, QObject* dest, int method);
bool QQmlProperty_isWritable(const QQmlProperty* self);
bool QQmlProperty_isBindable(const QQmlProperty* self);
bool QQmlProperty_isDesignable(const QQmlProperty* self);
bool QQmlProperty_isResettable(const QQmlProperty* self);
QObject* QQmlProperty_object(const QQmlProperty* self);
int QQmlProperty_index(const QQmlProperty* self);
QMetaProperty* QQmlProperty_property(const QQmlProperty* self);
QMetaMethod* QQmlProperty_method(const QQmlProperty* self);
void QQmlProperty_delete(QQmlProperty* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
