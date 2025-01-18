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
class QMetaObject;
class QObject;
class QSctpServer;
class QSctpSocket;
class QTcpServer;
class QTcpSocket;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSctpServer QSctpServer;
typedef struct QSctpSocket QSctpSocket;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
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
void QSctpServer_override_virtual_IncomingConnection(void* self, intptr_t slot);
void QSctpServer_virtualbase_IncomingConnection(void* self, intptr_t handle);
void QSctpServer_override_virtual_HasPendingConnections(void* self, intptr_t slot);
bool QSctpServer_virtualbase_HasPendingConnections(const void* self);
void QSctpServer_override_virtual_NextPendingConnection(void* self, intptr_t slot);
QTcpSocket* QSctpServer_virtualbase_NextPendingConnection(void* self);
void QSctpServer_Delete(QSctpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
