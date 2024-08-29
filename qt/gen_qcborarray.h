#ifndef GEN_QCBORARRAY_H
#define GEN_QCBORARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCborArray;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__ConstIterator)
typedef QCborArray::ConstIterator QCborArray__ConstIterator;
#else
class QCborArray__ConstIterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCborArray__Iterator)
typedef QCborArray::Iterator QCborArray__Iterator;
#else
class QCborArray__Iterator;
#endif
class QCborValue;
class QCborValueRef;
class QJsonArray;
#else
typedef struct QCborArray QCborArray;
typedef struct QCborArray__ConstIterator QCborArray__ConstIterator;
typedef struct QCborArray__Iterator QCborArray__Iterator;
typedef struct QCborValue QCborValue;
typedef struct QCborValueRef QCborValueRef;
typedef struct QJsonArray QJsonArray;
#endif

QCborArray* QCborArray_new();
QCborArray* QCborArray_new2(QCborArray* other);
void QCborArray_OperatorAssign(QCborArray* self, QCborArray* other);
void QCborArray_Swap(QCborArray* self, QCborArray* other);
QCborValue* QCborArray_ToCborValue(QCborArray* self);
size_t QCborArray_Size(QCborArray* self);
bool QCborArray_IsEmpty(QCborArray* self);
void QCborArray_Clear(QCborArray* self);
QCborValue* QCborArray_At(QCborArray* self, size_t i);
QCborValue* QCborArray_First(QCborArray* self);
QCborValue* QCborArray_Last(QCborArray* self);
QCborValue* QCborArray_OperatorSubscript(QCborArray* self, size_t i);
QCborValueRef* QCborArray_First2(QCborArray* self);
QCborValueRef* QCborArray_Last2(QCborArray* self);
QCborValueRef* QCborArray_OperatorSubscriptWithQsizetype(QCborArray* self, size_t i);
void QCborArray_Insert(QCborArray* self, size_t i, QCborValue* value);
void QCborArray_Prepend(QCborArray* self, QCborValue* value);
void QCborArray_Append(QCborArray* self, QCborValue* value);
QCborValue* QCborArray_Extract(QCborArray* self, QCborArray__ConstIterator* it);
QCborValue* QCborArray_ExtractWithIt(QCborArray* self, QCborArray__Iterator* it);
void QCborArray_RemoveAt(QCborArray* self, size_t i);
QCborValue* QCborArray_TakeAt(QCborArray* self, size_t i);
void QCborArray_RemoveFirst(QCborArray* self);
void QCborArray_RemoveLast(QCborArray* self);
QCborValue* QCborArray_TakeFirst(QCborArray* self);
QCborValue* QCborArray_TakeLast(QCborArray* self);
bool QCborArray_Contains(QCborArray* self, QCborValue* value);
int QCborArray_Compare(QCborArray* self, QCborArray* other);
bool QCborArray_OperatorEqual(QCborArray* self, QCborArray* other);
bool QCborArray_OperatorNotEqual(QCborArray* self, QCborArray* other);
bool QCborArray_OperatorLesser(QCborArray* self, QCborArray* other);
QCborArray__Iterator* QCborArray_Begin(QCborArray* self);
QCborArray__ConstIterator* QCborArray_ConstBegin(QCborArray* self);
QCborArray__ConstIterator* QCborArray_Begin2(QCborArray* self);
QCborArray__ConstIterator* QCborArray_Cbegin(QCborArray* self);
QCborArray__Iterator* QCborArray_End(QCborArray* self);
QCborArray__ConstIterator* QCborArray_ConstEnd(QCborArray* self);
QCborArray__ConstIterator* QCborArray_End2(QCborArray* self);
QCborArray__ConstIterator* QCborArray_Cend(QCborArray* self);
QCborArray__Iterator* QCborArray_Insert2(QCborArray* self, QCborArray__Iterator* before, QCborValue* value);
QCborArray__Iterator* QCborArray_Insert3(QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value);
QCborArray__Iterator* QCborArray_Erase(QCborArray* self, QCborArray__Iterator* it);
QCborArray__Iterator* QCborArray_EraseWithIt(QCborArray* self, QCborArray__ConstIterator* it);
void QCborArray_PushBack(QCborArray* self, QCborValue* t);
void QCborArray_PushFront(QCborArray* self, QCborValue* t);
void QCborArray_PopFront(QCborArray* self);
void QCborArray_PopBack(QCborArray* self);
bool QCborArray_Empty(QCborArray* self);
QCborArray* QCborArray_OperatorPlus(QCborArray* self, QCborValue* v);
QCborArray* QCborArray_OperatorPlusAssign(QCborArray* self, QCborValue* v);
QCborArray* QCborArray_OperatorShiftLeft(QCborArray* self, QCborValue* v);
QCborArray* QCborArray_FromStringList(char** list, uint64_t* list_Lengths, size_t list_len);
QCborArray* QCborArray_FromJsonArray(QJsonArray* array);
QJsonArray* QCborArray_ToJsonArray(QCborArray* self);
void QCborArray_Delete(QCborArray* self);

