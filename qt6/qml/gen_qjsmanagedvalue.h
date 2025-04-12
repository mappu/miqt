#pragma once
#ifndef MIQT_QT6_QML_GEN_QJSMANAGEDVALUE_H
#define MIQT_QT6_QML_GEN_QJSMANAGEDVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QJSEngine;
class QJSManagedValue;
class QJSPrimitiveValue;
class QJSValue;
class QMetaObject;
class QObject;
class QRegularExpression;
class QUrl;
class QVariant;
#else
typedef struct QDateTime QDateTime;
typedef struct QJSEngine QJSEngine;
typedef struct QJSManagedValue QJSManagedValue;
typedef struct QJSPrimitiveValue QJSPrimitiveValue;
typedef struct QJSValue QJSValue;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QJSManagedValue* QJSManagedValue_new();
QJSManagedValue* QJSManagedValue_new2(QJSValue* value, QJSEngine* engine);
QJSManagedValue* QJSManagedValue_new3(QJSPrimitiveValue* value, QJSEngine* engine);
QJSManagedValue* QJSManagedValue_new4(QVariant* variant, QJSEngine* engine);
QJSManagedValue* QJSManagedValue_new5(struct miqt_string string, QJSEngine* engine);
bool QJSManagedValue_equals(const QJSManagedValue* self, QJSManagedValue* other);
bool QJSManagedValue_strictlyEquals(const QJSManagedValue* self, QJSManagedValue* other);
QJSEngine* QJSManagedValue_engine(const QJSManagedValue* self);
QJSManagedValue* QJSManagedValue_prototype(const QJSManagedValue* self);
void QJSManagedValue_setPrototype(QJSManagedValue* self, QJSManagedValue* prototype);
int QJSManagedValue_type(const QJSManagedValue* self);
bool QJSManagedValue_isUndefined(const QJSManagedValue* self);
bool QJSManagedValue_isBoolean(const QJSManagedValue* self);
bool QJSManagedValue_isNumber(const QJSManagedValue* self);
bool QJSManagedValue_isString(const QJSManagedValue* self);
bool QJSManagedValue_isObject(const QJSManagedValue* self);
bool QJSManagedValue_isSymbol(const QJSManagedValue* self);
bool QJSManagedValue_isFunction(const QJSManagedValue* self);
bool QJSManagedValue_isInteger(const QJSManagedValue* self);
bool QJSManagedValue_isNull(const QJSManagedValue* self);
bool QJSManagedValue_isRegularExpression(const QJSManagedValue* self);
bool QJSManagedValue_isArray(const QJSManagedValue* self);
bool QJSManagedValue_isUrl(const QJSManagedValue* self);
bool QJSManagedValue_isVariant(const QJSManagedValue* self);
bool QJSManagedValue_isQObject(const QJSManagedValue* self);
bool QJSManagedValue_isQMetaObject(const QJSManagedValue* self);
bool QJSManagedValue_isDate(const QJSManagedValue* self);
bool QJSManagedValue_isError(const QJSManagedValue* self);
bool QJSManagedValue_isJsMetaType(const QJSManagedValue* self);
struct miqt_string QJSManagedValue_toString(const QJSManagedValue* self);
double QJSManagedValue_toNumber(const QJSManagedValue* self);
bool QJSManagedValue_toBoolean(const QJSManagedValue* self);
QJSPrimitiveValue* QJSManagedValue_toPrimitive(const QJSManagedValue* self);
QJSValue* QJSManagedValue_toJSValue(const QJSManagedValue* self);
QVariant* QJSManagedValue_toVariant(const QJSManagedValue* self);
int QJSManagedValue_toInteger(const QJSManagedValue* self);
QRegularExpression* QJSManagedValue_toRegularExpression(const QJSManagedValue* self);
QUrl* QJSManagedValue_toUrl(const QJSManagedValue* self);
QObject* QJSManagedValue_toQObject(const QJSManagedValue* self);
QMetaObject* QJSManagedValue_toQMetaObject(const QJSManagedValue* self);
QDateTime* QJSManagedValue_toDateTime(const QJSManagedValue* self);
bool QJSManagedValue_hasProperty(const QJSManagedValue* self, struct miqt_string name);
bool QJSManagedValue_hasOwnProperty(const QJSManagedValue* self, struct miqt_string name);
QJSValue* QJSManagedValue_property(const QJSManagedValue* self, struct miqt_string name);
void QJSManagedValue_setProperty(QJSManagedValue* self, struct miqt_string name, QJSValue* value);
bool QJSManagedValue_deleteProperty(QJSManagedValue* self, struct miqt_string name);
bool QJSManagedValue_hasPropertyWithArrayIndex(const QJSManagedValue* self, unsigned int arrayIndex);
bool QJSManagedValue_hasOwnPropertyWithArrayIndex(const QJSManagedValue* self, unsigned int arrayIndex);
QJSValue* QJSManagedValue_propertyWithArrayIndex(const QJSManagedValue* self, unsigned int arrayIndex);
void QJSManagedValue_setProperty2(QJSManagedValue* self, unsigned int arrayIndex, QJSValue* value);
bool QJSManagedValue_deletePropertyWithArrayIndex(QJSManagedValue* self, unsigned int arrayIndex);
QJSValue* QJSManagedValue_call(const QJSManagedValue* self);
QJSValue* QJSManagedValue_callWithInstance(const QJSManagedValue* self, QJSValue* instance);
QJSValue* QJSManagedValue_callAsConstructor(const QJSManagedValue* self);
QJSManagedValue* QJSManagedValue_jsMetaType(const QJSManagedValue* self);
struct miqt_array /* of struct miqt_string */  QJSManagedValue_jsMetaMembers(const QJSManagedValue* self);
QJSManagedValue* QJSManagedValue_jsMetaInstantiate(const QJSManagedValue* self);
QJSValue* QJSManagedValue_callWithArguments(const QJSManagedValue* self, struct miqt_array /* of QJSValue* */  arguments);
QJSValue* QJSManagedValue_callWithInstance2(const QJSManagedValue* self, QJSValue* instance, struct miqt_array /* of QJSValue* */  arguments);
QJSValue* QJSManagedValue_callAsConstructorWithArguments(const QJSManagedValue* self, struct miqt_array /* of QJSValue* */  arguments);
QJSManagedValue* QJSManagedValue_jsMetaInstantiateWithValues(const QJSManagedValue* self, struct miqt_array /* of QJSValue* */  values);
void QJSManagedValue_delete(QJSManagedValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
