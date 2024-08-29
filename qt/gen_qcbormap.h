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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__ConstIterator)
typedef QCborMap::ConstIterator QCborMap__ConstIterator;
#else
class QCborMap__ConstIterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborMap__Iterator)
typedef QCborMap::Iterator QCborMap__Iterator;
#else
class QCborMap__Iterator;
#endif
class QCborValue;
class QCborValueRef;
class QJsonObject;
#else
typedef struct QCborMap QCborMap;
typedef struct QCborMap__ConstIterator QCborMap__ConstIterator;
typedef struct QCborMap__Iterator QCborMap__Iterator;
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
QCborValue* QCborMap_Value(QCborMap* self, long long key);
QCborValue* QCborMap_Value2(QCborMap* self, const char* key, size_t key_Strlen);
QCborValue* QCborMap_Value3(QCborMap* self, QCborValue* key);
QCborValue* QCborMap_OperatorSubscript(QCborMap* self, long long key);
QCborValue* QCborMap_OperatorSubscript2(QCborMap* self, const char* key, size_t key_Strlen);
QCborValue* QCborMap_OperatorSubscript3(QCborMap* self, QCborValue* key);
QCborValueRef* QCborMap_OperatorSubscript4(QCborMap* self, long long key);
QCborValueRef* QCborMap_OperatorSubscript6(QCborMap* self, const char* key, size_t key_Strlen);
QCborValueRef* QCborMap_OperatorSubscript7(QCborMap* self, QCborValue* key);
QCborValue* QCborMap_Take(QCborMap* self, long long key);
QCborValue* QCborMap_Take2(QCborMap* self, const char* key, size_t key_Strlen);
QCborValue* QCborMap_Take3(QCborMap* self, QCborValue* key);
void QCborMap_Remove(QCborMap* self, long long key);
void QCborMap_Remove2(QCborMap* self, const char* key, size_t key_Strlen);
void QCborMap_Remove3(QCborMap* self, QCborValue* key);
bool QCborMap_Contains(QCborMap* self, long long key);
bool QCborMap_Contains2(QCborMap* self, const char* key, size_t key_Strlen);
bool QCborMap_Contains3(QCborMap* self, QCborValue* key);
int QCborMap_Compare(QCborMap* self, QCborMap* other);
bool QCborMap_OperatorEqual(QCborMap* self, QCborMap* other);
bool QCborMap_OperatorNotEqual(QCborMap* self, QCborMap* other);
bool QCborMap_OperatorLesser(QCborMap* self, QCborMap* other);
QCborMap__Iterator* QCborMap_Begin(QCborMap* self);
QCborMap__ConstIterator* QCborMap_ConstBegin(QCborMap* self);
QCborMap__ConstIterator* QCborMap_Begin2(QCborMap* self);
QCborMap__ConstIterator* QCborMap_Cbegin(QCborMap* self);
QCborMap__Iterator* QCborMap_End(QCborMap* self);
QCborMap__ConstIterator* QCborMap_ConstEnd(QCborMap* self);
QCborMap__ConstIterator* QCborMap_End2(QCborMap* self);
QCborMap__ConstIterator* QCborMap_Cend(QCborMap* self);
QCborMap__Iterator* QCborMap_Erase(QCborMap* self, QCborMap__Iterator* it);
QCborMap__Iterator* QCborMap_EraseWithIt(QCborMap* self, QCborMap__ConstIterator* it);
QCborValue* QCborMap_Extract(QCborMap* self, QCborMap__Iterator* it);
QCborValue* QCborMap_ExtractWithIt(QCborMap* self, QCborMap__ConstIterator* it);
bool QCborMap_Empty(QCborMap* self);
QCborMap__Iterator* QCborMap_Find(QCborMap* self, long long key);
QCborMap__Iterator* QCborMap_Find2(QCborMap* self, const char* key, size_t key_Strlen);
QCborMap__Iterator* QCborMap_Find3(QCborMap* self, QCborValue* key);
QCborMap__ConstIterator* QCborMap_ConstFind(QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_ConstFind2(QCborMap* self, const char* key, size_t key_Strlen);
QCborMap__ConstIterator* QCborMap_ConstFind3(QCborMap* self, QCborValue* key);
QCborMap__ConstIterator* QCborMap_Find4(QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_Find6(QCborMap* self, const char* key, size_t key_Strlen);
QCborMap__ConstIterator* QCborMap_Find7(QCborMap* self, QCborValue* key);
QCborMap__Iterator* QCborMap_Insert(QCborMap* self, long long key, QCborValue* value_);
QCborMap__Iterator* QCborMap_Insert3(QCborMap* self, const char* key, size_t key_Strlen, QCborValue* value_);
QCborMap__Iterator* QCborMap_Insert4(QCborMap* self, QCborValue* key, QCborValue* value_);
QCborMap* QCborMap_FromJsonObject(QJsonObject* o);
QJsonObject* QCborMap_ToJsonObject(QCborMap* self);
void QCborMap_Delete(QCborMap* self);

QCborMap__Iterator* QCborMap__Iterator_new();
QCborMap__Iterator* QCborMap__Iterator_new2(QCborMap__Iterator* param1);
QCborValueRef* QCborMap__Iterator_OperatorMinusGreater(QCborMap__Iterator* self);
QCborValue* QCborMap__Iterator_Key(QCborMap__Iterator* self);
QCborValueRef* QCborMap__Iterator_Value(QCborMap__Iterator* self);
bool QCborMap__Iterator_OperatorEqual(QCborMap__Iterator* self, QCborMap__Iterator* o);
bool QCborMap__Iterator_OperatorNotEqual(QCborMap__Iterator* self, QCborMap__Iterator* o);
bool QCborMap__Iterator_OperatorLesser(QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorLesserOrEqual(QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorGreater(QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorGreaterOrEqual(QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorEqualWithQCborMapConstIterator(QCborMap__Iterator* self, QCborMap__ConstIterator* o);
bool QCborMap__Iterator_OperatorNotEqualWithQCborMapConstIterator(QCborMap__Iterator* self, QCborMap__ConstIterator* o);
bool QCborMap__Iterator_OperatorLesserWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_OperatorLesserOrEqualWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_OperatorGreaterWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_OperatorGreaterOrEqualWithOther(QCborMap__Iterator* self, QCborMap__ConstIterator* other);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlusPlus(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinusMinus(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlus(QCborMap__Iterator* self, size_t j);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinus(QCborMap__Iterator* self, size_t j);
size_t QCborMap__Iterator_OperatorMinusWithQCborMapIterator(QCborMap__Iterator* self, QCborMap__Iterator* j);
void QCborMap__Iterator_Delete(QCborMap__Iterator* self);

QCborMap__ConstIterator* QCborMap__ConstIterator_new();
QCborMap__ConstIterator* QCborMap__ConstIterator_new2(QCborMap__ConstIterator* param1);
QCborValueRef* QCborMap__ConstIterator_OperatorMinusGreater(QCborMap__ConstIterator* self);
QCborValue* QCborMap__ConstIterator_Key(QCborMap__ConstIterator* self);
QCborValueRef* QCborMap__ConstIterator_Value(QCborMap__ConstIterator* self);
bool QCborMap__ConstIterator_OperatorEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* o);
bool QCborMap__ConstIterator_OperatorNotEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* o);
bool QCborMap__ConstIterator_OperatorLesser(QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorLesserOrEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorGreater(QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorGreaterOrEqual(QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorEqualWithQCborMapConstIterator(QCborMap__ConstIterator* self, QCborMap__ConstIterator* o);
bool QCborMap__ConstIterator_OperatorNotEqualWithQCborMapConstIterator(QCborMap__ConstIterator* self, QCborMap__ConstIterator* o);
bool QCborMap__ConstIterator_OperatorLesserWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_OperatorLesserOrEqualWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_OperatorGreaterWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_OperatorGreaterOrEqualWithOther(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusPlus(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusMinus(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlus(QCborMap__ConstIterator* self, size_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinus(QCborMap__ConstIterator* self, size_t j);
size_t QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator(QCborMap__ConstIterator* self, QCborMap__ConstIterator* j);
void QCborMap__ConstIterator_Delete(QCborMap__ConstIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
