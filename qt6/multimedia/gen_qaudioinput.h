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
QMetaObject* QAudioInput_metaObject(const QAudioInput* self);
void* QAudioInput_metacast(QAudioInput* self, const char* param1);
struct miqt_string QAudioInput_tr(const char* s);
QAudioDevice* QAudioInput_device(const QAudioInput* self);
float QAudioInput_volume(const QAudioInput* self);
bool QAudioInput_isMuted(const QAudioInput* self);
void QAudioInput_setDevice(QAudioInput* self, QAudioDevice* device);
void QAudioInput_setVolume(QAudioInput* self, float volume);
void QAudioInput_setMuted(QAudioInput* self, bool muted);
void QAudioInput_deviceChanged(QAudioInput* self);
void QAudioInput_connect_deviceChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_volumeChanged(QAudioInput* self, float volume);
void QAudioInput_connect_volumeChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_mutedChanged(QAudioInput* self, bool muted);
void QAudioInput_connect_mutedChanged(QAudioInput* self, intptr_t slot);
struct miqt_string QAudioInput_tr2(const char* s, const char* c);
struct miqt_string QAudioInput_tr3(const char* s, const char* c, int n);
bool QAudioInput_override_virtual_event(void* self, intptr_t slot);
bool QAudioInput_virtualbase_event(void* self, QEvent* event);
bool QAudioInput_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioInput_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioInput_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioInput_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioInput_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioInput_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioInput_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioInput_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QAudioInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAudioInput_delete(QAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
