#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QTCPSERVER_H
#define MIQT_QT_NETWORK_GEN_QTCPSERVER_H

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
class QTcpServer;
class QTcpSocket;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
#endif

QTcpServer* QTcpServer_new();
QTcpServer* QTcpServer_new2(QObject* parent);
void QTcpServer_virtbase(QTcpServer* src, QObject** outptr_QObject);
QMetaObject* QTcpServer_metaObject(const QTcpServer* self);
void* QTcpServer_metacast(QTcpServer* self, const char* param1);
struct miqt_string QTcpServer_tr(const char* s);
struct miqt_string QTcpServer_trUtf8(const char* s);
bool QTcpServer_listen(QTcpServer* self);
void QTcpServer_close(QTcpServer* self);
bool QTcpServer_isListening(const QTcpServer* self);
void QTcpServer_setMaxPendingConnections(QTcpServer* self, int numConnections);
int QTcpServer_maxPendingConnections(const QTcpServer* self);
uint16_t QTcpServer_serverPort(const QTcpServer* self);
QHostAddress* QTcpServer_serverAddress(const QTcpServer* self);
intptr_t QTcpServer_socketDescriptor(const QTcpServer* self);
bool QTcpServer_setSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor);
bool QTcpServer_waitForNewConnection(QTcpServer* self);
bool QTcpServer_hasPendingConnections(const QTcpServer* self);
QTcpSocket* QTcpServer_nextPendingConnection(QTcpServer* self);
int QTcpServer_serverError(const QTcpServer* self);
struct miqt_string QTcpServer_errorString(const QTcpServer* self);
void QTcpServer_pauseAccepting(QTcpServer* self);
void QTcpServer_resumeAccepting(QTcpServer* self);
void QTcpServer_setProxy(QTcpServer* self, QNetworkProxy* networkProxy);
QNetworkProxy* QTcpServer_proxy(const QTcpServer* self);
void QTcpServer_incomingConnection(QTcpServer* self, intptr_t handle);
void QTcpServer_newConnection(QTcpServer* self);
void QTcpServer_connect_newConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_acceptError(QTcpServer* self, int socketError);
void QTcpServer_connect_acceptError(QTcpServer* self, intptr_t slot);
struct miqt_string QTcpServer_tr2(const char* s, const char* c);
struct miqt_string QTcpServer_tr3(const char* s, const char* c, int n);
struct miqt_string QTcpServer_trUtf82(const char* s, const char* c);
struct miqt_string QTcpServer_trUtf83(const char* s, const char* c, int n);
bool QTcpServer_listenWithAddress(QTcpServer* self, QHostAddress* address);
bool QTcpServer_listen2(QTcpServer* self, QHostAddress* address, uint16_t port);
bool QTcpServer_waitForNewConnectionWithMsec(QTcpServer* self, int msec);
bool QTcpServer_waitForNewConnection2(QTcpServer* self, int msec, bool* timedOut);
bool QTcpServer_override_virtual_hasPendingConnections(void* self, intptr_t slot);
bool QTcpServer_virtualbase_hasPendingConnections(const void* self);
bool QTcpServer_override_virtual_nextPendingConnection(void* self, intptr_t slot);
QTcpSocket* QTcpServer_virtualbase_nextPendingConnection(void* self);
bool QTcpServer_override_virtual_incomingConnection(void* self, intptr_t slot);
void QTcpServer_virtualbase_incomingConnection(void* self, intptr_t handle);
bool QTcpServer_override_virtual_event(void* self, intptr_t slot);
bool QTcpServer_virtualbase_event(void* self, QEvent* event);
bool QTcpServer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTcpServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTcpServer_override_virtual_timerEvent(void* self, intptr_t slot);
void QTcpServer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTcpServer_override_virtual_childEvent(void* self, intptr_t slot);
void QTcpServer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTcpServer_override_virtual_customEvent(void* self, intptr_t slot);
void QTcpServer_virtualbase_customEvent(void* self, QEvent* event);
bool QTcpServer_override_virtual_connectNotify(void* self, intptr_t slot);
void QTcpServer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTcpServer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTcpServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTcpServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket);
QObject* QTcpServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTcpServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTcpServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTcpServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QTcpServer_delete(QTcpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
