#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QUDPSOCKET_H
#define MIQT_QT_NETWORK_GEN_QUDPSOCKET_H

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
class QMetaMethod;
class QMetaObject;
class QNetworkDatagram;
class QNetworkInterface;
class QObject;
class QTimerEvent;
class QUdpSocket;
class QVariant;
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QNetworkInterface QNetworkInterface;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUdpSocket QUdpSocket;
typedef struct QVariant QVariant;
#endif

QUdpSocket* QUdpSocket_new();
QUdpSocket* QUdpSocket_new2(QObject* parent);
void QUdpSocket_virtbase(QUdpSocket* src, QAbstractSocket** outptr_QAbstractSocket);
QMetaObject* QUdpSocket_metaObject(const QUdpSocket* self);
void* QUdpSocket_metacast(QUdpSocket* self, const char* param1);
struct miqt_string QUdpSocket_tr(const char* s);
struct miqt_string QUdpSocket_trUtf8(const char* s);
bool QUdpSocket_joinMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress);
bool QUdpSocket_joinMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface);
bool QUdpSocket_leaveMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress);
bool QUdpSocket_leaveMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface);
QNetworkInterface* QUdpSocket_multicastInterface(const QUdpSocket* self);
void QUdpSocket_setMulticastInterface(QUdpSocket* self, QNetworkInterface* iface);
bool QUdpSocket_hasPendingDatagrams(const QUdpSocket* self);
long long QUdpSocket_pendingDatagramSize(const QUdpSocket* self);
QNetworkDatagram* QUdpSocket_receiveDatagram(QUdpSocket* self);
long long QUdpSocket_readDatagram(QUdpSocket* self, char* data, long long maxlen);
long long QUdpSocket_writeDatagram(QUdpSocket* self, QNetworkDatagram* datagram);
long long QUdpSocket_writeDatagram2(QUdpSocket* self, const char* data, long long len, QHostAddress* host, uint16_t port);
long long QUdpSocket_writeDatagram3(QUdpSocket* self, struct miqt_string datagram, QHostAddress* host, uint16_t port);
struct miqt_string QUdpSocket_tr2(const char* s, const char* c);
struct miqt_string QUdpSocket_tr3(const char* s, const char* c, int n);
struct miqt_string QUdpSocket_trUtf82(const char* s, const char* c);
struct miqt_string QUdpSocket_trUtf83(const char* s, const char* c, int n);
QNetworkDatagram* QUdpSocket_receiveDatagram1(QUdpSocket* self, long long maxSize);
long long QUdpSocket_readDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host);
long long QUdpSocket_readDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port);
bool QUdpSocket_override_virtual_resume(void* self, intptr_t slot);
void QUdpSocket_virtualbase_resume(void* self);
bool QUdpSocket_override_virtual_connectToHost(void* self, intptr_t slot);
void QUdpSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
bool QUdpSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot);
void QUdpSocket_virtualbase_disconnectFromHost(void* self);
bool QUdpSocket_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_bytesAvailable(const void* self);
bool QUdpSocket_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_bytesToWrite(const void* self);
bool QUdpSocket_override_virtual_canReadLine(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_canReadLine(const void* self);
bool QUdpSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot);
void QUdpSocket_virtualbase_setReadBufferSize(void* self, long long size);
bool QUdpSocket_override_virtual_socketDescriptor(void* self, intptr_t slot);
intptr_t QUdpSocket_virtualbase_socketDescriptor(const void* self);
bool QUdpSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QUdpSocket_override_virtual_setSocketOption(void* self, intptr_t slot);
void QUdpSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value);
bool QUdpSocket_override_virtual_socketOption(void* self, intptr_t slot);
QVariant* QUdpSocket_virtualbase_socketOption(void* self, int option);
bool QUdpSocket_override_virtual_close(void* self, intptr_t slot);
void QUdpSocket_virtualbase_close(void* self);
bool QUdpSocket_override_virtual_isSequential(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_isSequential(const void* self);
bool QUdpSocket_override_virtual_atEnd(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_atEnd(const void* self);
bool QUdpSocket_override_virtual_waitForConnected(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_waitForConnected(void* self, int msecs);
bool QUdpSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_waitForReadyRead(void* self, int msecs);
bool QUdpSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QUdpSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_waitForDisconnected(void* self, int msecs);
bool QUdpSocket_override_virtual_readData(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_readData(void* self, char* data, long long maxlen);
bool QUdpSocket_override_virtual_readLineData(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QUdpSocket_override_virtual_writeData(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_writeData(void* self, const char* data, long long len);
bool QUdpSocket_override_virtual_open(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_open(void* self, int mode);
bool QUdpSocket_override_virtual_pos(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_pos(const void* self);
bool QUdpSocket_override_virtual_size(void* self, intptr_t slot);
long long QUdpSocket_virtualbase_size(const void* self);
bool QUdpSocket_override_virtual_seek(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_seek(void* self, long long pos);
bool QUdpSocket_override_virtual_reset(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_reset(void* self);
bool QUdpSocket_override_virtual_event(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_event(void* self, QEvent* event);
bool QUdpSocket_override_virtual_eventFilter(void* self, intptr_t slot);
bool QUdpSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QUdpSocket_override_virtual_timerEvent(void* self, intptr_t slot);
void QUdpSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QUdpSocket_override_virtual_childEvent(void* self, intptr_t slot);
void QUdpSocket_virtualbase_childEvent(void* self, QChildEvent* event);
bool QUdpSocket_override_virtual_customEvent(void* self, intptr_t slot);
void QUdpSocket_virtualbase_customEvent(void* self, QEvent* event);
bool QUdpSocket_override_virtual_connectNotify(void* self, intptr_t slot);
void QUdpSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QUdpSocket_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QUdpSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QUdpSocket_delete(QUdpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
