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
class QMetaObject;
class QUrl;
#else
typedef struct QAmbientSound QAmbientSound;
typedef struct QAudioEngine QAudioEngine;
typedef struct QMetaObject QMetaObject;
typedef struct QUrl QUrl;
#endif

QAmbientSound* QAmbientSound_new(QAudioEngine* engine);
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
void QAmbientSound_Delete(QAmbientSound* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
