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

QMediaCaptureSession* QMediaCaptureSession_new();
QMediaCaptureSession* QMediaCaptureSession_new2(QObject* parent);
void QMediaCaptureSession_virtbase(QMediaCaptureSession* src, QObject** outptr_QObject);
QMetaObject* QMediaCaptureSession_metaObject(const QMediaCaptureSession* self);
void* QMediaCaptureSession_metacast(QMediaCaptureSession* self, const char* param1);
struct miqt_string QMediaCaptureSession_tr(const char* s);
QAudioInput* QMediaCaptureSession_audioInput(const QMediaCaptureSession* self);
void QMediaCaptureSession_setAudioInput(QMediaCaptureSession* self, QAudioInput* input);
QCamera* QMediaCaptureSession_camera(const QMediaCaptureSession* self);
void QMediaCaptureSession_setCamera(QMediaCaptureSession* self, QCamera* camera);
QImageCapture* QMediaCaptureSession_imageCapture(QMediaCaptureSession* self);
void QMediaCaptureSession_setImageCapture(QMediaCaptureSession* self, QImageCapture* imageCapture);
QMediaRecorder* QMediaCaptureSession_recorder(QMediaCaptureSession* self);
void QMediaCaptureSession_setRecorder(QMediaCaptureSession* self, QMediaRecorder* recorder);
void QMediaCaptureSession_setVideoOutput(QMediaCaptureSession* self, QObject* output);
QObject* QMediaCaptureSession_videoOutput(const QMediaCaptureSession* self);
void QMediaCaptureSession_setVideoSink(QMediaCaptureSession* self, QVideoSink* sink);
QVideoSink* QMediaCaptureSession_videoSink(const QMediaCaptureSession* self);
void QMediaCaptureSession_setAudioOutput(QMediaCaptureSession* self, QAudioOutput* output);
QAudioOutput* QMediaCaptureSession_audioOutput(const QMediaCaptureSession* self);
void QMediaCaptureSession_audioInputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_audioInputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_cameraChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_cameraChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_imageCaptureChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_imageCaptureChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_recorderChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_recorderChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_videoOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_videoOutputChanged(QMediaCaptureSession* self, intptr_t slot);
void QMediaCaptureSession_audioOutputChanged(QMediaCaptureSession* self);
void QMediaCaptureSession_connect_audioOutputChanged(QMediaCaptureSession* self, intptr_t slot);
struct miqt_string QMediaCaptureSession_tr2(const char* s, const char* c);
struct miqt_string QMediaCaptureSession_tr3(const char* s, const char* c, int n);
bool QMediaCaptureSession_override_virtual_event(void* self, intptr_t slot);
bool QMediaCaptureSession_virtualbase_event(void* self, QEvent* event);
bool QMediaCaptureSession_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMediaCaptureSession_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMediaCaptureSession_override_virtual_timerEvent(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMediaCaptureSession_override_virtual_childEvent(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMediaCaptureSession_override_virtual_customEvent(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_customEvent(void* self, QEvent* event);
bool QMediaCaptureSession_override_virtual_connectNotify(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMediaCaptureSession_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMediaCaptureSession_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QMediaCaptureSession_delete(QMediaCaptureSession* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
