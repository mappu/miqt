#pragma once
#ifndef MIQT_QT_CBOR_GEN_QCBORARRAY_H
#define MIQT_QT_CBOR_GEN_QCBORARRAY_H

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
class QCborValueRef;
class QJsonArray;
class QVariant;
#else
typedef struct QCborArray QCborArray;
typedef struct QCborArray__ConstIterator QCborArray__ConstIterator;
typedef struct QCborArray__Iterator QCborArray__Iterator;
typedef struct QCborValue QCborValue;
typedef struct QCborValueRef QCborValueRef;
typedef struct QJsonArray QJsonArray;
typedef struct QVariant QVariant;
#endif

QCborArray* QCborArray_new();
QCborArray* QCborArray_new2(QCborArray* other);
void QCborArray_operatorAssign(QCborArray* self, QCborArray* other);
void QCborArray_swap(QCborArray* self, QCborArray* other);
QCborValue* QCborArray_toCborValue(const QCborArray* self);
ptrdiff_t QCborArray_size(const QCborArray* self);
bool QCborArray_isEmpty(const QCborArray* self);
void QCborArray_clear(QCborArray* self);
QCborValue* QCborArray_at(const QCborArray* self, ptrdiff_t i);
QCborValue* QCborArray_first(const QCborArray* self);
QCborValue* QCborArray_last(const QCborArray* self);
QCborValue* QCborArray_operatorSubscript(const QCborArray* self, ptrdiff_t i);
QCborValueRef* QCborArray_first2(QCborArray* self);
QCborValueRef* QCborArray_last2(QCborArray* self);
QCborValueRef* QCborArray_operatorSubscriptWithQsizetype(QCborArray* self, ptrdiff_t i);
void QCborArray_insert(QCborArray* self, ptrdiff_t i, QCborValue* value);
void QCborArray_prepend(QCborArray* self, QCborValue* value);
void QCborArray_append(QCborArray* self, QCborValue* value);
QCborValue* QCborArray_extract(QCborArray* self, QCborArray__ConstIterator* it);
QCborValue* QCborArray_extractWithIt(QCborArray* self, QCborArray__Iterator* it);
void QCborArray_removeAt(QCborArray* self, ptrdiff_t i);
QCborValue* QCborArray_takeAt(QCborArray* self, ptrdiff_t i);
void QCborArray_removeFirst(QCborArray* self);
void QCborArray_removeLast(QCborArray* self);
QCborValue* QCborArray_takeFirst(QCborArray* self);
QCborValue* QCborArray_takeLast(QCborArray* self);
bool QCborArray_contains(const QCborArray* self, QCborValue* value);
int QCborArray_compare(const QCborArray* self, QCborArray* other);
bool QCborArray_operatorEqual(const QCborArray* self, QCborArray* other);
bool QCborArray_operatorNotEqual(const QCborArray* self, QCborArray* other);
bool QCborArray_operatorLesser(const QCborArray* self, QCborArray* other);
QCborArray__Iterator* QCborArray_begin(QCborArray* self);
QCborArray__ConstIterator* QCborArray_constBegin(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_begin2(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_cbegin(const QCborArray* self);
QCborArray__Iterator* QCborArray_end(QCborArray* self);
QCborArray__ConstIterator* QCborArray_constEnd(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_end2(const QCborArray* self);
QCborArray__ConstIterator* QCborArray_cend(const QCborArray* self);
QCborArray__Iterator* QCborArray_insert2(QCborArray* self, QCborArray__Iterator* before, QCborValue* value);
QCborArray__Iterator* QCborArray_insert3(QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value);
QCborArray__Iterator* QCborArray_erase(QCborArray* self, QCborArray__Iterator* it);
QCborArray__Iterator* QCborArray_eraseWithIt(QCborArray* self, QCborArray__ConstIterator* it);
void QCborArray_pushBack(QCborArray* self, QCborValue* t);
void QCborArray_pushFront(QCborArray* self, QCborValue* t);
void QCborArray_popFront(QCborArray* self);
void QCborArray_popBack(QCborArray* self);
bool QCborArray_empty(const QCborArray* self);
QCborArray* QCborArray_operatorPlus(const QCborArray* self, QCborValue* v);
QCborArray* QCborArray_operatorPlusAssign(QCborArray* self, QCborValue* v);
QCborArray* QCborArray_operatorShiftLeft(QCborArray* self, QCborValue* v);
QCborArray* QCborArray_fromStringList(struct miqt_array /* of struct miqt_string */  list);
QCborArray* QCborArray_fromVariantList(struct miqt_array /* of QVariant* */  list);
QCborArray* QCborArray_fromJsonArray(QJsonArray* array);
struct miqt_array /* of QVariant* */  QCborArray_toVariantList(const QCborArray* self);
QJsonArray* QCborArray_toJsonArray(const QCborArray* self);

void QCborArray_delete(QCborArray* self);

QCborArray__Iterator* QCborArray__Iterator_new();
QCborArray__Iterator* QCborArray__Iterator_new2(QCborArray__Iterator* param1);
void QCborArray__Iterator_operatorAssign(QCborArray__Iterator* self, QCborArray__Iterator* other);
QCborValueRef* QCborArray__Iterator_operatorMultiply(const QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_operatorMinusGreater(const QCborArray__Iterator* self);
QCborValueRef* QCborArray__Iterator_operatorSubscript(QCborArray__Iterator* self, ptrdiff_t j);
bool QCborArray__Iterator_operatorEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o);
bool QCborArray__Iterator_operatorNotEqual(const QCborArray__Iterator* self, QCborArray__Iterator* o);
bool QCborArray__Iterator_operatorLesser(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_operatorLesserOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_operatorGreater(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_operatorGreaterOrEqual(const QCborArray__Iterator* self, QCborArray__Iterator* other);
bool QCborArray__Iterator_operatorEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o);
bool QCborArray__Iterator_operatorNotEqualWithQCborArrayConstIterator(const QCborArray__Iterator* self, QCborArray__ConstIterator* o);
bool QCborArray__Iterator_operatorLesserWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_operatorLesserOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_operatorGreaterWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
bool QCborArray__Iterator_operatorGreaterOrEqualWithOther(const QCborArray__Iterator* self, QCborArray__ConstIterator* other);
QCborArray__Iterator* QCborArray__Iterator_operatorPlusPlus(QCborArray__Iterator* self);
QCborArray__Iterator* QCborArray__Iterator_operatorPlusPlusWithInt(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_operatorMinusMinus(QCborArray__Iterator* self);
QCborArray__Iterator* QCborArray__Iterator_operatorMinusMinusWithInt(QCborArray__Iterator* self, int param1);
QCborArray__Iterator* QCborArray__Iterator_operatorPlusAssign(QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_operatorMinusAssign(QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_operatorPlus(const QCborArray__Iterator* self, ptrdiff_t j);
QCborArray__Iterator* QCborArray__Iterator_operatorMinus(const QCborArray__Iterator* self, ptrdiff_t j);
ptrdiff_t QCborArray__Iterator_operatorMinusWithQCborArrayIterator(const QCborArray__Iterator* self, QCborArray__Iterator* j);

void QCborArray__Iterator_delete(QCborArray__Iterator* self);

QCborArray__ConstIterator* QCborArray__ConstIterator_new();
QCborArray__ConstIterator* QCborArray__ConstIterator_new2(QCborArray__ConstIterator* param1);
void QCborArray__ConstIterator_operatorAssign(QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
QCborValueRef* QCborArray__ConstIterator_operatorMultiply(const QCborArray__ConstIterator* self);
QCborValueRef* QCborArray__ConstIterator_operatorMinusGreater(const QCborArray__ConstIterator* self);
QCborValueRef* QCborArray__ConstIterator_operatorSubscript(QCborArray__ConstIterator* self, ptrdiff_t j);
bool QCborArray__ConstIterator_operatorEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o);
bool QCborArray__ConstIterator_operatorNotEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* o);
bool QCborArray__ConstIterator_operatorLesser(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_operatorLesserOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_operatorGreater(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_operatorGreaterOrEqual(const QCborArray__ConstIterator* self, QCborArray__Iterator* other);
bool QCborArray__ConstIterator_operatorEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o);
bool QCborArray__ConstIterator_operatorNotEqualWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* o);
bool QCborArray__ConstIterator_operatorLesserWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_operatorLesserOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_operatorGreaterWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
bool QCborArray__ConstIterator_operatorGreaterOrEqualWithOther(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* other);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlusPlus(QCborArray__ConstIterator* self);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlusPlusWithInt(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinusMinus(QCborArray__ConstIterator* self);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinusMinusWithInt(QCborArray__ConstIterator* self, int param1);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlusAssign(QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinusAssign(QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorPlus(const QCborArray__ConstIterator* self, ptrdiff_t j);
QCborArray__ConstIterator* QCborArray__ConstIterator_operatorMinus(const QCborArray__ConstIterator* self, ptrdiff_t j);
ptrdiff_t QCborArray__ConstIterator_operatorMinusWithQCborArrayConstIterator(const QCborArray__ConstIterator* self, QCborArray__ConstIterator* j);

void QCborArray__ConstIterator_delete(QCborArray__ConstIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
