#pragma once
#ifndef MIQT_QT6_NETWORK_SCTP_GEN_QSCTPSERVER_H
#define MIQT_QT6_NETWORK_SCTP_GEN_QSCTPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../../libmiqt/libmiqt.h"

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
QMetaObject* QSctpServer_metaObject(const QSctpServer* self);
void* QSctpServer_metacast(QSctpServer* self, const char* param1);
struct miqt_string QSctpServer_tr(const char* s);
void QSctpServer_setMaximumChannelCount(QSctpServer* self, int count);
int QSctpServer_maximumChannelCount(const QSctpServer* self);
QSctpSocket* QSctpServer_nextPendingDatagramConnection(QSctpServer* self);
void QSctpServer_incomingConnection(QSctpServer* self, intptr_t handle);
struct miqt_string QSctpServer_tr2(const char* s, const char* c);
struct miqt_string QSctpServer_tr3(const char* s, const char* c, int n);

bool QSctpServer_override_virtual_incomingConnection(void* self, intptr_t slot);
void QSctpServer_virtualbase_incomingConnection(void* self, intptr_t handle);
bool QSctpServer_override_virtual_hasPendingConnections(void* self, intptr_t slot);
bool QSctpServer_virtualbase_hasPendingConnections(const void* self);
bool QSctpServer_override_virtual_nextPendingConnection(void* self, intptr_t slot);
QTcpSocket* QSctpServer_virtualbase_nextPendingConnection(void* self);
bool QSctpServer_override_virtual_event(void* self, intptr_t slot);
bool QSctpServer_virtualbase_event(void* self, QEvent* event);
bool QSctpServer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSctpServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSctpServer_override_virtual_timerEvent(void* self, intptr_t slot);
void QSctpServer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSctpServer_override_virtual_childEvent(void* self, intptr_t slot);
void QSctpServer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSctpServer_override_virtual_customEvent(void* self, intptr_t slot);
void QSctpServer_virtualbase_customEvent(void* self, QEvent* event);
bool QSctpServer_override_virtual_connectNotify(void* self, intptr_t slot);
void QSctpServer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSctpServer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSctpServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QSctpServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket);
QObject* QSctpServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSctpServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSctpServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSctpServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSctpServer_delete(QSctpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
