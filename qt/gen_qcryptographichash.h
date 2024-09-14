#ifndef GEN_QCRYPTOGRAPHICHASH_H
#define GEN_QCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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

QCryptographicHash* QCryptographicHash_new(uintptr_t method);
void QCryptographicHash_Reset(QCryptographicHash* self);
void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, int length);
void QCryptographicHash_AddDataWithData(QCryptographicHash* self, QByteArray* data);
bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device);
QByteArray* QCryptographicHash_Result(const QCryptographicHash* self);
QByteArray* QCryptographicHash_Hash(QByteArray* data, uintptr_t method);
int QCryptographicHash_HashLength(uintptr_t method);
void QCryptographicHash_Delete(QCryptographicHash* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
