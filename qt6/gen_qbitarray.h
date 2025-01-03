#pragma once
#ifndef MIQT_QT6_GEN_QBITARRAY_H
#define MIQT_QT6_GEN_QBITARRAY_H

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
QBitArray* QBitArray_new2(long long size);
QBitArray* QBitArray_new3(QBitArray* other);
QBitArray* QBitArray_new4(long long size, bool val);
void QBitArray_OperatorAssign(QBitArray* self, QBitArray* other);
void QBitArray_Swap(QBitArray* self, QBitArray* other);
long long QBitArray_Size(const QBitArray* self);
long long QBitArray_Count(const QBitArray* self);
long long QBitArray_CountWithOn(const QBitArray* self, bool on);
bool QBitArray_IsEmpty(const QBitArray* self);
bool QBitArray_IsNull(const QBitArray* self);
void QBitArray_Resize(QBitArray* self, long long size);
void QBitArray_Detach(QBitArray* self);
bool QBitArray_IsDetached(const QBitArray* self);
void QBitArray_Clear(QBitArray* self);
bool QBitArray_TestBit(const QBitArray* self, long long i);
void QBitArray_SetBit(QBitArray* self, long long i);
void QBitArray_SetBit2(QBitArray* self, long long i, bool val);
void QBitArray_ClearBit(QBitArray* self, long long i);
bool QBitArray_ToggleBit(QBitArray* self, long long i);
bool QBitArray_At(const QBitArray* self, long long i);
QBitRef* QBitArray_OperatorSubscript(QBitArray* self, long long i);
bool QBitArray_OperatorSubscriptWithQsizetype(const QBitArray* self, long long i);
void QBitArray_OperatorBitwiseAndAssign(QBitArray* self, QBitArray* param1);
void QBitArray_OperatorBitwiseOrAssign(QBitArray* self, QBitArray* param1);
void QBitArray_OperatorBitwiseNotAssign(QBitArray* self, QBitArray* param1);
bool QBitArray_OperatorEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_OperatorNotEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_Fill(QBitArray* self, bool val);
void QBitArray_Fill2(QBitArray* self, bool val, long long first, long long last);
void QBitArray_Truncate(QBitArray* self, long long pos);
const char* QBitArray_Bits(const QBitArray* self);
QBitArray* QBitArray_FromBits(const char* data, long long lenVal);
unsigned int QBitArray_ToUInt32(const QBitArray* self, int endianness);
bool QBitArray_Fill22(QBitArray* self, bool val, long long size);
unsigned int QBitArray_ToUInt322(const QBitArray* self, int endianness, bool* ok);
void QBitArray_Delete(QBitArray* self, bool isSubclass);

QBitRef* QBitRef_new(QBitRef* param1);
bool QBitRef_OperatorNot(const QBitRef* self);
void QBitRef_OperatorAssign(QBitRef* self, QBitRef* val);
void QBitRef_OperatorAssignWithVal(QBitRef* self, bool val);
void QBitRef_Delete(QBitRef* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
