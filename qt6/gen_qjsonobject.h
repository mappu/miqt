#ifndef GEN_QJSONOBJECT_H
#define GEN_QJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
class QJsonValueConstRef;
class QJsonValueRef;
#else
typedef struct QJsonObject QJsonObject;
typedef struct QJsonObject__const_iterator QJsonObject__const_iterator;
typedef struct QJsonObject__iterator QJsonObject__iterator;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
#endif

QJsonObject* QJsonObject_new();
QJsonObject* QJsonObject_new2(QJsonObject* other);
void QJsonObject_OperatorAssign(QJsonObject* self, QJsonObject* other);
void QJsonObject_Swap(QJsonObject* self, QJsonObject* other);
struct miqt_array QJsonObject_Keys(const QJsonObject* self);
ptrdiff_t QJsonObject_Size(const QJsonObject* self);
ptrdiff_t QJsonObject_Count(const QJsonObject* self);
ptrdiff_t QJsonObject_Length(const QJsonObject* self);
bool QJsonObject_IsEmpty(const QJsonObject* self);
QJsonValue* QJsonObject_Value(const QJsonObject* self, struct miqt_string key);
QJsonValue* QJsonObject_OperatorSubscript(const QJsonObject* self, struct miqt_string key);
QJsonValueRef* QJsonObject_OperatorSubscriptWithKey(QJsonObject* self, struct miqt_string key);
void QJsonObject_Remove(QJsonObject* self, struct miqt_string key);
QJsonValue* QJsonObject_Take(QJsonObject* self, struct miqt_string key);
bool QJsonObject_Contains(const QJsonObject* self, struct miqt_string key);
bool QJsonObject_OperatorEqual(const QJsonObject* self, QJsonObject* other);
bool QJsonObject_OperatorNotEqual(const QJsonObject* self, QJsonObject* other);
QJsonObject__iterator* QJsonObject_Begin(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_Begin2(const QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_ConstBegin(const QJsonObject* self);
QJsonObject__iterator* QJsonObject_End(QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_End2(const QJsonObject* self);
QJsonObject__const_iterator* QJsonObject_ConstEnd(const QJsonObject* self);
QJsonObject__iterator* QJsonObject_Erase(QJsonObject* self, QJsonObject__iterator* it);
QJsonObject__iterator* QJsonObject_Find(QJsonObject* self, struct miqt_string key);
QJsonObject__const_iterator* QJsonObject_FindWithKey(const QJsonObject* self, struct miqt_string key);
QJsonObject__const_iterator* QJsonObject_ConstFind(const QJsonObject* self, struct miqt_string key);
QJsonObject__iterator* QJsonObject_Insert(QJsonObject* self, struct miqt_string key, QJsonValue* value);
bool QJsonObject_Empty(const QJsonObject* self);
void QJsonObject_Delete(QJsonObject* self);

QJsonObject__iterator* QJsonObject__iterator_new();
QJsonObject__iterator* QJsonObject__iterator_new2(QJsonObject* obj, ptrdiff_t index);
QJsonObject__iterator* QJsonObject__iterator_new3(QJsonObject__iterator* other);
void QJsonObject__iterator_OperatorAssign(QJsonObject__iterator* self, QJsonObject__iterator* other);
struct miqt_string QJsonObject__iterator_Key(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_Value(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorMultiply(const QJsonObject__iterator* self);
QJsonValueConstRef* QJsonObject__iterator_OperatorMinusGreater(const QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorMinusGreater2(QJsonObject__iterator* self);
QJsonValueRef* QJsonObject__iterator_OperatorSubscript(const QJsonObject__iterator* self, ptrdiff_t j);
bool QJsonObject__iterator_OperatorEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorNotEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorLesser(const QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorLesserOrEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorGreater(const QJsonObject__iterator* self, QJsonObject__iterator* other);
bool QJsonObject__iterator_OperatorGreaterOrEqual(const QJsonObject__iterator* self, QJsonObject__iterator* other);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlus(QJsonObject__iterator* self);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlusPlusWithInt(QJsonObject__iterator* self, int param1);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinus(QJsonObject__iterator* self);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinusMinusWithInt(QJsonObject__iterator* self, int param1);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlus(const QJsonObject__iterator* self, ptrdiff_t j);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinus(const QJsonObject__iterator* self, ptrdiff_t j);
QJsonObject__iterator* QJsonObject__iterator_OperatorPlusAssign(QJsonObject__iterator* self, ptrdiff_t j);
QJsonObject__iterator* QJsonObject__iterator_OperatorMinusAssign(QJsonObject__iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator(const QJsonObject__iterator* self, QJsonObject__iterator* j);
bool QJsonObject__iterator_OperatorEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorNotEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorLesserWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorLesserOrEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorGreaterWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__iterator_OperatorGreaterOrEqualWithOther(const QJsonObject__iterator* self, QJsonObject__const_iterator* other);
void QJsonObject__iterator_Delete(QJsonObject__iterator* self);

QJsonObject__const_iterator* QJsonObject__const_iterator_new();
QJsonObject__const_iterator* QJsonObject__const_iterator_new2(QJsonObject* obj, ptrdiff_t index);
QJsonObject__const_iterator* QJsonObject__const_iterator_new3(QJsonObject__iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_new4(QJsonObject__const_iterator* other);
void QJsonObject__const_iterator_OperatorAssign(QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
struct miqt_string QJsonObject__const_iterator_Key(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_Value(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_OperatorMultiply(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_OperatorMinusGreater(const QJsonObject__const_iterator* self);
QJsonValueConstRef* QJsonObject__const_iterator_OperatorSubscript(const QJsonObject__const_iterator* self, ptrdiff_t j);
bool QJsonObject__const_iterator_OperatorEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorNotEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorLesser(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorLesserOrEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorGreater(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
bool QJsonObject__const_iterator_OperatorGreaterOrEqual(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* other);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlus(QJsonObject__const_iterator* self);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusPlusWithInt(QJsonObject__const_iterator* self, int param1);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinus(QJsonObject__const_iterator* self);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusMinusWithInt(QJsonObject__const_iterator* self, int param1);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlus(const QJsonObject__const_iterator* self, ptrdiff_t j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinus(const QJsonObject__const_iterator* self, ptrdiff_t j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorPlusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
QJsonObject__const_iterator* QJsonObject__const_iterator_OperatorMinusAssign(QJsonObject__const_iterator* self, ptrdiff_t j);
ptrdiff_t QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator(const QJsonObject__const_iterator* self, QJsonObject__const_iterator* j);
bool QJsonObject__const_iterator_OperatorEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorNotEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorLesserWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorLesserOrEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorGreaterWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other);
bool QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther(const QJsonObject__const_iterator* self, QJsonObject__iterator* other);
void QJsonObject__const_iterator_Delete(QJsonObject__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
