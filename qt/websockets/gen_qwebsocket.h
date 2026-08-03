#pragma once
#ifndef MIQT_QT_WEBSOCKETS_GEN_QWEBSOCKET_H
#define MIQT_QT_WEBSOCKETS_GEN_QWEBSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAuthenticator;
class QChildEvent;
class QEvent;
class QHostAddress;
class QMaskGenerator;
class QMetaMethod;
class QMetaObject;
class QNetworkProxy;
class QNetworkRequest;
class QObject;
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
class QTimerEvent;
class QUrl;
class QWebSocket;
#else
typedef struct QAuthenticator QAuthenticator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMaskGenerator QMaskGenerator;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebSocket QWebSocket;
#endif

QWebSocket* QWebSocket_new();
QWebSocket* QWebSocket_new2(struct miqt_string origin);
QWebSocket* QWebSocket_new3(struct miqt_string origin, int version);
QWebSocket* QWebSocket_new4(struct miqt_string origin, int version, QObject* parent);
void QWebSocket_virtbase(QWebSocket* src, QObject** outptr_QObject);
QMetaObject* QWebSocket_metaObject(const QWebSocket* self);
void* QWebSocket_metacast(QWebSocket* self, const char* param1);
struct miqt_string QWebSocket_tr(const char* s);
struct miqt_string QWebSocket_trUtf8(const char* s);
void QWebSocket_abort(QWebSocket* self);
int QWebSocket_error(const QWebSocket* self);
struct miqt_string QWebSocket_errorString(const QWebSocket* self);
bool QWebSocket_flush(QWebSocket* self);
bool QWebSocket_isValid(const QWebSocket* self);
QHostAddress* QWebSocket_localAddress(const QWebSocket* self);
unsigned short QWebSocket_localPort(const QWebSocket* self);
int QWebSocket_pauseMode(const QWebSocket* self);
QHostAddress* QWebSocket_peerAddress(const QWebSocket* self);
struct miqt_string QWebSocket_peerName(const QWebSocket* self);
unsigned short QWebSocket_peerPort(const QWebSocket* self);
QNetworkProxy* QWebSocket_proxy(const QWebSocket* self);
void QWebSocket_setProxy(QWebSocket* self, QNetworkProxy* networkProxy);
void QWebSocket_setMaskGenerator(QWebSocket* self, QMaskGenerator* maskGenerator);
QMaskGenerator* QWebSocket_maskGenerator(const QWebSocket* self);
long long QWebSocket_readBufferSize(const QWebSocket* self);
void QWebSocket_setReadBufferSize(QWebSocket* self, long long size);
void QWebSocket_resume(QWebSocket* self);
void QWebSocket_setPauseMode(QWebSocket* self, int pauseMode);
int QWebSocket_state(const QWebSocket* self);
int QWebSocket_version(const QWebSocket* self);
struct miqt_string QWebSocket_resourceName(const QWebSocket* self);
QUrl* QWebSocket_requestUrl(const QWebSocket* self);
QNetworkRequest* QWebSocket_request(const QWebSocket* self);
struct miqt_string QWebSocket_origin(const QWebSocket* self);
int QWebSocket_closeCode(const QWebSocket* self);
struct miqt_string QWebSocket_closeReason(const QWebSocket* self);
long long QWebSocket_sendTextMessage(QWebSocket* self, struct miqt_string message);
long long QWebSocket_sendBinaryMessage(QWebSocket* self, struct miqt_string data);
void QWebSocket_ignoreSslErrors(QWebSocket* self, struct miqt_array /* of QSslError* */  errors);
void QWebSocket_setSslConfiguration(QWebSocket* self, QSslConfiguration* sslConfiguration);
QSslConfiguration* QWebSocket_sslConfiguration(const QWebSocket* self);
long long QWebSocket_bytesToWrite(const QWebSocket* self);
void QWebSocket_setMaxAllowedIncomingFrameSize(QWebSocket* self, unsigned long long maxAllowedIncomingFrameSize);
unsigned long long QWebSocket_maxAllowedIncomingFrameSize(const QWebSocket* self);
void QWebSocket_setMaxAllowedIncomingMessageSize(QWebSocket* self, unsigned long long maxAllowedIncomingMessageSize);
unsigned long long QWebSocket_maxAllowedIncomingMessageSize(const QWebSocket* self);
unsigned long long QWebSocket_maxIncomingMessageSize();
unsigned long long QWebSocket_maxIncomingFrameSize();
void QWebSocket_setOutgoingFrameSize(QWebSocket* self, unsigned long long outgoingFrameSize);
unsigned long long QWebSocket_outgoingFrameSize(const QWebSocket* self);
unsigned long long QWebSocket_maxOutgoingFrameSize();
void QWebSocket_close(QWebSocket* self);
void QWebSocket_open(QWebSocket* self, QUrl* url);
void QWebSocket_openWithRequest(QWebSocket* self, QNetworkRequest* request);
void QWebSocket_ping(QWebSocket* self);
void QWebSocket_ignoreSslErrors2(QWebSocket* self);
void QWebSocket_aboutToClose(QWebSocket* self);
void QWebSocket_connect_aboutToClose(QWebSocket* self, intptr_t slot);
void QWebSocket_connected(QWebSocket* self);
void QWebSocket_connect_connected(QWebSocket* self, intptr_t slot);
void QWebSocket_disconnected(QWebSocket* self);
void QWebSocket_connect_disconnected(QWebSocket* self, intptr_t slot);
void QWebSocket_stateChanged(QWebSocket* self, int state);
void QWebSocket_connect_stateChanged(QWebSocket* self, intptr_t slot);
void QWebSocket_proxyAuthenticationRequired(QWebSocket* self, QNetworkProxy* proxy, QAuthenticator* pAuthenticator);
void QWebSocket_connect_proxyAuthenticationRequired(QWebSocket* self, intptr_t slot);
void QWebSocket_readChannelFinished(QWebSocket* self);
void QWebSocket_connect_readChannelFinished(QWebSocket* self, intptr_t slot);
void QWebSocket_textFrameReceived(QWebSocket* self, struct miqt_string frame, bool isLastFrame);
void QWebSocket_connect_textFrameReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_binaryFrameReceived(QWebSocket* self, struct miqt_string frame, bool isLastFrame);
void QWebSocket_connect_binaryFrameReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_textMessageReceived(QWebSocket* self, struct miqt_string message);
void QWebSocket_connect_textMessageReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_binaryMessageReceived(QWebSocket* self, struct miqt_string message);
void QWebSocket_connect_binaryMessageReceived(QWebSocket* self, intptr_t slot);
void QWebSocket_errorWithError(QWebSocket* self, int error);
void QWebSocket_connect_errorWithError(QWebSocket* self, intptr_t slot);
void QWebSocket_pong(QWebSocket* self, unsigned long long elapsedTime, struct miqt_string payload);
void QWebSocket_connect_pong(QWebSocket* self, intptr_t slot);
void QWebSocket_bytesWritten(QWebSocket* self, long long bytes);
void QWebSocket_connect_bytesWritten(QWebSocket* self, intptr_t slot);
void QWebSocket_sslErrors(QWebSocket* self, struct miqt_array /* of QSslError* */  errors);
void QWebSocket_connect_sslErrors(QWebSocket* self, intptr_t slot);
void QWebSocket_preSharedKeyAuthenticationRequired(QWebSocket* self, QSslPreSharedKeyAuthenticator* authenticator);
void QWebSocket_connect_preSharedKeyAuthenticationRequired(QWebSocket* self, intptr_t slot);
struct miqt_string QWebSocket_tr2(const char* s, const char* c);
struct miqt_string QWebSocket_tr3(const char* s, const char* c, int n);
struct miqt_string QWebSocket_trUtf82(const char* s, const char* c);
struct miqt_string QWebSocket_trUtf83(const char* s, const char* c, int n);
void QWebSocket_closeWithCloseCode(QWebSocket* self, int closeCode);
void QWebSocket_close2(QWebSocket* self, int closeCode, struct miqt_string reason);
void QWebSocket_pingWithPayload(QWebSocket* self, struct miqt_string payload);

bool QWebSocket_override_virtual_event(void* self, intptr_t slot);
bool QWebSocket_virtualbase_event(void* self, QEvent* event);
bool QWebSocket_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebSocket_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebSocket_override_virtual_childEvent(void* self, intptr_t slot);
void QWebSocket_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebSocket_override_virtual_customEvent(void* self, intptr_t slot);
void QWebSocket_virtualbase_customEvent(void* self, QEvent* event);
bool QWebSocket_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebSocket_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWebSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWebSocket_delete(QWebSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
