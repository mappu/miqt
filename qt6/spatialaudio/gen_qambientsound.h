#pragma once
#ifndef MIQT_QT6_SPATIALAUDIO_GEN_QAMBIENTSOUND_H
#define MIQT_QT6_SPATIALAUDIO_GEN_QAMBIENTSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAmbientSound;
class QAudioEngine;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QUrl;
#else
typedef struct QAmbientSound QAmbientSound;
typedef struct QAudioEngine QAudioEngine;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QAmbientSound* QAmbientSound_new(QAudioEngine* engine);
void QAmbientSound_virtbase(QAmbientSound* src, QObject** outptr_QObject);
QMetaObject* QAmbientSound_metaObject(const QAmbientSound* self);
void* QAmbientSound_metacast(QAmbientSound* self, const char* param1);
struct miqt_string QAmbientSound_tr(const char* s);
void QAmbientSound_setSource(QAmbientSound* self, QUrl* url);
QUrl* QAmbientSound_source(const QAmbientSound* self);
int QAmbientSound_loops(const QAmbientSound* self);
void QAmbientSound_setLoops(QAmbientSound* self, int loops);
bool QAmbientSound_autoPlay(const QAmbientSound* self);
void QAmbientSound_setAutoPlay(QAmbientSound* self, bool autoPlay);
void QAmbientSound_setVolume(QAmbientSound* self, float volume);
float QAmbientSound_volume(const QAmbientSound* self);
QAudioEngine* QAmbientSound_engine(const QAmbientSound* self);
void QAmbientSound_sourceChanged(QAmbientSound* self);
void QAmbientSound_connect_sourceChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_loopsChanged(QAmbientSound* self);
void QAmbientSound_connect_loopsChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_autoPlayChanged(QAmbientSound* self);
void QAmbientSound_connect_autoPlayChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_volumeChanged(QAmbientSound* self);
void QAmbientSound_connect_volumeChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_play(QAmbientSound* self);
void QAmbientSound_pause(QAmbientSound* self);
void QAmbientSound_stop(QAmbientSound* self);
struct miqt_string QAmbientSound_tr2(const char* s, const char* c);
struct miqt_string QAmbientSound_tr3(const char* s, const char* c, int n);
bool QAmbientSound_override_virtual_event(void* self, intptr_t slot);
bool QAmbientSound_virtualbase_event(void* self, QEvent* event);
bool QAmbientSound_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAmbientSound_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAmbientSound_override_virtual_timerEvent(void* self, intptr_t slot);
void QAmbientSound_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAmbientSound_override_virtual_childEvent(void* self, intptr_t slot);
void QAmbientSound_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAmbientSound_override_virtual_customEvent(void* self, intptr_t slot);
void QAmbientSound_virtualbase_customEvent(void* self, QEvent* event);
bool QAmbientSound_override_virtual_connectNotify(void* self, intptr_t slot);
void QAmbientSound_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAmbientSound_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAmbientSound_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAmbientSound_delete(QAmbientSound* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
