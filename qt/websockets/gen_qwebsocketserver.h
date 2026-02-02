#pragma once
#ifndef MIQT_QT_WEBSOCKETS_GEN_QWEBSOCKETSERVER_H
#define MIQT_QT_WEBSOCKETS_GEN_QWEBSOCKETSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QHostAddress;
class QMetaMethod;
class QMetaObject;
class QNetworkProxy;
class QObject;
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
class QTcpSocket;
class QTimerEvent;
class QUrl;
class QWebSocket;
class QWebSocketCorsAuthenticator;
class QWebSocketServer;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebSocket QWebSocket;
typedef struct QWebSocketCorsAuthenticator QWebSocketCorsAuthenticator;
typedef struct QWebSocketServer QWebSocketServer;
#endif

QWebSocketServer* QWebSocketServer_new(struct miqt_string serverName, int secureMode);
QWebSocketServer* QWebSocketServer_new2(struct miqt_string serverName, int secureMode, QObject* parent);
void QWebSocketServer_virtbase(QWebSocketServer* src, QObject** outptr_QObject);
QMetaObject* QWebSocketServer_metaObject(const QWebSocketServer* self);
void* QWebSocketServer_metacast(QWebSocketServer* self, const char* param1);
struct miqt_string QWebSocketServer_tr(const char* s);
struct miqt_string QWebSocketServer_trUtf8(const char* s);
bool QWebSocketServer_listen(QWebSocketServer* self);
void QWebSocketServer_close(QWebSocketServer* self);
bool QWebSocketServer_isListening(const QWebSocketServer* self);
void QWebSocketServer_setMaxPendingConnections(QWebSocketServer* self, int numConnections);
int QWebSocketServer_maxPendingConnections(const QWebSocketServer* self);
void QWebSocketServer_setHandshakeTimeoutWithMsec(QWebSocketServer* self, int msec);
int QWebSocketServer_handshakeTimeoutMS(const QWebSocketServer* self);
unsigned short QWebSocketServer_serverPort(const QWebSocketServer* self);
QHostAddress* QWebSocketServer_serverAddress(const QWebSocketServer* self);
QUrl* QWebSocketServer_serverUrl(const QWebSocketServer* self);
int QWebSocketServer_secureMode(const QWebSocketServer* self);
bool QWebSocketServer_setSocketDescriptor(QWebSocketServer* self, int socketDescriptor);
int QWebSocketServer_socketDescriptor(const QWebSocketServer* self);
bool QWebSocketServer_setNativeDescriptor(QWebSocketServer* self, intptr_t descriptor);
intptr_t QWebSocketServer_nativeDescriptor(const QWebSocketServer* self);
bool QWebSocketServer_hasPendingConnections(const QWebSocketServer* self);
QWebSocket* QWebSocketServer_nextPendingConnection(QWebSocketServer* self);
int QWebSocketServer_error(const QWebSocketServer* self);
struct miqt_string QWebSocketServer_errorString(const QWebSocketServer* self);
void QWebSocketServer_pauseAccepting(QWebSocketServer* self);
void QWebSocketServer_resumeAccepting(QWebSocketServer* self);
void QWebSocketServer_setServerName(QWebSocketServer* self, struct miqt_string serverName);
struct miqt_string QWebSocketServer_serverName(const QWebSocketServer* self);
void QWebSocketServer_setProxy(QWebSocketServer* self, QNetworkProxy* networkProxy);
QNetworkProxy* QWebSocketServer_proxy(const QWebSocketServer* self);
void QWebSocketServer_setSslConfiguration(QWebSocketServer* self, QSslConfiguration* sslConfiguration);
QSslConfiguration* QWebSocketServer_sslConfiguration(const QWebSocketServer* self);
struct miqt_array /* of int */  QWebSocketServer_supportedVersions(const QWebSocketServer* self);
void QWebSocketServer_handleConnection(const QWebSocketServer* self, QTcpSocket* socket);
void QWebSocketServer_acceptError(QWebSocketServer* self, int socketError);
void QWebSocketServer_connect_acceptError(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_serverError(QWebSocketServer* self, int closeCode);
void QWebSocketServer_connect_serverError(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_originAuthenticationRequired(QWebSocketServer* self, QWebSocketCorsAuthenticator* pAuthenticator);
void QWebSocketServer_connect_originAuthenticationRequired(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_newConnection(QWebSocketServer* self);
void QWebSocketServer_connect_newConnection(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_peerVerifyError(QWebSocketServer* self, QSslError* error);
void QWebSocketServer_connect_peerVerifyError(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_sslErrors(QWebSocketServer* self, struct miqt_array /* of QSslError* */  errors);
void QWebSocketServer_connect_sslErrors(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_preSharedKeyAuthenticationRequired(QWebSocketServer* self, QSslPreSharedKeyAuthenticator* authenticator);
void QWebSocketServer_connect_preSharedKeyAuthenticationRequired(QWebSocketServer* self, intptr_t slot);
void QWebSocketServer_closed(QWebSocketServer* self);
void QWebSocketServer_connect_closed(QWebSocketServer* self, intptr_t slot);
struct miqt_string QWebSocketServer_tr2(const char* s, const char* c);
struct miqt_string QWebSocketServer_tr3(const char* s, const char* c, int n);
struct miqt_string QWebSocketServer_trUtf82(const char* s, const char* c);
struct miqt_string QWebSocketServer_trUtf83(const char* s, const char* c, int n);
bool QWebSocketServer_listenWithAddress(QWebSocketServer* self, QHostAddress* address);
bool QWebSocketServer_listen2(QWebSocketServer* self, QHostAddress* address, unsigned short port);

bool QWebSocketServer_override_virtual_nextPendingConnection(void* self, intptr_t slot);
QWebSocket* QWebSocketServer_virtualbase_nextPendingConnection(void* self);
bool QWebSocketServer_override_virtual_event(void* self, intptr_t slot);
bool QWebSocketServer_virtualbase_event(void* self, QEvent* event);
bool QWebSocketServer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebSocketServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebSocketServer_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebSocketServer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebSocketServer_override_virtual_childEvent(void* self, intptr_t slot);
void QWebSocketServer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebSocketServer_override_virtual_customEvent(void* self, intptr_t slot);
void QWebSocketServer_virtualbase_customEvent(void* self, QEvent* event);
bool QWebSocketServer_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebSocketServer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebSocketServer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebSocketServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWebSocketServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebSocketServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebSocketServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebSocketServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWebSocketServer_delete(QWebSocketServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
