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
QMetaObject* QAmbientSound_MetaObject(const QAmbientSound* self);
void* QAmbientSound_Metacast(QAmbientSound* self, const char* param1);
struct miqt_string QAmbientSound_Tr(const char* s);
void QAmbientSound_SetSource(QAmbientSound* self, QUrl* url);
QUrl* QAmbientSound_Source(const QAmbientSound* self);
int QAmbientSound_Loops(const QAmbientSound* self);
void QAmbientSound_SetLoops(QAmbientSound* self, int loops);
bool QAmbientSound_AutoPlay(const QAmbientSound* self);
void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay);
void QAmbientSound_SetVolume(QAmbientSound* self, float volume);
float QAmbientSound_Volume(const QAmbientSound* self);
QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self);
void QAmbientSound_SourceChanged(QAmbientSound* self);
void QAmbientSound_connect_SourceChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_LoopsChanged(QAmbientSound* self);
void QAmbientSound_connect_LoopsChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_AutoPlayChanged(QAmbientSound* self);
void QAmbientSound_connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_VolumeChanged(QAmbientSound* self);
void QAmbientSound_connect_VolumeChanged(QAmbientSound* self, intptr_t slot);
void QAmbientSound_Play(QAmbientSound* self);
void QAmbientSound_Pause(QAmbientSound* self);
void QAmbientSound_Stop(QAmbientSound* self);
struct miqt_string QAmbientSound_Tr2(const char* s, const char* c);
struct miqt_string QAmbientSound_Tr3(const char* s, const char* c, int n);
void QAmbientSound_override_virtual_Event(void* self, intptr_t slot);
bool QAmbientSound_virtualbase_Event(void* self, QEvent* event);
void QAmbientSound_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAmbientSound_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAmbientSound_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAmbientSound_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAmbientSound_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAmbientSound_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAmbientSound_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAmbientSound_virtualbase_CustomEvent(void* self, QEvent* event);
void QAmbientSound_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAmbientSound_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAmbientSound_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAmbientSound_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAmbientSound_Delete(QAmbientSound* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
