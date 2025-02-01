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
QMetaObject* QAudioOutput_metaObject(const QAudioOutput* self);
void* QAudioOutput_metacast(QAudioOutput* self, const char* param1);
struct miqt_string QAudioOutput_tr(const char* s);
QAudioDevice* QAudioOutput_device(const QAudioOutput* self);
float QAudioOutput_volume(const QAudioOutput* self);
bool QAudioOutput_isMuted(const QAudioOutput* self);
void QAudioOutput_setDevice(QAudioOutput* self, QAudioDevice* device);
void QAudioOutput_setVolume(QAudioOutput* self, float volume);
void QAudioOutput_setMuted(QAudioOutput* self, bool muted);
void QAudioOutput_deviceChanged(QAudioOutput* self);
void QAudioOutput_connect_deviceChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_volumeChanged(QAudioOutput* self, float volume);
void QAudioOutput_connect_volumeChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_mutedChanged(QAudioOutput* self, bool muted);
void QAudioOutput_connect_mutedChanged(QAudioOutput* self, intptr_t slot);
struct miqt_string QAudioOutput_tr2(const char* s, const char* c);
struct miqt_string QAudioOutput_tr3(const char* s, const char* c, int n);
bool QAudioOutput_override_virtual_event(void* self, intptr_t slot);
bool QAudioOutput_virtualbase_event(void* self, QEvent* event);
bool QAudioOutput_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioOutput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioOutput_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioOutput_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioOutput_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioOutput_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioOutput_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioOutput_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioOutput_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioOutput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAudioOutput_delete(QAudioOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
