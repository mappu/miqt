#pragma once
#ifndef MIQT_QT6_SPATIALAUDIO_GEN_QAUDIOROOM_H
#define MIQT_QT6_SPATIALAUDIO_GEN_QAUDIOROOM_H

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
class QAudioRoom;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QQuaternion;
class QTimerEvent;
class QVector3D;
#else
typedef struct QAudioEngine QAudioEngine;
typedef struct QAudioRoom QAudioRoom;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QAudioRoom* QAudioRoom_new(QAudioEngine* engine);
void QAudioRoom_virtbase(QAudioRoom* src, QObject** outptr_QObject);
QMetaObject* QAudioRoom_metaObject(const QAudioRoom* self);
void* QAudioRoom_metacast(QAudioRoom* self, const char* param1);
struct miqt_string QAudioRoom_tr(const char* s);
void QAudioRoom_setPosition(QAudioRoom* self, QVector3D* pos);
QVector3D* QAudioRoom_position(const QAudioRoom* self);
void QAudioRoom_setDimensions(QAudioRoom* self, QVector3D* dim);
QVector3D* QAudioRoom_dimensions(const QAudioRoom* self);
void QAudioRoom_setRotation(QAudioRoom* self, QQuaternion* q);
QQuaternion* QAudioRoom_rotation(const QAudioRoom* self);
void QAudioRoom_setWallMaterial(QAudioRoom* self, int wall, int material);
int QAudioRoom_wallMaterial(const QAudioRoom* self, int wall);
void QAudioRoom_setReflectionGain(QAudioRoom* self, float factor);
float QAudioRoom_reflectionGain(const QAudioRoom* self);
void QAudioRoom_setReverbGain(QAudioRoom* self, float factor);
float QAudioRoom_reverbGain(const QAudioRoom* self);
void QAudioRoom_setReverbTime(QAudioRoom* self, float factor);
float QAudioRoom_reverbTime(const QAudioRoom* self);
void QAudioRoom_setReverbBrightness(QAudioRoom* self, float factor);
float QAudioRoom_reverbBrightness(const QAudioRoom* self);
void QAudioRoom_positionChanged(QAudioRoom* self);
void QAudioRoom_connect_positionChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_dimensionsChanged(QAudioRoom* self);
void QAudioRoom_connect_dimensionsChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_rotationChanged(QAudioRoom* self);
void QAudioRoom_connect_rotationChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_wallsChanged(QAudioRoom* self);
void QAudioRoom_connect_wallsChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_reflectionGainChanged(QAudioRoom* self);
void QAudioRoom_connect_reflectionGainChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_reverbGainChanged(QAudioRoom* self);
void QAudioRoom_connect_reverbGainChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_reverbTimeChanged(QAudioRoom* self);
void QAudioRoom_connect_reverbTimeChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_reverbBrightnessChanged(QAudioRoom* self);
void QAudioRoom_connect_reverbBrightnessChanged(QAudioRoom* self, intptr_t slot);
struct miqt_string QAudioRoom_tr2(const char* s, const char* c);
struct miqt_string QAudioRoom_tr3(const char* s, const char* c, int n);
bool QAudioRoom_override_virtual_event(void* self, intptr_t slot);
bool QAudioRoom_virtualbase_event(void* self, QEvent* event);
bool QAudioRoom_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioRoom_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioRoom_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioRoom_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioRoom_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioRoom_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioRoom_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioRoom_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioRoom_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioRoom_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioRoom_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioRoom_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAudioRoom_delete(QAudioRoom* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
