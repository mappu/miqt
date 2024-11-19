#pragma once
#ifndef MIQT_QT6_SPATIALAUDIO_GEN_QSPATIALSOUND_H
#define MIQT_QT6_SPATIALAUDIO_GEN_QSPATIALSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioEngine;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QQuaternion;
class QSpatialSound;
class QTimerEvent;
class QUrl;
class QVector3D;
#else
typedef struct QAudioEngine QAudioEngine;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QSpatialSound QSpatialSound;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVector3D QVector3D;
#endif

void QSpatialSound_new(QAudioEngine* engine, QSpatialSound** outptr_QSpatialSound, QObject** outptr_QObject);
QMetaObject* QSpatialSound_MetaObject(const QSpatialSound* self);
void* QSpatialSound_Metacast(QSpatialSound* self, const char* param1);
struct miqt_string QSpatialSound_Tr(const char* s);
void QSpatialSound_SetSource(QSpatialSound* self, QUrl* url);
QUrl* QSpatialSound_Source(const QSpatialSound* self);
int QSpatialSound_Loops(const QSpatialSound* self);
void QSpatialSound_SetLoops(QSpatialSound* self, int loops);
bool QSpatialSound_AutoPlay(const QSpatialSound* self);
void QSpatialSound_SetAutoPlay(QSpatialSound* self, bool autoPlay);
void QSpatialSound_SetPosition(QSpatialSound* self, QVector3D* pos);
QVector3D* QSpatialSound_Position(const QSpatialSound* self);
void QSpatialSound_SetRotation(QSpatialSound* self, QQuaternion* q);
QQuaternion* QSpatialSound_Rotation(const QSpatialSound* self);
void QSpatialSound_SetVolume(QSpatialSound* self, float volume);
float QSpatialSound_Volume(const QSpatialSound* self);
void QSpatialSound_SetDistanceModel(QSpatialSound* self, int model);
int QSpatialSound_DistanceModel(const QSpatialSound* self);
void QSpatialSound_SetSize(QSpatialSound* self, float size);
float QSpatialSound_Size(const QSpatialSound* self);
void QSpatialSound_SetDistanceCutoff(QSpatialSound* self, float cutoff);
float QSpatialSound_DistanceCutoff(const QSpatialSound* self);
void QSpatialSound_SetManualAttenuation(QSpatialSound* self, float attenuation);
float QSpatialSound_ManualAttenuation(const QSpatialSound* self);
void QSpatialSound_SetOcclusionIntensity(QSpatialSound* self, float occlusion);
float QSpatialSound_OcclusionIntensity(const QSpatialSound* self);
void QSpatialSound_SetDirectivity(QSpatialSound* self, float alpha);
float QSpatialSound_Directivity(const QSpatialSound* self);
void QSpatialSound_SetDirectivityOrder(QSpatialSound* self, float alpha);
float QSpatialSound_DirectivityOrder(const QSpatialSound* self);
void QSpatialSound_SetNearFieldGain(QSpatialSound* self, float gain);
float QSpatialSound_NearFieldGain(const QSpatialSound* self);
QAudioEngine* QSpatialSound_Engine(const QSpatialSound* self);
void QSpatialSound_SourceChanged(QSpatialSound* self);
void QSpatialSound_connect_SourceChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_LoopsChanged(QSpatialSound* self);
void QSpatialSound_connect_LoopsChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_AutoPlayChanged(QSpatialSound* self);
void QSpatialSound_connect_AutoPlayChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_PositionChanged(QSpatialSound* self);
void QSpatialSound_connect_PositionChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_RotationChanged(QSpatialSound* self);
void QSpatialSound_connect_RotationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_VolumeChanged(QSpatialSound* self);
void QSpatialSound_connect_VolumeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DistanceModelChanged(QSpatialSound* self);
void QSpatialSound_connect_DistanceModelChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_SizeChanged(QSpatialSound* self);
void QSpatialSound_connect_SizeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DistanceCutoffChanged(QSpatialSound* self);
void QSpatialSound_connect_DistanceCutoffChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_ManualAttenuationChanged(QSpatialSound* self);
void QSpatialSound_connect_ManualAttenuationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_OcclusionIntensityChanged(QSpatialSound* self);
void QSpatialSound_connect_OcclusionIntensityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DirectivityChanged(QSpatialSound* self);
void QSpatialSound_connect_DirectivityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_DirectivityOrderChanged(QSpatialSound* self);
void QSpatialSound_connect_DirectivityOrderChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_NearFieldGainChanged(QSpatialSound* self);
void QSpatialSound_connect_NearFieldGainChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_Play(QSpatialSound* self);
void QSpatialSound_Pause(QSpatialSound* self);
void QSpatialSound_Stop(QSpatialSound* self);
struct miqt_string QSpatialSound_Tr2(const char* s, const char* c);
struct miqt_string QSpatialSound_Tr3(const char* s, const char* c, int n);
void QSpatialSound_override_virtual_Event(void* self, intptr_t slot);
bool QSpatialSound_virtualbase_Event(void* self, QEvent* event);
void QSpatialSound_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSpatialSound_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSpatialSound_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSpatialSound_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSpatialSound_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSpatialSound_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSpatialSound_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSpatialSound_virtualbase_CustomEvent(void* self, QEvent* event);
void QSpatialSound_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSpatialSound_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSpatialSound_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSpatialSound_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSpatialSound_Delete(QSpatialSound* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
