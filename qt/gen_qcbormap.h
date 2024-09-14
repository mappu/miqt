#ifndef GEN_QCBORMAP_H
#define GEN_QCBORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QCborValue* QCborMap_ToCborValue(const QCborMap* self);
size_t QCborMap_Size(const QCborMap* self);
bool QCborMap_IsEmpty(const QCborMap* self);
void QCborMap_Clear(QCborMap* self);
struct miqt_array* QCborMap_Keys(const QCborMap* self);
QCborValue* QCborMap_Value(const QCborMap* self, long long key);
QCborValue* QCborMap_Value2(const QCborMap* self, struct miqt_string* key);
QCborValue* QCborMap_Value3(const QCborMap* self, QCborValue* key);
QCborValue* QCborMap_OperatorSubscript(const QCborMap* self, long long key);
QCborValue* QCborMap_OperatorSubscript2(const QCborMap* self, struct miqt_string* key);
QCborValue* QCborMap_OperatorSubscript3(const QCborMap* self, QCborValue* key);
QCborValueRef* QCborMap_OperatorSubscript4(QCborMap* self, long long key);
QCborValueRef* QCborMap_OperatorSubscript6(QCborMap* self, struct miqt_string* key);
QCborValueRef* QCborMap_OperatorSubscript7(QCborMap* self, QCborValue* key);
QCborValue* QCborMap_Take(QCborMap* self, long long key);
QCborValue* QCborMap_Take2(QCborMap* self, struct miqt_string* key);
QCborValue* QCborMap_Take3(QCborMap* self, QCborValue* key);
void QCborMap_Remove(QCborMap* self, long long key);
void QCborMap_Remove2(QCborMap* self, struct miqt_string* key);
void QCborMap_Remove3(QCborMap* self, QCborValue* key);
bool QCborMap_Contains(const QCborMap* self, long long key);
bool QCborMap_Contains2(const QCborMap* self, struct miqt_string* key);
bool QCborMap_Contains3(const QCborMap* self, QCborValue* key);
int QCborMap_Compare(const QCborMap* self, QCborMap* other);
bool QCborMap_OperatorEqual(const QCborMap* self, QCborMap* other);
bool QCborMap_OperatorNotEqual(const QCborMap* self, QCborMap* other);
bool QCborMap_OperatorLesser(const QCborMap* self, QCborMap* other);
QCborMap__Iterator* QCborMap_Begin(QCborMap* self);
QCborMap__ConstIterator* QCborMap_ConstBegin(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_Begin2(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_Cbegin(const QCborMap* self);
QCborMap__Iterator* QCborMap_End(QCborMap* self);
QCborMap__ConstIterator* QCborMap_ConstEnd(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_End2(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_Cend(const QCborMap* self);
QCborMap__Iterator* QCborMap_Erase(QCborMap* self, QCborMap__Iterator* it);
QCborMap__Iterator* QCborMap_EraseWithIt(QCborMap* self, QCborMap__ConstIterator* it);
QCborValue* QCborMap_Extract(QCborMap* self, QCborMap__Iterator* it);
QCborValue* QCborMap_ExtractWithIt(QCborMap* self, QCborMap__ConstIterator* it);
bool QCborMap_Empty(const QCborMap* self);
QCborMap__Iterator* QCborMap_Find(QCborMap* self, long long key);
QCborMap__Iterator* QCborMap_Find2(QCborMap* self, struct miqt_string* key);
QCborMap__Iterator* QCborMap_Find3(QCborMap* self, QCborValue* key);
QCborMap__ConstIterator* QCborMap_ConstFind(const QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_ConstFind2(const QCborMap* self, struct miqt_string* key);
QCborMap__ConstIterator* QCborMap_ConstFind3(const QCborMap* self, QCborValue* key);
QCborMap__ConstIterator* QCborMap_Find4(const QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_Find6(const QCborMap* self, struct miqt_string* key);
QCborMap__ConstIterator* QCborMap_Find7(const QCborMap* self, QCborValue* key);
QCborMap__Iterator* QCborMap_Insert(QCborMap* self, long long key, QCborValue* value_);
QCborMap__Iterator* QCborMap_Insert3(QCborMap* self, struct miqt_string* key, QCborValue* value_);
QCborMap__Iterator* QCborMap_Insert4(QCborMap* self, QCborValue* key, QCborValue* value_);
QCborMap* QCborMap_FromJsonObject(QJsonObject* o);
QJsonObject* QCborMap_ToJsonObject(const QCborMap* self);
void QCborMap_Delete(QCborMap* self);

QCborMap__Iterator* QCborMap__Iterator_new();
QCborMap__Iterator* QCborMap__Iterator_new2(QCborMap__Iterator* param1);
QCborValueRef* QCborMap__Iterator_OperatorMinusGreater(const QCborMap__Iterator* self);
QCborValue* QCborMap__Iterator_Key(const QCborMap__Iterator* self);
QCborValueRef* QCborMap__Iterator_Value(const QCborMap__Iterator* self);
bool QCborMap__Iterator_OperatorEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o);
bool QCborMap__Iterator_OperatorNotEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o);
bool QCborMap__Iterator_OperatorLesser(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorLesserOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorGreater(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorGreaterOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_OperatorEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o);
bool QCborMap__Iterator_OperatorNotEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o);
bool QCborMap__Iterator_OperatorLesserWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_OperatorLesserOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_OperatorGreaterWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_OperatorGreaterOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlusPlus(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinusMinus(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_OperatorPlus(const QCborMap__Iterator* self, size_t j);
QCborMap__Iterator* QCborMap__Iterator_OperatorMinus(const QCborMap__Iterator* self, size_t j);
size_t QCborMap__Iterator_OperatorMinusWithQCborMapIterator(const QCborMap__Iterator* self, QCborMap__Iterator* j);
void QCborMap__Iterator_Delete(QCborMap__Iterator* self);

QCborMap__ConstIterator* QCborMap__ConstIterator_new();
QCborMap__ConstIterator* QCborMap__ConstIterator_new2(QCborMap__ConstIterator* param1);
QCborValueRef* QCborMap__ConstIterator_OperatorMinusGreater(const QCborMap__ConstIterator* self);
QCborValue* QCborMap__ConstIterator_Key(const QCborMap__ConstIterator* self);
QCborValueRef* QCborMap__ConstIterator_Value(const QCborMap__ConstIterator* self);
bool QCborMap__ConstIterator_OperatorEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o);
bool QCborMap__ConstIterator_OperatorNotEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o);
bool QCborMap__ConstIterator_OperatorLesser(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorLesserOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorGreater(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorGreaterOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_OperatorEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o);
bool QCborMap__ConstIterator_OperatorNotEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o);
bool QCborMap__ConstIterator_OperatorLesserWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_OperatorLesserOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_OperatorGreaterWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_OperatorGreaterOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlusPlus(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinusMinus(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorPlus(const QCborMap__ConstIterator* self, size_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_OperatorMinus(const QCborMap__ConstIterator* self, size_t j);
size_t QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* j);
void QCborMap__ConstIterator_Delete(QCborMap__ConstIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
