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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__const_iterator)
typedef QJsonObject::const_iterator QJsonObject__const_iterator;
#else
class QJsonObject__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonObject__iterator)
typedef QJsonObject::iterator QJsonObject__iterator;
#else
class QJsonObject__iterator;
#endif
class QJsonValue;
class QJsonValuePtr;
class QJsonValueRef;
class QJsonValueRefPtr;
#else
typedef struct QJsonObject QJsonObject;
typedef struct QJsonObject__const_iterator QJsonObject__const_iterator;
typedef struct QJsonObject__iterator QJsonObject__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValuePtr QJsonValuePtr;
typedef struct QJsonValueRef QJsonValueRef;
typedef struct QJsonValueRefPtr QJsonValueRefPtr;
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
QJsonObject__iterator* QJsonObject_Begin(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_Begin2(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_ConstBegin(QJsonObject* self);
QJsonObject__iterator* QJsonObject_End(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_End2(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_ConstEnd(QJsonObject* self);
QJsonObject__iterator* QJsonObject_Erase(QJsonObject* self, QJsonObject__iterator* it);
QJsonObject__iterator* QJsonObject_Find(QJsonObject* self, const char* key, size_t key_Strlen);
QJsonObject__const_iterator* QJsonObject_FindWithKey(QJsonObject* self, const char* key, size_t key_Strlen);
QJsonObject__const_iterator* QJsonObject_ConstFind(QJsonObject* self, const char* key, size_t key_Strlen);
QJsonObject__iterator* QJsonObject_Insert(QJsonObject* self, const char* key, size_t key_Strlen, QJsonValue* value);
bool QJsonObject_Empty(QJsonObject* self);
void QJsonObject_Delete(QJsonObject* self);

QJsonObject__iterator* QJsonObject__iterator_new();
QJsonObject__iterator* QJsonObject__iterator_new2(QJsonObject* obj, int index);
QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject__iterator* param1);
void QJsonObject__iterator_Key(QJsonObject__iterator* self, char** _out, int* _out_Strlen);
QJsonValueRef* QJsonObject__iterator_Value(QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorMultiply(QJsonObject__iterator* self);
QJsonValueRefPtr* QJsonObject__iterator_OperatorMinusGreater(QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorSubscript(QJsonObject__iterator* self, int j);
bool QJsonObject__iterator_OperatorEqual(QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorNotEqual(QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorLesser(QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorLesserOrEqual(QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorGreater(QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorGreaterOrEqual(QJsonObject__iterator* self, QJsonObject__iterator* other);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlus(QJsonObject__iterator* self, int param1);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self, int param1);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlus(QJsonObject__iterator* self, int j);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinus(QJsonObject__iterator* self, int j);
int QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator(QJsonObject__iterator* self, QJsonObject__iterator* j);
bool QJsonObject__iterator_OperatorEqualWithOther(QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorNotEqualWithOther(QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorLesserWithOther(QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorLesserOrEqualWithOther(QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorGreaterWithOther(QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorGreaterOrEqualWithOther(QJsonObject__iterator* self, QJsonObject__const_iterator* other);
void QJsonObject__iterator_Delete(QJsonObject__iterator* self);

QJsonObject__const_iterator* QJsonObject__const_iterator_new();
QJsonObject__const_iterator* QJsonObject__const_iterator_new2(QJsonObject* obj, int index);
QJsonObject__const_iterator* QJsonObject__const_iterator_new3(QJsonObject__iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_new4(QJsonObject__const_iterator* param1);
void QJsonObject__const_iterator_Key(QJsonObject__const_iterator* self, char** _out, int* _out_Strlen);
QJsonValue* QJsonObject__const_iterator_Value(QJsonObject__const_iterator* self);
QJsonValue* QJsonObject__const_iterator_OperatorMultiply(QJsonObject__const_iterator* self);
QJsonValuePtr* QJsonObject__const_iterator_OperatorMinusGreater(QJsonObject__const_iterator* self);
QJsonValue* QJsonObject__const_iterator_OperatorSubscript(QJsonObject__const_iterator* self, int j);
bool QJsonObject__const_iterator_OperatorEqual(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorNotEqual(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorLesser(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorLesserOrEqual(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorGreater(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorGreaterOrEqual(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlus(QJsonObject__const_iterator* self, int param1);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self, int param1);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlus(QJsonObject__const_iterator* self, int j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinus(QJsonObject__const_iterator* self, int j);
int QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator(QJsonObject__const_iterator* self, QJsonObject__const_iterator* j);
bool QJsonObject__const_iterator_OperatorEqualWithOther(QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorNotEqualWithOther(QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorLesserWithOther(QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorLesserOrEqualWithOther(QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorGreaterWithOther(QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther(QJsonObject__const_iterator* self, QJsonObject__iterator* other);
void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
