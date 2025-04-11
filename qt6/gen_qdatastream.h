#pragma once
#ifndef MIQT_QT6_GEN_QDATASTREAM_H
#define MIQT_QT6_GEN_QDATASTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDataStream;
class QIODevice;
class QIODeviceBase;
#else
typedef struct QDataStream QDataStream;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
#endif

QDataStream* QDataStream_new();
QDataStream* QDataStream_new2(QIODevice* param1);
QDataStream* QDataStream_new3(struct miqt_string param1);
void QDataStream_virtbase(QDataStream* src, QIODeviceBase** outptr_QIODeviceBase);
QIODevice* QDataStream_device(const QDataStream* self);
void QDataStream_setDevice(QDataStream* self, QIODevice* device);
bool QDataStream_atEnd(const QDataStream* self);
int QDataStream_status(const QDataStream* self);
void QDataStream_setStatus(QDataStream* self, int status);
void QDataStream_resetStatus(QDataStream* self);
int QDataStream_floatingPointPrecision(const QDataStream* self);
void QDataStream_setFloatingPointPrecision(QDataStream* self, int precision);
int QDataStream_byteOrder(const QDataStream* self);
void QDataStream_setByteOrder(QDataStream* self, int byteOrder);
int QDataStream_version(const QDataStream* self);
void QDataStream_setVersion(QDataStream* self, int version);
void QDataStream_operatorShiftRight(QDataStream* self, char* i);
void QDataStream_operatorShiftRightWithQint8(QDataStream* self, signed char* i);
void QDataStream_operatorShiftRightWithQuint8(QDataStream* self, unsigned char* i);
void QDataStream_operatorShiftRightWithQint16(QDataStream* self, short* i);
void QDataStream_operatorShiftRightWithQuint16(QDataStream* self, unsigned short* i);
void QDataStream_operatorShiftRightWithQint32(QDataStream* self, int* i);
void QDataStream_operatorShiftRightWithQuint32(QDataStream* self, unsigned int* i);
void QDataStream_operatorShiftRightWithQint64(QDataStream* self, long long* i);
void QDataStream_operatorShiftRightWithQuint64(QDataStream* self, unsigned long long* i);
void QDataStream_operatorShiftRightWithBool(QDataStream* self, bool* i);
void QDataStream_operatorShiftRightWithFloat(QDataStream* self, float* f);
void QDataStream_operatorShiftRightWithDouble(QDataStream* self, double* f);
void QDataStream_operatorShiftRightWithStr(QDataStream* self, char* str);
void QDataStream_operatorShiftLeft(QDataStream* self, char i);
void QDataStream_operatorShiftLeftWithQint8(QDataStream* self, signed char i);
void QDataStream_operatorShiftLeftWithQuint8(QDataStream* self, unsigned char i);
void QDataStream_operatorShiftLeftWithQint16(QDataStream* self, short i);
void QDataStream_operatorShiftLeftWithQuint16(QDataStream* self, unsigned short i);
void QDataStream_operatorShiftLeftWithQint32(QDataStream* self, int i);
void QDataStream_operatorShiftLeftWithQuint32(QDataStream* self, unsigned int i);
void QDataStream_operatorShiftLeftWithQint64(QDataStream* self, long long i);
void QDataStream_operatorShiftLeftWithQuint64(QDataStream* self, unsigned long long i);
void QDataStream_operatorShiftLeftWithBool(QDataStream* self, bool i);
void QDataStream_operatorShiftLeftWithFloat(QDataStream* self, float f);
void QDataStream_operatorShiftLeftWithDouble(QDataStream* self, double f);
void QDataStream_operatorShiftLeftWithStr(QDataStream* self, const char* str);
QDataStream* QDataStream_readBytes(QDataStream* self, char* param1, unsigned int* len);
int QDataStream_readRawData(QDataStream* self, char* param1, int len);
void QDataStream_writeBytes(QDataStream* self, const char* param1, unsigned int len);
int QDataStream_writeRawData(QDataStream* self, const char* param1, int len);
int QDataStream_skipRawData(QDataStream* self, int len);
void QDataStream_startTransaction(QDataStream* self);
bool QDataStream_commitTransaction(QDataStream* self);
void QDataStream_rollbackTransaction(QDataStream* self);
void QDataStream_abortTransaction(QDataStream* self);
bool QDataStream_isDeviceTransactionStarted(const QDataStream* self);
void QDataStream_delete(QDataStream* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
