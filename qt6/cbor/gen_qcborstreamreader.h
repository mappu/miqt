#pragma once
#ifndef MIQT_QT6_CBOR_GEN_QCBORSTREAMREADER_H
#define MIQT_QT6_CBOR_GEN_QCBORSTREAMREADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCborError;
class QCborStreamReader;
class QIODevice;
#else
typedef struct QCborError QCborError;
typedef struct QCborStreamReader QCborStreamReader;
typedef struct QIODevice QIODevice;
#endif

QCborStreamReader* QCborStreamReader_new();
QCborStreamReader* QCborStreamReader_new2(const char* data, ptrdiff_t len);
QCborStreamReader* QCborStreamReader_new3(const unsigned char* data, ptrdiff_t len);
QCborStreamReader* QCborStreamReader_new4(struct miqt_string data);
QCborStreamReader* QCborStreamReader_new5(QIODevice* device);
void QCborStreamReader_setDevice(QCborStreamReader* self, QIODevice* device);
QIODevice* QCborStreamReader_device(const QCborStreamReader* self);
void QCborStreamReader_addData(QCborStreamReader* self, struct miqt_string data);
void QCborStreamReader_addData2(QCborStreamReader* self, const char* data, ptrdiff_t len);
void QCborStreamReader_addData3(QCborStreamReader* self, const unsigned char* data, ptrdiff_t len);
void QCborStreamReader_reparse(QCborStreamReader* self);
void QCborStreamReader_clear(QCborStreamReader* self);
void QCborStreamReader_reset(QCborStreamReader* self);
QCborError* QCborStreamReader_lastError(QCborStreamReader* self);
long long QCborStreamReader_currentOffset(const QCborStreamReader* self);
bool QCborStreamReader_isValid(const QCborStreamReader* self);
int QCborStreamReader_containerDepth(const QCborStreamReader* self);
uint8_t QCborStreamReader_parentContainerType(const QCborStreamReader* self);
bool QCborStreamReader_hasNext(const QCborStreamReader* self);
bool QCborStreamReader_next(QCborStreamReader* self);
uint8_t QCborStreamReader_type(const QCborStreamReader* self);
bool QCborStreamReader_isUnsignedInteger(const QCborStreamReader* self);
bool QCborStreamReader_isNegativeInteger(const QCborStreamReader* self);
bool QCborStreamReader_isInteger(const QCborStreamReader* self);
bool QCborStreamReader_isByteArray(const QCborStreamReader* self);
bool QCborStreamReader_isString(const QCborStreamReader* self);
bool QCborStreamReader_isArray(const QCborStreamReader* self);
bool QCborStreamReader_isMap(const QCborStreamReader* self);
bool QCborStreamReader_isTag(const QCborStreamReader* self);
bool QCborStreamReader_isSimpleType(const QCborStreamReader* self);
bool QCborStreamReader_isFloat16(const QCborStreamReader* self);
bool QCborStreamReader_isFloat(const QCborStreamReader* self);
bool QCborStreamReader_isDouble(const QCborStreamReader* self);
bool QCborStreamReader_isInvalid(const QCborStreamReader* self);
bool QCborStreamReader_isSimpleTypeWithSt(const QCborStreamReader* self, uint8_t st);
bool QCborStreamReader_isFalse(const QCborStreamReader* self);
bool QCborStreamReader_isTrue(const QCborStreamReader* self);
bool QCborStreamReader_isBool(const QCborStreamReader* self);
bool QCborStreamReader_isNull(const QCborStreamReader* self);
bool QCborStreamReader_isUndefined(const QCborStreamReader* self);
bool QCborStreamReader_isLengthKnown(const QCborStreamReader* self);
unsigned long long QCborStreamReader_length(const QCborStreamReader* self);
bool QCborStreamReader_isContainer(const QCborStreamReader* self);
bool QCborStreamReader_enterContainer(QCborStreamReader* self);
bool QCborStreamReader_leaveContainer(QCborStreamReader* self);
ptrdiff_t QCborStreamReader_currentStringChunkSize(const QCborStreamReader* self);
bool QCborStreamReader_toBool(const QCborStreamReader* self);
uint64_t QCborStreamReader_toTag(const QCborStreamReader* self);
unsigned long long QCborStreamReader_toUnsignedInteger(const QCborStreamReader* self);
uint64_t QCborStreamReader_toNegativeInteger(const QCborStreamReader* self);
uint8_t QCborStreamReader_toSimpleType(const QCborStreamReader* self);
float QCborStreamReader_toFloat(const QCborStreamReader* self);
double QCborStreamReader_toDouble(const QCborStreamReader* self);
long long QCborStreamReader_toInteger(const QCborStreamReader* self);
bool QCborStreamReader_next1(QCborStreamReader* self, int maxRecursion);
void QCborStreamReader_delete(QCborStreamReader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
