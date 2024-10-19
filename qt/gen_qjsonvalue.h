#ifndef GEN_QJSONVALUE_H
#define GEN_QJSONVALUE_H

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
void QJsonValue_OperatorAssign(QJsonValue* self, QJsonValue* other);
void QJsonValue_Swap(QJsonValue* self, QJsonValue* other);
QJsonValue* QJsonValue_FromVariant(QVariant* variant);
QVariant* QJsonValue_ToVariant(const QJsonValue* self);
int QJsonValue_Type(const QJsonValue* self);
bool QJsonValue_IsNull(const QJsonValue* self);
bool QJsonValue_IsBool(const QJsonValue* self);
bool QJsonValue_IsDouble(const QJsonValue* self);
bool QJsonValue_IsString(const QJsonValue* self);
bool QJsonValue_IsArray(const QJsonValue* self);
bool QJsonValue_IsObject(const QJsonValue* self);
bool QJsonValue_IsUndefined(const QJsonValue* self);
bool QJsonValue_ToBool(const QJsonValue* self);
int QJsonValue_ToInt(const QJsonValue* self);
double QJsonValue_ToDouble(const QJsonValue* self);
struct miqt_string QJsonValue_ToString(const QJsonValue* self);
struct miqt_string QJsonValue_ToStringWithDefaultValue(const QJsonValue* self, struct miqt_string defaultValue);
QJsonArray* QJsonValue_ToArray(const QJsonValue* self);
QJsonArray* QJsonValue_ToArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue);
QJsonObject* QJsonValue_ToObject(const QJsonValue* self);
QJsonObject* QJsonValue_ToObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue);
QJsonValue* QJsonValue_OperatorSubscript(const QJsonValue* self, struct miqt_string key);
QJsonValue* QJsonValue_OperatorSubscriptWithInt(const QJsonValue* self, int i);
bool QJsonValue_OperatorEqual(const QJsonValue* self, QJsonValue* other);
bool QJsonValue_OperatorNotEqual(const QJsonValue* self, QJsonValue* other);
bool QJsonValue_ToBool1(const QJsonValue* self, bool defaultValue);
int QJsonValue_ToInt1(const QJsonValue* self, int defaultValue);
double QJsonValue_ToDouble1(const QJsonValue* self, double defaultValue);
void QJsonValue_Delete(QJsonValue* self);

QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1);
QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, int idx);
QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, int idx);
void QJsonValueRef_OperatorAssign(QJsonValueRef* self, QJsonValue* val);
void QJsonValueRef_OperatorAssignWithVal(QJsonValueRef* self, QJsonValueRef* val);
QVariant* QJsonValueRef_ToVariant(const QJsonValueRef* self);
int QJsonValueRef_Type(const QJsonValueRef* self);
bool QJsonValueRef_IsNull(const QJsonValueRef* self);
bool QJsonValueRef_IsBool(const QJsonValueRef* self);
bool QJsonValueRef_IsDouble(const QJsonValueRef* self);
bool QJsonValueRef_IsString(const QJsonValueRef* self);
bool QJsonValueRef_IsArray(const QJsonValueRef* self);
bool QJsonValueRef_IsObject(const QJsonValueRef* self);
bool QJsonValueRef_IsUndefined(const QJsonValueRef* self);
bool QJsonValueRef_ToBool(const QJsonValueRef* self);
int QJsonValueRef_ToInt(const QJsonValueRef* self);
double QJsonValueRef_ToDouble(const QJsonValueRef* self);
struct miqt_string QJsonValueRef_ToString(const QJsonValueRef* self);
QJsonArray* QJsonValueRef_ToArray(const QJsonValueRef* self);
QJsonObject* QJsonValueRef_ToObject(const QJsonValueRef* self);
bool QJsonValueRef_ToBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue);
int QJsonValueRef_ToIntWithDefaultValue(const QJsonValueRef* self, int defaultValue);
double QJsonValueRef_ToDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue);
struct miqt_string QJsonValueRef_ToStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string defaultValue);
bool QJsonValueRef_OperatorEqual(const QJsonValueRef* self, QJsonValue* other);
bool QJsonValueRef_OperatorNotEqual(const QJsonValueRef* self, QJsonValue* other);
void QJsonValueRef_Delete(QJsonValueRef* self);

QJsonValuePtr* QJsonValuePtr_new(QJsonValue* val);
QJsonValuePtr* QJsonValuePtr_new2(QJsonValuePtr* param1);
QJsonValue* QJsonValuePtr_OperatorMultiply(QJsonValuePtr* self);
QJsonValue* QJsonValuePtr_OperatorMinusGreater(QJsonValuePtr* self);
void QJsonValuePtr_OperatorAssign(QJsonValuePtr* self, QJsonValuePtr* param1);
void QJsonValuePtr_Delete(QJsonValuePtr* self);

QJsonValueRefPtr* QJsonValueRefPtr_new(QJsonArray* array, int idx);
QJsonValueRefPtr* QJsonValueRefPtr_new2(QJsonObject* object, int idx);
QJsonValueRefPtr* QJsonValueRefPtr_new3(QJsonValueRefPtr* param1);
QJsonValueRef* QJsonValueRefPtr_OperatorMultiply(QJsonValueRefPtr* self);
QJsonValueRef* QJsonValueRefPtr_OperatorMinusGreater(QJsonValueRefPtr* self);
void QJsonValueRefPtr_OperatorAssign(QJsonValueRefPtr* self, QJsonValueRefPtr* param1);
void QJsonValueRefPtr_Delete(QJsonValueRefPtr* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
