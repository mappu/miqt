#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIARECORDER_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIARECORDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMediaCaptureSession;
class QMediaFormat;
class QMediaMetaData;
class QMediaRecorder;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTimerEvent;
class QUrl;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaFormat QMediaFormat;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QMediaRecorder* QMediaRecorder_new();
QMediaRecorder* QMediaRecorder_new2(QObject* parent);
void QMediaRecorder_virtbase(QMediaRecorder* src, QObject** outptr_QObject);
QMetaObject* QMediaRecorder_metaObject(const QMediaRecorder* self);
void* QMediaRecorder_metacast(QMediaRecorder* self, const char* param1);
struct miqt_string QMediaRecorder_tr(const char* s);
bool QMediaRecorder_isAvailable(const QMediaRecorder* self);
QUrl* QMediaRecorder_outputLocation(const QMediaRecorder* self);
void QMediaRecorder_setOutputLocation(QMediaRecorder* self, QUrl* location);
QUrl* QMediaRecorder_actualLocation(const QMediaRecorder* self);
int QMediaRecorder_recorderState(const QMediaRecorder* self);
int QMediaRecorder_error(const QMediaRecorder* self);
struct miqt_string QMediaRecorder_errorString(const QMediaRecorder* self);
long long QMediaRecorder_duration(const QMediaRecorder* self);
QMediaFormat* QMediaRecorder_mediaFormat(const QMediaRecorder* self);
void QMediaRecorder_setMediaFormat(QMediaRecorder* self, QMediaFormat* format);
int QMediaRecorder_encodingMode(const QMediaRecorder* self);
void QMediaRecorder_setEncodingMode(QMediaRecorder* self, int encodingMode);
int QMediaRecorder_quality(const QMediaRecorder* self);
void QMediaRecorder_setQuality(QMediaRecorder* self, int quality);
QSize* QMediaRecorder_videoResolution(const QMediaRecorder* self);
void QMediaRecorder_setVideoResolution(QMediaRecorder* self, QSize* videoResolution);
void QMediaRecorder_setVideoResolution2(QMediaRecorder* self, int width, int height);
double QMediaRecorder_videoFrameRate(const QMediaRecorder* self);
void QMediaRecorder_setVideoFrameRate(QMediaRecorder* self, double frameRate);
int QMediaRecorder_videoBitRate(const QMediaRecorder* self);
void QMediaRecorder_setVideoBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_audioBitRate(const QMediaRecorder* self);
void QMediaRecorder_setAudioBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_audioChannelCount(const QMediaRecorder* self);
void QMediaRecorder_setAudioChannelCount(QMediaRecorder* self, int channels);
int QMediaRecorder_audioSampleRate(const QMediaRecorder* self);
void QMediaRecorder_setAudioSampleRate(QMediaRecorder* self, int sampleRate);
QMediaMetaData* QMediaRecorder_metaData(const QMediaRecorder* self);
void QMediaRecorder_setMetaData(QMediaRecorder* self, QMediaMetaData* metaData);
void QMediaRecorder_addMetaData(QMediaRecorder* self, QMediaMetaData* metaData);
QMediaCaptureSession* QMediaRecorder_captureSession(const QMediaRecorder* self);
void QMediaRecorder_record(QMediaRecorder* self);
void QMediaRecorder_pause(QMediaRecorder* self);
void QMediaRecorder_stop(QMediaRecorder* self);
void QMediaRecorder_recorderStateChanged(QMediaRecorder* self, int state);
void QMediaRecorder_connect_recorderStateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_durationChanged(QMediaRecorder* self, long long duration);
void QMediaRecorder_connect_durationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_actualLocationChanged(QMediaRecorder* self, QUrl* location);
void QMediaRecorder_connect_actualLocationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_encoderSettingsChanged(QMediaRecorder* self);
void QMediaRecorder_connect_encoderSettingsChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_errorOccurred(QMediaRecorder* self, int error, struct miqt_string errorString);
void QMediaRecorder_connect_errorOccurred(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_errorChanged(QMediaRecorder* self);
void QMediaRecorder_connect_errorChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_metaDataChanged(QMediaRecorder* self);
void QMediaRecorder_connect_metaDataChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_mediaFormatChanged(QMediaRecorder* self);
void QMediaRecorder_connect_mediaFormatChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_encodingModeChanged(QMediaRecorder* self);
void QMediaRecorder_connect_encodingModeChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_qualityChanged(QMediaRecorder* self);
void QMediaRecorder_connect_qualityChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_videoResolutionChanged(QMediaRecorder* self);
void QMediaRecorder_connect_videoResolutionChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_videoFrameRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_videoFrameRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_videoBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_videoBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_audioBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_audioBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_audioChannelCountChanged(QMediaRecorder* self);
void QMediaRecorder_connect_audioChannelCountChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_audioSampleRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_audioSampleRateChanged(QMediaRecorder* self, intptr_t slot);
struct miqt_string QMediaRecorder_tr2(const char* s, const char* c);
struct miqt_string QMediaRecorder_tr3(const char* s, const char* c, int n);

bool QMediaRecorder_override_virtual_event(void* self, intptr_t slot);
bool QMediaRecorder_virtualbase_event(void* self, QEvent* event);
bool QMediaRecorder_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMediaRecorder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMediaRecorder_override_virtual_timerEvent(void* self, intptr_t slot);
void QMediaRecorder_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMediaRecorder_override_virtual_childEvent(void* self, intptr_t slot);
void QMediaRecorder_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMediaRecorder_override_virtual_customEvent(void* self, intptr_t slot);
void QMediaRecorder_virtualbase_customEvent(void* self, QEvent* event);
bool QMediaRecorder_override_virtual_connectNotify(void* self, intptr_t slot);
void QMediaRecorder_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMediaRecorder_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMediaRecorder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QMediaRecorder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMediaRecorder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMediaRecorder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMediaRecorder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QMediaRecorder_delete(QMediaRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
