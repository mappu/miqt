#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QLOCALSOCKET_H
#define MIQT_QT6_NETWORK_GEN_QLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QIODevice;
class QIODeviceBase;
class QLocalSocket;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLocalSocket* QLocalSocket_new();
QLocalSocket* QLocalSocket_new2(QObject* parent);
void QLocalSocket_virtbase(QLocalSocket* src, QIODevice** outptr_QIODevice);
QMetaObject* QLocalSocket_metaObject(const QLocalSocket* self);
void* QLocalSocket_metacast(QLocalSocket* self, const char* param1);
struct miqt_string QLocalSocket_tr(const char* s);
void QLocalSocket_connectToServer(QLocalSocket* self);
void QLocalSocket_connectToServerWithName(QLocalSocket* self, struct miqt_string name);
void QLocalSocket_disconnectFromServer(QLocalSocket* self);
void QLocalSocket_setServerName(QLocalSocket* self, struct miqt_string name);
struct miqt_string QLocalSocket_serverName(const QLocalSocket* self);
struct miqt_string QLocalSocket_fullServerName(const QLocalSocket* self);
void QLocalSocket_abort(QLocalSocket* self);
bool QLocalSocket_isSequential(const QLocalSocket* self);
long long QLocalSocket_bytesAvailable(const QLocalSocket* self);
long long QLocalSocket_bytesToWrite(const QLocalSocket* self);
bool QLocalSocket_canReadLine(const QLocalSocket* self);
bool QLocalSocket_open(QLocalSocket* self, int openMode);
void QLocalSocket_close(QLocalSocket* self);
int QLocalSocket_error(const QLocalSocket* self);
bool QLocalSocket_flush(QLocalSocket* self);
bool QLocalSocket_isValid(const QLocalSocket* self);
long long QLocalSocket_readBufferSize(const QLocalSocket* self);
void QLocalSocket_setReadBufferSize(QLocalSocket* self, long long size);
bool QLocalSocket_setSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor);
intptr_t QLocalSocket_socketDescriptor(const QLocalSocket* self);
void QLocalSocket_setSocketOptions(QLocalSocket* self, int option);
int QLocalSocket_socketOptions(const QLocalSocket* self);
int QLocalSocket_state(const QLocalSocket* self);
bool QLocalSocket_waitForBytesWritten(QLocalSocket* self, int msecs);
bool QLocalSocket_waitForConnected(QLocalSocket* self);
bool QLocalSocket_waitForDisconnected(QLocalSocket* self);
bool QLocalSocket_waitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_connected(QLocalSocket* self);
void QLocalSocket_connect_connected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_disconnected(QLocalSocket* self);
void QLocalSocket_connect_disconnected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_errorOccurred(QLocalSocket* self, int socketError);
void QLocalSocket_connect_errorOccurred(QLocalSocket* self, intptr_t slot);
void QLocalSocket_stateChanged(QLocalSocket* self, int socketState);
void QLocalSocket_connect_stateChanged(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_readData(QLocalSocket* self, char* param1, long long param2);
long long QLocalSocket_readLineData(QLocalSocket* self, char* data, long long maxSize);
long long QLocalSocket_skipData(QLocalSocket* self, long long maxSize);
long long QLocalSocket_writeData(QLocalSocket* self, const char* param1, long long param2);
struct miqt_string QLocalSocket_tr2(const char* s, const char* c);
struct miqt_string QLocalSocket_tr3(const char* s, const char* c, int n);
void QLocalSocket_connectToServer1(QLocalSocket* self, int openMode);
void QLocalSocket_connectToServer2(QLocalSocket* self, struct miqt_string name, int openMode);
bool QLocalSocket_setSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState);
bool QLocalSocket_setSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode);
bool QLocalSocket_waitForConnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_waitForDisconnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_override_virtual_isSequential(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_isSequential(const void* self);
bool QLocalSocket_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_bytesAvailable(const void* self);
bool QLocalSocket_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_bytesToWrite(const void* self);
bool QLocalSocket_override_virtual_canReadLine(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_canReadLine(const void* self);
bool QLocalSocket_override_virtual_open(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_open(void* self, int openMode);
bool QLocalSocket_override_virtual_close(void* self, intptr_t slot);
void QLocalSocket_virtualbase_close(void* self);
bool QLocalSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QLocalSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_waitForReadyRead(void* self, int msecs);
bool QLocalSocket_override_virtual_readData(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_readData(void* self, char* param1, long long param2);
bool QLocalSocket_override_virtual_readLineData(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_readLineData(void* self, char* data, long long maxSize);
bool QLocalSocket_override_virtual_skipData(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_skipData(void* self, long long maxSize);
bool QLocalSocket_override_virtual_writeData(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_writeData(void* self, const char* param1, long long param2);
bool QLocalSocket_override_virtual_pos(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_pos(const void* self);
bool QLocalSocket_override_virtual_size(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_size(const void* self);
bool QLocalSocket_override_virtual_seek(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_seek(void* self, long long pos);
bool QLocalSocket_override_virtual_atEnd(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_atEnd(const void* self);
bool QLocalSocket_override_virtual_reset(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_reset(void* self);
bool QLocalSocket_override_virtual_event(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_event(void* self, QEvent* event);
bool QLocalSocket_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLocalSocket_override_virtual_timerEvent(void* self, intptr_t slot);
void QLocalSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLocalSocket_override_virtual_childEvent(void* self, intptr_t slot);
void QLocalSocket_virtualbase_childEvent(void* self, QChildEvent* event);
bool QLocalSocket_override_virtual_customEvent(void* self, intptr_t slot);
void QLocalSocket_virtualbase_customEvent(void* self, QEvent* event);
bool QLocalSocket_override_virtual_connectNotify(void* self, intptr_t slot);
void QLocalSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLocalSocket_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLocalSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QLocalSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QLocalSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QLocalSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QLocalSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QLocalSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QLocalSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QLocalSocket_delete(QLocalSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
