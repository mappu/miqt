#pragma once
#ifndef MIQT_QT6_QML_GEN_QJSVALUE_H
#define MIQT_QT6_QML_GEN_QJSVALUE_H

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
class QJSPrimitiveValue;
class QJSValue;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QDateTime QDateTime;
typedef struct QJSPrimitiveValue QJSPrimitiveValue;
typedef struct QJSValue QJSValue;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QJSValue* QJSValue_new();
QJSValue* QJSValue_new2(QJSValue* other);
QJSValue* QJSValue_new3(bool value);
QJSValue* QJSValue_new4(int value);
QJSValue* QJSValue_new5(unsigned int value);
QJSValue* QJSValue_new6(double value);
QJSValue* QJSValue_new7(struct miqt_string value);
QJSValue* QJSValue_new8(const char* str);
QJSValue* QJSValue_new9(int value);
void QJSValue_operatorAssign(QJSValue* self, QJSValue* other);
bool QJSValue_isBool(const QJSValue* self);
bool QJSValue_isNumber(const QJSValue* self);
bool QJSValue_isNull(const QJSValue* self);
bool QJSValue_isString(const QJSValue* self);
bool QJSValue_isUndefined(const QJSValue* self);
bool QJSValue_isVariant(const QJSValue* self);
bool QJSValue_isQObject(const QJSValue* self);
bool QJSValue_isQMetaObject(const QJSValue* self);
bool QJSValue_isObject(const QJSValue* self);
bool QJSValue_isDate(const QJSValue* self);
bool QJSValue_isRegExp(const QJSValue* self);
bool QJSValue_isArray(const QJSValue* self);
bool QJSValue_isError(const QJSValue* self);
bool QJSValue_isUrl(const QJSValue* self);
struct miqt_string QJSValue_toString(const QJSValue* self);
double QJSValue_toNumber(const QJSValue* self);
int QJSValue_toInt(const QJSValue* self);
unsigned int QJSValue_toUInt(const QJSValue* self);
bool QJSValue_toBool(const QJSValue* self);
QVariant* QJSValue_toVariant(const QJSValue* self);
QVariant* QJSValue_toVariantWithBehavior(const QJSValue* self, int behavior);
QJSPrimitiveValue* QJSValue_toPrimitive(const QJSValue* self);
QObject* QJSValue_toQObject(const QJSValue* self);
QMetaObject* QJSValue_toQMetaObject(const QJSValue* self);
QDateTime* QJSValue_toDateTime(const QJSValue* self);
bool QJSValue_equals(const QJSValue* self, QJSValue* other);
bool QJSValue_strictlyEquals(const QJSValue* self, QJSValue* other);
QJSValue* QJSValue_prototype(const QJSValue* self);
void QJSValue_setPrototype(QJSValue* self, QJSValue* prototype);
QJSValue* QJSValue_property(const QJSValue* self, struct miqt_string name);
void QJSValue_setProperty(QJSValue* self, struct miqt_string name, QJSValue* value);
bool QJSValue_hasProperty(const QJSValue* self, struct miqt_string name);
bool QJSValue_hasOwnProperty(const QJSValue* self, struct miqt_string name);
QJSValue* QJSValue_propertyWithArrayIndex(const QJSValue* self, unsigned int arrayIndex);
void QJSValue_setProperty2(QJSValue* self, unsigned int arrayIndex, QJSValue* value);
bool QJSValue_deleteProperty(QJSValue* self, struct miqt_string name);
bool QJSValue_isCallable(const QJSValue* self);
QJSValue* QJSValue_call(const QJSValue* self);
QJSValue* QJSValue_callWithInstance(const QJSValue* self, QJSValue* instance);
QJSValue* QJSValue_callAsConstructor(const QJSValue* self);
int QJSValue_errorType(const QJSValue* self);
QJSValue* QJSValue_callWithArgs(const QJSValue* self, struct miqt_array /* of QJSValue* */  args);
QJSValue* QJSValue_callWithInstance2(const QJSValue* self, QJSValue* instance, struct miqt_array /* of QJSValue* */  args);
QJSValue* QJSValue_callAsConstructorWithArgs(const QJSValue* self, struct miqt_array /* of QJSValue* */  args);
void QJSValue_delete(QJSValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
