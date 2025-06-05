#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKREQUEST_H
#define MIQT_QT_NETWORK_GEN_QNETWORKREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHttp2Configuration;
class QNetworkRequest;
class QObject;
class QSslConfiguration;
class QUrl;
class QVariant;
#else
typedef struct QHttp2Configuration QHttp2Configuration;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QNetworkRequest* QNetworkRequest_new();
QNetworkRequest* QNetworkRequest_new2(QUrl* url);
QNetworkRequest* QNetworkRequest_new3(QNetworkRequest* other);
void QNetworkRequest_operatorAssign(QNetworkRequest* self, QNetworkRequest* other);
void QNetworkRequest_swap(QNetworkRequest* self, QNetworkRequest* other);
bool QNetworkRequest_operatorEqual(const QNetworkRequest* self, QNetworkRequest* other);
bool QNetworkRequest_operatorNotEqual(const QNetworkRequest* self, QNetworkRequest* other);
QUrl* QNetworkRequest_url(const QNetworkRequest* self);
void QNetworkRequest_setUrl(QNetworkRequest* self, QUrl* url);
QVariant* QNetworkRequest_header(const QNetworkRequest* self, int header);
void QNetworkRequest_setHeader(QNetworkRequest* self, int header, QVariant* value);
bool QNetworkRequest_hasRawHeader(const QNetworkRequest* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_string */  QNetworkRequest_rawHeaderList(const QNetworkRequest* self);
struct miqt_string QNetworkRequest_rawHeader(const QNetworkRequest* self, struct miqt_string headerName);
void QNetworkRequest_setRawHeader(QNetworkRequest* self, struct miqt_string headerName, struct miqt_string value);
QVariant* QNetworkRequest_attribute(const QNetworkRequest* self, int code);
void QNetworkRequest_setAttribute(QNetworkRequest* self, int code, QVariant* value);
QSslConfiguration* QNetworkRequest_sslConfiguration(const QNetworkRequest* self);
void QNetworkRequest_setSslConfiguration(QNetworkRequest* self, QSslConfiguration* configuration);
void QNetworkRequest_setOriginatingObject(QNetworkRequest* self, QObject* object);
QObject* QNetworkRequest_originatingObject(const QNetworkRequest* self);
int QNetworkRequest_priority(const QNetworkRequest* self);
void QNetworkRequest_setPriority(QNetworkRequest* self, int priority);
int QNetworkRequest_maximumRedirectsAllowed(const QNetworkRequest* self);
void QNetworkRequest_setMaximumRedirectsAllowed(QNetworkRequest* self, int maximumRedirectsAllowed);
struct miqt_string QNetworkRequest_peerVerifyName(const QNetworkRequest* self);
void QNetworkRequest_setPeerVerifyName(QNetworkRequest* self, struct miqt_string peerName);
QHttp2Configuration* QNetworkRequest_http2Configuration(const QNetworkRequest* self);
void QNetworkRequest_setHttp2Configuration(QNetworkRequest* self, QHttp2Configuration* configuration);
int QNetworkRequest_transferTimeout(const QNetworkRequest* self);
void QNetworkRequest_setTransferTimeout(QNetworkRequest* self);
QVariant* QNetworkRequest_attribute2(const QNetworkRequest* self, int code, QVariant* defaultValue);
void QNetworkRequest_setTransferTimeoutWithTimeout(QNetworkRequest* self, int timeout);

void QNetworkRequest_delete(QNetworkRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
