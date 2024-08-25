#ifndef GEN_QJSONARRAY_H
#define GEN_QJSONARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonArray;
class QJsonValue;
class QJsonValueRef;
#else
typedef struct QJsonArray QJsonArray;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueRef QJsonValueRef;
#endif

QJsonArray* QJsonArray_new();
QJsonArray* QJsonArray_new2(QJsonArray* other);
void QJsonArray_OperatorAssign(QJsonArray* self, QJsonArray* other);
QJsonArray* QJsonArray_FromStringList(char** list, uint64_t* list_Lengths, size_t list_len);
int QJsonArray_Size(QJsonArray* self);
int QJsonArray_Count(QJsonArray* self);
bool QJsonArray_IsEmpty(QJsonArray* self);
QJsonValue* QJsonArray_At(QJsonArray* self, int i);
QJsonValue* QJsonArray_First(QJsonArray* self);
QJsonValue* QJsonArray_Last(QJsonArray* self);
void QJsonArray_Prepend(QJsonArray* self, QJsonValue* value);
void QJsonArray_Append(QJsonArray* self, QJsonValue* value);
void QJsonArray_RemoveAt(QJsonArray* self, int i);
QJsonValue* QJsonArray_TakeAt(QJsonArray* self, int i);
void QJsonArray_RemoveFirst(QJsonArray* self);
void QJsonArray_RemoveLast(QJsonArray* self);
void QJsonArray_Insert(QJsonArray* self, int i, QJsonValue* value);
void QJsonArray_Replace(QJsonArray* self, int i, QJsonValue* value);
bool QJsonArray_Contains(QJsonArray* self, QJsonValue* element);
QJsonValueRef* QJsonArray_OperatorSubscript(QJsonArray* self, int i);
QJsonValue* QJsonArray_OperatorSubscriptWithInt(QJsonArray* self, int i);
bool QJsonArray_OperatorEqual(QJsonArray* self, QJsonArray* other);
bool QJsonArray_OperatorNotEqual(QJsonArray* self, QJsonArray* other);
void QJsonArray_Swap(QJsonArray* self, QJsonArray* other);
QJsonArray* QJsonArray_OperatorPlus(QJsonArray* self, QJsonValue* v);
QJsonArray* QJsonArray_OperatorPlusAssign(QJsonArray* self, QJsonValue* v);
QJsonArray* QJsonArray_OperatorShiftLeft(QJsonArray* self, QJsonValue* v);
void QJsonArray_PushBack(QJsonArray* self, QJsonValue* t);
void QJsonArray_PushFront(QJsonArray* self, QJsonValue* t);
void QJsonArray_PopFront(QJsonArray* self);
void QJsonArray_PopBack(QJsonArray* self);
bool QJsonArray_Empty(QJsonArray* self);
void QJsonArray_Delete(QJsonArray* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
