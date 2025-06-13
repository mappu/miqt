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
QBitArray* QBitArray_new2(ptrdiff_t size);
QBitArray* QBitArray_new3(QBitArray* other);
QBitArray* QBitArray_new4(ptrdiff_t size, bool val);
void QBitArray_operatorAssign(QBitArray* self, QBitArray* other);
void QBitArray_swap(QBitArray* self, QBitArray* other);
ptrdiff_t QBitArray_size(const QBitArray* self);
ptrdiff_t QBitArray_count(const QBitArray* self);
ptrdiff_t QBitArray_countWithOn(const QBitArray* self, bool on);
bool QBitArray_isEmpty(const QBitArray* self);
bool QBitArray_isNull(const QBitArray* self);
void QBitArray_resize(QBitArray* self, ptrdiff_t size);
void QBitArray_detach(QBitArray* self);
bool QBitArray_isDetached(const QBitArray* self);
void QBitArray_clear(QBitArray* self);
bool QBitArray_testBit(const QBitArray* self, ptrdiff_t i);
void QBitArray_setBit(QBitArray* self, ptrdiff_t i);
void QBitArray_setBit2(QBitArray* self, ptrdiff_t i, bool val);
void QBitArray_clearBit(QBitArray* self, ptrdiff_t i);
bool QBitArray_toggleBit(QBitArray* self, ptrdiff_t i);
bool QBitArray_at(const QBitArray* self, ptrdiff_t i);
QBitRef* QBitArray_operatorSubscript(QBitArray* self, ptrdiff_t i);
bool QBitArray_operatorSubscriptWithQsizetype(const QBitArray* self, ptrdiff_t i);
void QBitArray_operatorBitwiseAndAssign(QBitArray* self, QBitArray* param1);
void QBitArray_operatorBitwiseOrAssign(QBitArray* self, QBitArray* param1);
void QBitArray_operatorBitwiseNotAssign(QBitArray* self, QBitArray* param1);
bool QBitArray_operatorEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_operatorNotEqual(const QBitArray* self, QBitArray* other);
bool QBitArray_fill(QBitArray* self, bool val);
void QBitArray_fill2(QBitArray* self, bool val, ptrdiff_t first, ptrdiff_t last);
void QBitArray_truncate(QBitArray* self, ptrdiff_t pos);
const char* QBitArray_bits(const QBitArray* self);
QBitArray* QBitArray_fromBits(const char* data, ptrdiff_t len);
unsigned int QBitArray_toUInt32(const QBitArray* self, int endianness);
bool QBitArray_fill3(QBitArray* self, bool val, ptrdiff_t size);
unsigned int QBitArray_toUInt322(const QBitArray* self, int endianness, bool* ok);

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
