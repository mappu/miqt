#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QSOUNDEFFECT_H
#define MIQT_QT_MULTIMEDIA_GEN_QSOUNDEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDeviceInfo;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSoundEffect;
class QTimerEvent;
class QUrl;
#else
typedef struct QAudioDeviceInfo QAudioDeviceInfo;
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
QSoundEffect* QSoundEffect_new2(QAudioDeviceInfo* audioDevice);
QSoundEffect* QSoundEffect_new3(QObject* parent);
QSoundEffect* QSoundEffect_new4(QAudioDeviceInfo* audioDevice, QObject* parent);
void QSoundEffect_virtbase(QSoundEffect* src, QObject** outptr_QObject);
QMetaObject* QSoundEffect_metaObject(const QSoundEffect* self);
void* QSoundEffect_metacast(QSoundEffect* self, const char* param1);
struct miqt_string QSoundEffect_tr(const char* s);
struct miqt_string QSoundEffect_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QSoundEffect_supportedMimeTypes();
QUrl* QSoundEffect_source(const QSoundEffect* self);
void QSoundEffect_setSource(QSoundEffect* self, QUrl* url);
int QSoundEffect_loopCount(const QSoundEffect* self);
int QSoundEffect_loopsRemaining(const QSoundEffect* self);
void QSoundEffect_setLoopCount(QSoundEffect* self, int loopCount);
double QSoundEffect_volume(const QSoundEffect* self);
void QSoundEffect_setVolume(QSoundEffect* self, double volume);
bool QSoundEffect_isMuted(const QSoundEffect* self);
void QSoundEffect_setMuted(QSoundEffect* self, bool muted);
bool QSoundEffect_isLoaded(const QSoundEffect* self);
bool QSoundEffect_isPlaying(const QSoundEffect* self);
int QSoundEffect_status(const QSoundEffect* self);
struct miqt_string QSoundEffect_category(const QSoundEffect* self);
void QSoundEffect_setCategory(QSoundEffect* self, struct miqt_string category);
void QSoundEffect_sourceChanged(QSoundEffect* self);
void QSoundEffect_connect_sourceChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_loopCountChanged(QSoundEffect* self);
void QSoundEffect_connect_loopCountChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_loopsRemainingChanged(QSoundEffect* self);
void QSoundEffect_connect_loopsRemainingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_volumeChanged(QSoundEffect* self);
void QSoundEffect_connect_volumeChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_mutedChanged(QSoundEffect* self);
void QSoundEffect_connect_mutedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_loadedChanged(QSoundEffect* self);
void QSoundEffect_connect_loadedChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_playingChanged(QSoundEffect* self);
void QSoundEffect_connect_playingChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_statusChanged(QSoundEffect* self);
void QSoundEffect_connect_statusChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_categoryChanged(QSoundEffect* self);
void QSoundEffect_connect_categoryChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_play(QSoundEffect* self);
void QSoundEffect_stop(QSoundEffect* self);
struct miqt_string QSoundEffect_tr2(const char* s, const char* c);
struct miqt_string QSoundEffect_tr3(const char* s, const char* c, int n);
struct miqt_string QSoundEffect_trUtf82(const char* s, const char* c);
struct miqt_string QSoundEffect_trUtf83(const char* s, const char* c, int n);

bool QSoundEffect_override_virtual_event(void* self, intptr_t slot);
bool QSoundEffect_virtualbase_event(void* self, QEvent* event);
bool QSoundEffect_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSoundEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSoundEffect_override_virtual_timerEvent(void* self, intptr_t slot);
void QSoundEffect_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSoundEffect_override_virtual_childEvent(void* self, intptr_t slot);
void QSoundEffect_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSoundEffect_override_virtual_customEvent(void* self, intptr_t slot);
void QSoundEffect_virtualbase_customEvent(void* self, QEvent* event);
bool QSoundEffect_override_virtual_connectNotify(void* self, intptr_t slot);
void QSoundEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSoundEffect_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSoundEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QSoundEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSoundEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSoundEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSoundEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSoundEffect_delete(QSoundEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
