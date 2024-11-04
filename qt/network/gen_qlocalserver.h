#ifndef GEN_QLOCALSERVER_H
#define GEN_QLOCALSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLocalServer;
class QLocalSocket;
class QMetaObject;
class QObject;
#else
typedef struct QLocalServer QLocalServer;
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QLocalServer* QLocalServer_new();
QLocalServer* QLocalServer_new2(QObject* parent);
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
struct miqt_string QLocalServer_Tr2(const char* s, const char* c);
struct miqt_string QLocalServer_Tr3(const char* s, const char* c, int n);
struct miqt_string QLocalServer_TrUtf82(const char* s, const char* c);
struct miqt_string QLocalServer_TrUtf83(const char* s, const char* c, int n);
bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec);
bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut);
void QLocalServer_Delete(QLocalServer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
