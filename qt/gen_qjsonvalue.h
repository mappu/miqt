#pragma once
#ifndef MIQT_QT_GEN_QJSONVALUE_H
#define MIQT_QT_GEN_QJSONVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonArray;
class QJsonObject;
class QJsonValue;
class QJsonValuePtr;
class QJsonValueRef;
class QJsonValueRefPtr;
class QVariant;
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValuePtr QJsonValuePtr;
typedef struct QJsonValueRef QJsonValueRef;
typedef struct QJsonValueRefPtr QJsonValueRefPtr;
typedef struct QVariant QVariant;
#endif

QJsonValue* QJsonValue_new();
QJsonValue* QJsonValue_new2(bool b);
QJsonValue* QJsonValue_new3(double n);
QJsonValue* QJsonValue_new4(int n);
QJsonValue* QJsonValue_new5(long long v);
QJsonValue* QJsonValue_new6(struct miqt_string s);
QJsonValue* QJsonValue_new7(const char* s);
QJsonValue* QJsonValue_new8(QJsonArray* a);
QJsonValue* QJsonValue_new9(QJsonObject* o);
QJsonValue* QJsonValue_new10(QJsonValue* other);
QJsonValue* QJsonValue_new11(int param1);
void QJsonValue_operatorAssign(QJsonValue* self, QJsonValue* other);
void QJsonValue_swap(QJsonValue* self, QJsonValue* other);
QJsonValue* QJsonValue_fromVariant(QVariant* variant);
QVariant* QJsonValue_toVariant(const QJsonValue* self);
int QJsonValue_type(const QJsonValue* self);
bool QJsonValue_isNull(const QJsonValue* self);
bool QJsonValue_isBool(const QJsonValue* self);
bool QJsonValue_isDouble(const QJsonValue* self);
bool QJsonValue_isString(const QJsonValue* self);
bool QJsonValue_isArray(const QJsonValue* self);
bool QJsonValue_isObject(const QJsonValue* self);
bool QJsonValue_isUndefined(const QJsonValue* self);
bool QJsonValue_toBool(const QJsonValue* self);
int QJsonValue_toInt(const QJsonValue* self);
double QJsonValue_toDouble(const QJsonValue* self);
struct miqt_string QJsonValue_toString(const QJsonValue* self);
struct miqt_string QJsonValue_toStringWithDefaultValue(const QJsonValue* self, struct miqt_string defaultValue);
QJsonArray* QJsonValue_toArray(const QJsonValue* self);
QJsonArray* QJsonValue_toArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue);
QJsonObject* QJsonValue_toObject(const QJsonValue* self);
QJsonObject* QJsonValue_toObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue);
QJsonValue* QJsonValue_operatorSubscript(const QJsonValue* self, struct miqt_string key);
QJsonValue* QJsonValue_operatorSubscriptWithInt(const QJsonValue* self, int i);
bool QJsonValue_operatorEqual(const QJsonValue* self, QJsonValue* other);
bool QJsonValue_operatorNotEqual(const QJsonValue* self, QJsonValue* other);
bool QJsonValue_toBool1(const QJsonValue* self, bool defaultValue);
int QJsonValue_toInt1(const QJsonValue* self, int defaultValue);
double QJsonValue_toDouble1(const QJsonValue* self, double defaultValue);
void QJsonValue_delete(QJsonValue* self);

QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1);
QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, int idx);
QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, int idx);
QJsonValue* QJsonValueRef_ToQJsonValue(const QJsonValueRef* self);
void QJsonValueRef_operatorAssign(QJsonValueRef* self, QJsonValue* val);
void QJsonValueRef_operatorAssignWithVal(QJsonValueRef* self, QJsonValueRef* val);
QVariant* QJsonValueRef_toVariant(const QJsonValueRef* self);
int QJsonValueRef_type(const QJsonValueRef* self);
bool QJsonValueRef_isNull(const QJsonValueRef* self);
bool QJsonValueRef_isBool(const QJsonValueRef* self);
bool QJsonValueRef_isDouble(const QJsonValueRef* self);
bool QJsonValueRef_isString(const QJsonValueRef* self);
bool QJsonValueRef_isArray(const QJsonValueRef* self);
bool QJsonValueRef_isObject(const QJsonValueRef* self);
bool QJsonValueRef_isUndefined(const QJsonValueRef* self);
bool QJsonValueRef_toBool(const QJsonValueRef* self);
int QJsonValueRef_toInt(const QJsonValueRef* self);
double QJsonValueRef_toDouble(const QJsonValueRef* self);
struct miqt_string QJsonValueRef_toString(const QJsonValueRef* self);
QJsonArray* QJsonValueRef_toArray(const QJsonValueRef* self);
QJsonObject* QJsonValueRef_toObject(const QJsonValueRef* self);
bool QJsonValueRef_toBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue);
int QJsonValueRef_toIntWithDefaultValue(const QJsonValueRef* self, int defaultValue);
double QJsonValueRef_toDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue);
struct miqt_string QJsonValueRef_toStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string defaultValue);
bool QJsonValueRef_operatorEqual(const QJsonValueRef* self, QJsonValue* other);
bool QJsonValueRef_operatorNotEqual(const QJsonValueRef* self, QJsonValue* other);
void QJsonValueRef_delete(QJsonValueRef* self);

QJsonValuePtr* QJsonValuePtr_new(QJsonValue* val);
QJsonValuePtr* QJsonValuePtr_new2(QJsonValuePtr* param1);
QJsonValue* QJsonValuePtr_operatorMultiply(QJsonValuePtr* self);
QJsonValue* QJsonValuePtr_operatorMinusGreater(QJsonValuePtr* self);
void QJsonValuePtr_operatorAssign(QJsonValuePtr* self, QJsonValuePtr* param1);
void QJsonValuePtr_delete(QJsonValuePtr* self);

QJsonValueRefPtr* QJsonValueRefPtr_new(QJsonArray* array, int idx);
QJsonValueRefPtr* QJsonValueRefPtr_new2(QJsonObject* object, int idx);
QJsonValueRefPtr* QJsonValueRefPtr_new3(QJsonValueRefPtr* param1);
QJsonValueRef* QJsonValueRefPtr_operatorMultiply(QJsonValueRefPtr* self);
QJsonValueRef* QJsonValueRefPtr_operatorMinusGreater(QJsonValueRefPtr* self);
void QJsonValueRefPtr_operatorAssign(QJsonValueRefPtr* self, QJsonValueRefPtr* param1);
void QJsonValueRefPtr_delete(QJsonValueRefPtr* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
