#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIAPLAYER_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioOutput;
class QChildEvent;
class QEvent;
class QIODevice;
class QMediaMetaData;
class QMediaPlayer;
class QMediaTimeRange;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QUrl;
class QVideoSink;
#else
typedef struct QAudioOutput QAudioOutput;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMediaPlayer QMediaPlayer;
typedef struct QMediaTimeRange QMediaTimeRange;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVideoSink QVideoSink;
#endif

QMediaPlayer* QMediaPlayer_new();
QMediaPlayer* QMediaPlayer_new2(QObject* parent);
void QMediaPlayer_virtbase(QMediaPlayer* src, QObject** outptr_QObject);
QMetaObject* QMediaPlayer_metaObject(const QMediaPlayer* self);
void* QMediaPlayer_metacast(QMediaPlayer* self, const char* param1);
struct miqt_string QMediaPlayer_tr(const char* s);
struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_audioTracks(const QMediaPlayer* self);
struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_videoTracks(const QMediaPlayer* self);
struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_subtitleTracks(const QMediaPlayer* self);
int QMediaPlayer_activeAudioTrack(const QMediaPlayer* self);
int QMediaPlayer_activeVideoTrack(const QMediaPlayer* self);
int QMediaPlayer_activeSubtitleTrack(const QMediaPlayer* self);
void QMediaPlayer_setActiveAudioTrack(QMediaPlayer* self, int index);
void QMediaPlayer_setActiveVideoTrack(QMediaPlayer* self, int index);
void QMediaPlayer_setActiveSubtitleTrack(QMediaPlayer* self, int index);
void QMediaPlayer_setAudioOutput(QMediaPlayer* self, QAudioOutput* output);
QAudioOutput* QMediaPlayer_audioOutput(const QMediaPlayer* self);
void QMediaPlayer_setVideoOutput(QMediaPlayer* self, QObject* videoOutput);
QObject* QMediaPlayer_videoOutput(const QMediaPlayer* self);
void QMediaPlayer_setVideoSink(QMediaPlayer* self, QVideoSink* sink);
QVideoSink* QMediaPlayer_videoSink(const QMediaPlayer* self);
QUrl* QMediaPlayer_source(const QMediaPlayer* self);
QIODevice* QMediaPlayer_sourceDevice(const QMediaPlayer* self);
int QMediaPlayer_playbackState(const QMediaPlayer* self);
int QMediaPlayer_mediaStatus(const QMediaPlayer* self);
long long QMediaPlayer_duration(const QMediaPlayer* self);
long long QMediaPlayer_position(const QMediaPlayer* self);
bool QMediaPlayer_hasAudio(const QMediaPlayer* self);
bool QMediaPlayer_hasVideo(const QMediaPlayer* self);
float QMediaPlayer_bufferProgress(const QMediaPlayer* self);
QMediaTimeRange* QMediaPlayer_bufferedTimeRange(const QMediaPlayer* self);
bool QMediaPlayer_isSeekable(const QMediaPlayer* self);
double QMediaPlayer_playbackRate(const QMediaPlayer* self);
int QMediaPlayer_loops(const QMediaPlayer* self);
void QMediaPlayer_setLoops(QMediaPlayer* self, int loops);
int QMediaPlayer_error(const QMediaPlayer* self);
struct miqt_string QMediaPlayer_errorString(const QMediaPlayer* self);
bool QMediaPlayer_isAvailable(const QMediaPlayer* self);
QMediaMetaData* QMediaPlayer_metaData(const QMediaPlayer* self);
void QMediaPlayer_play(QMediaPlayer* self);
void QMediaPlayer_pause(QMediaPlayer* self);
void QMediaPlayer_stop(QMediaPlayer* self);
void QMediaPlayer_setPosition(QMediaPlayer* self, long long position);
void QMediaPlayer_setPlaybackRate(QMediaPlayer* self, double rate);
void QMediaPlayer_setSource(QMediaPlayer* self, QUrl* source);
void QMediaPlayer_setSourceDevice(QMediaPlayer* self, QIODevice* device);
void QMediaPlayer_sourceChanged(QMediaPlayer* self, QUrl* media);
void QMediaPlayer_connect_sourceChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_playbackStateChanged(QMediaPlayer* self, int newState);
void QMediaPlayer_connect_playbackStateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_mediaStatusChanged(QMediaPlayer* self, int status);
void QMediaPlayer_connect_mediaStatusChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_durationChanged(QMediaPlayer* self, long long duration);
void QMediaPlayer_connect_durationChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_positionChanged(QMediaPlayer* self, long long position);
void QMediaPlayer_connect_positionChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_hasAudioChanged(QMediaPlayer* self, bool available);
void QMediaPlayer_connect_hasAudioChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_hasVideoChanged(QMediaPlayer* self, bool videoAvailable);
void QMediaPlayer_connect_hasVideoChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_bufferProgressChanged(QMediaPlayer* self, float progress);
void QMediaPlayer_connect_bufferProgressChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_seekableChanged(QMediaPlayer* self, bool seekable);
void QMediaPlayer_connect_seekableChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_playbackRateChanged(QMediaPlayer* self, double rate);
void QMediaPlayer_connect_playbackRateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_loopsChanged(QMediaPlayer* self);
void QMediaPlayer_connect_loopsChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_metaDataChanged(QMediaPlayer* self);
void QMediaPlayer_connect_metaDataChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_videoOutputChanged(QMediaPlayer* self);
void QMediaPlayer_connect_videoOutputChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_audioOutputChanged(QMediaPlayer* self);
void QMediaPlayer_connect_audioOutputChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_tracksChanged(QMediaPlayer* self);
void QMediaPlayer_connect_tracksChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_activeTracksChanged(QMediaPlayer* self);
void QMediaPlayer_connect_activeTracksChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_errorChanged(QMediaPlayer* self);
void QMediaPlayer_connect_errorChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_errorOccurred(QMediaPlayer* self, int error, struct miqt_string errorString);
void QMediaPlayer_connect_errorOccurred(QMediaPlayer* self, intptr_t slot);
struct miqt_string QMediaPlayer_tr2(const char* s, const char* c);
struct miqt_string QMediaPlayer_tr3(const char* s, const char* c, int n);
void QMediaPlayer_setSourceDevice2(QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl);
bool QMediaPlayer_override_virtual_event(void* self, intptr_t slot);
bool QMediaPlayer_virtualbase_event(void* self, QEvent* event);
bool QMediaPlayer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMediaPlayer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMediaPlayer_override_virtual_timerEvent(void* self, intptr_t slot);
void QMediaPlayer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMediaPlayer_override_virtual_childEvent(void* self, intptr_t slot);
void QMediaPlayer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMediaPlayer_override_virtual_customEvent(void* self, intptr_t slot);
void QMediaPlayer_virtualbase_customEvent(void* self, QEvent* event);
bool QMediaPlayer_override_virtual_connectNotify(void* self, intptr_t slot);
void QMediaPlayer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMediaPlayer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMediaPlayer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QMediaPlayer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QMediaPlayer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QMediaPlayer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QMediaPlayer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QMediaPlayer_delete(QMediaPlayer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
