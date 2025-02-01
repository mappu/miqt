#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSINK_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDevice;
class QAudioFormat;
class QAudioSink;
class QChildEvent;
class QEvent;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioSink QAudioSink;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioSink* QAudioSink_new();
QAudioSink* QAudioSink_new2(QAudioDevice* audioDeviceInfo);
QAudioSink* QAudioSink_new3(QAudioFormat* format);
QAudioSink* QAudioSink_new4(QAudioFormat* format, QObject* parent);
QAudioSink* QAudioSink_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format);
QAudioSink* QAudioSink_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent);
void QAudioSink_virtbase(QAudioSink* src, QObject** outptr_QObject);
QMetaObject* QAudioSink_metaObject(const QAudioSink* self);
void* QAudioSink_metacast(QAudioSink* self, const char* param1);
struct miqt_string QAudioSink_tr(const char* s);
bool QAudioSink_isNull(const QAudioSink* self);
QAudioFormat* QAudioSink_format(const QAudioSink* self);
void QAudioSink_start(QAudioSink* self, QIODevice* device);
QIODevice* QAudioSink_start2(QAudioSink* self);
void QAudioSink_stop(QAudioSink* self);
void QAudioSink_reset(QAudioSink* self);
void QAudioSink_suspend(QAudioSink* self);
void QAudioSink_resume(QAudioSink* self);
void QAudioSink_setBufferSize(QAudioSink* self, ptrdiff_t bytes);
ptrdiff_t QAudioSink_bufferSize(const QAudioSink* self);
ptrdiff_t QAudioSink_bytesFree(const QAudioSink* self);
long long QAudioSink_processedUSecs(const QAudioSink* self);
long long QAudioSink_elapsedUSecs(const QAudioSink* self);
int QAudioSink_error(const QAudioSink* self);
int QAudioSink_state(const QAudioSink* self);
void QAudioSink_setVolume(QAudioSink* self, double volume);
double QAudioSink_volume(const QAudioSink* self);
void QAudioSink_stateChanged(QAudioSink* self, int state);
void QAudioSink_connect_stateChanged(QAudioSink* self, intptr_t slot);
struct miqt_string QAudioSink_tr2(const char* s, const char* c);
struct miqt_string QAudioSink_tr3(const char* s, const char* c, int n);
bool QAudioSink_override_virtual_event(void* self, intptr_t slot);
bool QAudioSink_virtualbase_event(void* self, QEvent* event);
bool QAudioSink_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioSink_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioSink_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioSink_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioSink_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioSink_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioSink_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioSink_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioSink_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioSink_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioSink_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioSink_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAudioSink_delete(QAudioSink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
