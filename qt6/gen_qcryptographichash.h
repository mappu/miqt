#pragma once
#ifndef MIQT_QT6_GEN_QCRYPTOGRAPHICHASH_H
#define MIQT_QT6_GEN_QCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayView;
class QCryptographicHash;
class QIODevice;
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QCryptographicHash QCryptographicHash;
typedef struct QIODevice QIODevice;
#endif

QCryptographicHash* QCryptographicHash_new(int method);
void QCryptographicHash_reset(QCryptographicHash* self);
void QCryptographicHash_addData(QCryptographicHash* self, const char* data, ptrdiff_t length);
void QCryptographicHash_addDataWithData(QCryptographicHash* self, QByteArrayView* data);
bool QCryptographicHash_addDataWithDevice(QCryptographicHash* self, QIODevice* device);
struct miqt_string QCryptographicHash_result(const QCryptographicHash* self);
QByteArrayView* QCryptographicHash_resultView(const QCryptographicHash* self);
struct miqt_string QCryptographicHash_hash(QByteArrayView* data, int method);
int QCryptographicHash_hashLength(int method);
void QCryptographicHash_delete(QCryptographicHash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
