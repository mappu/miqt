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
QMetaObject* QAudioRoom_MetaObject(const QAudioRoom* self);
void* QAudioRoom_Metacast(QAudioRoom* self, const char* param1);
struct miqt_string QAudioRoom_Tr(const char* s);
void QAudioRoom_SetPosition(QAudioRoom* self, QVector3D* pos);
QVector3D* QAudioRoom_Position(const QAudioRoom* self);
void QAudioRoom_SetDimensions(QAudioRoom* self, QVector3D* dim);
QVector3D* QAudioRoom_Dimensions(const QAudioRoom* self);
void QAudioRoom_SetRotation(QAudioRoom* self, QQuaternion* q);
QQuaternion* QAudioRoom_Rotation(const QAudioRoom* self);
void QAudioRoom_SetWallMaterial(QAudioRoom* self, int wall, int material);
int QAudioRoom_WallMaterial(const QAudioRoom* self, int wall);
void QAudioRoom_SetReflectionGain(QAudioRoom* self, float factor);
float QAudioRoom_ReflectionGain(const QAudioRoom* self);
void QAudioRoom_SetReverbGain(QAudioRoom* self, float factor);
float QAudioRoom_ReverbGain(const QAudioRoom* self);
void QAudioRoom_SetReverbTime(QAudioRoom* self, float factor);
float QAudioRoom_ReverbTime(const QAudioRoom* self);
void QAudioRoom_SetReverbBrightness(QAudioRoom* self, float factor);
float QAudioRoom_ReverbBrightness(const QAudioRoom* self);
void QAudioRoom_PositionChanged(QAudioRoom* self);
void QAudioRoom_connect_PositionChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_DimensionsChanged(QAudioRoom* self);
void QAudioRoom_connect_DimensionsChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_RotationChanged(QAudioRoom* self);
void QAudioRoom_connect_RotationChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_WallsChanged(QAudioRoom* self);
void QAudioRoom_connect_WallsChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReflectionGainChanged(QAudioRoom* self);
void QAudioRoom_connect_ReflectionGainChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReverbGainChanged(QAudioRoom* self);
void QAudioRoom_connect_ReverbGainChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReverbTimeChanged(QAudioRoom* self);
void QAudioRoom_connect_ReverbTimeChanged(QAudioRoom* self, intptr_t slot);
void QAudioRoom_ReverbBrightnessChanged(QAudioRoom* self);
void QAudioRoom_connect_ReverbBrightnessChanged(QAudioRoom* self, intptr_t slot);
struct miqt_string QAudioRoom_Tr2(const char* s, const char* c);
struct miqt_string QAudioRoom_Tr3(const char* s, const char* c, int n);
void QAudioRoom_override_virtual_Event(void* self, intptr_t slot);
bool QAudioRoom_virtualbase_Event(void* self, QEvent* event);
void QAudioRoom_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioRoom_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioRoom_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioRoom_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioRoom_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioRoom_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioRoom_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioRoom_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioRoom_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioRoom_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioRoom_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioRoom_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioRoom_Delete(QAudioRoom* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
