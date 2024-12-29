#pragma once
#ifndef MIQT_QT6_GEN_QJSONARRAY_H
#define MIQT_QT6_GEN_QJSONARRAY_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__const_iterator)
typedef QJsonArray::const_iterator QJsonArray__const_iterator;
#else
class QJsonArray__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QJsonArray__iterator)
typedef QJsonArray::iterator QJsonArray__iterator;
#else
class QJsonArray__iterator;
#endif
class QJsonValue;
class QJsonValueConstRef;
class QJsonValueRef;
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonArray__const_iterator QJsonArray__const_iterator;
typedef struct QJsonArray__iterator QJsonArray__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
#endif

QJsonArray* QJsonArray_new();
QJsonArray* QJsonArray_new2(QJsonArray* other);
void QJsonArray_OperatorAssign(QJsonArray* self, QJsonArray* other);
QJsonArray* QJsonArray_FromStringList(struct miqt_array /* of struct miqt_string */  list);
ptrdiff_t QJsonArray_Size(const QJsonArray* self);
ptrdiff_t QJsonArray_Count(const QJsonArray* self);
bool QJsonArray_IsEmpty(const QJsonArray* self);
QJsonValue* QJsonArray_At(const QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_First(const QJsonArray* self);
QJsonValue* QJsonArray_Last(const QJsonArray* self);
void QJsonArray_Prepend(QJsonArray* self, QJsonValue* value);
void QJsonArray_Append(QJsonArray* self, QJsonValue* value);
void QJsonArray_RemoveAt(QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_TakeAt(QJsonArray* self, ptrdiff_t i);
void QJsonArray_RemoveFirst(QJsonArray* self);
void QJsonArray_RemoveLast(QJsonArray* self);
void QJsonArray_Insert(QJsonArray* self, ptrdiff_t i, QJsonValue* value);
void QJsonArray_Replace(QJsonArray* self, ptrdiff_t i, QJsonValue* value);
bool QJsonArray_Contains(const QJsonArray* self, QJsonValue* element);
QJsonValueRef* QJsonArray_OperatorSubscript(QJsonArray* self, ptrdiff_t i);
QJsonValue* QJsonArray_OperatorSubscriptWithQsizetype(const QJsonArray* self, ptrdiff_t i);
bool QJsonArray_OperatorEqual(const QJsonArray* self, QJsonArray* other);
bool QJsonArray_OperatorNotEqual(const QJsonArray* self, QJsonArray* other);
void QJsonArray_Swap(QJsonArray* self, QJsonArray* other);
QJsonArray__iterator* QJsonArray_Begin(QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_Begin2(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_ConstBegin(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_Cbegin(const QJsonArray* self);
QJsonArray__iterator* QJsonArray_End(QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_End2(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_ConstEnd(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_Cend(const QJsonArray* self);
QJsonArray__iterator* QJsonArray_Insert2(QJsonArray* self, QJsonArray__iterator* before, QJsonValue* value);
QJsonArray__iterator* QJsonArray_Erase(QJsonArray* self, QJsonArray__iterator* it);
QJsonArray* QJsonArray_OperatorPlus(const QJsonArray* self, QJsonValue* v);
QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, QJsonValue* v);
QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, QJsonValue* v);
void QJsonArray_PushBack(QJsonArray* self, QJsonValue* t);
void QJsonArray_PushFront(QJsonArray* self, QJsonValue* t);
void QJsonArray_PopFront(QJsonArray* self);
void QJsonArray_PopBack(QJsonArray* self);
bool QJsonArray_Empty(const QJsonArray* self);
void QJsonArray_Delete(QJsonArray* self, bool isSubclass);

QJsonArray__iterator* QJsonArray__iterator_new();
QJsonArray__iterator* QJsonArray__iterator_new2(QJsonArray* array, ptrdiff_t index);
QJsonArray__iterator* QJsonArray__iterator_new3(QJsonArray__iterator* other);
void QJsonArray__iterator_OperatorAssign(QJsonArray__iterator* self, QJsonArray__iterator* other);
QJsonValueRef* QJsonArray__iterator_OperatorMultiply(const QJsonArray__iterator* self);
QJsonValueConstRef* QJsonArray__iterator_OperatorMinusGreater(const QJsonArray__iterator* self);
QJsonValueRef* QJsonArray__iterator_OperatorMinusGreater2(QJsonArray__iterator* self);
QJsonValueRef* QJsonArray__iterator_OperatorSubscript(const QJsonArray__iterator* self, ptrdiff_t j);
bool QJsonArray__iterator_OperatorEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o);
bool QJsonArray__iterator_OperatorNotEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o);
bool QJsonArray__iterator_OperatorLesser(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_OperatorLesserOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_OperatorGreater(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_OperatorGreaterOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_OperatorEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__iterator_OperatorNotEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__iterator_OperatorLesserWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__iterator_OperatorLesserOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__iterator_OperatorGreaterWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__iterator_OperatorGreaterOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlusPlus(QJsonArray__iterator* self);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlusPlusWithInt(QJsonArray__iterator* self, int param1);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinus(QJsonArray__iterator* self);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinusMinusWithInt(QJsonArray__iterator* self, int param1);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlusAssign(QJsonArray__iterator* self, ptrdiff_t j);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinusAssign(QJsonArray__iterator* self, ptrdiff_t j);
QJsonArray__iterator* QJsonArray__iterator_OperatorPlus(const QJsonArray__iterator* self, ptrdiff_t j);
QJsonArray__iterator* QJsonArray__iterator_OperatorMinus(const QJsonArray__iterator* self, ptrdiff_t j);
ptrdiff_t QJsonArray__iterator_OperatorMinusWithQJsonArrayiterator(const QJsonArray__iterator* self, QJsonArray__iterator* j);
void QJsonArray__iterator_Delete(QJsonArray__iterator* self, bool isSubclass);

QJsonArray__const_iterator* QJsonArray__const_iterator_new();
QJsonArray__const_iterator* QJsonArray__const_iterator_new2(QJsonArray* array, ptrdiff_t index);
QJsonArray__const_iterator* QJsonArray__const_iterator_new3(QJsonArray__iterator* o);
QJsonArray__const_iterator* QJsonArray__const_iterator_new4(QJsonArray__const_iterator* other);
void QJsonArray__const_iterator_OperatorAssign(QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
QJsonValueConstRef* QJsonArray__const_iterator_OperatorMultiply(const QJsonArray__const_iterator* self);
QJsonValueConstRef* QJsonArray__const_iterator_OperatorMinusGreater(const QJsonArray__const_iterator* self);
QJsonValueConstRef* QJsonArray__const_iterator_OperatorSubscript(const QJsonArray__const_iterator* self, ptrdiff_t j);
bool QJsonArray__const_iterator_OperatorEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__const_iterator_OperatorNotEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__const_iterator_OperatorLesser(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__const_iterator_OperatorLesserOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__const_iterator_OperatorGreater(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__const_iterator_OperatorGreaterOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusPlus(QJsonArray__const_iterator* self);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusPlusWithInt(QJsonArray__const_iterator* self, int param1);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinus(QJsonArray__const_iterator* self);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusMinusWithInt(QJsonArray__const_iterator* self, int param1);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlusAssign(QJsonArray__const_iterator* self, ptrdiff_t j);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinusAssign(QJsonArray__const_iterator* self, ptrdiff_t j);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorPlus(const QJsonArray__const_iterator* self, ptrdiff_t j);
QJsonArray__const_iterator* QJsonArray__const_iterator_OperatorMinus(const QJsonArray__const_iterator* self, ptrdiff_t j);
ptrdiff_t QJsonArray__const_iterator_OperatorMinusWithQJsonArrayconstIterator(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* j);
void QJsonArray__const_iterator_Delete(QJsonArray__const_iterator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
