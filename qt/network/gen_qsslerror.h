#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QSSLERROR_H
#define MIQT_QT_NETWORK_GEN_QSSLERROR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSslCertificate;
class QSslError;
#else
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslError QSslError;
#endif

QSslError* QSslError_new();
QSslError* QSslError_new2(int error);
QSslError* QSslError_new3(int error, QSslCertificate* certificate);
QSslError* QSslError_new4(QSslError* other);
void QSslError_swap(QSslError* self, QSslError* other);
void QSslError_operatorAssign(QSslError* self, QSslError* other);
bool QSslError_operatorEqual(const QSslError* self, QSslError* other);
bool QSslError_operatorNotEqual(const QSslError* self, QSslError* other);
int QSslError_error(const QSslError* self);
struct miqt_string QSslError_errorString(const QSslError* self);
QSslCertificate* QSslError_certificate(const QSslError* self);
void QSslError_delete(QSslError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
