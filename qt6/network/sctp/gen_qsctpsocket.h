#pragma once
#ifndef MIQT_QT6_NETWORK_SCTP_GEN_QSCTPSOCKET_H
#define MIQT_QT6_NETWORK_SCTP_GEN_QSCTPSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../../libmiqt/libmiqt.h"

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
QMetaObject* QSctpSocket_metaObject(const QSctpSocket* self);
void* QSctpSocket_metacast(QSctpSocket* self, const char* param1);
struct miqt_string QSctpSocket_tr(const char* s);
void QSctpSocket_close(QSctpSocket* self);
void QSctpSocket_disconnectFromHost(QSctpSocket* self);
void QSctpSocket_setMaximumChannelCount(QSctpSocket* self, int count);
int QSctpSocket_maximumChannelCount(const QSctpSocket* self);
bool QSctpSocket_isInDatagramMode(const QSctpSocket* self);
QNetworkDatagram* QSctpSocket_readDatagram(QSctpSocket* self);
bool QSctpSocket_writeDatagram(QSctpSocket* self, QNetworkDatagram* datagram);
long long QSctpSocket_readData(QSctpSocket* self, char* data, long long maxlen);
long long QSctpSocket_readLineData(QSctpSocket* self, char* data, long long maxlen);
struct miqt_string QSctpSocket_tr2(const char* s, const char* c);
struct miqt_string QSctpSocket_tr3(const char* s, const char* c, int n);
bool QSctpSocket_override_virtual_close(void* self, intptr_t slot);
void QSctpSocket_virtualbase_close(void* self);
bool QSctpSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot);
void QSctpSocket_virtualbase_disconnectFromHost(void* self);
bool QSctpSocket_override_virtual_readData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_readData(void* self, char* data, long long maxlen);
bool QSctpSocket_override_virtual_readLineData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QSctpSocket_override_virtual_resume(void* self, intptr_t slot);
void QSctpSocket_virtualbase_resume(void* self);
bool QSctpSocket_override_virtual_bind(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_bind(void* self, QHostAddress* address, unsigned short port, int mode);
bool QSctpSocket_override_virtual_connectToHost(void* self, intptr_t slot);
void QSctpSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, unsigned short port, int mode, int protocol);
bool QSctpSocket_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_bytesAvailable(const void* self);
bool QSctpSocket_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_bytesToWrite(const void* self);
bool QSctpSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot);
void QSctpSocket_virtualbase_setReadBufferSize(void* self, long long size);
bool QSctpSocket_override_virtual_socketDescriptor(void* self, intptr_t slot);
intptr_t QSctpSocket_virtualbase_socketDescriptor(const void* self);
bool QSctpSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QSctpSocket_override_virtual_setSocketOption(void* self, intptr_t slot);
void QSctpSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value);
bool QSctpSocket_override_virtual_socketOption(void* self, intptr_t slot);
QVariant* QSctpSocket_virtualbase_socketOption(void* self, int option);
bool QSctpSocket_override_virtual_isSequential(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_isSequential(const void* self);
bool QSctpSocket_override_virtual_waitForConnected(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_waitForConnected(void* self, int msecs);
bool QSctpSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_waitForReadyRead(void* self, int msecs);
bool QSctpSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QSctpSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_waitForDisconnected(void* self, int msecs);
bool QSctpSocket_override_virtual_skipData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_skipData(void* self, long long maxSize);
bool QSctpSocket_override_virtual_writeData(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_writeData(void* self, const char* data, long long len);
bool QSctpSocket_override_virtual_open(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_open(void* self, int mode);
bool QSctpSocket_override_virtual_pos(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_pos(const void* self);
bool QSctpSocket_override_virtual_size(void* self, intptr_t slot);
long long QSctpSocket_virtualbase_size(const void* self);
bool QSctpSocket_override_virtual_seek(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_seek(void* self, long long pos);
bool QSctpSocket_override_virtual_atEnd(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_atEnd(const void* self);
bool QSctpSocket_override_virtual_reset(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_reset(void* self);
bool QSctpSocket_override_virtual_canReadLine(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_canReadLine(const void* self);
bool QSctpSocket_override_virtual_event(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_event(void* self, QEvent* event);
bool QSctpSocket_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSctpSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSctpSocket_override_virtual_timerEvent(void* self, intptr_t slot);
void QSctpSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSctpSocket_override_virtual_childEvent(void* self, intptr_t slot);
void QSctpSocket_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSctpSocket_override_virtual_customEvent(void* self, intptr_t slot);
void QSctpSocket_virtualbase_customEvent(void* self, QEvent* event);
bool QSctpSocket_override_virtual_connectNotify(void* self, intptr_t slot);
void QSctpSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSctpSocket_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSctpSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSctpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
void QSctpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
void QSctpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
void QSctpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
void QSctpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
void QSctpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
void QSctpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
void QSctpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QSctpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QSctpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSctpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSctpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSctpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSctpSocket_delete(QSctpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
