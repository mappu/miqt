#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLSERVER_H
#define MIQT_QT6_NETWORK_GEN_QSSLSERVER_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
class QSslServer;
class QSslSocket;
class QTcpServer;
class QTcpSocket;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QSslServer QSslServer;
typedef struct QSslSocket QSslSocket;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
#endif

QSslServer* QSslServer_new();
QSslServer* QSslServer_new2(QObject* parent);
void QSslServer_virtbase(QSslServer* src, QTcpServer** outptr_QTcpServer);
QMetaObject* QSslServer_metaObject(const QSslServer* self);
void* QSslServer_metacast(QSslServer* self, const char* param1);
struct miqt_string QSslServer_tr(const char* s);
void QSslServer_setSslConfiguration(QSslServer* self, QSslConfiguration* sslConfiguration);
QSslConfiguration* QSslServer_sslConfiguration(const QSslServer* self);
void QSslServer_setHandshakeTimeout(QSslServer* self, int timeout);
int QSslServer_handshakeTimeout(const QSslServer* self);
void QSslServer_sslErrors(QSslServer* self, QSslSocket* socket, struct miqt_array /* of QSslError* */  errors);
void QSslServer_connect_sslErrors(QSslServer* self, intptr_t slot);
void QSslServer_peerVerifyError(QSslServer* self, QSslSocket* socket, QSslError* error);
void QSslServer_connect_peerVerifyError(QSslServer* self, intptr_t slot);
void QSslServer_errorOccurred(QSslServer* self, QSslSocket* socket, int error);
void QSslServer_connect_errorOccurred(QSslServer* self, intptr_t slot);
void QSslServer_preSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator);
void QSslServer_connect_preSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot);
void QSslServer_alertSent(QSslServer* self, QSslSocket* socket, int level, int type, struct miqt_string description);
void QSslServer_connect_alertSent(QSslServer* self, intptr_t slot);
void QSslServer_alertReceived(QSslServer* self, QSslSocket* socket, int level, int type, struct miqt_string description);
void QSslServer_connect_alertReceived(QSslServer* self, intptr_t slot);
void QSslServer_handshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, QSslError* error);
void QSslServer_connect_handshakeInterruptedOnError(QSslServer* self, intptr_t slot);
void QSslServer_startedEncryptionHandshake(QSslServer* self, QSslSocket* socket);
void QSslServer_connect_startedEncryptionHandshake(QSslServer* self, intptr_t slot);
void QSslServer_incomingConnection(QSslServer* self, intptr_t socket);
struct miqt_string QSslServer_tr2(const char* s, const char* c);
struct miqt_string QSslServer_tr3(const char* s, const char* c, int n);
bool QSslServer_override_virtual_incomingConnection(void* self, intptr_t slot);
void QSslServer_virtualbase_incomingConnection(void* self, intptr_t socket);
bool QSslServer_override_virtual_hasPendingConnections(void* self, intptr_t slot);
bool QSslServer_virtualbase_hasPendingConnections(const void* self);
bool QSslServer_override_virtual_nextPendingConnection(void* self, intptr_t slot);
QTcpSocket* QSslServer_virtualbase_nextPendingConnection(void* self);
bool QSslServer_override_virtual_event(void* self, intptr_t slot);
bool QSslServer_virtualbase_event(void* self, QEvent* event);
bool QSslServer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSslServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSslServer_override_virtual_timerEvent(void* self, intptr_t slot);
void QSslServer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSslServer_override_virtual_childEvent(void* self, intptr_t slot);
void QSslServer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSslServer_override_virtual_customEvent(void* self, intptr_t slot);
void QSslServer_virtualbase_customEvent(void* self, QEvent* event);
bool QSslServer_override_virtual_connectNotify(void* self, intptr_t slot);
void QSslServer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSslServer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSslServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSslServer_delete(QSslServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
