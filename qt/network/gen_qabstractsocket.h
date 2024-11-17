#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QABSTRACTSOCKET_H
#define MIQT_QT_NETWORK_GEN_QABSTRACTSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSocket;
class QAuthenticator;
class QHostAddress;
class QMetaObject;
class QNetworkProxy;
class QObject;
class QVariant;
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QAuthenticator QAuthenticator;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent);
QMetaObject* QAbstractSocket_MetaObject(const QAbstractSocket* self);
void* QAbstractSocket_Metacast(QAbstractSocket* self, const char* param1);
struct miqt_string QAbstractSocket_Tr(const char* s);
struct miqt_string QAbstractSocket_TrUtf8(const char* s);
void QAbstractSocket_Resume(QAbstractSocket* self);
int QAbstractSocket_PauseMode(const QAbstractSocket* self);
void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode);
bool QAbstractSocket_Bind(QAbstractSocket* self, QHostAddress* address);
bool QAbstractSocket_Bind2(QAbstractSocket* self);
void QAbstractSocket_ConnectToHost(QAbstractSocket* self, struct miqt_string hostName, uint16_t port);
void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, QHostAddress* address, uint16_t port);
void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self);
bool QAbstractSocket_IsValid(const QAbstractSocket* self);
long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self);
long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self);
bool QAbstractSocket_CanReadLine(const QAbstractSocket* self);
uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self);
uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self);
struct miqt_string QAbstractSocket_PeerName(const QAbstractSocket* self);
long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self);
void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size);
void QAbstractSocket_Abort(QAbstractSocket* self);
intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self);
bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor);
void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, QVariant* value);
QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option);
int QAbstractSocket_SocketType(const QAbstractSocket* self);
int QAbstractSocket_State(const QAbstractSocket* self);
int QAbstractSocket_Error(const QAbstractSocket* self);
void QAbstractSocket_Close(QAbstractSocket* self);
bool QAbstractSocket_IsSequential(const QAbstractSocket* self);
bool QAbstractSocket_AtEnd(const QAbstractSocket* self);
bool QAbstractSocket_Flush(QAbstractSocket* self);
bool QAbstractSocket_WaitForConnected(QAbstractSocket* self);
bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self);
bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self);
bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self);
void QAbstractSocket_SetProxy(QAbstractSocket* self, QNetworkProxy* networkProxy);
QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self);
struct miqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self);
void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, struct miqt_string tag);
void QAbstractSocket_HostFound(QAbstractSocket* self);
void QAbstractSocket_connect_HostFound(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_Connected(QAbstractSocket* self);
void QAbstractSocket_connect_Connected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_Disconnected(QAbstractSocket* self);
void QAbstractSocket_connect_Disconnected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1);
void QAbstractSocket_connect_StateChanged(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ErrorWithQAbstractSocketSocketError(QAbstractSocket* self, int param1);
void QAbstractSocket_connect_ErrorWithQAbstractSocketSocketError(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1);
void QAbstractSocket_connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator);
void QAbstractSocket_connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot);
struct miqt_string QAbstractSocket_Tr2(const char* s, const char* c);
struct miqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractSocket_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractSocket_TrUtf83(const char* s, const char* c, int n);
bool QAbstractSocket_Bind22(QAbstractSocket* self, QHostAddress* address, uint16_t port);
bool QAbstractSocket_Bind3(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode);
bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port);
bool QAbstractSocket_Bind23(QAbstractSocket* self, uint16_t port, int mode);
void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, struct miqt_string hostName, uint16_t port, int mode);
void QAbstractSocket_ConnectToHost4(QAbstractSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
void QAbstractSocket_ConnectToHost32(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode);
bool QAbstractSocket_SetSocketDescriptor2(QAbstractSocket* self, intptr_t socketDescriptor, int state);
bool QAbstractSocket_SetSocketDescriptor3(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode);
bool QAbstractSocket_WaitForConnected1(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForReadyRead1(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForBytesWritten1(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForDisconnected1(QAbstractSocket* self, int msecs);
void QAbstractSocket_Delete(QAbstractSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
