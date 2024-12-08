#pragma once
#ifndef MIQT_QT6_SPATIALAUDIO_GEN_QAUDIOLISTENER_H
#define MIQT_QT6_SPATIALAUDIO_GEN_QAUDIOLISTENER_H

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
class QAudioListener;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QObject;
class QQuaternion;
class QTimerEvent;
class QVector3D;
#else
typedef struct QAudioEngine QAudioEngine;
typedef struct QAudioListener QAudioListener;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QObject QObject;
typedef struct QQuaternion QQuaternion;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QAudioListener* QAudioListener_new(QAudioEngine* engine);
void QAudioListener_virtbase(QAudioListener* src, QObject** outptr_QObject);
void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos);
QVector3D* QAudioListener_Position(const QAudioListener* self);
void QAudioListener_SetRotation(QAudioListener* self, QQuaternion* q);
QQuaternion* QAudioListener_Rotation(const QAudioListener* self);
QAudioEngine* QAudioListener_Engine(const QAudioListener* self);
void QAudioListener_override_virtual_Event(void* self, intptr_t slot);
bool QAudioListener_virtualbase_Event(void* self, QEvent* event);
void QAudioListener_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAudioListener_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAudioListener_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAudioListener_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAudioListener_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAudioListener_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAudioListener_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAudioListener_virtualbase_CustomEvent(void* self, QEvent* event);
void QAudioListener_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAudioListener_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAudioListener_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAudioListener_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAudioListener_Delete(QAudioListener* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
