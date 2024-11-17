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
class QMetaObject;
class QObject;
class QSoundEffect;
class QUrl;
#else
typedef struct QAudioDeviceInfo QAudioDeviceInfo;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSoundEffect QSoundEffect;
typedef struct QUrl QUrl;
#endif

QSoundEffect* QSoundEffect_new();
QSoundEffect* QSoundEffect_new2(QAudioDeviceInfo* audioDevice);
QSoundEffect* QSoundEffect_new3(QObject* parent);
QSoundEffect* QSoundEffect_new4(QAudioDeviceInfo* audioDevice, QObject* parent);
QMetaObject* QSoundEffect_MetaObject(const QSoundEffect* self);
void* QSoundEffect_Metacast(QSoundEffect* self, const char* param1);
struct miqt_string QSoundEffect_Tr(const char* s);
struct miqt_string QSoundEffect_TrUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QSoundEffect_SupportedMimeTypes();
QUrl* QSoundEffect_Source(const QSoundEffect* self);
void QSoundEffect_SetSource(QSoundEffect* self, QUrl* url);
int QSoundEffect_LoopCount(const QSoundEffect* self);
int QSoundEffect_LoopsRemaining(const QSoundEffect* self);
void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount);
double QSoundEffect_Volume(const QSoundEffect* self);
void QSoundEffect_SetVolume(QSoundEffect* self, double volume);
bool QSoundEffect_IsMuted(const QSoundEffect* self);
void QSoundEffect_SetMuted(QSoundEffect* self, bool muted);
bool QSoundEffect_IsLoaded(const QSoundEffect* self);
bool QSoundEffect_IsPlaying(const QSoundEffect* self);
int QSoundEffect_Status(const QSoundEffect* self);
struct miqt_string QSoundEffect_Category(const QSoundEffect* self);
void QSoundEffect_SetCategory(QSoundEffect* self, struct miqt_string category);
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
void QSoundEffect_CategoryChanged(QSoundEffect* self);
void QSoundEffect_connect_CategoryChanged(QSoundEffect* self, intptr_t slot);
void QSoundEffect_Play(QSoundEffect* self);
void QSoundEffect_Stop(QSoundEffect* self);
struct miqt_string QSoundEffect_Tr2(const char* s, const char* c);
struct miqt_string QSoundEffect_Tr3(const char* s, const char* c, int n);
struct miqt_string QSoundEffect_TrUtf82(const char* s, const char* c);
struct miqt_string QSoundEffect_TrUtf83(const char* s, const char* c, int n);
void QSoundEffect_Delete(QSoundEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
