#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESELECTION_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESELECTION_H

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
class QWebEngineClientCertificateSelection;
#else
typedef struct QSslCertificate QSslCertificate;
typedef struct QUrl QUrl;
typedef struct QWebEngineClientCertificateSelection QWebEngineClientCertificateSelection;
#endif

QWebEngineClientCertificateSelection* QWebEngineClientCertificateSelection_new(QWebEngineClientCertificateSelection* param1);
void QWebEngineClientCertificateSelection_operatorAssign(QWebEngineClientCertificateSelection* self, QWebEngineClientCertificateSelection* param1);
QUrl* QWebEngineClientCertificateSelection_host(const QWebEngineClientCertificateSelection* self);
void QWebEngineClientCertificateSelection_select(QWebEngineClientCertificateSelection* self, QSslCertificate* certificate);
void QWebEngineClientCertificateSelection_selectNone(QWebEngineClientCertificateSelection* self);
struct miqt_array /* of QSslCertificate* */  QWebEngineClientCertificateSelection_certificates(const QWebEngineClientCertificateSelection* self);

void QWebEngineClientCertificateSelection_delete(QWebEngineClientCertificateSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
