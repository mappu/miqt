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
void QAudioListener_setPosition(QAudioListener* self, QVector3D* pos);
QVector3D* QAudioListener_position(const QAudioListener* self);
void QAudioListener_setRotation(QAudioListener* self, QQuaternion* q);
QQuaternion* QAudioListener_rotation(const QAudioListener* self);
QAudioEngine* QAudioListener_engine(const QAudioListener* self);

bool QAudioListener_override_virtual_event(void* self, intptr_t slot);
bool QAudioListener_virtualbase_event(void* self, QEvent* event);
bool QAudioListener_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAudioListener_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAudioListener_override_virtual_timerEvent(void* self, intptr_t slot);
void QAudioListener_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAudioListener_override_virtual_childEvent(void* self, intptr_t slot);
void QAudioListener_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAudioListener_override_virtual_customEvent(void* self, intptr_t slot);
void QAudioListener_virtualbase_customEvent(void* self, QEvent* event);
bool QAudioListener_override_virtual_connectNotify(void* self, intptr_t slot);
void QAudioListener_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAudioListener_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAudioListener_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAudioListener_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAudioListener_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAudioListener_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAudioListener_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAudioListener_delete(QAudioListener* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
