#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QABSTRACTSOCKET_H
#define MIQT_QT6_NETWORK_GEN_QABSTRACTSOCKET_H

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
class QChildEvent;
class QEvent;
class QHostAddress;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QNetworkProxy;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QAuthenticator QAuthenticator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent);
void QAbstractSocket_virtbase(QAbstractSocket* src, QIODevice** outptr_QIODevice);
QMetaObject* QAbstractSocket_MetaObject(const QAbstractSocket* self);
void* QAbstractSocket_Metacast(QAbstractSocket* self, const char* param1);
struct miqt_string QAbstractSocket_Tr(const char* s);
void QAbstractSocket_Resume(QAbstractSocket* self);
int QAbstractSocket_PauseMode(const QAbstractSocket* self);
void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode);
bool QAbstractSocket_Bind(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode);
bool QAbstractSocket_Bind2(QAbstractSocket* self);
void QAbstractSocket_ConnectToHost(QAbstractSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, QHostAddress* address, uint16_t port);
void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self);
bool QAbstractSocket_IsValid(const QAbstractSocket* self);
long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self);
long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self);
uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self);
uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self);
struct miqt_string QAbstractSocket_PeerName(const QAbstractSocket* self);
long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self);
void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size);
void QAbstractSocket_Abort(QAbstractSocket* self);
intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self);
bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, QVariant* value);
QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option);
int QAbstractSocket_SocketType(const QAbstractSocket* self);
int QAbstractSocket_State(const QAbstractSocket* self);
int QAbstractSocket_Error(const QAbstractSocket* self);
void QAbstractSocket_Close(QAbstractSocket* self);
bool QAbstractSocket_IsSequential(const QAbstractSocket* self);
bool QAbstractSocket_Flush(QAbstractSocket* self);
bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs);
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
void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1);
void QAbstractSocket_connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator);
void QAbstractSocket_connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize);
long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long lenVal);
struct miqt_string QAbstractSocket_Tr2(const char* s, const char* c);
struct miqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n);
bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port);
bool QAbstractSocket_Bind22(QAbstractSocket* self, uint16_t port, int mode);
void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode);
bool QAbstractSocket_override_virtual_Resume(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_Resume(void* self);
bool QAbstractSocket_override_virtual_Bind(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_Bind(void* self, QHostAddress* address, uint16_t port, int mode);
bool QAbstractSocket_override_virtual_ConnectToHost(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
bool QAbstractSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_DisconnectFromHost(void* self);
bool QAbstractSocket_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_BytesAvailable(const void* self);
bool QAbstractSocket_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_BytesToWrite(const void* self);
bool QAbstractSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_SetReadBufferSize(void* self, long long size);
bool QAbstractSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot);
intptr_t QAbstractSocket_virtualbase_SocketDescriptor(const void* self);
bool QAbstractSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QAbstractSocket_override_virtual_SetSocketOption(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value);
bool QAbstractSocket_override_virtual_SocketOption(void* self, intptr_t slot);
QVariant* QAbstractSocket_virtualbase_SocketOption(void* self, int option);
bool QAbstractSocket_override_virtual_Close(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_Close(void* self);
bool QAbstractSocket_override_virtual_IsSequential(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_IsSequential(const void* self);
bool QAbstractSocket_override_virtual_WaitForConnected(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_WaitForConnected(void* self, int msecs);
bool QAbstractSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QAbstractSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QAbstractSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_WaitForDisconnected(void* self, int msecs);
bool QAbstractSocket_override_virtual_ReadData(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_ReadData(void* self, char* data, long long maxlen);
bool QAbstractSocket_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QAbstractSocket_override_virtual_SkipData(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_SkipData(void* self, long long maxSize);
bool QAbstractSocket_override_virtual_WriteData(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal);
bool QAbstractSocket_override_virtual_Open(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_Open(void* self, int mode);
bool QAbstractSocket_override_virtual_Pos(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_Pos(const void* self);
bool QAbstractSocket_override_virtual_Size(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_Size(const void* self);
bool QAbstractSocket_override_virtual_Seek(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_Seek(void* self, long long pos);
bool QAbstractSocket_override_virtual_AtEnd(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_AtEnd(const void* self);
bool QAbstractSocket_override_virtual_Reset(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_Reset(void* self);
bool QAbstractSocket_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_CanReadLine(const void* self);
bool QAbstractSocket_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_Event(void* self, QEvent* event);
bool QAbstractSocket_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractSocket_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAbstractSocket_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAbstractSocket_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAbstractSocket_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAbstractSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractSocket_Delete(QAbstractSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
