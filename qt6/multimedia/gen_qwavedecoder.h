#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QWAVEDECODER_H
#define MIQT_QT6_MULTIMEDIA_GEN_QWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioFormat;
class QChildEvent;
class QEvent;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWaveDecoder;
#else
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWaveDecoder QWaveDecoder;
#endif

QWaveDecoder* QWaveDecoder_new(QIODevice* device);
QWaveDecoder* QWaveDecoder_new2(QIODevice* device, QAudioFormat* format);
QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent);
QWaveDecoder* QWaveDecoder_new4(QIODevice* device, QAudioFormat* format, QObject* parent);
void QWaveDecoder_virtbase(QWaveDecoder* src, QIODevice** outptr_QIODevice);
QMetaObject* QWaveDecoder_metaObject(const QWaveDecoder* self);
void* QWaveDecoder_metacast(QWaveDecoder* self, const char* param1);
struct miqt_string QWaveDecoder_tr(const char* s);
QAudioFormat* QWaveDecoder_audioFormat(const QWaveDecoder* self);
QIODevice* QWaveDecoder_getDevice(QWaveDecoder* self);
int QWaveDecoder_duration(const QWaveDecoder* self);
long long QWaveDecoder_headerLength();
bool QWaveDecoder_open(QWaveDecoder* self, int mode);
void QWaveDecoder_close(QWaveDecoder* self);
bool QWaveDecoder_seek(QWaveDecoder* self, long long pos);
long long QWaveDecoder_pos(const QWaveDecoder* self);
long long QWaveDecoder_size(const QWaveDecoder* self);
bool QWaveDecoder_isSequential(const QWaveDecoder* self);
long long QWaveDecoder_bytesAvailable(const QWaveDecoder* self);
void QWaveDecoder_formatKnown(QWaveDecoder* self);
void QWaveDecoder_connect_formatKnown(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_parsingError(QWaveDecoder* self);
void QWaveDecoder_connect_parsingError(QWaveDecoder* self, intptr_t slot);
struct miqt_string QWaveDecoder_tr2(const char* s, const char* c);
struct miqt_string QWaveDecoder_tr3(const char* s, const char* c, int n);
bool QWaveDecoder_override_virtual_open(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_open(void* self, int mode);
bool QWaveDecoder_override_virtual_close(void* self, intptr_t slot);
void QWaveDecoder_virtualbase_close(void* self);
bool QWaveDecoder_override_virtual_seek(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_seek(void* self, long long pos);
bool QWaveDecoder_override_virtual_pos(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_pos(const void* self);
bool QWaveDecoder_override_virtual_size(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_size(const void* self);
bool QWaveDecoder_override_virtual_isSequential(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_isSequential(const void* self);
bool QWaveDecoder_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_bytesAvailable(const void* self);
bool QWaveDecoder_override_virtual_atEnd(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_atEnd(const void* self);
bool QWaveDecoder_override_virtual_reset(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_reset(void* self);
bool QWaveDecoder_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_bytesToWrite(const void* self);
bool QWaveDecoder_override_virtual_canReadLine(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_canReadLine(const void* self);
bool QWaveDecoder_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_waitForReadyRead(void* self, int msecs);
bool QWaveDecoder_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QWaveDecoder_override_virtual_readLineData(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QWaveDecoder_override_virtual_skipData(void* self, intptr_t slot);
long long QWaveDecoder_virtualbase_skipData(void* self, long long maxSize);
bool QWaveDecoder_override_virtual_event(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_event(void* self, QEvent* event);
bool QWaveDecoder_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWaveDecoder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWaveDecoder_override_virtual_timerEvent(void* self, intptr_t slot);
void QWaveDecoder_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWaveDecoder_override_virtual_childEvent(void* self, intptr_t slot);
void QWaveDecoder_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWaveDecoder_override_virtual_customEvent(void* self, intptr_t slot);
void QWaveDecoder_virtualbase_customEvent(void* self, QEvent* event);
bool QWaveDecoder_override_virtual_connectNotify(void* self, intptr_t slot);
void QWaveDecoder_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWaveDecoder_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWaveDecoder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QWaveDecoder_delete(QWaveDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
