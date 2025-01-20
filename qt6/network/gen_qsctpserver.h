#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSCTPSERVER_H
#define MIQT_QT6_NETWORK_GEN_QSCTPSERVER_H

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
class QSctpServer;
class QSctpSocket;
class QTcpServer;
class QTcpSocket;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSctpServer QSctpServer;
typedef struct QSctpSocket QSctpSocket;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
#endif

QSctpServer* QSctpServer_new();
QSctpServer* QSctpServer_new2(QObject* parent);
void QSctpServer_virtbase(QSctpServer* src, QTcpServer** outptr_QTcpServer);
QMetaObject* QSctpServer_MetaObject(const QSctpServer* self);
void* QSctpServer_Metacast(QSctpServer* self, const char* param1);
struct miqt_string QSctpServer_Tr(const char* s);
void QSctpServer_SetMaximumChannelCount(QSctpServer* self, int count);
int QSctpServer_MaximumChannelCount(const QSctpServer* self);
QSctpSocket* QSctpServer_NextPendingDatagramConnection(QSctpServer* self);
void QSctpServer_IncomingConnection(QSctpServer* self, intptr_t handle);
struct miqt_string QSctpServer_Tr2(const char* s, const char* c);
struct miqt_string QSctpServer_Tr3(const char* s, const char* c, int n);
bool QSctpServer_override_virtual_IncomingConnection(void* self, intptr_t slot);
void QSctpServer_virtualbase_IncomingConnection(void* self, intptr_t handle);
bool QSctpServer_override_virtual_HasPendingConnections(void* self, intptr_t slot);
bool QSctpServer_virtualbase_HasPendingConnections(const void* self);
bool QSctpServer_override_virtual_NextPendingConnection(void* self, intptr_t slot);
QTcpSocket* QSctpServer_virtualbase_NextPendingConnection(void* self);
bool QSctpServer_override_virtual_Event(void* self, intptr_t slot);
bool QSctpServer_virtualbase_Event(void* self, QEvent* event);
bool QSctpServer_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSctpServer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QSctpServer_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSctpServer_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QSctpServer_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSctpServer_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QSctpServer_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSctpServer_virtualbase_CustomEvent(void* self, QEvent* event);
bool QSctpServer_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSctpServer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QSctpServer_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSctpServer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSctpServer_Delete(QSctpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
