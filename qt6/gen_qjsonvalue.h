#pragma once
#ifndef MIQT_QT6_GEN_QJSONVALUE_H
#define MIQT_QT6_GEN_QJSONVALUE_H

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
class QJsonValueConstRef;
class QJsonValueRef;
class QVariant;
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
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
long long QJsonValue_toInteger(const QJsonValue* self);
double QJsonValue_toDouble(const QJsonValue* self);
struct miqt_string QJsonValue_toString(const QJsonValue* self);
struct miqt_string QJsonValue_toStringWithDefaultValue(const QJsonValue* self, struct miqt_string defaultValue);
QJsonArray* QJsonValue_toArray(const QJsonValue* self);
QJsonArray* QJsonValue_toArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue);
QJsonObject* QJsonValue_toObject(const QJsonValue* self);
QJsonObject* QJsonValue_toObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue);
QJsonValue* QJsonValue_operatorSubscript(const QJsonValue* self, struct miqt_string key);
QJsonValue* QJsonValue_operatorSubscriptWithQsizetype(const QJsonValue* self, ptrdiff_t i);
bool QJsonValue_operatorEqual(const QJsonValue* self, QJsonValue* other);
bool QJsonValue_operatorNotEqual(const QJsonValue* self, QJsonValue* other);
bool QJsonValue_toBoolWithDefaultValue(const QJsonValue* self, bool defaultValue);
int QJsonValue_toIntWithDefaultValue(const QJsonValue* self, int defaultValue);
long long QJsonValue_toIntegerWithDefaultValue(const QJsonValue* self, long long defaultValue);
double QJsonValue_toDoubleWithDefaultValue(const QJsonValue* self, double defaultValue);

void QJsonValue_delete(QJsonValue* self);

QJsonValueConstRef* QJsonValueConstRef_new(QJsonValueConstRef* param1);
QJsonValue* QJsonValueConstRef_ToQJsonValue(const QJsonValueConstRef* self);
QVariant* QJsonValueConstRef_toVariant(const QJsonValueConstRef* self);
int QJsonValueConstRef_type(const QJsonValueConstRef* self);
bool QJsonValueConstRef_isNull(const QJsonValueConstRef* self);
bool QJsonValueConstRef_isBool(const QJsonValueConstRef* self);
bool QJsonValueConstRef_isDouble(const QJsonValueConstRef* self);
bool QJsonValueConstRef_isString(const QJsonValueConstRef* self);
bool QJsonValueConstRef_isArray(const QJsonValueConstRef* self);
bool QJsonValueConstRef_isObject(const QJsonValueConstRef* self);
bool QJsonValueConstRef_isUndefined(const QJsonValueConstRef* self);
bool QJsonValueConstRef_toBool(const QJsonValueConstRef* self);
int QJsonValueConstRef_toInt(const QJsonValueConstRef* self);
long long QJsonValueConstRef_toInteger(const QJsonValueConstRef* self);
double QJsonValueConstRef_toDouble(const QJsonValueConstRef* self);
struct miqt_string QJsonValueConstRef_toString(const QJsonValueConstRef* self);
QJsonArray* QJsonValueConstRef_toArray(const QJsonValueConstRef* self);
QJsonObject* QJsonValueConstRef_toObject(const QJsonValueConstRef* self);
QJsonValue* QJsonValueConstRef_operatorSubscriptWithQsizetype(const QJsonValueConstRef* self, ptrdiff_t i);
bool QJsonValueConstRef_operatorEqual(const QJsonValueConstRef* self, QJsonValue* other);
bool QJsonValueConstRef_operatorNotEqual(const QJsonValueConstRef* self, QJsonValue* other);
bool QJsonValueConstRef_toBoolWithDefaultValue(const QJsonValueConstRef* self, bool defaultValue);
int QJsonValueConstRef_toIntWithDefaultValue(const QJsonValueConstRef* self, int defaultValue);
long long QJsonValueConstRef_toIntegerWithDefaultValue(const QJsonValueConstRef* self, long long defaultValue);
double QJsonValueConstRef_toDoubleWithDefaultValue(const QJsonValueConstRef* self, double defaultValue);
struct miqt_string QJsonValueConstRef_toStringWithDefaultValue(const QJsonValueConstRef* self, struct miqt_string defaultValue);

void QJsonValueConstRef_delete(QJsonValueConstRef* self);

QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1);
QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, ptrdiff_t idx);
QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, ptrdiff_t idx);
void QJsonValueRef_virtbase(QJsonValueRef* src, QJsonValueConstRef** outptr_QJsonValueConstRef);
void QJsonValueRef_operatorAssign(QJsonValueRef* self, QJsonValue* val);
void QJsonValueRef_operatorAssignWithVal(QJsonValueRef* self, QJsonValueRef* val);
QJsonValue* QJsonValueRef_ToQJsonValue(const QJsonValueRef* self);
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
long long QJsonValueRef_toInteger(const QJsonValueRef* self);
double QJsonValueRef_toDouble(const QJsonValueRef* self);
struct miqt_string QJsonValueRef_toString(const QJsonValueRef* self);
QJsonArray* QJsonValueRef_toArray(const QJsonValueRef* self);
QJsonObject* QJsonValueRef_toObject(const QJsonValueRef* self);
QJsonValue* QJsonValueRef_operatorSubscriptWithQsizetype(const QJsonValueRef* self, ptrdiff_t i);
bool QJsonValueRef_operatorEqual(const QJsonValueRef* self, QJsonValue* other);
bool QJsonValueRef_operatorNotEqual(const QJsonValueRef* self, QJsonValue* other);
bool QJsonValueRef_toBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue);
int QJsonValueRef_toIntWithDefaultValue(const QJsonValueRef* self, int defaultValue);
long long QJsonValueRef_toIntegerWithDefaultValue(const QJsonValueRef* self, long long defaultValue);
double QJsonValueRef_toDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue);
struct miqt_string QJsonValueRef_toStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string defaultValue);

void QJsonValueRef_delete(QJsonValueRef* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
