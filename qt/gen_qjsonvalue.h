#ifndef GEN_QJSONVALUE_H
#define GEN_QJSONVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QJsonValue* QJsonValue_new6(const char* s, size_t s_Strlen);
QJsonValue* QJsonValue_new7(const char* s);
QJsonValue* QJsonValue_new8(QJsonArray* a);
QJsonValue* QJsonValue_new9(QJsonObject* o);
QJsonValue* QJsonValue_new10(QJsonValue* other);
QJsonValue* QJsonValue_new11(uintptr_t param1);
void QJsonValue_OperatorAssign(QJsonValue* self, QJsonValue* other);
void QJsonValue_Swap(QJsonValue* self, QJsonValue* other);
QJsonValue* QJsonValue_FromVariant(QVariant* variant);
QVariant* QJsonValue_ToVariant(QJsonValue* self);
uintptr_t QJsonValue_Type(QJsonValue* self);
bool QJsonValue_IsNull(QJsonValue* self);
bool QJsonValue_IsBool(QJsonValue* self);
bool QJsonValue_IsDouble(QJsonValue* self);
bool QJsonValue_IsString(QJsonValue* self);
bool QJsonValue_IsArray(QJsonValue* self);
bool QJsonValue_IsObject(QJsonValue* self);
bool QJsonValue_IsUndefined(QJsonValue* self);
bool QJsonValue_ToBool(QJsonValue* self);
int QJsonValue_ToInt(QJsonValue* self);
double QJsonValue_ToDouble(QJsonValue* self);
void QJsonValue_ToString(QJsonValue* self, char** _out, int* _out_Strlen);
void QJsonValue_ToStringWithDefaultValue(QJsonValue* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen);
QJsonArray* QJsonValue_ToArray(QJsonValue* self);
QJsonArray* QJsonValue_ToArrayWithDefaultValue(QJsonValue* self, QJsonArray* defaultValue);
QJsonObject* QJsonValue_ToObject(QJsonValue* self);
QJsonObject* QJsonValue_ToObjectWithDefaultValue(QJsonValue* self, QJsonObject* defaultValue);
QJsonValue* QJsonValue_OperatorSubscript(QJsonValue* self, const char* key, size_t key_Strlen);
QJsonValue* QJsonValue_OperatorSubscriptWithInt(QJsonValue* self, int i);
bool QJsonValue_OperatorEqual(QJsonValue* self, QJsonValue* other);
bool QJsonValue_OperatorNotEqual(QJsonValue* self, QJsonValue* other);
bool QJsonValue_ToBool1(QJsonValue* self, bool defaultValue);
int QJsonValue_ToInt1(QJsonValue* self, int defaultValue);
double QJsonValue_ToDouble1(QJsonValue* self, double defaultValue);
void QJsonValue_Delete(QJsonValue* self);

QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1);
QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, int idx);
QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, int idx);
void QJsonValueRef_OperatorAssign(QJsonValueRef* self, QJsonValue* val);
void QJsonValueRef_OperatorAssignWithVal(QJsonValueRef* self, QJsonValueRef* val);
QVariant* QJsonValueRef_ToVariant(QJsonValueRef* self);
uintptr_t QJsonValueRef_Type(QJsonValueRef* self);
bool QJsonValueRef_IsNull(QJsonValueRef* self);
bool QJsonValueRef_IsBool(QJsonValueRef* self);
bool QJsonValueRef_IsDouble(QJsonValueRef* self);
bool QJsonValueRef_IsString(QJsonValueRef* self);
bool QJsonValueRef_IsArray(QJsonValueRef* self);
bool QJsonValueRef_IsObject(QJsonValueRef* self);
bool QJsonValueRef_IsUndefined(QJsonValueRef* self);
bool QJsonValueRef_ToBool(QJsonValueRef* self);
int QJsonValueRef_ToInt(QJsonValueRef* self);
double QJsonValueRef_ToDouble(QJsonValueRef* self);
void QJsonValueRef_ToString(QJsonValueRef* self, char** _out, int* _out_Strlen);
QJsonArray* QJsonValueRef_ToArray(QJsonValueRef* self);
QJsonObject* QJsonValueRef_ToObject(QJsonValueRef* self);
bool QJsonValueRef_ToBoolWithDefaultValue(QJsonValueRef* self, bool defaultValue);
int QJsonValueRef_ToIntWithDefaultValue(QJsonValueRef* self, int defaultValue);
double QJsonValueRef_ToDoubleWithDefaultValue(QJsonValueRef* self, double defaultValue);
void QJsonValueRef_ToStringWithDefaultValue(QJsonValueRef* self, const char* defaultValue, size_t defaultValue_Strlen, char** _out, int* _out_Strlen);
bool QJsonValueRef_OperatorEqual(QJsonValueRef* self, QJsonValue* other);
bool QJsonValueRef_OperatorNotEqual(QJsonValueRef* self, QJsonValue* other);
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
