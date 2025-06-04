#pragma once
#ifndef MIQT_QT6_SPATIALAUDIO_GEN_QAUDIOENGINE_H
#define MIQT_QT6_SPATIALAUDIO_GEN_QAUDIOENGINE_H

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
class QAudioEngine;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioEngine QAudioEngine;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioEngine* QAudioEngine_new();
QAudioEngine* QAudioEngine_new2(QObject* parent);
QAudioEngine* QAudioEngine_new3(int sampleRate);
QAudioEngine* QAudioEngine_new4(int sampleRate, QObject* parent);
void QAudioEngine_virtbase(QAudioEngine* src, QObject** outptr_QObject);
QMetaObject* QAudioEngine_metaObject(const QAudioEngine* self);
void* QAudioEngine_metacast(QAudioEngine* self, const char* param1);
struct miqt_string QAudioEngine_tr(const char* s);
void QAudioEngine_setOutputMode(QAudioEngine* self, int mode);
int QAudioEngine_outputMode(const QAudioEngine* self);
int QAudioEngine_sampleRate(const QAudioEngine* self);
void QAudioEngine_setOutputDevice(QAudioEngine* self, QAudioDevice* device);
QAudioDevice* QAudioEngine_outputDevice(const QAudioEngine* self);
void QAudioEngine_setMasterVolume(QAudioEngine* self, float volume);
float QAudioEngine_masterVolume(const QAudioEngine* self);
void QAudioEngine_setPaused(QAudioEngine* self, bool paused);
bool QAudioEngine_paused(const QAudioEngine* self);
void QAudioEngine_setRoomEffectsEnabled(QAudioEngine* self, bool enabled);
bool QAudioEngine_roomEffectsEnabled(const QAudioEngine* self);
void QAudioEngine_setDistanceScale(QAudioEngine* self, float scale);
float QAudioEngine_distanceScale(const QAudioEngine* self);
void QAudioEngine_outputModeChanged(QAudioEngine* self);
void QAudioEngine_connect_outputModeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_outputDeviceChanged(QAudioEngine* self);
void QAudioEngine_connect_outputDeviceChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_masterVolumeChanged(QAudioEngine* self);
void QAudioEngine_connect_masterVolumeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_pausedChanged(QAudioEngine* self);
void QAudioEngine_connect_pausedChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_distanceScaleChanged(QAudioEngine* self);
void QAudioEngine_connect_distanceScaleChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_start(QAudioEngine* self);
void QAudioEngine_stop(QAudioEngine* self);
void QAudioEngine_pause(QAudioEngine* self);
void QAudioEngine_resume(QAudioEngine* self);
struct miqt_string QAudioEngine_tr2(const char* s, const char* c);
struct miqt_string QAudioEngine_tr3(const char* s, const char* c, int n);

bool QAudioEngine_override_virtual_event(void* self, intptr_t slot);
bool QAudioEngine_virtualbase_event(void* self, QEvent* event);
bool QAudioEngine_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioEngine_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioEngine_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioEngine_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioEngine_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioEngine_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioEngine_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioEngine_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAudioEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAudioEngine_delete(QAudioEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
