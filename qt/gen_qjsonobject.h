#ifndef GEN_QJSONOBJECT_H
#define GEN_QJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonObject;
class QJsonValue;
class QJsonValueRef;
#else
typedef struct QJsonObject QJsonObject;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueRef QJsonValueRef;
#endif

QJsonObject* QJsonObject_new();
QJsonObject* QJsonObject_new2(QJsonObject* other);
void QJsonObject_OperatorAssign(QJsonObject* self, QJsonObject* other);
void QJsonObject_Swap(QJsonObject* self, QJsonObject* other);
void QJsonObject_Keys(QJsonObject* self, char*** _out, int** _out_Lengths, size_t* _out_len);
int QJsonObject_Size(QJsonObject* self);
int QJsonObject_Count(QJsonObject* self);
int QJsonObject_Length(QJsonObject* self);
bool QJsonObject_IsEmpty(QJsonObject* self);
QJsonValue* QJsonObject_Value(QJsonObject* self, const char* key, size_t key_Strlen);
QJsonValue* QJsonObject_OperatorSubscript(QJsonObject* self, const char* key, size_t key_Strlen);
QJsonValueRef* QJsonObject_OperatorSubscriptWithKey(QJsonObject* self, const char* key, size_t key_Strlen);
void QJsonObject_Remove(QJsonObject* self, const char* key, size_t key_Strlen);
QJsonValue* QJsonObject_Take(QJsonObject* self, const char* key, size_t key_Strlen);
bool QJsonObject_Contains(QJsonObject* self, const char* key, size_t key_Strlen);
bool QJsonObject_OperatorEqual(QJsonObject* self, QJsonObject* other);
bool QJsonObject_OperatorNotEqual(QJsonObject* self, QJsonObject* other);
bool QJsonObject_Empty(QJsonObject* self);
void QJsonObject_Delete(QJsonObject* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
