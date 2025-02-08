#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QLOCALSERVER_H
#define MIQT_QT6_NETWORK_GEN_QLOCALSERVER_H

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
class QLocalServer;
class QLocalSocket;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocalServer QLocalServer;
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLocalServer* QLocalServer_new();
QLocalServer* QLocalServer_new2(QObject* parent);
void QLocalServer_virtbase(QLocalServer* src, QObject** outptr_QObject);
QMetaObject* QLocalServer_metaObject(const QLocalServer* self);
void* QLocalServer_metacast(QLocalServer* self, const char* param1);
struct miqt_string QLocalServer_tr(const char* s);
void QLocalServer_newConnection(QLocalServer* self);
void QLocalServer_connect_newConnection(QLocalServer* self, intptr_t slot);
void QLocalServer_close(QLocalServer* self);
struct miqt_string QLocalServer_errorString(const QLocalServer* self);
bool QLocalServer_hasPendingConnections(const QLocalServer* self);
bool QLocalServer_isListening(const QLocalServer* self);
bool QLocalServer_listen(QLocalServer* self, struct miqt_string name);
bool QLocalServer_listenWithSocketDescriptor(QLocalServer* self, intptr_t socketDescriptor);
int QLocalServer_maxPendingConnections(const QLocalServer* self);
QLocalSocket* QLocalServer_nextPendingConnection(QLocalServer* self);
struct miqt_string QLocalServer_serverName(const QLocalServer* self);
struct miqt_string QLocalServer_fullServerName(const QLocalServer* self);
bool QLocalServer_removeServer(struct miqt_string name);
int QLocalServer_serverError(const QLocalServer* self);
void QLocalServer_setMaxPendingConnections(QLocalServer* self, int numConnections);
bool QLocalServer_waitForNewConnection(QLocalServer* self);
void QLocalServer_setListenBacklogSize(QLocalServer* self, int size);
int QLocalServer_listenBacklogSize(const QLocalServer* self);
void QLocalServer_setSocketOptions(QLocalServer* self, int options);
int QLocalServer_socketOptions(const QLocalServer* self);
intptr_t QLocalServer_socketDescriptor(const QLocalServer* self);
void QLocalServer_incomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
struct miqt_string QLocalServer_tr2(const char* s, const char* c);
struct miqt_string QLocalServer_tr3(const char* s, const char* c, int n);
bool QLocalServer_waitForNewConnection1(QLocalServer* self, int msec);
bool QLocalServer_waitForNewConnection2(QLocalServer* self, int msec, bool* timedOut);
bool QLocalServer_override_virtual_hasPendingConnections(void* self, intptr_t slot);
bool QLocalServer_virtualbase_hasPendingConnections(const void* self);
bool QLocalServer_override_virtual_nextPendingConnection(void* self, intptr_t slot);
QLocalSocket* QLocalServer_virtualbase_nextPendingConnection(void* self);
bool QLocalServer_override_virtual_incomingConnection(void* self, intptr_t slot);
void QLocalServer_virtualbase_incomingConnection(void* self, uintptr_t socketDescriptor);
bool QLocalServer_override_virtual_event(void* self, intptr_t slot);
bool QLocalServer_virtualbase_event(void* self, QEvent* event);
bool QLocalServer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLocalServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLocalServer_override_virtual_timerEvent(void* self, intptr_t slot);
void QLocalServer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLocalServer_override_virtual_childEvent(void* self, intptr_t slot);
void QLocalServer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QLocalServer_override_virtual_customEvent(void* self, intptr_t slot);
void QLocalServer_virtualbase_customEvent(void* self, QEvent* event);
bool QLocalServer_override_virtual_connectNotify(void* self, intptr_t slot);
void QLocalServer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLocalServer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLocalServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QLocalServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QLocalServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QLocalServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QLocalServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QLocalServer_delete(QLocalServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
