#ifndef GEN_QTCPSERVER_H
#define GEN_QTCPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHostAddress;
class QMetaObject;
class QNetworkProxy;
class QObject;
class QTcpServer;
class QTcpSocket;
#else
typedef struct QHostAddress QHostAddress;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
#endif

QTcpServer* QTcpServer_new();
QTcpServer* QTcpServer_new2(QObject* parent);
QMetaObject* QTcpServer_MetaObject(const QTcpServer* self);
void* QTcpServer_Metacast(QTcpServer* self, const char* param1);
struct miqt_string QTcpServer_Tr(const char* s);
struct miqt_string QTcpServer_TrUtf8(const char* s);
bool QTcpServer_Listen(QTcpServer* self);
void QTcpServer_Close(QTcpServer* self);
bool QTcpServer_IsListening(const QTcpServer* self);
void QTcpServer_SetMaxPendingConnections(QTcpServer* self, int numConnections);
int QTcpServer_MaxPendingConnections(const QTcpServer* self);
uint16_t QTcpServer_ServerPort(const QTcpServer* self);
QHostAddress* QTcpServer_ServerAddress(const QTcpServer* self);
intptr_t QTcpServer_SocketDescriptor(const QTcpServer* self);
bool QTcpServer_SetSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor);
bool QTcpServer_WaitForNewConnection(QTcpServer* self);
bool QTcpServer_HasPendingConnections(const QTcpServer* self);
QTcpSocket* QTcpServer_NextPendingConnection(QTcpServer* self);
int QTcpServer_ServerError(const QTcpServer* self);
struct miqt_string QTcpServer_ErrorString(const QTcpServer* self);
void QTcpServer_PauseAccepting(QTcpServer* self);
void QTcpServer_ResumeAccepting(QTcpServer* self);
void QTcpServer_SetProxy(QTcpServer* self, QNetworkProxy* networkProxy);
QNetworkProxy* QTcpServer_Proxy(const QTcpServer* self);
void QTcpServer_NewConnection(QTcpServer* self);
void QTcpServer_connect_NewConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_AcceptError(QTcpServer* self, int socketError);
void QTcpServer_connect_AcceptError(QTcpServer* self, intptr_t slot);
struct miqt_string QTcpServer_Tr2(const char* s, const char* c);
struct miqt_string QTcpServer_Tr3(const char* s, const char* c, int n);
struct miqt_string QTcpServer_TrUtf82(const char* s, const char* c);
struct miqt_string QTcpServer_TrUtf83(const char* s, const char* c, int n);
bool QTcpServer_Listen1(QTcpServer* self, QHostAddress* address);
bool QTcpServer_Listen2(QTcpServer* self, QHostAddress* address, uint16_t port);
bool QTcpServer_WaitForNewConnection1(QTcpServer* self, int msec);
bool QTcpServer_WaitForNewConnection2(QTcpServer* self, int msec, bool* timedOut);
void QTcpServer_Delete(QTcpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
