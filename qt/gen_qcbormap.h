#ifndef GEN_QCBORMAP_H
#define GEN_QCBORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCborMap;
class QCborValue;
class QCborValueRef;
class QJsonObject;
#else
typedef struct QCborMap QCborMap;
typedef struct QCborValue QCborValue;
typedef struct QCborValueRef QCborValueRef;
typedef struct QJsonObject QJsonObject;
#endif

QCborMap* QCborMap_new();
QCborMap* QCborMap_new2(QCborMap* other);
void QCborMap_OperatorAssign(QCborMap* self, QCborMap* other);
void QCborMap_Swap(QCborMap* self, QCborMap* other);
QCborValue* QCborMap_ToCborValue(QCborMap* self);
size_t QCborMap_Size(QCborMap* self);
bool QCborMap_IsEmpty(QCborMap* self);
void QCborMap_Clear(QCborMap* self);
void QCborMap_Keys(QCborMap* self, QCborValue*** _out, size_t* _out_len);
QCborValue* QCborMap_Value(QCborMap* self, int64_t key);
QCborValue* QCborMap_ValueWithKey(QCborMap* self, const char* key, size_t key_Strlen);
QCborValue* QCborMap_Value2(QCborMap* self, QCborValue* key);
QCborValue* QCborMap_OperatorSubscript(QCborMap* self, int64_t key);
QCborValue* QCborMap_OperatorSubscriptWithKey(QCborMap* self, const char* key, size_t key_Strlen);
QCborValue* QCborMap_OperatorSubscript2(QCborMap* self, QCborValue* key);
QCborValueRef* QCborMap_OperatorSubscript3(QCborMap* self, int64_t key);
QCborValueRef* QCborMap_OperatorSubscript4(QCborMap* self, const char* key, size_t key_Strlen);
QCborValueRef* QCborMap_OperatorSubscript5(QCborMap* self, QCborValue* key);
QCborValue* QCborMap_Take(QCborMap* self, int64_t key);
QCborValue* QCborMap_TakeWithKey(QCborMap* self, const char* key, size_t key_Strlen);
QCborValue* QCborMap_Take2(QCborMap* self, QCborValue* key);
void QCborMap_Remove(QCborMap* self, int64_t key);
void QCborMap_RemoveWithKey(QCborMap* self, const char* key, size_t key_Strlen);
void QCborMap_Remove2(QCborMap* self, QCborValue* key);
bool QCborMap_Contains(QCborMap* self, int64_t key);
bool QCborMap_ContainsWithKey(QCborMap* self, const char* key, size_t key_Strlen);
bool QCborMap_Contains2(QCborMap* self, QCborValue* key);
int QCborMap_Compare(QCborMap* self, QCborMap* other);
bool QCborMap_OperatorEqual(QCborMap* self, QCborMap* other);
bool QCborMap_OperatorNotEqual(QCborMap* self, QCborMap* other);
bool QCborMap_OperatorLesser(QCborMap* self, QCborMap* other);
bool QCborMap_Empty(QCborMap* self);
QCborMap* QCborMap_FromJsonObject(QJsonObject* o);
QJsonObject* QCborMap_ToJsonObject(QCborMap* self);
void QCborMap_Delete(QCborMap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
