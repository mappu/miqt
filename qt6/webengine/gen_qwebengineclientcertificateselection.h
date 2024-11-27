#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESELECTION_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESELECTION_H

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

void QWebEngineClientCertificateSelection_new(QWebEngineClientCertificateSelection* param1, QWebEngineClientCertificateSelection** outptr_QWebEngineClientCertificateSelection);
void QWebEngineClientCertificateSelection_OperatorAssign(QWebEngineClientCertificateSelection* self, QWebEngineClientCertificateSelection* param1);
QUrl* QWebEngineClientCertificateSelection_Host(const QWebEngineClientCertificateSelection* self);
void QWebEngineClientCertificateSelection_Select(QWebEngineClientCertificateSelection* self, QSslCertificate* certificate);
void QWebEngineClientCertificateSelection_SelectNone(QWebEngineClientCertificateSelection* self);
struct miqt_array /* of QSslCertificate* */  QWebEngineClientCertificateSelection_Certificates(const QWebEngineClientCertificateSelection* self);
void QWebEngineClientCertificateSelection_Delete(QWebEngineClientCertificateSelection* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
