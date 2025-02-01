#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESTORE_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESTORE_H

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
class QSslKey;
class QWebEngineClientCertificateStore;
#else
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslKey QSslKey;
typedef struct QWebEngineClientCertificateStore QWebEngineClientCertificateStore;
#endif

void QWebEngineClientCertificateStore_add(QWebEngineClientCertificateStore* self, QSslCertificate* certificate, QSslKey* privateKey);
struct miqt_array /* of QSslCertificate* */  QWebEngineClientCertificateStore_certificates(const QWebEngineClientCertificateStore* self);
void QWebEngineClientCertificateStore_remove(QWebEngineClientCertificateStore* self, QSslCertificate* certificate);
void QWebEngineClientCertificateStore_clear(QWebEngineClientCertificateStore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
