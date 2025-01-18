#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINECERTIFICATEERROR_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINECERTIFICATEERROR_H

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
class QUrl;
class QWebEngineCertificateError;
#else
typedef struct QSslCertificate QSslCertificate;
typedef struct QUrl QUrl;
typedef struct QWebEngineCertificateError QWebEngineCertificateError;
#endif

QWebEngineCertificateError* QWebEngineCertificateError_new(QWebEngineCertificateError* other);
void QWebEngineCertificateError_OperatorAssign(QWebEngineCertificateError* self, QWebEngineCertificateError* other);
int QWebEngineCertificateError_Type(const QWebEngineCertificateError* self);
QUrl* QWebEngineCertificateError_Url(const QWebEngineCertificateError* self);
bool QWebEngineCertificateError_IsOverridable(const QWebEngineCertificateError* self);
struct miqt_string QWebEngineCertificateError_Description(const QWebEngineCertificateError* self);
void QWebEngineCertificateError_Defer(QWebEngineCertificateError* self);
void QWebEngineCertificateError_RejectCertificate(QWebEngineCertificateError* self);
void QWebEngineCertificateError_AcceptCertificate(QWebEngineCertificateError* self);
struct miqt_array /* of QSslCertificate* */  QWebEngineCertificateError_CertificateChain(const QWebEngineCertificateError* self);
void QWebEngineCertificateError_Delete(QWebEngineCertificateError* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
