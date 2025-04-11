#pragma once
#ifndef MIQT_QT_GEN_QBITARRAY_H
#define MIQT_QT_GEN_QBITARRAY_H

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
QBitArray* QBitArray_new2(int size);
QBitArray* QBitArray_new3(QBitArray* other);
QBitArray* QBitArray_new4(int size, bool val);
void QBitArray_operatorAssign(QBitArray* self, QBitArray* other);
void QBitArray_swap(QBitArray* self, QBitArray* other);
int QBitArray_size(const QBitArray* self);
int QBitArray_count(const QBitArray* self);
int QBitArray_countWithOn(const QBitArray* self, bool on);
bool QBitArray_isEmpty(const QBitArray* self);
bool QBitArray_isNull(const QBitArray* self);
void QBitArray_resize(QBitArray* self, int size);
void QBitArray_detach(QBitArray* self);
bool QBitArray_isDetached(const QBitArray* self);
void QBitArray_clear(QBitArray* self);
bool QBitArray_testBit(const QBitArray* self, int i);
void QBitArray_setBit(QBitArray* self, int i);
void QBitArray_setBit2(QBitArray* self, int i, bool val);
void QBitArray_clearBit(QBitArray* self, int i);
bool QBitArray_toggleBit(QBitArray* self, int i);
bool QBitArray_at(const QBitArray* self, int i);
QBitRef* QBitArray_operatorSubscript(QBitArray* self, int i);
bool QBitArray_operatorSubscriptWithInt(const QBitArray* self, int i);
QBitRef* QBitArray_operatorSubscriptWithUint(QBitArray* self, unsigned int i);
bool QBitArray_operatorSubscript2(const QBitArray* self, unsigned int i);
void QBitArray_operatorBitwiseAndAssign(QBitArray* self, QBitArray* param1);
void QBitArray_operatorBitwiseOrAssign(QBitArray* self, QBitArray* param1);
void QBitArray_operatorBitwiseNotAssign(QBitArray* self, QBitArray* param1);
bool QBitArray_operatorEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_operatorNotEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_fill(QBitArray* self, bool val);
void QBitArray_fill2(QBitArray* self, bool val, int first, int last);
void QBitArray_truncate(QBitArray* self, int pos);
const char* QBitArray_bits(const QBitArray* self);
QBitArray* QBitArray_fromBits(const char* data, ptrdiff_t len);
bool QBitArray_fill3(QBitArray* self, bool val, int size);
void QBitArray_delete(QBitArray* self);

QBitRef* QBitRef_new(QBitRef* param1);
bool QBitRef_ToBool(const QBitRef* self);
bool QBitRef_operatorNot(const QBitRef* self);
void QBitRef_operatorAssign(QBitRef* self, QBitRef* val);
void QBitRef_operatorAssignWithVal(QBitRef* self, bool val);
void QBitRef_delete(QBitRef* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
