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
void QWebEngineCertificateError_operatorAssign(QWebEngineCertificateError* self, QWebEngineCertificateError* other);
int QWebEngineCertificateError_type(const QWebEngineCertificateError* self);
QUrl* QWebEngineCertificateError_url(const QWebEngineCertificateError* self);
bool QWebEngineCertificateError_isOverridable(const QWebEngineCertificateError* self);
struct miqt_string QWebEngineCertificateError_description(const QWebEngineCertificateError* self);
void QWebEngineCertificateError_defer(QWebEngineCertificateError* self);
void QWebEngineCertificateError_rejectCertificate(QWebEngineCertificateError* self);
void QWebEngineCertificateError_acceptCertificate(QWebEngineCertificateError* self);
struct miqt_array /* of QSslCertificate* */  QWebEngineCertificateError_certificateChain(const QWebEngineCertificateError* self);
void QWebEngineCertificateError_delete(QWebEngineCertificateError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
