#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOINPUT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOINPUT_H

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
class QAudioInput;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioInput QAudioInput;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioInput* QAudioInput_new();
QAudioInput* QAudioInput_new2(QAudioDevice* deviceInfo);
QAudioInput* QAudioInput_new3(QObject* parent);
QAudioInput* QAudioInput_new4(QAudioDevice* deviceInfo, QObject* parent);
void QAudioInput_virtbase(QAudioInput* src, QObject** outptr_QObject);
QMetaObject* QAudioInput_MetaObject(const QAudioInput* self);
void* QAudioInput_Metacast(QAudioInput* self, const char* param1);
struct miqt_string QAudioInput_Tr(const char* s);
QAudioDevice* QAudioInput_Device(const QAudioInput* self);
float QAudioInput_Volume(const QAudioInput* self);
bool QAudioInput_IsMuted(const QAudioInput* self);
void QAudioInput_SetDevice(QAudioInput* self, QAudioDevice* device);
void QAudioInput_SetVolume(QAudioInput* self, float volume);
void QAudioInput_SetMuted(QAudioInput* self, bool muted);
void QAudioInput_DeviceChanged(QAudioInput* self);
void QAudioInput_connect_DeviceChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_VolumeChanged(QAudioInput* self, float volume);
void QAudioInput_connect_VolumeChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_MutedChanged(QAudioInput* self, bool muted);
void QAudioInput_connect_MutedChanged(QAudioInput* self, intptr_t slot);
struct miqt_string QAudioInput_Tr2(const char* s, const char* c);
struct miqt_string QAudioInput_Tr3(const char* s, const char* c, int n);
void QAudioInput_override_virtual_Event(void* self, intptr_t slot);
bool QAudioInput_virtualbase_Event(void* self, QEvent* event);
void QAudioInput_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioInput_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioInput_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioInput_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioInput_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioInput_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioInput_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioInput_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioInput_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioInput_Delete(QAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
