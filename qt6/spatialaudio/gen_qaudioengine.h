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

void QAudioEngine_new(QAudioEngine** outptr_QAudioEngine, QObject** outptr_QObject);
void QAudioEngine_new2(QObject* parent, QAudioEngine** outptr_QAudioEngine, QObject** outptr_QObject);
void QAudioEngine_new3(int sampleRate, QAudioEngine** outptr_QAudioEngine, QObject** outptr_QObject);
void QAudioEngine_new4(int sampleRate, QObject* parent, QAudioEngine** outptr_QAudioEngine, QObject** outptr_QObject);
QMetaObject* QAudioEngine_MetaObject(const QAudioEngine* self);
void* QAudioEngine_Metacast(QAudioEngine* self, const char* param1);
struct miqt_string QAudioEngine_Tr(const char* s);
void QAudioEngine_SetOutputMode(QAudioEngine* self, int mode);
int QAudioEngine_OutputMode(const QAudioEngine* self);
int QAudioEngine_SampleRate(const QAudioEngine* self);
void QAudioEngine_SetOutputDevice(QAudioEngine* self, QAudioDevice* device);
QAudioDevice* QAudioEngine_OutputDevice(const QAudioEngine* self);
void QAudioEngine_SetMasterVolume(QAudioEngine* self, float volume);
float QAudioEngine_MasterVolume(const QAudioEngine* self);
void QAudioEngine_SetPaused(QAudioEngine* self, bool paused);
bool QAudioEngine_Paused(const QAudioEngine* self);
void QAudioEngine_SetRoomEffectsEnabled(QAudioEngine* self, bool enabled);
bool QAudioEngine_RoomEffectsEnabled(const QAudioEngine* self);
void QAudioEngine_SetDistanceScale(QAudioEngine* self, float scale);
float QAudioEngine_DistanceScale(const QAudioEngine* self);
void QAudioEngine_OutputModeChanged(QAudioEngine* self);
void QAudioEngine_connect_OutputModeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_OutputDeviceChanged(QAudioEngine* self);
void QAudioEngine_connect_OutputDeviceChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_MasterVolumeChanged(QAudioEngine* self);
void QAudioEngine_connect_MasterVolumeChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_PausedChanged(QAudioEngine* self);
void QAudioEngine_connect_PausedChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_DistanceScaleChanged(QAudioEngine* self);
void QAudioEngine_connect_DistanceScaleChanged(QAudioEngine* self, intptr_t slot);
void QAudioEngine_Start(QAudioEngine* self);
void QAudioEngine_Stop(QAudioEngine* self);
void QAudioEngine_Pause(QAudioEngine* self);
void QAudioEngine_Resume(QAudioEngine* self);
struct miqt_string QAudioEngine_Tr2(const char* s, const char* c);
struct miqt_string QAudioEngine_Tr3(const char* s, const char* c, int n);
void QAudioEngine_override_virtual_Event(void* self, intptr_t slot);
bool QAudioEngine_virtualbase_Event(void* self, QEvent* event);
void QAudioEngine_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioEngine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioEngine_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioEngine_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioEngine_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioEngine_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioEngine_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioEngine_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioEngine_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioEngine_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioEngine_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioEngine_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioEngine_Delete(QAudioEngine* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
