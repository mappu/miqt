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
class QCborValue;
class QCborValueRef;
class QJsonArray;
#else
typedef struct QCborArray QCborArray;
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

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
