#pragma once
#ifndef MIQT_QT6_GEN_QIODEVICE_H
#define MIQT_QT6_GEN_QIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QIODevice* QIODevice_new();
QIODevice* QIODevice_new2(QObject* parent);
void QIODevice_virtbase(QIODevice* src, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
QMetaObject* QIODevice_metaObject(const QIODevice* self);
void* QIODevice_metacast(QIODevice* self, const char* param1);
struct miqt_string QIODevice_tr(const char* s);
int QIODevice_openMode(const QIODevice* self);
void QIODevice_setTextModeEnabled(QIODevice* self, bool enabled);
bool QIODevice_isTextModeEnabled(const QIODevice* self);
bool QIODevice_isOpen(const QIODevice* self);
bool QIODevice_isReadable(const QIODevice* self);
bool QIODevice_isWritable(const QIODevice* self);
bool QIODevice_isSequential(const QIODevice* self);
int QIODevice_readChannelCount(const QIODevice* self);
int QIODevice_writeChannelCount(const QIODevice* self);
int QIODevice_currentReadChannel(const QIODevice* self);
void QIODevice_setCurrentReadChannel(QIODevice* self, int channel);
int QIODevice_currentWriteChannel(const QIODevice* self);
void QIODevice_setCurrentWriteChannel(QIODevice* self, int channel);
bool QIODevice_open(QIODevice* self, int mode);
void QIODevice_close(QIODevice* self);
long long QIODevice_pos(const QIODevice* self);
long long QIODevice_size(const QIODevice* self);
bool QIODevice_seek(QIODevice* self, long long pos);
bool QIODevice_atEnd(const QIODevice* self);
bool QIODevice_reset(QIODevice* self);
long long QIODevice_bytesAvailable(const QIODevice* self);
long long QIODevice_bytesToWrite(const QIODevice* self);
long long QIODevice_read(QIODevice* self, char* data, long long maxlen);
struct miqt_string QIODevice_readWithMaxlen(QIODevice* self, long long maxlen);
struct miqt_string QIODevice_readAll(QIODevice* self);
long long QIODevice_readLine(QIODevice* self, char* data, long long maxlen);
struct miqt_string QIODevice_readLine2(QIODevice* self);
bool QIODevice_canReadLine(const QIODevice* self);
void QIODevice_startTransaction(QIODevice* self);
void QIODevice_commitTransaction(QIODevice* self);
void QIODevice_rollbackTransaction(QIODevice* self);
bool QIODevice_isTransactionStarted(const QIODevice* self);
long long QIODevice_write(QIODevice* self, const char* data, long long len);
long long QIODevice_writeWithData(QIODevice* self, const char* data);
long long QIODevice_write2(QIODevice* self, struct miqt_string data);
long long QIODevice_peek(QIODevice* self, char* data, long long maxlen);
struct miqt_string QIODevice_peekWithMaxlen(QIODevice* self, long long maxlen);
long long QIODevice_skip(QIODevice* self, long long maxSize);
bool QIODevice_waitForReadyRead(QIODevice* self, int msecs);
bool QIODevice_waitForBytesWritten(QIODevice* self, int msecs);
void QIODevice_ungetChar(QIODevice* self, char c);
bool QIODevice_putChar(QIODevice* self, char c);
bool QIODevice_getChar(QIODevice* self, char* c);
struct miqt_string QIODevice_errorString(const QIODevice* self);
void QIODevice_readyRead(QIODevice* self);
void QIODevice_connect_readyRead(QIODevice* self, intptr_t slot);
void QIODevice_channelReadyRead(QIODevice* self, int channel);
void QIODevice_connect_channelReadyRead(QIODevice* self, intptr_t slot);
void QIODevice_bytesWritten(QIODevice* self, long long bytes);
void QIODevice_connect_bytesWritten(QIODevice* self, intptr_t slot);
void QIODevice_channelBytesWritten(QIODevice* self, int channel, long long bytes);
void QIODevice_connect_channelBytesWritten(QIODevice* self, intptr_t slot);
void QIODevice_aboutToClose(QIODevice* self);
void QIODevice_connect_aboutToClose(QIODevice* self, intptr_t slot);
void QIODevice_readChannelFinished(QIODevice* self);
void QIODevice_connect_readChannelFinished(QIODevice* self, intptr_t slot);
long long QIODevice_readData(QIODevice* self, char* data, long long maxlen);
long long QIODevice_readLineData(QIODevice* self, char* data, long long maxlen);
long long QIODevice_skipData(QIODevice* self, long long maxSize);
long long QIODevice_writeData(QIODevice* self, const char* data, long long len);
struct miqt_string QIODevice_tr2(const char* s, const char* c);
struct miqt_string QIODevice_tr3(const char* s, const char* c, int n);
struct miqt_string QIODevice_readLineWithMaxlen(QIODevice* self, long long maxlen);
bool QIODevice_override_virtual_isSequential(void* self, intptr_t slot);
bool QIODevice_virtualbase_isSequential(const void* self);
bool QIODevice_override_virtual_open(void* self, intptr_t slot);
bool QIODevice_virtualbase_open(void* self, int mode);
bool QIODevice_override_virtual_close(void* self, intptr_t slot);
void QIODevice_virtualbase_close(void* self);
bool QIODevice_override_virtual_pos(void* self, intptr_t slot);
long long QIODevice_virtualbase_pos(const void* self);
bool QIODevice_override_virtual_size(void* self, intptr_t slot);
long long QIODevice_virtualbase_size(const void* self);
bool QIODevice_override_virtual_seek(void* self, intptr_t slot);
bool QIODevice_virtualbase_seek(void* self, long long pos);
bool QIODevice_override_virtual_atEnd(void* self, intptr_t slot);
bool QIODevice_virtualbase_atEnd(const void* self);
bool QIODevice_override_virtual_reset(void* self, intptr_t slot);
bool QIODevice_virtualbase_reset(void* self);
bool QIODevice_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QIODevice_virtualbase_bytesAvailable(const void* self);
bool QIODevice_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QIODevice_virtualbase_bytesToWrite(const void* self);
bool QIODevice_override_virtual_canReadLine(void* self, intptr_t slot);
bool QIODevice_virtualbase_canReadLine(const void* self);
bool QIODevice_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QIODevice_virtualbase_waitForReadyRead(void* self, int msecs);
bool QIODevice_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QIODevice_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QIODevice_override_virtual_readData(void* self, intptr_t slot);
long long QIODevice_virtualbase_readData(void* self, char* data, long long maxlen);
bool QIODevice_override_virtual_readLineData(void* self, intptr_t slot);
long long QIODevice_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QIODevice_override_virtual_skipData(void* self, intptr_t slot);
long long QIODevice_virtualbase_skipData(void* self, long long maxSize);
bool QIODevice_override_virtual_writeData(void* self, intptr_t slot);
long long QIODevice_virtualbase_writeData(void* self, const char* data, long long len);
bool QIODevice_override_virtual_event(void* self, intptr_t slot);
bool QIODevice_virtualbase_event(void* self, QEvent* event);
bool QIODevice_override_virtual_eventFilter(void* self, intptr_t slot);
bool QIODevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QIODevice_override_virtual_timerEvent(void* self, intptr_t slot);
void QIODevice_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QIODevice_override_virtual_childEvent(void* self, intptr_t slot);
void QIODevice_virtualbase_childEvent(void* self, QChildEvent* event);
bool QIODevice_override_virtual_customEvent(void* self, intptr_t slot);
void QIODevice_virtualbase_customEvent(void* self, QEvent* event);
bool QIODevice_override_virtual_connectNotify(void* self, intptr_t slot);
void QIODevice_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QIODevice_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QIODevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QIODevice_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QIODevice_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QIODevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QIODevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QIODevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QIODevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QIODevice_delete(QIODevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
