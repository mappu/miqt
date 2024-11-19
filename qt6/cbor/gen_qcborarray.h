#pragma once
#ifndef MIQT_QT6_CBOR_GEN_QCBORARRAY_H
#define MIQT_QT6_CBOR_GEN_QCBORARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QCborValueConstRef;
class QCborValueRef;
class QJsonArray;
#else
typedef struct QCborArray QCborArray;
typedef struct QCborArray__ConstIterator QCborArray__ConstIterator;
typedef struct QCborArray__Iterator QCborArray__Iterator;
typedef struct QCborValue QCborValue;
typedef struct QCborValueConstRef QCborValueConstRef;
typedef struct QCborValueRef QCborValueRef;
typedef struct QJsonArray QJsonArray;
#endif

void QCborArray_new(QCborArray** outptr_QCborArray);
void QCborArray_new2(QCborArray* other, QCborArray** outptr_QCborArray);
void QCborArray_OperatorAssign(QCborArray* self, QCborArray* other);
void QCborArray_Swap(QCborArray* self, QCborArray* other);
QCborValue* QCborArray_ToCborValue(const QCborArray* self);
ptrdiff_t QCborArray_Size(const QCborArray* self);
bool QCborArray_IsEmpty(const QCborArray* self);
void QCborArray_Clear(QCborArray* self);
QCborValue* QCborArray_At(const QCborArray* self, ptrdiff_t i);
QCborValue* QCborArray_First(const QCborArray* self);
QCborValue* QCborArray_Last(const QCborArray* self);
QCborValue* QCborArray_OperatorSubscript(const QCborArray* self, ptrdiff_t i);
QCborValueRef* QCborArray_First2(QCborArray* self);
QCborValueRef* QCborArray_Last2(QCborArray* self);
QCborValueRef* QCborArray_OperatorSubscriptWithQsizetype(QCborArray* self, ptrdiff_t i);
void QCborArray_Insert(QCborArray* self, ptrdiff_t i, QCborValue* value);
void QCborArray_Prepend(QCborArray* self, QCborValue* value);
void QCborArray_Append(QCborArray* self, QCborValue* value);
QCborValue* QCborArray_Extract(QCborArray* self, QCborArray__ConstIterator* it);
QCborValue* QCborArray_ExtractWithIt(QCborArray* self, QCborArray__Iterator* it);
void QCborArray_RemoveAt(QCborArray* self, ptrdiff_t i);
QCborValue* QCborArray_TakeAt(QCborArray* self, ptrdiff_t i);
void QCborArray_RemoveFirst(QCborArray* self);
void QCborArray_RemoveLast(QCborArray* self);
QCborValue* QCborArray_TakeFirst(QCborArray* self);
QCborValue* QCborArray_TakeLast(QCborArray* self);
bool QCborArray_Contains(const QCborArray* self, QCborValue* value);
int QCborArray_Compare(const QCborArray* self, QCborArray* other);
bool QCborArray_OperatorEqual(const QCborArray* self, QCborArray* other);
bool QCborArray_OperatorNotEqual(const QCborArray* self, QCborArray* other);
bool QCborArray_OperatorLesser(const QCborArray* self, QCborArray* other);
QCborArray__Iterator* QCborArray_Begin(QCborArray* self);
QCborArray__ConstIterator* QCborArray_ConstBegin(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_Begin2(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_Cbegin(const QCborArray* self);
QCborArray__Iterator* QCborArray_End(QCborArray* self);
QCborArray__ConstIterator* QCborArray_ConstEnd(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_End2(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_Cend(const QCborArray* self);
QCborArray__Iterator* QCborArray_Insert2(QCborArray* self, QCborArray__Iterator* before, QCborValue* value);
QCborArray__Iterator* QCborArray_Insert3(QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value);
QCborArray__Iterator* QCborArray_Erase(QCborArray* self, QCborArray__Iterator* it);
QCborArray__Iterator* QCborArray_EraseWithIt(QCborArray* self, QCborArray__ConstIterator* it);
void QCborArray_PushBack(QCborArray* self, QCborValue* t);
void QCborArray_PushFront(QCborArray* self, QCborValue* t);
void QCborArray_PopFront(QCborArray* self);
void QCborArray_PopBack(QCborArray* self);
bool QCborArray_Empty(const QCborArray* self);
QCborArray* QCborArray_OperatorPlus(const QCborArray* self, QCborValue* v);
QCborArray* QCborArray_OperatorPlusAssign(QCborArray* self, QCborValue* v);
QCborArray* QCborArray_OperatorShiftLeft(QCborArray* self, QCborValue* v);
QCborArray* QCborArray_FromStringList(struct miqt_array /* of struct miqt_string */  list);
QCborArray* QCborArray_FromJsonArray(QJsonArray* array);
QJsonArray* QCborArray_ToJsonArray(const QCborArray* self);
void QCborArray_Delete(QCborArray* self, bool isSubclass);

void QCborArray__Iterator_new(QCborArray__Iterator** outptr_QCborArray__Iterator);
void QCborArray__Iterator_new2(QCborArray__Iterator* param1, QCborArray__Iterator** outptr_QCborArray__Iterator);
void QCborArray__Iterator_OperatorAssign(QCborArray__Iterator* self, QCborArray__Iterator* other);
QCborValueRef* QCborArray__Iterator_OperatorMultiply(const QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_OperatorMinusGreater(QCborArray__Iterator* self);
QCborValueConstRef* QCborArray__Iterator_OperatorMinusGreater2(const QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_OperatorSubscript(const QCborArray__Iterator* self, ptrdiff_t j);
bool QCborArray__Iterator_OperatorEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o);
bool QCborArray__Iterator_OperatorNotEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o);
bool QCborArray__Iterator_OperatorLesser(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorLesserOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorGreater(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorGreaterOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o);
bool QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o);
bool QCborArray__Iterator_OperatorLesserWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_OperatorLesserOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_OperatorGreaterWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_OperatorGreaterOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlus(QCborArray__Iterator* self);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlusPlusWithInt(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinus(QCborArray__Iterator* self);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinusMinusWithInt(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlusAssign(QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinusAssign(QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorPlus(const QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_OperatorMinus(const QCborArray__Iterator* self, ptrdiff_t j);
ptrdiff_t QCborArray__Iterator_OperatorMinusWithQCborArrayIterator(const QCborArray__Iterator* self, QCborArray__Iterator* j);
void QCborArray__Iterator_Delete(QCborArray__Iterator* self, bool isSubclass);

void QCborArray__ConstIterator_new(QCborArray__ConstIterator** outptr_QCborArray__ConstIterator);
void QCborArray__ConstIterator_new2(QCborArray__ConstIterator* param1, QCborArray__ConstIterator** outptr_QCborArray__ConstIterator);
void QCborArray__ConstIterator_OperatorAssign(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
QCborValueConstRef* QCborArray__ConstIterator_OperatorMultiply(const QCborArray__ConstIterator* self);
QCborValueConstRef* QCborArray__ConstIterator_OperatorMinusGreater(const QCborArray__ConstIterator* self);
QCborValueConstRef* QCborArray__ConstIterator_OperatorSubscript(const QCborArray__ConstIterator* self, ptrdiff_t j);
bool QCborArray__ConstIterator_OperatorEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o);
bool QCborArray__ConstIterator_OperatorNotEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o);
bool QCborArray__ConstIterator_OperatorLesser(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorLesserOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorGreater(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorGreaterOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o);
bool QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o);
bool QCborArray__ConstIterator_OperatorLesserWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_OperatorLesserOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_OperatorGreaterWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlus(QCborArray__ConstIterator* self);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusPlusWithInt(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinus(QCborArray__ConstIterator* self);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusMinusWithInt(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlusAssign(QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinusAssign(QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorPlus(const QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_OperatorMinus(const QCborArray__ConstIterator* self, ptrdiff_t j);
ptrdiff_t QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* j);
void QCborArray__ConstIterator_Delete(QCborArray__ConstIterator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
