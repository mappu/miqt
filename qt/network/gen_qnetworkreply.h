#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKREPLY_H
#define MIQT_QT_NETWORK_GEN_QNETWORKREPLY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QMetaObject;
class QNetworkAccessManager;
class QNetworkReply;
class QNetworkRequest;
class QObject;
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
class QUrl;
class QVariant;
#else
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

void QNetworkReply_virtbase(QNetworkReply* src, QIODevice** outptr_QIODevice);
QMetaObject* QNetworkReply_metaObject(const QNetworkReply* self);
void* QNetworkReply_metacast(QNetworkReply* self, const char* param1);
struct miqt_string QNetworkReply_tr(const char* s);
struct miqt_string QNetworkReply_trUtf8(const char* s);
void QNetworkReply_close(QNetworkReply* self);
bool QNetworkReply_isSequential(const QNetworkReply* self);
long long QNetworkReply_readBufferSize(const QNetworkReply* self);
void QNetworkReply_setReadBufferSize(QNetworkReply* self, long long size);
QNetworkAccessManager* QNetworkReply_manager(const QNetworkReply* self);
int QNetworkReply_operation(const QNetworkReply* self);
QNetworkRequest* QNetworkReply_request(const QNetworkReply* self);
int QNetworkReply_error(const QNetworkReply* self);
bool QNetworkReply_isFinished(const QNetworkReply* self);
bool QNetworkReply_isRunning(const QNetworkReply* self);
QUrl* QNetworkReply_url(const QNetworkReply* self);
QVariant* QNetworkReply_header(const QNetworkReply* self, int header);
bool QNetworkReply_hasRawHeader(const QNetworkReply* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_string */  QNetworkReply_rawHeaderList(const QNetworkReply* self);
struct miqt_string QNetworkReply_rawHeader(const QNetworkReply* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QNetworkReply_rawHeaderPairs(const QNetworkReply* self);
QVariant* QNetworkReply_attribute(const QNetworkReply* self, int code);
QSslConfiguration* QNetworkReply_sslConfiguration(const QNetworkReply* self);
void QNetworkReply_setSslConfiguration(QNetworkReply* self, QSslConfiguration* configuration);
void QNetworkReply_ignoreSslErrors(QNetworkReply* self, struct miqt_array /* of QSslError* */  errors);
void QNetworkReply_abort(QNetworkReply* self);
void QNetworkReply_ignoreSslErrors2(QNetworkReply* self);
void QNetworkReply_metaDataChanged(QNetworkReply* self);
void QNetworkReply_connect_metaDataChanged(QNetworkReply* self, intptr_t slot);
void QNetworkReply_finished(QNetworkReply* self);
void QNetworkReply_connect_finished(QNetworkReply* self, intptr_t slot);
void QNetworkReply_errorWithQNetworkReplyNetworkError(QNetworkReply* self, int param1);
void QNetworkReply_connect_errorWithQNetworkReplyNetworkError(QNetworkReply* self, intptr_t slot);
void QNetworkReply_errorOccurred(QNetworkReply* self, int param1);
void QNetworkReply_connect_errorOccurred(QNetworkReply* self, intptr_t slot);
void QNetworkReply_encrypted(QNetworkReply* self);
void QNetworkReply_connect_encrypted(QNetworkReply* self, intptr_t slot);
void QNetworkReply_sslErrors(QNetworkReply* self, struct miqt_array /* of QSslError* */  errors);
void QNetworkReply_connect_sslErrors(QNetworkReply* self, intptr_t slot);
void QNetworkReply_preSharedKeyAuthenticationRequired(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator);
void QNetworkReply_connect_preSharedKeyAuthenticationRequired(QNetworkReply* self, intptr_t slot);
void QNetworkReply_redirected(QNetworkReply* self, QUrl* url);
void QNetworkReply_connect_redirected(QNetworkReply* self, intptr_t slot);
void QNetworkReply_redirectAllowed(QNetworkReply* self);
void QNetworkReply_connect_redirectAllowed(QNetworkReply* self, intptr_t slot);
void QNetworkReply_uploadProgress(QNetworkReply* self, long long bytesSent, long long bytesTotal);
void QNetworkReply_connect_uploadProgress(QNetworkReply* self, intptr_t slot);
void QNetworkReply_downloadProgress(QNetworkReply* self, long long bytesReceived, long long bytesTotal);
void QNetworkReply_connect_downloadProgress(QNetworkReply* self, intptr_t slot);
long long QNetworkReply_writeData(QNetworkReply* self, const char* data, long long len);
void QNetworkReply_sslConfigurationImplementation(const QNetworkReply* self, QSslConfiguration* param1);
void QNetworkReply_setSslConfigurationImplementation(QNetworkReply* self, QSslConfiguration* sslConfigurationImplementation);
void QNetworkReply_ignoreSslErrorsImplementation(QNetworkReply* self, struct miqt_array /* of QSslError* */  param1);
struct miqt_string QNetworkReply_tr2(const char* s, const char* c);
struct miqt_string QNetworkReply_tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkReply_trUtf82(const char* s, const char* c);
struct miqt_string QNetworkReply_trUtf83(const char* s, const char* c, int n);
void QNetworkReply_delete(QNetworkReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
