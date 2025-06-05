#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QOCSPRESPONSE_H
#define MIQT_QT6_NETWORK_GEN_QOCSPRESPONSE_H

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
void QOcspResponse_operatorAssign(QOcspResponse* self, QOcspResponse* other);
int QOcspResponse_certificateStatus(const QOcspResponse* self);
int QOcspResponse_revocationReason(const QOcspResponse* self);
QSslCertificate* QOcspResponse_responder(const QOcspResponse* self);
QSslCertificate* QOcspResponse_subject(const QOcspResponse* self);
void QOcspResponse_swap(QOcspResponse* self, QOcspResponse* other);

void QOcspResponse_delete(QOcspResponse* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
