#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTVALUE_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTVALUE_H

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
class QMetaObject;
class QObject;
class QRegExp;
class QScriptClass;
class QScriptEngine;
class QScriptString;
class QScriptValue;
class QVariant;
#else
typedef struct QDateTime QDateTime;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QScriptClass QScriptClass;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptString QScriptString;
typedef struct QScriptValue QScriptValue;
typedef struct QVariant QVariant;
#endif

QScriptValue* QScriptValue_new();
QScriptValue* QScriptValue_new2(QScriptValue* other);
QScriptValue* QScriptValue_new3(QScriptEngine* engine, int val);
QScriptValue* QScriptValue_new4(QScriptEngine* engine, bool val);
QScriptValue* QScriptValue_new5(QScriptEngine* engine, int val);
QScriptValue* QScriptValue_new6(QScriptEngine* engine, unsigned int val);
QScriptValue* QScriptValue_new7(QScriptEngine* engine, double val);
QScriptValue* QScriptValue_new8(QScriptEngine* engine, struct miqt_string val);
QScriptValue* QScriptValue_new9(QScriptEngine* engine, const char* val);
QScriptValue* QScriptValue_new10(int value);
QScriptValue* QScriptValue_new11(bool value);
QScriptValue* QScriptValue_new12(int value);
QScriptValue* QScriptValue_new13(unsigned int value);
QScriptValue* QScriptValue_new14(double value);
QScriptValue* QScriptValue_new15(struct miqt_string value);
QScriptValue* QScriptValue_new16(const char* value);
void QScriptValue_operatorAssign(QScriptValue* self, QScriptValue* other);
QScriptEngine* QScriptValue_engine(const QScriptValue* self);
bool QScriptValue_isValid(const QScriptValue* self);
bool QScriptValue_isBool(const QScriptValue* self);
bool QScriptValue_isBoolean(const QScriptValue* self);
bool QScriptValue_isNumber(const QScriptValue* self);
bool QScriptValue_isFunction(const QScriptValue* self);
bool QScriptValue_isNull(const QScriptValue* self);
bool QScriptValue_isString(const QScriptValue* self);
bool QScriptValue_isUndefined(const QScriptValue* self);
bool QScriptValue_isVariant(const QScriptValue* self);
bool QScriptValue_isQObject(const QScriptValue* self);
bool QScriptValue_isQMetaObject(const QScriptValue* self);
bool QScriptValue_isObject(const QScriptValue* self);
bool QScriptValue_isDate(const QScriptValue* self);
bool QScriptValue_isRegExp(const QScriptValue* self);
bool QScriptValue_isArray(const QScriptValue* self);
bool QScriptValue_isError(const QScriptValue* self);
struct miqt_string QScriptValue_toString(const QScriptValue* self);
double QScriptValue_toNumber(const QScriptValue* self);
bool QScriptValue_toBool(const QScriptValue* self);
bool QScriptValue_toBoolean(const QScriptValue* self);
double QScriptValue_toInteger(const QScriptValue* self);
int QScriptValue_toInt32(const QScriptValue* self);
unsigned int QScriptValue_toUInt32(const QScriptValue* self);
uint16_t QScriptValue_toUInt16(const QScriptValue* self);
QVariant* QScriptValue_toVariant(const QScriptValue* self);
QObject* QScriptValue_toQObject(const QScriptValue* self);
QMetaObject* QScriptValue_toQMetaObject(const QScriptValue* self);
QScriptValue* QScriptValue_toObject(const QScriptValue* self);
QDateTime* QScriptValue_toDateTime(const QScriptValue* self);
QRegExp* QScriptValue_toRegExp(const QScriptValue* self);
bool QScriptValue_instanceOf(const QScriptValue* self, QScriptValue* other);
bool QScriptValue_lessThan(const QScriptValue* self, QScriptValue* other);
bool QScriptValue_equals(const QScriptValue* self, QScriptValue* other);
bool QScriptValue_strictlyEquals(const QScriptValue* self, QScriptValue* other);
QScriptValue* QScriptValue_prototype(const QScriptValue* self);
void QScriptValue_setPrototype(QScriptValue* self, QScriptValue* prototype);
QScriptValue* QScriptValue_scope(const QScriptValue* self);
void QScriptValue_setScope(QScriptValue* self, QScriptValue* scope);
QScriptValue* QScriptValue_property(const QScriptValue* self, struct miqt_string name);
void QScriptValue_setProperty(QScriptValue* self, struct miqt_string name, QScriptValue* value);
QScriptValue* QScriptValue_propertyWithArrayIndex(const QScriptValue* self, unsigned int arrayIndex);
void QScriptValue_setProperty2(QScriptValue* self, unsigned int arrayIndex, QScriptValue* value);
QScriptValue* QScriptValue_propertyWithName(const QScriptValue* self, QScriptString* name);
void QScriptValue_setProperty3(QScriptValue* self, QScriptString* name, QScriptValue* value);
int QScriptValue_propertyFlags(const QScriptValue* self, struct miqt_string name);
int QScriptValue_propertyFlagsWithName(const QScriptValue* self, QScriptString* name);
QScriptValue* QScriptValue_call(QScriptValue* self);
QScriptValue* QScriptValue_call2(QScriptValue* self, QScriptValue* thisObject, QScriptValue* arguments);
QScriptValue* QScriptValue_construct(QScriptValue* self);
QScriptValue* QScriptValue_constructWithArguments(QScriptValue* self, QScriptValue* arguments);
QScriptValue* QScriptValue_data(const QScriptValue* self);
void QScriptValue_setData(QScriptValue* self, QScriptValue* data);
QScriptClass* QScriptValue_scriptClass(const QScriptValue* self);
void QScriptValue_setScriptClass(QScriptValue* self, QScriptClass* scriptClass);
long long QScriptValue_objectId(const QScriptValue* self);
QScriptValue* QScriptValue_property2(const QScriptValue* self, struct miqt_string name, int* mode);
void QScriptValue_setProperty32(QScriptValue* self, struct miqt_string name, QScriptValue* value, int* flags);
QScriptValue* QScriptValue_property22(const QScriptValue* self, unsigned int arrayIndex, int* mode);
void QScriptValue_setProperty33(QScriptValue* self, unsigned int arrayIndex, QScriptValue* value, int* flags);
QScriptValue* QScriptValue_property23(const QScriptValue* self, QScriptString* name, int* mode);
void QScriptValue_setProperty34(QScriptValue* self, QScriptString* name, QScriptValue* value, int* flags);
int QScriptValue_propertyFlags2(const QScriptValue* self, struct miqt_string name, int* mode);
int QScriptValue_propertyFlags22(const QScriptValue* self, QScriptString* name, int* mode);
QScriptValue* QScriptValue_call1(QScriptValue* self, QScriptValue* thisObject);
QScriptValue* QScriptValue_call22(QScriptValue* self, QScriptValue* thisObject, struct miqt_array /* of QScriptValue* */  args);
QScriptValue* QScriptValue_construct1(QScriptValue* self, struct miqt_array /* of QScriptValue* */  args);
void QScriptValue_delete(QScriptValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
