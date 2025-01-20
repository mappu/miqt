#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QTCPSOCKET_H
#define MIQT_QT6_NETWORK_GEN_QTCPSOCKET_H

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
class QChildEvent;
class QEvent;
class QHostAddress;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTcpSocket;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QTcpSocket* QTcpSocket_new();
QTcpSocket* QTcpSocket_new2(QObject* parent);
void QTcpSocket_virtbase(QTcpSocket* src, QAbstractSocket** outptr_QAbstractSocket);
QMetaObject* QTcpSocket_MetaObject(const QTcpSocket* self);
void* QTcpSocket_Metacast(QTcpSocket* self, const char* param1);
struct miqt_string QTcpSocket_Tr(const char* s);
bool QTcpSocket_Bind(QTcpSocket* self, int addr);
struct miqt_string QTcpSocket_Tr2(const char* s, const char* c);
struct miqt_string QTcpSocket_Tr3(const char* s, const char* c, int n);
bool QTcpSocket_Bind2(QTcpSocket* self, int addr, uint16_t port);
bool QTcpSocket_Bind3(QTcpSocket* self, int addr, uint16_t port, int mode);
bool QTcpSocket_override_virtual_Resume(void* self, intptr_t slot);
void QTcpSocket_virtualbase_Resume(void* self);
bool QTcpSocket_override_virtual_Bind(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_Bind(void* self, QHostAddress* address, uint16_t port, int mode);
bool QTcpSocket_override_virtual_ConnectToHost(void* self, intptr_t slot);
void QTcpSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
bool QTcpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot);
void QTcpSocket_virtualbase_DisconnectFromHost(void* self);
bool QTcpSocket_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_BytesAvailable(const void* self);
bool QTcpSocket_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_BytesToWrite(const void* self);
bool QTcpSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot);
void QTcpSocket_virtualbase_SetReadBufferSize(void* self, long long size);
bool QTcpSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot);
intptr_t QTcpSocket_virtualbase_SocketDescriptor(const void* self);
bool QTcpSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QTcpSocket_override_virtual_SetSocketOption(void* self, intptr_t slot);
void QTcpSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value);
bool QTcpSocket_override_virtual_SocketOption(void* self, intptr_t slot);
QVariant* QTcpSocket_virtualbase_SocketOption(void* self, int option);
bool QTcpSocket_override_virtual_Close(void* self, intptr_t slot);
void QTcpSocket_virtualbase_Close(void* self);
bool QTcpSocket_override_virtual_IsSequential(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_IsSequential(const void* self);
bool QTcpSocket_override_virtual_WaitForConnected(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_WaitForConnected(void* self, int msecs);
bool QTcpSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QTcpSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QTcpSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_WaitForDisconnected(void* self, int msecs);
bool QTcpSocket_override_virtual_ReadData(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen);
bool QTcpSocket_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QTcpSocket_override_virtual_SkipData(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_SkipData(void* self, long long maxSize);
bool QTcpSocket_override_virtual_WriteData(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal);
bool QTcpSocket_override_virtual_Open(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_Open(void* self, int mode);
bool QTcpSocket_override_virtual_Pos(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_Pos(const void* self);
bool QTcpSocket_override_virtual_Size(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_Size(const void* self);
bool QTcpSocket_override_virtual_Seek(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_Seek(void* self, long long pos);
bool QTcpSocket_override_virtual_AtEnd(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_AtEnd(const void* self);
bool QTcpSocket_override_virtual_Reset(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_Reset(void* self);
bool QTcpSocket_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_CanReadLine(const void* self);
bool QTcpSocket_override_virtual_Event(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_Event(void* self, QEvent* event);
bool QTcpSocket_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QTcpSocket_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTcpSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QTcpSocket_override_virtual_ChildEvent(void* self, intptr_t slot);
void QTcpSocket_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QTcpSocket_override_virtual_CustomEvent(void* self, intptr_t slot);
void QTcpSocket_virtualbase_CustomEvent(void* self, QEvent* event);
bool QTcpSocket_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QTcpSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QTcpSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QTcpSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QTcpSocket_Delete(QTcpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
