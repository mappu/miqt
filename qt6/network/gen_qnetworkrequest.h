#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKREQUEST_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QHttp2Configuration;
class QNetworkRequest;
class QObject;
class QSslConfiguration;
class QUrl;
class QVariant;
#else
typedef struct QByteArray QByteArray;
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
void QNetworkRequest_OperatorAssign(QNetworkRequest* self, QNetworkRequest* other);
void QNetworkRequest_Swap(QNetworkRequest* self, QNetworkRequest* other);
bool QNetworkRequest_OperatorEqual(const QNetworkRequest* self, QNetworkRequest* other);
bool QNetworkRequest_OperatorNotEqual(const QNetworkRequest* self, QNetworkRequest* other);
QUrl* QNetworkRequest_Url(const QNetworkRequest* self);
void QNetworkRequest_SetUrl(QNetworkRequest* self, QUrl* url);
QVariant* QNetworkRequest_Header(const QNetworkRequest* self, int header);
void QNetworkRequest_SetHeader(QNetworkRequest* self, int header, QVariant* value);
bool QNetworkRequest_HasRawHeader(const QNetworkRequest* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_string */  QNetworkRequest_RawHeaderList(const QNetworkRequest* self);
struct miqt_string QNetworkRequest_RawHeader(const QNetworkRequest* self, struct miqt_string headerName);
void QNetworkRequest_SetRawHeader(QNetworkRequest* self, struct miqt_string headerName, struct miqt_string value);
QVariant* QNetworkRequest_Attribute(const QNetworkRequest* self, int code);
void QNetworkRequest_SetAttribute(QNetworkRequest* self, int code, QVariant* value);
QSslConfiguration* QNetworkRequest_SslConfiguration(const QNetworkRequest* self);
void QNetworkRequest_SetSslConfiguration(QNetworkRequest* self, QSslConfiguration* configuration);
void QNetworkRequest_SetOriginatingObject(QNetworkRequest* self, QObject* object);
QObject* QNetworkRequest_OriginatingObject(const QNetworkRequest* self);
int QNetworkRequest_Priority(const QNetworkRequest* self);
void QNetworkRequest_SetPriority(QNetworkRequest* self, int priority);
int QNetworkRequest_MaximumRedirectsAllowed(const QNetworkRequest* self);
void QNetworkRequest_SetMaximumRedirectsAllowed(QNetworkRequest* self, int maximumRedirectsAllowed);
struct miqt_string QNetworkRequest_PeerVerifyName(const QNetworkRequest* self);
void QNetworkRequest_SetPeerVerifyName(QNetworkRequest* self, struct miqt_string peerName);
QHttp2Configuration* QNetworkRequest_Http2Configuration(const QNetworkRequest* self);
void QNetworkRequest_SetHttp2Configuration(QNetworkRequest* self, QHttp2Configuration* configuration);
long long QNetworkRequest_DecompressedSafetyCheckThreshold(const QNetworkRequest* self);
void QNetworkRequest_SetDecompressedSafetyCheckThreshold(QNetworkRequest* self, long long threshold);
int QNetworkRequest_TransferTimeout(const QNetworkRequest* self);
void QNetworkRequest_SetTransferTimeout(QNetworkRequest* self);
QVariant* QNetworkRequest_Attribute2(const QNetworkRequest* self, int code, QVariant* defaultValue);
void QNetworkRequest_SetTransferTimeout1(QNetworkRequest* self, int timeout);
void QNetworkRequest_Delete(QNetworkRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
