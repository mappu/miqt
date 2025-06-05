#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIADEVICES_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIADEVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDevice;
class QCameraDevice;
class QChildEvent;
class QEvent;
class QMediaDevices;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QCameraDevice QCameraDevice;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaDevices QMediaDevices;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QMediaDevices* QMediaDevices_new();
QMediaDevices* QMediaDevices_new2(QObject* parent);
void QMediaDevices_virtbase(QMediaDevices* src, QObject** outptr_QObject);
QMetaObject* QMediaDevices_metaObject(const QMediaDevices* self);
void* QMediaDevices_metacast(QMediaDevices* self, const char* param1);
struct miqt_string QMediaDevices_tr(const char* s);
struct miqt_array /* of QAudioDevice* */  QMediaDevices_audioInputs();
struct miqt_array /* of QAudioDevice* */  QMediaDevices_audioOutputs();
struct miqt_array /* of QCameraDevice* */  QMediaDevices_videoInputs();
QAudioDevice* QMediaDevices_defaultAudioInput();
QAudioDevice* QMediaDevices_defaultAudioOutput();
QCameraDevice* QMediaDevices_defaultVideoInput();
void QMediaDevices_audioInputsChanged(QMediaDevices* self);
void QMediaDevices_connect_audioInputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_audioOutputsChanged(QMediaDevices* self);
void QMediaDevices_connect_audioOutputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_videoInputsChanged(QMediaDevices* self);
void QMediaDevices_connect_videoInputsChanged(QMediaDevices* self, intptr_t slot);
struct miqt_string QMediaDevices_tr2(const char* s, const char* c);
struct miqt_string QMediaDevices_tr3(const char* s, const char* c, int n);

bool QMediaDevices_override_virtual_event(void* self, intptr_t slot);
bool QMediaDevices_virtualbase_event(void* self, QEvent* event);
bool QMediaDevices_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMediaDevices_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMediaDevices_override_virtual_timerEvent(void* self, intptr_t slot);
void QMediaDevices_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMediaDevices_override_virtual_childEvent(void* self, intptr_t slot);
void QMediaDevices_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMediaDevices_override_virtual_customEvent(void* self, intptr_t slot);
void QMediaDevices_virtualbase_customEvent(void* self, QEvent* event);
bool QMediaDevices_override_virtual_connectNotify(void* self, intptr_t slot);
void QMediaDevices_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMediaDevices_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMediaDevices_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QMediaDevices_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMediaDevices_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMediaDevices_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMediaDevices_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QMediaDevices_delete(QMediaDevices* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
