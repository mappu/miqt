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

QSpatialSound* QSpatialSound_new(QAudioEngine* engine);
void QSpatialSound_virtbase(QSpatialSound* src, QObject** outptr_QObject);
QMetaObject* QSpatialSound_metaObject(const QSpatialSound* self);
void* QSpatialSound_metacast(QSpatialSound* self, const char* param1);
struct miqt_string QSpatialSound_tr(const char* s);
void QSpatialSound_setSource(QSpatialSound* self, QUrl* url);
QUrl* QSpatialSound_source(const QSpatialSound* self);
int QSpatialSound_loops(const QSpatialSound* self);
void QSpatialSound_setLoops(QSpatialSound* self, int loops);
bool QSpatialSound_autoPlay(const QSpatialSound* self);
void QSpatialSound_setAutoPlay(QSpatialSound* self, bool autoPlay);
void QSpatialSound_setPosition(QSpatialSound* self, QVector3D* pos);
QVector3D* QSpatialSound_position(const QSpatialSound* self);
void QSpatialSound_setRotation(QSpatialSound* self, QQuaternion* q);
QQuaternion* QSpatialSound_rotation(const QSpatialSound* self);
void QSpatialSound_setVolume(QSpatialSound* self, float volume);
float QSpatialSound_volume(const QSpatialSound* self);
void QSpatialSound_setDistanceModel(QSpatialSound* self, int model);
int QSpatialSound_distanceModel(const QSpatialSound* self);
void QSpatialSound_setSize(QSpatialSound* self, float size);
float QSpatialSound_size(const QSpatialSound* self);
void QSpatialSound_setDistanceCutoff(QSpatialSound* self, float cutoff);
float QSpatialSound_distanceCutoff(const QSpatialSound* self);
void QSpatialSound_setManualAttenuation(QSpatialSound* self, float attenuation);
float QSpatialSound_manualAttenuation(const QSpatialSound* self);
void QSpatialSound_setOcclusionIntensity(QSpatialSound* self, float occlusion);
float QSpatialSound_occlusionIntensity(const QSpatialSound* self);
void QSpatialSound_setDirectivity(QSpatialSound* self, float alpha);
float QSpatialSound_directivity(const QSpatialSound* self);
void QSpatialSound_setDirectivityOrder(QSpatialSound* self, float alpha);
float QSpatialSound_directivityOrder(const QSpatialSound* self);
void QSpatialSound_setNearFieldGain(QSpatialSound* self, float gain);
float QSpatialSound_nearFieldGain(const QSpatialSound* self);
QAudioEngine* QSpatialSound_engine(const QSpatialSound* self);
void QSpatialSound_sourceChanged(QSpatialSound* self);
void QSpatialSound_connect_sourceChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_loopsChanged(QSpatialSound* self);
void QSpatialSound_connect_loopsChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_autoPlayChanged(QSpatialSound* self);
void QSpatialSound_connect_autoPlayChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_positionChanged(QSpatialSound* self);
void QSpatialSound_connect_positionChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_rotationChanged(QSpatialSound* self);
void QSpatialSound_connect_rotationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_volumeChanged(QSpatialSound* self);
void QSpatialSound_connect_volumeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_distanceModelChanged(QSpatialSound* self);
void QSpatialSound_connect_distanceModelChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_sizeChanged(QSpatialSound* self);
void QSpatialSound_connect_sizeChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_distanceCutoffChanged(QSpatialSound* self);
void QSpatialSound_connect_distanceCutoffChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_manualAttenuationChanged(QSpatialSound* self);
void QSpatialSound_connect_manualAttenuationChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_occlusionIntensityChanged(QSpatialSound* self);
void QSpatialSound_connect_occlusionIntensityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_directivityChanged(QSpatialSound* self);
void QSpatialSound_connect_directivityChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_directivityOrderChanged(QSpatialSound* self);
void QSpatialSound_connect_directivityOrderChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_nearFieldGainChanged(QSpatialSound* self);
void QSpatialSound_connect_nearFieldGainChanged(QSpatialSound* self, intptr_t slot);
void QSpatialSound_play(QSpatialSound* self);
void QSpatialSound_pause(QSpatialSound* self);
void QSpatialSound_stop(QSpatialSound* self);
struct miqt_string QSpatialSound_tr2(const char* s, const char* c);
struct miqt_string QSpatialSound_tr3(const char* s, const char* c, int n);
bool QSpatialSound_override_virtual_event(void* self, intptr_t slot);
bool QSpatialSound_virtualbase_event(void* self, QEvent* event);
bool QSpatialSound_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSpatialSound_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSpatialSound_override_virtual_timerEvent(void* self, intptr_t slot);
void QSpatialSound_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSpatialSound_override_virtual_childEvent(void* self, intptr_t slot);
void QSpatialSound_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSpatialSound_override_virtual_customEvent(void* self, intptr_t slot);
void QSpatialSound_virtualbase_customEvent(void* self, QEvent* event);
bool QSpatialSound_override_virtual_connectNotify(void* self, intptr_t slot);
void QSpatialSound_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSpatialSound_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSpatialSound_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QSpatialSound_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSpatialSound_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSpatialSound_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSpatialSound_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSpatialSound_delete(QSpatialSound* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
