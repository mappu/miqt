#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSCTPSOCKET_H
#define MIQT_QT6_NETWORK_GEN_QSCTPSOCKET_H

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
class QNetworkDatagram;
class QObject;
class QSctpSocket;
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
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QObject QObject;
typedef struct QSctpSocket QSctpSocket;
typedef struct QTcpSocket QTcpSocket;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSctpSocket* QSctpSocket_new();
QSctpSocket* QSctpSocket_new2(QObject* parent);
void QSctpSocket_virtbase(QSctpSocket* src, QTcpSocket** outptr_QTcpSocket);
QMetaObject* QSctpSocket_MetaObject(const QSctpSocket* self);
void* QSctpSocket_Metacast(QSctpSocket* self, const char* param1);
struct miqt_string QSctpSocket_Tr(const char* s);
void QSctpSocket_Close(QSctpSocket* self);
void QSctpSocket_DisconnectFromHost(QSctpSocket* self);
void QSctpSocket_SetMaximumChannelCount(QSctpSocket* self, int count);
int QSctpSocket_MaximumChannelCount(const QSctpSocket* self);
bool QSctpSocket_IsInDatagramMode(const QSctpSocket* self);
QNetworkDatagram* QSctpSocket_ReadDatagram(QSctpSocket* self);
bool QSctpSocket_WriteDatagram(QSctpSocket* self, QNetworkDatagram* datagram);
long long QSctpSocket_ReadData(QSctpSocket* self, char* data, long long maxlen);
long long QSctpSocket_ReadLineData(QSctpSocket* self, char* data, long long maxlen);
struct miqt_string QSctpSocket_Tr2(const char* s, const char* c);
struct miqt_string QSctpSocket_Tr3(const char* s, const char* c, int n);
bool QSctpSocket_override_virtual_Close(void* self, intptr_t slot);
void QSctpSocket_virtualbase_Close(void* self);
bool QSctpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot);
void QSctpSocket_virtualbase_DisconnectFromHost(void* self);
bool QSctpSocket_override_virtual_ReadData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen);
bool QSctpSocket_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QSctpSocket_override_virtual_Resume(void* self, intptr_t slot);
void QSctpSocket_virtualbase_Resume(void* self);
bool QSctpSocket_override_virtual_Bind(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_Bind(void* self, QHostAddress* address, uint16_t port, int mode);
bool QSctpSocket_override_virtual_ConnectToHost(void* self, intptr_t slot);
void QSctpSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
bool QSctpSocket_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_BytesAvailable(const void* self);
bool QSctpSocket_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_BytesToWrite(const void* self);
bool QSctpSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot);
void QSctpSocket_virtualbase_SetReadBufferSize(void* self, long long size);
bool QSctpSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot);
intptr_t QSctpSocket_virtualbase_SocketDescriptor(const void* self);
bool QSctpSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QSctpSocket_override_virtual_SetSocketOption(void* self, intptr_t slot);
void QSctpSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value);
bool QSctpSocket_override_virtual_SocketOption(void* self, intptr_t slot);
QVariant* QSctpSocket_virtualbase_SocketOption(void* self, int option);
bool QSctpSocket_override_virtual_IsSequential(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_IsSequential(const void* self);
bool QSctpSocket_override_virtual_WaitForConnected(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_WaitForConnected(void* self, int msecs);
bool QSctpSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QSctpSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QSctpSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_WaitForDisconnected(void* self, int msecs);
bool QSctpSocket_override_virtual_SkipData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_SkipData(void* self, long long maxSize);
bool QSctpSocket_override_virtual_WriteData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal);
bool QSctpSocket_override_virtual_Open(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_Open(void* self, int mode);
bool QSctpSocket_override_virtual_Pos(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_Pos(const void* self);
bool QSctpSocket_override_virtual_Size(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_Size(const void* self);
bool QSctpSocket_override_virtual_Seek(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_Seek(void* self, long long pos);
bool QSctpSocket_override_virtual_AtEnd(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_AtEnd(const void* self);
bool QSctpSocket_override_virtual_Reset(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_Reset(void* self);
bool QSctpSocket_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_CanReadLine(const void* self);
bool QSctpSocket_override_virtual_Event(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_Event(void* self, QEvent* event);
bool QSctpSocket_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QSctpSocket_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSctpSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QSctpSocket_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSctpSocket_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QSctpSocket_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSctpSocket_virtualbase_CustomEvent(void* self, QEvent* event);
bool QSctpSocket_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSctpSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QSctpSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSctpSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSctpSocket_Delete(QSctpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
