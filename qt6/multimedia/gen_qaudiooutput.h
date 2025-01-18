#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIOOUTPUT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIOOUTPUT_H

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
class QAudioOutput;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioOutput QAudioOutput;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAudioOutput* QAudioOutput_new();
QAudioOutput* QAudioOutput_new2(QAudioDevice* device);
QAudioOutput* QAudioOutput_new3(QObject* parent);
QAudioOutput* QAudioOutput_new4(QAudioDevice* device, QObject* parent);
void QAudioOutput_virtbase(QAudioOutput* src, QObject** outptr_QObject);
QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self);
void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1);
struct miqt_string QAudioOutput_Tr(const char* s);
QAudioDevice* QAudioOutput_Device(const QAudioOutput* self);
float QAudioOutput_Volume(const QAudioOutput* self);
bool QAudioOutput_IsMuted(const QAudioOutput* self);
void QAudioOutput_SetDevice(QAudioOutput* self, QAudioDevice* device);
void QAudioOutput_SetVolume(QAudioOutput* self, float volume);
void QAudioOutput_SetMuted(QAudioOutput* self, bool muted);
void QAudioOutput_DeviceChanged(QAudioOutput* self);
void QAudioOutput_connect_DeviceChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume);
void QAudioOutput_connect_VolumeChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted);
void QAudioOutput_connect_MutedChanged(QAudioOutput* self, intptr_t slot);
struct miqt_string QAudioOutput_Tr2(const char* s, const char* c);
struct miqt_string QAudioOutput_Tr3(const char* s, const char* c, int n);
bool QAudioOutput_override_virtual_Event(void* self, intptr_t slot);
bool QAudioOutput_virtualbase_Event(void* self, QEvent* event);
bool QAudioOutput_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioOutput_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioOutput_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAudioOutput_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAudioOutput_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAudioOutput_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioOutput_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAudioOutput_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioOutput_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioOutput_Delete(QAudioOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
