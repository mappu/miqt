#pragma once
#ifndef MIQT_QT_GEN_QCRYPTOGRAPHICHASH_H
#define MIQT_QT_GEN_QCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCryptographicHash;
class QIODevice;
#else
typedef struct QCryptographicHash QCryptographicHash;
typedef struct QIODevice QIODevice;
#endif

QCryptographicHash* QCryptographicHash_new(int method);
void QCryptographicHash_reset(QCryptographicHash* self);
void QCryptographicHash_addData(QCryptographicHash* self, const char* data, int length);
void QCryptographicHash_addDataWithData(QCryptographicHash* self, struct miqt_string data);
bool QCryptographicHash_addDataWithDevice(QCryptographicHash* self, QIODevice* device);
struct miqt_string QCryptographicHash_result(const QCryptographicHash* self);
struct miqt_string QCryptographicHash_hash(struct miqt_string data, int method);
int QCryptographicHash_hashLength(int method);

void QCryptographicHash_delete(QCryptographicHash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
