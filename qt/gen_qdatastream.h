#ifndef GEN_QDATASTREAM_H
#define GEN_QDATASTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QDataStream;
class QIODevice;
#else
typedef struct QByteArray QByteArray;
typedef struct QDataStream QDataStream;
typedef struct QIODevice QIODevice;
#endif

QDataStream* QDataStream_new();
QDataStream* QDataStream_new2(QIODevice* param1);
QDataStream* QDataStream_new3(QByteArray* param1);
QIODevice* QDataStream_Device(QDataStream* self);
void QDataStream_SetDevice(QDataStream* self, QIODevice* device);
void QDataStream_UnsetDevice(QDataStream* self);
bool QDataStream_AtEnd(QDataStream* self);
void QDataStream_ResetStatus(QDataStream* self);
int QDataStream_Version(QDataStream* self);
void QDataStream_SetVersion(QDataStream* self, int version);
void QDataStream_OperatorShiftRight(QDataStream* self, int8_t* i);
void QDataStream_OperatorShiftRightWithQuint8(QDataStream* self, uint8_t* i);
void QDataStream_OperatorShiftRightWithQint16(QDataStream* self, int16_t* i);
void QDataStream_OperatorShiftRightWithQuint16(QDataStream* self, uint16_t* i);
void QDataStream_OperatorShiftRightWithQint32(QDataStream* self, int32_t* i);
void QDataStream_OperatorShiftRightWithQuint32(QDataStream* self, uint32_t* i);
void QDataStream_OperatorShiftRightWithQint64(QDataStream* self, int64_t* i);
void QDataStream_OperatorShiftRightWithQuint64(QDataStream* self, uint64_t* i);
void QDataStream_OperatorShiftRightWithBool(QDataStream* self, bool* i);
void QDataStream_OperatorShiftRightWithFloat(QDataStream* self, float* f);
void QDataStream_OperatorShiftRightWithDouble(QDataStream* self, double* f);
void QDataStream_OperatorShiftLeft(QDataStream* self, int8_t i);
void QDataStream_OperatorShiftLeftWithQuint8(QDataStream* self, uint8_t i);
void QDataStream_OperatorShiftLeftWithQint16(QDataStream* self, int16_t i);
void QDataStream_OperatorShiftLeftWithQuint16(QDataStream* self, uint16_t i);
void QDataStream_OperatorShiftLeftWithQint32(QDataStream* self, int32_t i);
void QDataStream_OperatorShiftLeftWithQuint32(QDataStream* self, uint32_t i);
void QDataStream_OperatorShiftLeftWithQint64(QDataStream* self, int64_t i);
void QDataStream_OperatorShiftLeftWithQuint64(QDataStream* self, uint64_t i);
void QDataStream_OperatorShiftLeftWithBool(QDataStream* self, bool i);
void QDataStream_OperatorShiftLeftWithFloat(QDataStream* self, float f);
void QDataStream_OperatorShiftLeftWithDouble(QDataStream* self, double f);
void QDataStream_OperatorShiftLeftWithStr(QDataStream* self, char* str);
int QDataStream_ReadRawData(QDataStream* self, char* param1, int lenVal);
void QDataStream_WriteBytes(QDataStream* self, char* param1, unsigned int lenVal);
int QDataStream_WriteRawData(QDataStream* self, char* param1, int lenVal);
int QDataStream_SkipRawData(QDataStream* self, int lenVal);
void QDataStream_StartTransaction(QDataStream* self);
bool QDataStream_CommitTransaction(QDataStream* self);
void QDataStream_RollbackTransaction(QDataStream* self);
void QDataStream_AbortTransaction(QDataStream* self);
void QDataStream_Delete(QDataStream* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
