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
QMetaObject* QMediaDevices_MetaObject(const QMediaDevices* self);
void* QMediaDevices_Metacast(QMediaDevices* self, const char* param1);
struct miqt_string QMediaDevices_Tr(const char* s);
struct miqt_array /* of QAudioDevice* */  QMediaDevices_AudioInputs();
struct miqt_array /* of QAudioDevice* */  QMediaDevices_AudioOutputs();
struct miqt_array /* of QCameraDevice* */  QMediaDevices_VideoInputs();
QAudioDevice* QMediaDevices_DefaultAudioInput();
QAudioDevice* QMediaDevices_DefaultAudioOutput();
QCameraDevice* QMediaDevices_DefaultVideoInput();
void QMediaDevices_AudioInputsChanged(QMediaDevices* self);
void QMediaDevices_connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_AudioOutputsChanged(QMediaDevices* self);
void QMediaDevices_connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_VideoInputsChanged(QMediaDevices* self);
void QMediaDevices_connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot);
struct miqt_string QMediaDevices_Tr2(const char* s, const char* c);
struct miqt_string QMediaDevices_Tr3(const char* s, const char* c, int n);
void QMediaDevices_override_virtual_Event(void* self, intptr_t slot);
bool QMediaDevices_virtualbase_Event(void* self, QEvent* event);
void QMediaDevices_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMediaDevices_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QMediaDevices_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMediaDevices_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QMediaDevices_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMediaDevices_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QMediaDevices_override_virtual_CustomEvent(void* self, intptr_t slot);
void QMediaDevices_virtualbase_CustomEvent(void* self, QEvent* event);
void QMediaDevices_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QMediaDevices_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QMediaDevices_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QMediaDevices_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QMediaDevices_Delete(QMediaDevices* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
