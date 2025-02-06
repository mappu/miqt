#pragma once
#ifndef MIQT_QT6_GEN_QBUFFER_H
#define MIQT_QT6_GEN_QBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBuffer;
class QChildEvent;
class QEvent;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QBuffer QBuffer;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QBuffer* QBuffer_new();
QBuffer* QBuffer_new2(QObject* parent);
void QBuffer_virtbase(QBuffer* src, QIODevice** outptr_QIODevice);
QMetaObject* QBuffer_metaObject(const QBuffer* self);
void* QBuffer_metacast(QBuffer* self, const char* param1);
struct miqt_string QBuffer_tr(const char* s);
struct miqt_string QBuffer_buffer(QBuffer* self);
struct miqt_string QBuffer_buffer2(const QBuffer* self);
void QBuffer_setData(QBuffer* self, struct miqt_string data);
void QBuffer_setData2(QBuffer* self, const char* data, int len);
struct miqt_string QBuffer_data(const QBuffer* self);
bool QBuffer_open(QBuffer* self, int openMode);
void QBuffer_close(QBuffer* self);
long long QBuffer_size(const QBuffer* self);
long long QBuffer_pos(const QBuffer* self);
bool QBuffer_seek(QBuffer* self, long long off);
bool QBuffer_atEnd(const QBuffer* self);
bool QBuffer_canReadLine(const QBuffer* self);
void QBuffer_connectNotify(QBuffer* self, QMetaMethod* param1);
void QBuffer_disconnectNotify(QBuffer* self, QMetaMethod* param1);
long long QBuffer_readData(QBuffer* self, char* data, long long maxlen);
long long QBuffer_writeData(QBuffer* self, const char* data, long long len);
struct miqt_string QBuffer_tr2(const char* s, const char* c);
struct miqt_string QBuffer_tr3(const char* s, const char* c, int n);
bool QBuffer_override_virtual_open(void* self, intptr_t slot);
bool QBuffer_virtualbase_open(void* self, int openMode);
bool QBuffer_override_virtual_close(void* self, intptr_t slot);
void QBuffer_virtualbase_close(void* self);
bool QBuffer_override_virtual_size(void* self, intptr_t slot);
long long QBuffer_virtualbase_size(const void* self);
bool QBuffer_override_virtual_pos(void* self, intptr_t slot);
long long QBuffer_virtualbase_pos(const void* self);
bool QBuffer_override_virtual_seek(void* self, intptr_t slot);
bool QBuffer_virtualbase_seek(void* self, long long off);
bool QBuffer_override_virtual_atEnd(void* self, intptr_t slot);
bool QBuffer_virtualbase_atEnd(const void* self);
bool QBuffer_override_virtual_canReadLine(void* self, intptr_t slot);
bool QBuffer_virtualbase_canReadLine(const void* self);
bool QBuffer_override_virtual_connectNotify(void* self, intptr_t slot);
void QBuffer_virtualbase_connectNotify(void* self, QMetaMethod* param1);
bool QBuffer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QBuffer_virtualbase_disconnectNotify(void* self, QMetaMethod* param1);
bool QBuffer_override_virtual_readData(void* self, intptr_t slot);
long long QBuffer_virtualbase_readData(void* self, char* data, long long maxlen);
bool QBuffer_override_virtual_writeData(void* self, intptr_t slot);
long long QBuffer_virtualbase_writeData(void* self, const char* data, long long len);
bool QBuffer_override_virtual_isSequential(void* self, intptr_t slot);
bool QBuffer_virtualbase_isSequential(const void* self);
bool QBuffer_override_virtual_reset(void* self, intptr_t slot);
bool QBuffer_virtualbase_reset(void* self);
bool QBuffer_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QBuffer_virtualbase_bytesAvailable(const void* self);
bool QBuffer_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QBuffer_virtualbase_bytesToWrite(const void* self);
bool QBuffer_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QBuffer_virtualbase_waitForReadyRead(void* self, int msecs);
bool QBuffer_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QBuffer_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QBuffer_override_virtual_readLineData(void* self, intptr_t slot);
long long QBuffer_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QBuffer_override_virtual_skipData(void* self, intptr_t slot);
long long QBuffer_virtualbase_skipData(void* self, long long maxSize);
bool QBuffer_override_virtual_event(void* self, intptr_t slot);
bool QBuffer_virtualbase_event(void* self, QEvent* event);
bool QBuffer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QBuffer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QBuffer_override_virtual_timerEvent(void* self, intptr_t slot);
void QBuffer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QBuffer_override_virtual_childEvent(void* self, intptr_t slot);
void QBuffer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QBuffer_override_virtual_customEvent(void* self, intptr_t slot);
void QBuffer_virtualbase_customEvent(void* self, QEvent* event);
void QBuffer_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QBuffer_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QBuffer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QBuffer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QBuffer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QBuffer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QBuffer_delete(QBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
