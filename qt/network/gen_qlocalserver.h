#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QLOCALSERVER_H
#define MIQT_QT_NETWORK_GEN_QLOCALSERVER_H

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
QMetaObject* QLocalServer_MetaObject(const QLocalServer* self);
void* QLocalServer_Metacast(QLocalServer* self, const char* param1);
struct miqt_string QLocalServer_Tr(const char* s);
struct miqt_string QLocalServer_TrUtf8(const char* s);
void QLocalServer_NewConnection(QLocalServer* self);
void QLocalServer_connect_NewConnection(QLocalServer* self, intptr_t slot);
void QLocalServer_Close(QLocalServer* self);
struct miqt_string QLocalServer_ErrorString(const QLocalServer* self);
bool QLocalServer_HasPendingConnections(const QLocalServer* self);
bool QLocalServer_IsListening(const QLocalServer* self);
bool QLocalServer_Listen(QLocalServer* self, struct miqt_string name);
bool QLocalServer_ListenWithSocketDescriptor(QLocalServer* self, intptr_t socketDescriptor);
int QLocalServer_MaxPendingConnections(const QLocalServer* self);
QLocalSocket* QLocalServer_NextPendingConnection(QLocalServer* self);
struct miqt_string QLocalServer_ServerName(const QLocalServer* self);
struct miqt_string QLocalServer_FullServerName(const QLocalServer* self);
bool QLocalServer_RemoveServer(struct miqt_string name);
int QLocalServer_ServerError(const QLocalServer* self);
void QLocalServer_SetMaxPendingConnections(QLocalServer* self, int numConnections);
bool QLocalServer_WaitForNewConnection(QLocalServer* self);
void QLocalServer_SetSocketOptions(QLocalServer* self, int options);
int QLocalServer_SocketOptions(const QLocalServer* self);
intptr_t QLocalServer_SocketDescriptor(const QLocalServer* self);
void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
struct miqt_string QLocalServer_Tr2(const char* s, const char* c);
struct miqt_string QLocalServer_Tr3(const char* s, const char* c, int n);
struct miqt_string QLocalServer_TrUtf82(const char* s, const char* c);
struct miqt_string QLocalServer_TrUtf83(const char* s, const char* c, int n);
bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec);
bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut);
bool QLocalServer_override_virtual_HasPendingConnections(void* self, intptr_t slot);
bool QLocalServer_virtualbase_HasPendingConnections(const void* self);
bool QLocalServer_override_virtual_NextPendingConnection(void* self, intptr_t slot);
QLocalSocket* QLocalServer_virtualbase_NextPendingConnection(void* self);
bool QLocalServer_override_virtual_IncomingConnection(void* self, intptr_t slot);
void QLocalServer_virtualbase_IncomingConnection(void* self, uintptr_t socketDescriptor);
bool QLocalServer_override_virtual_Event(void* self, intptr_t slot);
bool QLocalServer_virtualbase_Event(void* self, QEvent* event);
bool QLocalServer_override_virtual_EventFilter(void* self, intptr_t slot);
bool QLocalServer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QLocalServer_override_virtual_TimerEvent(void* self, intptr_t slot);
void QLocalServer_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QLocalServer_override_virtual_ChildEvent(void* self, intptr_t slot);
void QLocalServer_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QLocalServer_override_virtual_CustomEvent(void* self, intptr_t slot);
void QLocalServer_virtualbase_CustomEvent(void* self, QEvent* event);
bool QLocalServer_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QLocalServer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QLocalServer_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QLocalServer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QLocalServer_Delete(QLocalServer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
