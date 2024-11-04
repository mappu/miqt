#ifndef GEN_QLOCALSOCKET_H
#define GEN_QLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLocalSocket;
class QMetaObject;
class QObject;
#else
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QLocalSocket* QLocalSocket_new();
QLocalSocket* QLocalSocket_new2(QObject* parent);
QMetaObject* QLocalSocket_MetaObject(const QLocalSocket* self);
void* QLocalSocket_Metacast(QLocalSocket* self, const char* param1);
struct miqt_string QLocalSocket_Tr(const char* s);
void QLocalSocket_ConnectToServer(QLocalSocket* self);
void QLocalSocket_ConnectToServerWithName(QLocalSocket* self, struct miqt_string name);
void QLocalSocket_DisconnectFromServer(QLocalSocket* self);
void QLocalSocket_SetServerName(QLocalSocket* self, struct miqt_string name);
struct miqt_string QLocalSocket_ServerName(const QLocalSocket* self);
struct miqt_string QLocalSocket_FullServerName(const QLocalSocket* self);
void QLocalSocket_Abort(QLocalSocket* self);
bool QLocalSocket_IsSequential(const QLocalSocket* self);
long long QLocalSocket_BytesAvailable(const QLocalSocket* self);
long long QLocalSocket_BytesToWrite(const QLocalSocket* self);
bool QLocalSocket_CanReadLine(const QLocalSocket* self);
bool QLocalSocket_Open(QLocalSocket* self);
void QLocalSocket_Close(QLocalSocket* self);
int QLocalSocket_Error(const QLocalSocket* self);
bool QLocalSocket_Flush(QLocalSocket* self);
bool QLocalSocket_IsValid(const QLocalSocket* self);
long long QLocalSocket_ReadBufferSize(const QLocalSocket* self);
void QLocalSocket_SetReadBufferSize(QLocalSocket* self, long long size);
bool QLocalSocket_SetSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor);
intptr_t QLocalSocket_SocketDescriptor(const QLocalSocket* self);
void QLocalSocket_SetSocketOptions(QLocalSocket* self, int option);
int QLocalSocket_SocketOptions(const QLocalSocket* self);
int QLocalSocket_State(const QLocalSocket* self);
bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self);
bool QLocalSocket_WaitForConnected(QLocalSocket* self);
bool QLocalSocket_WaitForDisconnected(QLocalSocket* self);
bool QLocalSocket_WaitForReadyRead(QLocalSocket* self);
void QLocalSocket_Connected(QLocalSocket* self);
void QLocalSocket_connect_Connected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_Disconnected(QLocalSocket* self);
void QLocalSocket_connect_Disconnected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError);
void QLocalSocket_connect_ErrorOccurred(QLocalSocket* self, intptr_t slot);
void QLocalSocket_StateChanged(QLocalSocket* self, int socketState);
void QLocalSocket_connect_StateChanged(QLocalSocket* self, intptr_t slot);
struct miqt_string QLocalSocket_Tr2(const char* s, const char* c);
struct miqt_string QLocalSocket_Tr3(const char* s, const char* c, int n);
void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode);
void QLocalSocket_ConnectToServer2(QLocalSocket* self, struct miqt_string name, int openMode);
bool QLocalSocket_Open1(QLocalSocket* self, int openMode);
bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState);
bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode);
bool QLocalSocket_WaitForBytesWritten1(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForReadyRead1(QLocalSocket* self, int msecs);
void QLocalSocket_Delete(QLocalSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
