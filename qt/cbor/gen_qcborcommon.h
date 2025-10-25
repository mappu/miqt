#pragma once
#ifndef MIQT_QT_CBOR_GEN_QCBORCOMMON_H
#define MIQT_QT_CBOR_GEN_QCBORCOMMON_H

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
#else
typedef struct QCborError QCborError;
#endif

int QCborError_c(const QCborError* self);
void QCborError_setC(QCborError* self, int c);
int QCborError_ToQCborError__Code(const QCborError* self);
struct miqt_string QCborError_toString(const QCborError* self);

void QCborError_delete(QCborError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
