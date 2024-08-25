#ifndef GEN_QCRYPTOGRAPHICHASH_H
#define GEN_QCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QCryptographicHash;
class QIODevice;
#else
typedef struct QByteArray QByteArray;
typedef struct QCryptographicHash QCryptographicHash;
typedef struct QIODevice QIODevice;
#endif

void QCryptographicHash_Reset(QCryptographicHash* self);
void QCryptographicHash_AddData(QCryptographicHash* self, char* data, int length);
void QCryptographicHash_AddDataWithData(QCryptographicHash* self, QByteArray* data);
bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device);
QByteArray* QCryptographicHash_Result(QCryptographicHash* self);
void QCryptographicHash_Delete(QCryptographicHash* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
