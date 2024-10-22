#ifndef GEN_QBITARRAY_H
#define GEN_QBITARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitArray;
class QBitRef;
#else
typedef struct QBitArray QBitArray;
typedef struct QBitRef QBitRef;
#endif

QBitArray* QBitArray_new();
QBitArray* QBitArray_new2(ptrdiff_t size);
QBitArray* QBitArray_new3(QBitArray* other);
QBitArray* QBitArray_new4(ptrdiff_t size, bool val);
void QBitArray_OperatorAssign(QBitArray* self, QBitArray* other);
void QBitArray_Swap(QBitArray* self, QBitArray* other);
ptrdiff_t QBitArray_Size(const QBitArray* self);
ptrdiff_t QBitArray_Count(const QBitArray* self);
ptrdiff_t QBitArray_CountWithOn(const QBitArray* self, bool on);
bool QBitArray_IsEmpty(const QBitArray* self);
bool QBitArray_IsNull(const QBitArray* self);
void QBitArray_Resize(QBitArray* self, ptrdiff_t size);
void QBitArray_Detach(QBitArray* self);
bool QBitArray_IsDetached(const QBitArray* self);
void QBitArray_Clear(QBitArray* self);
bool QBitArray_TestBit(const QBitArray* self, ptrdiff_t i);
void QBitArray_SetBit(QBitArray* self, ptrdiff_t i);
void QBitArray_SetBit2(QBitArray* self, ptrdiff_t i, bool val);
void QBitArray_ClearBit(QBitArray* self, ptrdiff_t i);
bool QBitArray_ToggleBit(QBitArray* self, ptrdiff_t i);
bool QBitArray_At(const QBitArray* self, ptrdiff_t i);
QBitRef* QBitArray_OperatorSubscript(QBitArray* self, ptrdiff_t i);
bool QBitArray_OperatorSubscriptWithQsizetype(const QBitArray* self, ptrdiff_t i);
void QBitArray_OperatorBitwiseAndAssign(QBitArray* self, QBitArray* param1);
void QBitArray_OperatorBitwiseOrAssign(QBitArray* self, QBitArray* param1);
void QBitArray_OperatorBitwiseNotAssign(QBitArray* self, QBitArray* param1);
QBitArray* QBitArray_OperatorBitwiseXor(const QBitArray* self);
bool QBitArray_OperatorEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_OperatorNotEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_Fill(QBitArray* self, bool val);
void QBitArray_Fill2(QBitArray* self, bool val, ptrdiff_t first, ptrdiff_t last);
void QBitArray_Truncate(QBitArray* self, ptrdiff_t pos);
const char* QBitArray_Bits(const QBitArray* self);
QBitArray* QBitArray_FromBits(const char* data, ptrdiff_t lenVal);
unsigned int QBitArray_ToUInt32(const QBitArray* self, int endianness);
bool QBitArray_Fill22(QBitArray* self, bool val, ptrdiff_t size);
unsigned int QBitArray_ToUInt322(const QBitArray* self, int endianness, bool* ok);
void QBitArray_Delete(QBitArray* self);

QBitRef* QBitRef_new(QBitRef* param1);
bool QBitRef_OperatorNot(const QBitRef* self);
void QBitRef_OperatorAssign(QBitRef* self, QBitRef* val);
void QBitRef_OperatorAssignWithVal(QBitRef* self, bool val);
void QBitRef_Delete(QBitRef* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
