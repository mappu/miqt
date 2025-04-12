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
class QChildEvent;
class QEvent;
class QHostAddress;
class QIODevice;
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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent);
void QAbstractSocket_virtbase(QAbstractSocket* src, QIODevice** outptr_QIODevice);
QMetaObject* QAbstractSocket_metaObject(const QAbstractSocket* self);
void* QAbstractSocket_metacast(QAbstractSocket* self, const char* param1);
struct miqt_string QAbstractSocket_tr(const char* s);
struct miqt_string QAbstractSocket_trUtf8(const char* s);
void QAbstractSocket_resume(QAbstractSocket* self);
int QAbstractSocket_pauseMode(const QAbstractSocket* self);
void QAbstractSocket_setPauseMode(QAbstractSocket* self, int pauseMode);
bool QAbstractSocket_bind(QAbstractSocket* self, QHostAddress* address);
bool QAbstractSocket_bind2(QAbstractSocket* self);
void QAbstractSocket_connectToHost(QAbstractSocket* self, struct miqt_string hostName, unsigned short port, int mode, int protocol);
void QAbstractSocket_connectToHost2(QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode);
void QAbstractSocket_disconnectFromHost(QAbstractSocket* self);
bool QAbstractSocket_isValid(const QAbstractSocket* self);
long long QAbstractSocket_bytesAvailable(const QAbstractSocket* self);
long long QAbstractSocket_bytesToWrite(const QAbstractSocket* self);
bool QAbstractSocket_canReadLine(const QAbstractSocket* self);
unsigned short QAbstractSocket_localPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_localAddress(const QAbstractSocket* self);
unsigned short QAbstractSocket_peerPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_peerAddress(const QAbstractSocket* self);
struct miqt_string QAbstractSocket_peerName(const QAbstractSocket* self);
long long QAbstractSocket_readBufferSize(const QAbstractSocket* self);
void QAbstractSocket_setReadBufferSize(QAbstractSocket* self, long long size);
void QAbstractSocket_abort(QAbstractSocket* self);
intptr_t QAbstractSocket_socketDescriptor(const QAbstractSocket* self);
bool QAbstractSocket_setSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QAbstractSocket_setSocketOption(QAbstractSocket* self, int option, QVariant* value);
QVariant* QAbstractSocket_socketOption(QAbstractSocket* self, int option);
int QAbstractSocket_socketType(const QAbstractSocket* self);
int QAbstractSocket_state(const QAbstractSocket* self);
int QAbstractSocket_error(const QAbstractSocket* self);
void QAbstractSocket_close(QAbstractSocket* self);
bool QAbstractSocket_isSequential(const QAbstractSocket* self);
bool QAbstractSocket_atEnd(const QAbstractSocket* self);
bool QAbstractSocket_flush(QAbstractSocket* self);
bool QAbstractSocket_waitForConnected(QAbstractSocket* self, int msecs);
bool QAbstractSocket_waitForReadyRead(QAbstractSocket* self, int msecs);
bool QAbstractSocket_waitForBytesWritten(QAbstractSocket* self, int msecs);
bool QAbstractSocket_waitForDisconnected(QAbstractSocket* self, int msecs);
void QAbstractSocket_setProxy(QAbstractSocket* self, QNetworkProxy* networkProxy);
QNetworkProxy* QAbstractSocket_proxy(const QAbstractSocket* self);
struct miqt_string QAbstractSocket_protocolTag(const QAbstractSocket* self);
void QAbstractSocket_setProtocolTag(QAbstractSocket* self, struct miqt_string tag);
void QAbstractSocket_hostFound(QAbstractSocket* self);
void QAbstractSocket_connect_hostFound(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_connected(QAbstractSocket* self);
void QAbstractSocket_connect_connected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_disconnected(QAbstractSocket* self);
void QAbstractSocket_connect_disconnected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_stateChanged(QAbstractSocket* self, int param1);
void QAbstractSocket_connect_stateChanged(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_errorWithQAbstractSocketSocketError(QAbstractSocket* self, int param1);
void QAbstractSocket_connect_errorWithQAbstractSocketSocketError(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_errorOccurred(QAbstractSocket* self, int param1);
void QAbstractSocket_connect_errorOccurred(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_proxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator);
void QAbstractSocket_connect_proxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_readData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_readLineData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_writeData(QAbstractSocket* self, const char* data, long long len);
struct miqt_string QAbstractSocket_tr2(const char* s, const char* c);
struct miqt_string QAbstractSocket_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractSocket_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractSocket_trUtf83(const char* s, const char* c, int n);
bool QAbstractSocket_bind3(QAbstractSocket* self, QHostAddress* address, unsigned short port);
bool QAbstractSocket_bind4(QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode);
bool QAbstractSocket_bindWithPort(QAbstractSocket* self, unsigned short port);
bool QAbstractSocket_bind5(QAbstractSocket* self, unsigned short port, int mode);
bool QAbstractSocket_override_virtual_resume(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_resume(void* self);
bool QAbstractSocket_override_virtual_connectToHost(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, unsigned short port, int mode, int protocol);
bool QAbstractSocket_override_virtual_connectToHost2(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_connectToHost2(void* self, QHostAddress* address, unsigned short port, int mode);
bool QAbstractSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_disconnectFromHost(void* self);
bool QAbstractSocket_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_bytesAvailable(const void* self);
bool QAbstractSocket_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_bytesToWrite(const void* self);
bool QAbstractSocket_override_virtual_canReadLine(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_canReadLine(const void* self);
bool QAbstractSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_setReadBufferSize(void* self, long long size);
bool QAbstractSocket_override_virtual_socketDescriptor(void* self, intptr_t slot);
intptr_t QAbstractSocket_virtualbase_socketDescriptor(const void* self);
bool QAbstractSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);
bool QAbstractSocket_override_virtual_setSocketOption(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value);
bool QAbstractSocket_override_virtual_socketOption(void* self, intptr_t slot);
QVariant* QAbstractSocket_virtualbase_socketOption(void* self, int option);
bool QAbstractSocket_override_virtual_close(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_close(void* self);
bool QAbstractSocket_override_virtual_isSequential(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_isSequential(const void* self);
bool QAbstractSocket_override_virtual_atEnd(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_atEnd(const void* self);
bool QAbstractSocket_override_virtual_waitForConnected(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_waitForConnected(void* self, int msecs);
bool QAbstractSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_waitForReadyRead(void* self, int msecs);
bool QAbstractSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QAbstractSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_waitForDisconnected(void* self, int msecs);
bool QAbstractSocket_override_virtual_readData(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_readData(void* self, char* data, long long maxlen);
bool QAbstractSocket_override_virtual_readLineData(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QAbstractSocket_override_virtual_writeData(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_writeData(void* self, const char* data, long long len);
bool QAbstractSocket_override_virtual_open(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_open(void* self, int mode);
bool QAbstractSocket_override_virtual_pos(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_pos(const void* self);
bool QAbstractSocket_override_virtual_size(void* self, intptr_t slot);
long long QAbstractSocket_virtualbase_size(const void* self);
bool QAbstractSocket_override_virtual_seek(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_seek(void* self, long long pos);
bool QAbstractSocket_override_virtual_reset(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_reset(void* self);
bool QAbstractSocket_override_virtual_event(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_event(void* self, QEvent* event);
bool QAbstractSocket_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractSocket_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractSocket_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractSocket_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractSocket_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractSocket_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAbstractSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
void QAbstractSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
void QAbstractSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
void QAbstractSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
void QAbstractSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
void QAbstractSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
void QAbstractSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
void QAbstractSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QAbstractSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QAbstractSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAbstractSocket_delete(QAbstractSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