QCborArray__Iterator* QCborArray__Iterator_new();
QCborArray__Iterator* QCborArray__Iterator_new2(QCborArray__Iterator* param1);
QCborValueRef* QCborArray__Iterator_OperatorMultiply(QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_OperatorMinusGreater(QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_OperatorSubscript(QCborArray__Iterator* self, size_t j);
bool QCborArray__Iterator_OperatorEqual(QCborArray__Iterator* self, QCborArray__Iterator* o);
bool QCborArray__Iterator_OperatorNotEqual(QCborArray__Iterator* self, QCborArray__Iterator* o);
bool QCborArray__Iterator_OperatorLesser(QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorLesserOrEqual(QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorGreater(QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorGreaterOrEqual(QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator(QCborArray__Iterator* self, QCborArray__ConstIterator* o);
bool QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator(QCborArray__Iterator* self, QCborArray__ConstIterator* o);
bool QCborArray__Iterator_OperatorLesserWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_OperatorLesserOrEqualWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_OperatorGreaterWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_OperatorGreaterOrEqualWithOther(QCborArray__Iterator* self, QCborArray__ConstIterator* other);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlus(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlus(QCborArray__Iterator* self, size_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinus(QCborArray__Iterator* self, size_t j);
size_t QCborArray__Iterator_OperatorMinusWithQCborArrayIterator(QCborArray__Iterator* self, QCborArray__Iterator* j);
void QCborArray__Iterator_Delete(QCborArray__Iterator* self);

QCborArray__ConstIterator* QCborArray__ConstIterator_new();
QCborArray__ConstIterator* QCborArray__ConstIterator_new2(QCborArray__ConstIterator* param1);
QCborValueRef* QCborArray__ConstIterator_OperatorMultiply(QCborArray__ConstIterator* self);
QCborValueRef* QCborArray__ConstIterator_OperatorMinusGreater(QCborArray__ConstIterator* self);
QCborValueRef* QCborArray__ConstIterator_OperatorSubscript(QCborArray__ConstIterator* self, size_t j);
bool QCborArray__ConstIterator_OperatorEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* o);
bool QCborArray__ConstIterator_OperatorNotEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* o);
bool QCborArray__ConstIterator_OperatorLesser(QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorLesserOrEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorGreater(QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorGreaterOrEqual(QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator(QCborArray__ConstIterator* self, QCborArray__ConstIterator* o);
bool QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator(QCborArray__ConstIterator* self, QCborArray__ConstIterator* o);
bool QCborArray__ConstIterator_OperatorLesserWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_OperatorLesserOrEqualWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_OperatorGreaterWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlus(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlus(QCborArray__ConstIterator* self, size_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinus(QCborArray__ConstIterator* self, size_t j);
size_t QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator(QCborArray__ConstIterator* self, QCborArray__ConstIterator* j);
void QCborArray__ConstIterator_Delete(QCborArray__ConstIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
