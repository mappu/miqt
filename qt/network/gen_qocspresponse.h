#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QOCSPRESPONSE_H
#define MIQT_QT_NETWORK_GEN_QOCSPRESPONSE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QOcspResponse;
class QSslCertificate;
#else
typedef struct QOcspResponse QOcspResponse;
typedef struct QSslCertificate QSslCertificate;
#endif

QOcspResponse* QOcspResponse_new();
QOcspResponse* QOcspResponse_new2(QOcspResponse* other);
void QOcspResponse_OperatorAssign(QOcspResponse* self, QOcspResponse* other);
int QOcspResponse_CertificateStatus(const QOcspResponse* self);
int QOcspResponse_RevocationReason(const QOcspResponse* self);
QSslCertificate* QOcspResponse_Responder(const QOcspResponse* self);
QSslCertificate* QOcspResponse_Subject(const QOcspResponse* self);
void QOcspResponse_Swap(QOcspResponse* self, QOcspResponse* other);
void QOcspResponse_Delete(QOcspResponse* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
