#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QTCPSOCKET_H
#define MIQT_QT_NETWORK_GEN_QTCPSOCKET_H

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
QMetaObject* QTcpSocket_metaObject(const QTcpSocket* self);
void* QTcpSocket_metacast(QTcpSocket* self, const char* param1);
struct miqt_string QTcpSocket_tr(const char* s);
struct miqt_string QTcpSocket_trUtf8(const char* s);
struct miqt_string QTcpSocket_tr2(const char* s, const char* c);
struct miqt_string QTcpSocket_tr3(const char* s, const char* c, int n);
struct miqt_string QTcpSocket_trUtf82(const char* s, const char* c);
struct miqt_string QTcpSocket_trUtf83(const char* s, const char* c, int n);
bool QTcpSocket_override_virtual_resume(void* self, intptr_t slot);
void QTcpSocket_virtualbase_resume(void* self);
bool QTcpSocket_override_virtual_connectToHost(void* self, intptr_t slot);
void QTcpSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol);
bool QTcpSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot);
void QTcpSocket_virtualbase_disconnectFromHost(void* self);
bool QTcpSocket_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_bytesAvailable(const void* self);
bool QTcpSocket_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_bytesToWrite(const void* self);
bool QTcpSocket_override_virtual_canReadLine(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_canReadLine(const void* self);
bool QTcpSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot);
void QTcpSocket_virtualbase_setReadBufferSize(void* self, long long size);
bool QTcpSocket_override_virtual_socketDescriptor(void* self, intptr_t slot);
intptr_t QTcpSocket_virtualbase_socketDescriptor(const void* self);
bool QTcpSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QTcpSocket_override_virtual_setSocketOption(void* self, intptr_t slot);
void QTcpSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value);
bool QTcpSocket_override_virtual_socketOption(void* self, intptr_t slot);
QVariant* QTcpSocket_virtualbase_socketOption(void* self, int option);
bool QTcpSocket_override_virtual_close(void* self, intptr_t slot);
void QTcpSocket_virtualbase_close(void* self);
bool QTcpSocket_override_virtual_isSequential(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_isSequential(const void* self);
bool QTcpSocket_override_virtual_atEnd(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_atEnd(const void* self);
bool QTcpSocket_override_virtual_waitForConnected(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_waitForConnected(void* self, int msecs);
bool QTcpSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_waitForReadyRead(void* self, int msecs);
bool QTcpSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QTcpSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_waitForDisconnected(void* self, int msecs);
bool QTcpSocket_override_virtual_readData(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_readData(void* self, char* data, long long maxlen);
bool QTcpSocket_override_virtual_readLineData(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QTcpSocket_override_virtual_writeData(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_writeData(void* self, const char* data, long long len);
bool QTcpSocket_override_virtual_open(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_open(void* self, int mode);
bool QTcpSocket_override_virtual_pos(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_pos(const void* self);
bool QTcpSocket_override_virtual_size(void* self, intptr_t slot);
long long QTcpSocket_virtualbase_size(const void* self);
bool QTcpSocket_override_virtual_seek(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_seek(void* self, long long pos);
bool QTcpSocket_override_virtual_reset(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_reset(void* self);
bool QTcpSocket_override_virtual_event(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_event(void* self, QEvent* event);
bool QTcpSocket_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTcpSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTcpSocket_override_virtual_timerEvent(void* self, intptr_t slot);
void QTcpSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTcpSocket_override_virtual_childEvent(void* self, intptr_t slot);
void QTcpSocket_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTcpSocket_override_virtual_customEvent(void* self, intptr_t slot);
void QTcpSocket_virtualbase_customEvent(void* self, QEvent* event);
bool QTcpSocket_override_virtual_connectNotify(void* self, intptr_t slot);
void QTcpSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTcpSocket_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTcpSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTcpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
void QTcpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
void QTcpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
void QTcpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
void QTcpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
void QTcpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
void QTcpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
void QTcpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QTcpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QTcpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTcpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTcpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTcpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QTcpSocket_delete(QTcpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
