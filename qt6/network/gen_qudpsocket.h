#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QUDPSOCKET_H
#define MIQT_QT6_NETWORK_GEN_QUDPSOCKET_H

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
class QHostAddress;
class QIODevice;
class QIODeviceBase;
class QMetaObject;
class QNetworkDatagram;
class QNetworkInterface;
class QObject;
class QUdpSocket;
class QVariant;
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QNetworkInterface QNetworkInterface;
typedef struct QObject QObject;
typedef struct QUdpSocket QUdpSocket;
typedef struct QVariant QVariant;
#endif

QUdpSocket* QUdpSocket_new();
QUdpSocket* QUdpSocket_new2(QObject* parent);
void QUdpSocket_virtbase(QUdpSocket* src, QAbstractSocket** outptr_QAbstractSocket);
QMetaObject* QUdpSocket_MetaObject(const QUdpSocket* self);
void* QUdpSocket_Metacast(QUdpSocket* self, const char* param1);
struct miqt_string QUdpSocket_Tr(const char* s);
bool QUdpSocket_Bind(QUdpSocket* self, int addr);
bool QUdpSocket_JoinMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress);
bool QUdpSocket_JoinMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface);
bool QUdpSocket_LeaveMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress);
bool QUdpSocket_LeaveMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface);
QNetworkInterface* QUdpSocket_MulticastInterface(const QUdpSocket* self);
void QUdpSocket_SetMulticastInterface(QUdpSocket* self, QNetworkInterface* iface);
bool QUdpSocket_HasPendingDatagrams(const QUdpSocket* self);
long long QUdpSocket_PendingDatagramSize(const QUdpSocket* self);
QNetworkDatagram* QUdpSocket_ReceiveDatagram(QUdpSocket* self);
long long QUdpSocket_ReadDatagram(QUdpSocket* self, char* data, long long maxlen);
long long QUdpSocket_WriteDatagram(QUdpSocket* self, QNetworkDatagram* datagram);
long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long lenVal, QHostAddress* host, uint16_t port);
long long QUdpSocket_WriteDatagram3(QUdpSocket* self, struct miqt_string datagram, QHostAddress* host, uint16_t port);
struct miqt_string QUdpSocket_Tr2(const char* s, const char* c);
struct miqt_string QUdpSocket_Tr3(const char* s, const char* c, int n);
bool QUdpSocket_Bind2(QUdpSocket* self, int addr, uint16_t port);
bool QUdpSocket_Bind3(QUdpSocket* self, int addr, uint16_t port, int mode);
QNetworkDatagram* QUdpSocket_ReceiveDatagram1(QUdpSocket* self, long long maxSize);
long long QUdpSocket_ReadDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host);
long long QUdpSocket_ReadDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port);
bool QUdpSocket_override_virtual_Resume(void* self, intptr_t slot);
void QUdpSocket_virtualbase_Resume(void* self);
bool QUdpSocket_override_virtual_Bind(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_Bind(void* self, QHostAddress* address, uint16_t port, int mode);
bool QUdpSocket_override_virtual_ConnectToHost(void* self, intptr_t slot);
void QUdpSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
bool QUdpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot);
void QUdpSocket_virtualbase_DisconnectFromHost(void* self);
bool QUdpSocket_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_BytesAvailable(const void* self);
bool QUdpSocket_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_BytesToWrite(const void* self);
bool QUdpSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot);
void QUdpSocket_virtualbase_SetReadBufferSize(void* self, long long size);
bool QUdpSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot);
intptr_t QUdpSocket_virtualbase_SocketDescriptor(const void* self);
bool QUdpSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QUdpSocket_override_virtual_SetSocketOption(void* self, intptr_t slot);
void QUdpSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value);
bool QUdpSocket_override_virtual_SocketOption(void* self, intptr_t slot);
QVariant* QUdpSocket_virtualbase_SocketOption(void* self, int option);
bool QUdpSocket_override_virtual_Close(void* self, intptr_t slot);
void QUdpSocket_virtualbase_Close(void* self);
bool QUdpSocket_override_virtual_IsSequential(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_IsSequential(const void* self);
bool QUdpSocket_override_virtual_WaitForConnected(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_WaitForConnected(void* self, int msecs);
bool QUdpSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QUdpSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QUdpSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_WaitForDisconnected(void* self, int msecs);
bool QUdpSocket_override_virtual_ReadData(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen);
bool QUdpSocket_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QUdpSocket_override_virtual_SkipData(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_SkipData(void* self, long long maxSize);
bool QUdpSocket_override_virtual_WriteData(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal);
void QUdpSocket_Delete(QUdpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
