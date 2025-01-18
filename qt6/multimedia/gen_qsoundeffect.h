#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QSOUNDEFFECT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QSOUNDEFFECT_H

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
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSoundEffect;
class QTimerEvent;
class QUrl;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSoundEffect QSoundEffect;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QSoundEffect* QSoundEffect_new();
QSoundEffect* QSoundEffect_new2(QAudioDevice* audioDevice);
QSoundEffect* QSoundEffect_new3(QObject* parent);
QSoundEffect* QSoundEffect_new4(QAudioDevice* audioDevice, QObject* parent);
void QSoundEffect_virtbase(QSoundEffect* src, QObject** outptr_QObject);
QMetaObject* QSoundEffect_MetaObject(const QSoundEffect* self);
void* QSoundEffect_Metacast(QSoundEffect* self, const char* param1);
struct miqt_string QSoundEffect_Tr(const char* s);
struct miqt_array /* of struct miqt_string */  QSoundEffect_SupportedMimeTypes();
QUrl* QSoundEffect_Source(const QSoundEffect* self);
void QSoundEffect_SetSource(QSoundEffect* self, QUrl* url);
int QSoundEffect_LoopCount(const QSoundEffect* self);
int QSoundEffect_LoopsRemaining(const QSoundEffect* self);
void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount);
QAudioDevice* QSoundEffect_AudioDevice(QSoundEffect* self);
void QSoundEffect_SetAudioDevice(QSoundEffect* self, QAudioDevice* device);
float QSoundEffect_Volume(const QSoundEffect* self);
void QSoundEffect_SetVolume(QSoundEffect* self, float volume);
bool QSoundEffect_IsMuted(const QSoundEffect* self);
void QSoundEffect_SetMuted(QSoundEffect* self, bool muted);
bool QSoundEffect_IsLoaded(const QSoundEffect* self);
bool QSoundEffect_IsPlaying(const QSoundEffect* self);
int QSoundEffect_Status(const QSoundEffect* self);
void QSoundEffect_SourceChanged(QSoundEffect* self);
void QSoundEffect_connect_SourceChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoopCountChanged(QSoundEffect* self);
void QSoundEffect_connect_LoopCountChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoopsRemainingChanged(QSoundEffect* self);
void QSoundEffect_connect_LoopsRemainingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_VolumeChanged(QSoundEffect* self);
void QSoundEffect_connect_VolumeChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_MutedChanged(QSoundEffect* self);
void QSoundEffect_connect_MutedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_LoadedChanged(QSoundEffect* self);
void QSoundEffect_connect_LoadedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_PlayingChanged(QSoundEffect* self);
void QSoundEffect_connect_PlayingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_StatusChanged(QSoundEffect* self);
void QSoundEffect_connect_StatusChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_AudioDeviceChanged(QSoundEffect* self);
void QSoundEffect_connect_AudioDeviceChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_Play(QSoundEffect* self);
void QSoundEffect_Stop(QSoundEffect* self);
struct miqt_string QSoundEffect_Tr2(const char* s, const char* c);
struct miqt_string QSoundEffect_Tr3(const char* s, const char* c, int n);
void QSoundEffect_override_virtual_Event(void* self, intptr_t slot);
bool QSoundEffect_virtualbase_Event(void* self, QEvent* event);
void QSoundEffect_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSoundEffect_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSoundEffect_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSoundEffect_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSoundEffect_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSoundEffect_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSoundEffect_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSoundEffect_virtualbase_CustomEvent(void* self, QEvent* event);
void QSoundEffect_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSoundEffect_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSoundEffect_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSoundEffect_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSoundEffect_Delete(QSoundEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
