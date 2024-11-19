#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIACAPTURESESSION_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIACAPTURESESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioInput;
class QAudioOutput;
class QCamera;
class QChildEvent;
class QEvent;
class QImageCapture;
class QMediaCaptureSession;
class QMediaRecorder;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVideoSink;
#else
typedef struct QAudioInput QAudioInput;
typedef struct QAudioOutput QAudioOutput;
typedef struct QCamera QCamera;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImageCapture QImageCapture;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoSink QVideoSink;
#endif

void QMediaCaptureSession_new(QMediaCaptureSession** outptr_QMediaCaptureSession, QObject** outptr_QObject);
void QMediaCaptureSession_new2(QObject* parent, QMediaCaptureSession** outptr_QMediaCaptureSession, QObject** outptr_QObject);
QMetaObject* QMediaCaptureSession_MetaObject(const QMediaCaptureSession* self);
void* QMediaCaptureSession_Metacast(QMediaCaptureSession* self, const char* param1);
struct miqt_string QMediaCaptureSession_Tr(const char* s);
QAudioInput* QMediaCaptureSession_AudioInput(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetAudioInput(QMediaCaptureSession* self, QAudioInput* input);
QCamera* QMediaCaptureSession_Camera(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetCamera(QMediaCaptureSession* self, QCamera* camera);
QImageCapture* QMediaCaptureSession_ImageCapture(QMediaCaptureSession* self);
void QMediaCaptureSession_SetImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture);
QMediaRecorder* QMediaCaptureSession_Recorder(QMediaCaptureSession* self);
void QMediaCaptureSession_SetRecorder(QMediaCaptureSession* self, QMediaRecorder* recorder);
void QMediaCaptureSession_SetVideoOutput(QMediaCaptureSession* self, QObject* output);
QObject* QMediaCaptureSession_VideoOutput(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetVideoSink(QMediaCaptureSession* self, QVideoSink* sink);
QVideoSink* QMediaCaptureSession_VideoSink(const QMediaCaptureSession* self);
void QMediaCaptureSession_SetAudioOutput(QMediaCaptureSession* self, QAudioOutput* output);
QAudioOutput* QMediaCaptureSession_AudioOutput(const QMediaCaptureSession* self);
void QMediaCaptureSession_AudioInputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_AudioInputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_CameraChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_CameraChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_ImageCaptureChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_ImageCaptureChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_RecorderChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_RecorderChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_VideoOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_VideoOutputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_AudioOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_AudioOutputChanged(QMediaCaptureSession* self, intptr_t slot);
struct miqt_string QMediaCaptureSession_Tr2(const char* s, const char* c);
struct miqt_string QMediaCaptureSession_Tr3(const char* s, const char* c, int n);
void QMediaCaptureSession_override_virtual_Event(void* self, intptr_t slot);
bool QMediaCaptureSession_virtualbase_Event(void* self, QEvent* event);
void QMediaCaptureSession_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMediaCaptureSession_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QMediaCaptureSession_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QMediaCaptureSession_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QMediaCaptureSession_override_virtual_CustomEvent(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_CustomEvent(void* self, QEvent* event);
void QMediaCaptureSession_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QMediaCaptureSession_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QMediaCaptureSession_Delete(QMediaCaptureSession* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
