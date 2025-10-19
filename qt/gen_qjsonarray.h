#pragma once
#ifndef MIQT_QT_GEN_QJSONARRAY_H
#define MIQT_QT_GEN_QJSONARRAY_H

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
class QJsonValuePtr;
class QJsonValueRef;
class QJsonValueRefPtr;
class QVariant;
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonArray__const_iterator QJsonArray__const_iterator;
typedef struct QJsonArray__iterator QJsonArray__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValuePtr QJsonValuePtr;
typedef struct QJsonValueRef QJsonValueRef;
typedef struct QJsonValueRefPtr QJsonValueRefPtr;
typedef struct QVariant QVariant;
#endif

QJsonArray* QJsonArray_new();
QJsonArray* QJsonArray_new2(QJsonArray* other);
void QJsonArray_operatorAssign(QJsonArray* self, QJsonArray* other);
QJsonArray* QJsonArray_fromStringList(struct miqt_array /* of struct miqt_string */  list);
QJsonArray* QJsonArray_fromVariantList(struct miqt_array /* of QVariant* */  list);
struct miqt_array /* of QVariant* */  QJsonArray_toVariantList(const QJsonArray* self);
int QJsonArray_size(const QJsonArray* self);
int QJsonArray_count(const QJsonArray* self);
bool QJsonArray_isEmpty(const QJsonArray* self);
QJsonValue* QJsonArray_at(const QJsonArray* self, int i);
QJsonValue* QJsonArray_first(const QJsonArray* self);
QJsonValue* QJsonArray_last(const QJsonArray* self);
void QJsonArray_prepend(QJsonArray* self, QJsonValue* value);
void QJsonArray_append(QJsonArray* self, QJsonValue* value);
void QJsonArray_removeAt(QJsonArray* self, int i);
QJsonValue* QJsonArray_takeAt(QJsonArray* self, int i);
void QJsonArray_removeFirst(QJsonArray* self);
void QJsonArray_removeLast(QJsonArray* self);
void QJsonArray_insert(QJsonArray* self, int i, QJsonValue* value);
void QJsonArray_replace(QJsonArray* self, int i, QJsonValue* value);
bool QJsonArray_contains(const QJsonArray* self, QJsonValue* element);
QJsonValueRef* QJsonArray_operatorSubscript(QJsonArray* self, int i);
QJsonValue* QJsonArray_operatorSubscriptWithInt(const QJsonArray* self, int i);
bool QJsonArray_operatorEqual(const QJsonArray* self, QJsonArray* other);
bool QJsonArray_operatorNotEqual(const QJsonArray* self, QJsonArray* other);
void QJsonArray_swap(QJsonArray* self, QJsonArray* other);
QJsonArray__iterator* QJsonArray_begin(QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_begin2(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_constBegin(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_cbegin(const QJsonArray* self);
QJsonArray__iterator* QJsonArray_end(QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_end2(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_constEnd(const QJsonArray* self);
QJsonArray__const_iterator* QJsonArray_cend(const QJsonArray* self);
QJsonArray__iterator* QJsonArray_insert2(QJsonArray* self, QJsonArray__iterator* before, QJsonValue* value);
QJsonArray__iterator* QJsonArray_erase(QJsonArray* self, QJsonArray__iterator* it);
QJsonArray* QJsonArray_operatorPlus(const QJsonArray* self, QJsonValue* v);
QJsonArray* QJsonArray_operatorPlusAssign(QJsonArray* self, QJsonValue* v);
QJsonArray* QJsonArray_operatorShiftLeft(QJsonArray* self, QJsonValue* v);
void QJsonArray_pushBack(QJsonArray* self, QJsonValue* t);
void QJsonArray_pushFront(QJsonArray* self, QJsonValue* t);
void QJsonArray_popFront(QJsonArray* self);
void QJsonArray_popBack(QJsonArray* self);
bool QJsonArray_empty(const QJsonArray* self);

void QJsonArray_delete(QJsonArray* self);

QJsonArray__iterator* QJsonArray__iterator_new();
QJsonArray__iterator* QJsonArray__iterator_new2(QJsonArray* array, int index);
QJsonArray__iterator* QJsonArray__iterator_new3(QJsonArray__iterator* param1);
QJsonArray* QJsonArray__iterator_a(const QJsonArray__iterator* self);
void QJsonArray__iterator_setA(QJsonArray__iterator* self, QJsonArray* a);
int QJsonArray__iterator_i(const QJsonArray__iterator* self);
void QJsonArray__iterator_setI(QJsonArray__iterator* self, int i);
QJsonValueRef* QJsonArray__iterator_operatorMultiply(const QJsonArray__iterator* self);
QJsonValueRefPtr* QJsonArray__iterator_operatorMinusGreater(const QJsonArray__iterator* self);
QJsonValueRef* QJsonArray__iterator_operatorSubscript(const QJsonArray__iterator* self, int j);
bool QJsonArray__iterator_operatorEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o);
bool QJsonArray__iterator_operatorNotEqual(const QJsonArray__iterator* self, QJsonArray__iterator* o);
bool QJsonArray__iterator_operatorLesser(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_operatorLesserOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_operatorGreater(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_operatorGreaterOrEqual(const QJsonArray__iterator* self, QJsonArray__iterator* other);
bool QJsonArray__iterator_operatorEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__iterator_operatorNotEqualWithQJsonArrayconstIterator(const QJsonArray__iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__iterator_operatorLesserWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__iterator_operatorLesserOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__iterator_operatorGreaterWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__iterator_operatorGreaterOrEqualWithOther(const QJsonArray__iterator* self, QJsonArray__const_iterator* other);
QJsonArray__iterator* QJsonArray__iterator_operatorPlusPlus(QJsonArray__iterator* self);
QJsonArray__iterator* QJsonArray__iterator_operatorPlusPlusWithInt(QJsonArray__iterator* self, int param1);
QJsonArray__iterator* QJsonArray__iterator_operatorMinusMinus(QJsonArray__iterator* self);
QJsonArray__iterator* QJsonArray__iterator_operatorMinusMinusWithInt(QJsonArray__iterator* self, int param1);
QJsonArray__iterator* QJsonArray__iterator_operatorPlusAssign(QJsonArray__iterator* self, int j);
QJsonArray__iterator* QJsonArray__iterator_operatorMinusAssign(QJsonArray__iterator* self, int j);
QJsonArray__iterator* QJsonArray__iterator_operatorPlus(const QJsonArray__iterator* self, int j);
QJsonArray__iterator* QJsonArray__iterator_operatorMinus(const QJsonArray__iterator* self, int j);
int QJsonArray__iterator_operatorMinusWithQJsonArrayiterator(const QJsonArray__iterator* self, QJsonArray__iterator* j);

void QJsonArray__iterator_delete(QJsonArray__iterator* self);

QJsonArray__const_iterator* QJsonArray__const_iterator_new();
QJsonArray__const_iterator* QJsonArray__const_iterator_new2(QJsonArray* array, int index);
QJsonArray__const_iterator* QJsonArray__const_iterator_new3(QJsonArray__const_iterator* o);
QJsonArray__const_iterator* QJsonArray__const_iterator_new4(QJsonArray__iterator* o);
QJsonArray* QJsonArray__const_iterator_a(const QJsonArray__const_iterator* self);
void QJsonArray__const_iterator_setA(QJsonArray__const_iterator* self, QJsonArray* a);
int QJsonArray__const_iterator_i(const QJsonArray__const_iterator* self);
void QJsonArray__const_iterator_setI(QJsonArray__const_iterator* self, int i);
QJsonValue* QJsonArray__const_iterator_operatorMultiply(const QJsonArray__const_iterator* self);
QJsonValuePtr* QJsonArray__const_iterator_operatorMinusGreater(const QJsonArray__const_iterator* self);
QJsonValue* QJsonArray__const_iterator_operatorSubscript(const QJsonArray__const_iterator* self, int j);
bool QJsonArray__const_iterator_operatorEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__const_iterator_operatorNotEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* o);
bool QJsonArray__const_iterator_operatorLesser(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__const_iterator_operatorLesserOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__const_iterator_operatorGreater(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
bool QJsonArray__const_iterator_operatorGreaterOrEqual(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* other);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlusPlus(QJsonArray__const_iterator* self);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlusPlusWithInt(QJsonArray__const_iterator* self, int param1);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinusMinus(QJsonArray__const_iterator* self);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinusMinusWithInt(QJsonArray__const_iterator* self, int param1);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlusAssign(QJsonArray__const_iterator* self, int j);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinusAssign(QJsonArray__const_iterator* self, int j);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorPlus(const QJsonArray__const_iterator* self, int j);
QJsonArray__const_iterator* QJsonArray__const_iterator_operatorMinus(const QJsonArray__const_iterator* self, int j);
int QJsonArray__const_iterator_operatorMinusWithQJsonArrayconstIterator(const QJsonArray__const_iterator* self, QJsonArray__const_iterator* j);

void QJsonArray__const_iterator_delete(QJsonArray__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
