#pragma once
#ifndef MIQT_QT6_CBOR_GEN_QCBORMAP_H
#define MIQT_QT6_CBOR_GEN_QCBORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QCborValueConstRef;
class QCborValueRef;
class QJsonObject;
class QVariant;
#else
typedef struct QCborMap QCborMap;
typedef struct QCborMap__ConstIterator QCborMap__ConstIterator;
typedef struct QCborMap__Iterator QCborMap__Iterator;
typedef struct QCborValue QCborValue;
typedef struct QCborValueConstRef QCborValueConstRef;
typedef struct QCborValueRef QCborValueRef;
typedef struct QJsonObject QJsonObject;
typedef struct QVariant QVariant;
#endif

QCborMap* QCborMap_new();
QCborMap* QCborMap_new2(QCborMap* other);
void QCborMap_operatorAssign(QCborMap* self, QCborMap* other);
void QCborMap_swap(QCborMap* self, QCborMap* other);
QCborValue* QCborMap_toCborValue(const QCborMap* self);
ptrdiff_t QCborMap_size(const QCborMap* self);
bool QCborMap_isEmpty(const QCborMap* self);
void QCborMap_clear(QCborMap* self);
struct miqt_array /* of QCborValue* */  QCborMap_keys(const QCborMap* self);
QCborValue* QCborMap_value(const QCborMap* self, long long key);
QCborValue* QCborMap_value2(const QCborMap* self, struct miqt_string key);
QCborValue* QCborMap_value3(const QCborMap* self, QCborValue* key);
QCborValue* QCborMap_operatorSubscript(const QCborMap* self, long long key);
QCborValue* QCborMap_operatorSubscript2(const QCborMap* self, struct miqt_string key);
QCborValue* QCborMap_operatorSubscript3(const QCborMap* self, QCborValue* key);
QCborValueRef* QCborMap_operatorSubscript4(QCborMap* self, long long key);
QCborValueRef* QCborMap_operatorSubscript6(QCborMap* self, struct miqt_string key);
QCborValueRef* QCborMap_operatorSubscript7(QCborMap* self, QCborValue* key);
QCborValue* QCborMap_take(QCborMap* self, long long key);
QCborValue* QCborMap_take2(QCborMap* self, struct miqt_string key);
QCborValue* QCborMap_take3(QCborMap* self, QCborValue* key);
void QCborMap_remove(QCborMap* self, long long key);
void QCborMap_remove2(QCborMap* self, struct miqt_string key);
void QCborMap_remove3(QCborMap* self, QCborValue* key);
bool QCborMap_contains(const QCborMap* self, long long key);
bool QCborMap_contains2(const QCborMap* self, struct miqt_string key);
bool QCborMap_contains3(const QCborMap* self, QCborValue* key);
int QCborMap_compare(const QCborMap* self, QCborMap* other);
bool QCborMap_operatorEqual(const QCborMap* self, QCborMap* other);
bool QCborMap_operatorNotEqual(const QCborMap* self, QCborMap* other);
bool QCborMap_operatorLesser(const QCborMap* self, QCborMap* other);
QCborMap__Iterator* QCborMap_begin(QCborMap* self);
QCborMap__ConstIterator* QCborMap_constBegin(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_begin2(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_cbegin(const QCborMap* self);
QCborMap__Iterator* QCborMap_end(QCborMap* self);
QCborMap__ConstIterator* QCborMap_constEnd(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_end2(const QCborMap* self);
QCborMap__ConstIterator* QCborMap_cend(const QCborMap* self);
QCborMap__Iterator* QCborMap_erase(QCborMap* self, QCborMap__Iterator* it);
QCborMap__Iterator* QCborMap_eraseWithIt(QCborMap* self, QCborMap__ConstIterator* it);
QCborValue* QCborMap_extract(QCborMap* self, QCborMap__Iterator* it);
QCborValue* QCborMap_extractWithIt(QCborMap* self, QCborMap__ConstIterator* it);
bool QCborMap_empty(const QCborMap* self);
QCborMap__Iterator* QCborMap_find(QCborMap* self, long long key);
QCborMap__Iterator* QCborMap_find2(QCborMap* self, struct miqt_string key);
QCborMap__Iterator* QCborMap_find3(QCborMap* self, QCborValue* key);
QCborMap__ConstIterator* QCborMap_constFind(const QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_constFind2(const QCborMap* self, struct miqt_string key);
QCborMap__ConstIterator* QCborMap_constFind3(const QCborMap* self, QCborValue* key);
QCborMap__ConstIterator* QCborMap_find4(const QCborMap* self, long long key);
QCborMap__ConstIterator* QCborMap_find6(const QCborMap* self, struct miqt_string key);
QCborMap__ConstIterator* QCborMap_find7(const QCborMap* self, QCborValue* key);
QCborMap__Iterator* QCborMap_insert(QCborMap* self, long long key, QCborValue* value_);
QCborMap__Iterator* QCborMap_insert3(QCborMap* self, struct miqt_string key, QCborValue* value_);
QCborMap__Iterator* QCborMap_insert4(QCborMap* self, QCborValue* key, QCborValue* value_);
QCborMap__Iterator* QCborMap_insertWithQCborMapvalueType(QCborMap* self, struct miqt_map /* tuple of QCborValue* and QCborValue* */  v);
QCborMap* QCborMap_fromVariantMap(struct miqt_map /* of struct miqt_string to QVariant* */  map);
QCborMap* QCborMap_fromVariantHash(struct miqt_map /* of struct miqt_string to QVariant* */  hash);
QCborMap* QCborMap_fromJsonObject(QJsonObject* o);
struct miqt_map /* of struct miqt_string to QVariant* */  QCborMap_toVariantMap(const QCborMap* self);
struct miqt_map /* of struct miqt_string to QVariant* */  QCborMap_toVariantHash(const QCborMap* self);
QJsonObject* QCborMap_toJsonObject(const QCborMap* self);
void QCborMap_delete(QCborMap* self);

QCborMap__Iterator* QCborMap__Iterator_new();
QCborMap__Iterator* QCborMap__Iterator_new2(QCborMap__Iterator* param1);
void QCborMap__Iterator_operatorAssign(QCborMap__Iterator* self, QCborMap__Iterator* other);
struct miqt_map /* tuple of QCborValueConstRef* and QCborValueRef* */  QCborMap__Iterator_operatorMultiply(const QCborMap__Iterator* self);
struct miqt_map /* tuple of QCborValueConstRef* and QCborValueRef* */  QCborMap__Iterator_operatorSubscript(const QCborMap__Iterator* self, ptrdiff_t j);
QCborValueRef* QCborMap__Iterator_operatorMinusGreater(QCborMap__Iterator* self);
QCborValueConstRef* QCborMap__Iterator_operatorMinusGreater2(const QCborMap__Iterator* self);
QCborValue* QCborMap__Iterator_key(const QCborMap__Iterator* self);
QCborValueRef* QCborMap__Iterator_value(const QCborMap__Iterator* self);
bool QCborMap__Iterator_operatorEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o);
bool QCborMap__Iterator_operatorNotEqual(const QCborMap__Iterator* self, QCborMap__Iterator* o);
bool QCborMap__Iterator_operatorLesser(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_operatorLesserOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_operatorGreater(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_operatorGreaterOrEqual(const QCborMap__Iterator* self, QCborMap__Iterator* other);
bool QCborMap__Iterator_operatorEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o);
bool QCborMap__Iterator_operatorNotEqualWithQCborMapConstIterator(const QCborMap__Iterator* self, QCborMap__ConstIterator* o);
bool QCborMap__Iterator_operatorLesserWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_operatorLesserOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_operatorGreaterWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
bool QCborMap__Iterator_operatorGreaterOrEqualWithOther(const QCborMap__Iterator* self, QCborMap__ConstIterator* other);
QCborMap__Iterator* QCborMap__Iterator_operatorPlusPlus(QCborMap__Iterator* self);
QCborMap__Iterator* QCborMap__Iterator_operatorPlusPlusWithInt(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_operatorMinusMinus(QCborMap__Iterator* self);
QCborMap__Iterator* QCborMap__Iterator_operatorMinusMinusWithInt(QCborMap__Iterator* self, int param1);
QCborMap__Iterator* QCborMap__Iterator_operatorPlusAssign(QCborMap__Iterator* self, ptrdiff_t j);
QCborMap__Iterator* QCborMap__Iterator_operatorMinusAssign(QCborMap__Iterator* self, ptrdiff_t j);
QCborMap__Iterator* QCborMap__Iterator_operatorPlus(const QCborMap__Iterator* self, ptrdiff_t j);
QCborMap__Iterator* QCborMap__Iterator_operatorMinus(const QCborMap__Iterator* self, ptrdiff_t j);
ptrdiff_t QCborMap__Iterator_operatorMinusWithQCborMapIterator(const QCborMap__Iterator* self, QCborMap__Iterator* j);
void QCborMap__Iterator_delete(QCborMap__Iterator* self);

QCborMap__ConstIterator* QCborMap__ConstIterator_new();
QCborMap__ConstIterator* QCborMap__ConstIterator_new2(QCborMap__ConstIterator* param1);
void QCborMap__ConstIterator_operatorAssign(QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
struct miqt_map /* tuple of QCborValueConstRef* and QCborValueConstRef* */  QCborMap__ConstIterator_operatorMultiply(const QCborMap__ConstIterator* self);
struct miqt_map /* tuple of QCborValueConstRef* and QCborValueConstRef* */  QCborMap__ConstIterator_operatorSubscript(const QCborMap__ConstIterator* self, ptrdiff_t j);
QCborValueConstRef* QCborMap__ConstIterator_operatorMinusGreater(const QCborMap__ConstIterator* self);
QCborValue* QCborMap__ConstIterator_key(const QCborMap__ConstIterator* self);
QCborValueConstRef* QCborMap__ConstIterator_value(const QCborMap__ConstIterator* self);
bool QCborMap__ConstIterator_operatorEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o);
bool QCborMap__ConstIterator_operatorNotEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* o);
bool QCborMap__ConstIterator_operatorLesser(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_operatorLesserOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_operatorGreater(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_operatorGreaterOrEqual(const QCborMap__ConstIterator* self, QCborMap__Iterator* other);
bool QCborMap__ConstIterator_operatorEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o);
bool QCborMap__ConstIterator_operatorNotEqualWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* o);
bool QCborMap__ConstIterator_operatorLesserWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_operatorLesserOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_operatorGreaterWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
bool QCborMap__ConstIterator_operatorGreaterOrEqualWithOther(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* other);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlusPlus(QCborMap__ConstIterator* self);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlusPlusWithInt(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinusMinus(QCborMap__ConstIterator* self);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinusMinusWithInt(QCborMap__ConstIterator* self, int param1);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlusAssign(QCborMap__ConstIterator* self, ptrdiff_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinusAssign(QCborMap__ConstIterator* self, ptrdiff_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorPlus(const QCborMap__ConstIterator* self, ptrdiff_t j);
QCborMap__ConstIterator* QCborMap__ConstIterator_operatorMinus(const QCborMap__ConstIterator* self, ptrdiff_t j);
ptrdiff_t QCborMap__ConstIterator_operatorMinusWithQCborMapConstIterator(const QCborMap__ConstIterator* self, QCborMap__ConstIterator* j);
void QCborMap__ConstIterator_delete(QCborMap__ConstIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
