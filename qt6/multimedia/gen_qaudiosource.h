#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSOURCE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOSOURCE_H

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
class QAudioSource;
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
typedef struct QAudioSource QAudioSource;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioSource* QAudioSource_new();
QAudioSource* QAudioSource_new2(QAudioDevice* audioDeviceInfo);
QAudioSource* QAudioSource_new3(QAudioFormat* format);
QAudioSource* QAudioSource_new4(QAudioFormat* format, QObject* parent);
QAudioSource* QAudioSource_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format);
QAudioSource* QAudioSource_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent);
void QAudioSource_virtbase(QAudioSource* src, QObject** outptr_QObject);
QMetaObject* QAudioSource_metaObject(const QAudioSource* self);
void* QAudioSource_metacast(QAudioSource* self, const char* param1);
struct miqt_string QAudioSource_tr(const char* s);
bool QAudioSource_isNull(const QAudioSource* self);
QAudioFormat* QAudioSource_format(const QAudioSource* self);
void QAudioSource_start(QAudioSource* self, QIODevice* device);
QIODevice* QAudioSource_start2(QAudioSource* self);
void QAudioSource_stop(QAudioSource* self);
void QAudioSource_reset(QAudioSource* self);
void QAudioSource_suspend(QAudioSource* self);
void QAudioSource_resume(QAudioSource* self);
void QAudioSource_setBufferSize(QAudioSource* self, ptrdiff_t bytes);
ptrdiff_t QAudioSource_bufferSize(const QAudioSource* self);
ptrdiff_t QAudioSource_bytesAvailable(const QAudioSource* self);
void QAudioSource_setVolume(QAudioSource* self, double volume);
double QAudioSource_volume(const QAudioSource* self);
long long QAudioSource_processedUSecs(const QAudioSource* self);
long long QAudioSource_elapsedUSecs(const QAudioSource* self);
int QAudioSource_error(const QAudioSource* self);
int QAudioSource_state(const QAudioSource* self);
void QAudioSource_stateChanged(QAudioSource* self, int state);
void QAudioSource_connect_stateChanged(QAudioSource* self, intptr_t slot);
struct miqt_string QAudioSource_tr2(const char* s, const char* c);
struct miqt_string QAudioSource_tr3(const char* s, const char* c, int n);

bool QAudioSource_override_virtual_event(void* self, intptr_t slot);
bool QAudioSource_virtualbase_event(void* self, QEvent* event);
bool QAudioSource_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioSource_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioSource_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioSource_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioSource_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioSource_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioSource_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioSource_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioSource_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAudioSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAudioSource_delete(QAudioSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
