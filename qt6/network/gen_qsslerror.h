#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLERROR_H
#define MIQT_QT6_NETWORK_GEN_QSSLERROR_H

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

void QSslError_new(QSslError** outptr_QSslError);
void QSslError_new2(int error, QSslError** outptr_QSslError);
void QSslError_new3(int error, QSslCertificate* certificate, QSslError** outptr_QSslError);
void QSslError_new4(QSslError* other, QSslError** outptr_QSslError);
void QSslError_Swap(QSslError* self, QSslError* other);
void QSslError_OperatorAssign(QSslError* self, QSslError* other);
bool QSslError_OperatorEqual(const QSslError* self, QSslError* other);
bool QSslError_OperatorNotEqual(const QSslError* self, QSslError* other);
int QSslError_Error(const QSslError* self);
struct miqt_string QSslError_ErrorString(const QSslError* self);
QSslCertificate* QSslError_Certificate(const QSslError* self);
void QSslError_Delete(QSslError* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
