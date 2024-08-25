#ifndef GEN_QBITARRAY_H
#define GEN_QBITARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QBitArray* QBitArray_new2(int size);
QBitArray* QBitArray_new3(QBitArray* other);
QBitArray* QBitArray_new4(int size, bool val);
void QBitArray_OperatorAssign(QBitArray* self, QBitArray* other);
void QBitArray_Swap(QBitArray* self, QBitArray* other);
int QBitArray_Size(QBitArray* self);
int QBitArray_Count(QBitArray* self);
int QBitArray_CountWithOn(QBitArray* self, bool on);
bool QBitArray_IsEmpty(QBitArray* self);
bool QBitArray_IsNull(QBitArray* self);
void QBitArray_Resize(QBitArray* self, int size);
void QBitArray_Detach(QBitArray* self);
bool QBitArray_IsDetached(QBitArray* self);
void QBitArray_Clear(QBitArray* self);
bool QBitArray_TestBit(QBitArray* self, int i);
void QBitArray_SetBit(QBitArray* self, int i);
void QBitArray_SetBit2(QBitArray* self, int i, bool val);
void QBitArray_ClearBit(QBitArray* self, int i);
bool QBitArray_ToggleBit(QBitArray* self, int i);
bool QBitArray_At(QBitArray* self, int i);
QBitRef* QBitArray_OperatorSubscript(QBitArray* self, int i);
bool QBitArray_OperatorSubscriptWithInt(QBitArray* self, int i);
QBitRef* QBitArray_OperatorSubscriptWithUint(QBitArray* self, unsigned int i);
bool QBitArray_OperatorSubscript2(QBitArray* self, unsigned int i);
void QBitArray_OperatorBitwiseAndAssign(QBitArray* self, QBitArray* param1);
void QBitArray_OperatorBitwiseOrAssign(QBitArray* self, QBitArray* param1);
void QBitArray_OperatorBitwiseNotAssign(QBitArray* self, QBitArray* param1);
QBitArray* QBitArray_OperatorBitwiseXor(QBitArray* self);
bool QBitArray_OperatorEqual(QBitArray* self, QBitArray* other);
bool QBitArray_OperatorNotEqual(QBitArray* self, QBitArray* other);
bool QBitArray_Fill(QBitArray* self, bool val);
void QBitArray_Fill2(QBitArray* self, bool val, int first, int last);
void QBitArray_Truncate(QBitArray* self, int pos);
char* QBitArray_Bits(QBitArray* self);
QBitArray* QBitArray_FromBits(char* data, size_t lenVal);
bool QBitArray_Fill22(QBitArray* self, bool val, int size);
void QBitArray_Delete(QBitArray* self);

QBitRef* QBitRef_new(QBitRef* param1);
bool QBitRef_OperatorNot(QBitRef* self);
void QBitRef_OperatorAssign(QBitRef* self, QBitRef* val);
void QBitRef_OperatorAssignWithVal(QBitRef* self, bool val);
void QBitRef_Delete(QBitRef* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
