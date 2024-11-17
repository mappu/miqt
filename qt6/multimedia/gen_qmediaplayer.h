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
class QIODevice;
class QMediaMetaData;
class QMediaPlayer;
class QMediaTimeRange;
class QMetaObject;
class QObject;
class QUrl;
class QVideoSink;
#else
typedef struct QAudioOutput QAudioOutput;
typedef struct QIODevice QIODevice;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMediaPlayer QMediaPlayer;
typedef struct QMediaTimeRange QMediaTimeRange;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QVideoSink QVideoSink;
#endif

QMediaPlayer* QMediaPlayer_new();
QMediaPlayer* QMediaPlayer_new2(QObject* parent);
QMetaObject* QMediaPlayer_MetaObject(const QMediaPlayer* self);
void* QMediaPlayer_Metacast(QMediaPlayer* self, const char* param1);
struct miqt_string QMediaPlayer_Tr(const char* s);
struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_AudioTracks(const QMediaPlayer* self);
struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_VideoTracks(const QMediaPlayer* self);
struct miqt_array /* of QMediaMetaData* */  QMediaPlayer_SubtitleTracks(const QMediaPlayer* self);
int QMediaPlayer_ActiveAudioTrack(const QMediaPlayer* self);
int QMediaPlayer_ActiveVideoTrack(const QMediaPlayer* self);
int QMediaPlayer_ActiveSubtitleTrack(const QMediaPlayer* self);
void QMediaPlayer_SetActiveAudioTrack(QMediaPlayer* self, int index);
void QMediaPlayer_SetActiveVideoTrack(QMediaPlayer* self, int index);
void QMediaPlayer_SetActiveSubtitleTrack(QMediaPlayer* self, int index);
void QMediaPlayer_SetAudioOutput(QMediaPlayer* self, QAudioOutput* output);
QAudioOutput* QMediaPlayer_AudioOutput(const QMediaPlayer* self);
void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QObject* videoOutput);
QObject* QMediaPlayer_VideoOutput(const QMediaPlayer* self);
void QMediaPlayer_SetVideoSink(QMediaPlayer* self, QVideoSink* sink);
QVideoSink* QMediaPlayer_VideoSink(const QMediaPlayer* self);
QUrl* QMediaPlayer_Source(const QMediaPlayer* self);
QIODevice* QMediaPlayer_SourceDevice(const QMediaPlayer* self);
int QMediaPlayer_PlaybackState(const QMediaPlayer* self);
int QMediaPlayer_MediaStatus(const QMediaPlayer* self);
long long QMediaPlayer_Duration(const QMediaPlayer* self);
long long QMediaPlayer_Position(const QMediaPlayer* self);
bool QMediaPlayer_HasAudio(const QMediaPlayer* self);
bool QMediaPlayer_HasVideo(const QMediaPlayer* self);
float QMediaPlayer_BufferProgress(const QMediaPlayer* self);
QMediaTimeRange* QMediaPlayer_BufferedTimeRange(const QMediaPlayer* self);
bool QMediaPlayer_IsSeekable(const QMediaPlayer* self);
double QMediaPlayer_PlaybackRate(const QMediaPlayer* self);
int QMediaPlayer_Loops(const QMediaPlayer* self);
void QMediaPlayer_SetLoops(QMediaPlayer* self, int loops);
int QMediaPlayer_Error(const QMediaPlayer* self);
struct miqt_string QMediaPlayer_ErrorString(const QMediaPlayer* self);
bool QMediaPlayer_IsAvailable(const QMediaPlayer* self);
QMediaMetaData* QMediaPlayer_MetaData(const QMediaPlayer* self);
void QMediaPlayer_Play(QMediaPlayer* self);
void QMediaPlayer_Pause(QMediaPlayer* self);
void QMediaPlayer_Stop(QMediaPlayer* self);
void QMediaPlayer_SetPosition(QMediaPlayer* self, long long position);
void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate);
void QMediaPlayer_SetSource(QMediaPlayer* self, QUrl* source);
void QMediaPlayer_SetSourceDevice(QMediaPlayer* self, QIODevice* device);
void QMediaPlayer_SourceChanged(QMediaPlayer* self, QUrl* media);
void QMediaPlayer_connect_SourceChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PlaybackStateChanged(QMediaPlayer* self, int newState);
void QMediaPlayer_connect_PlaybackStateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status);
void QMediaPlayer_connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration);
void QMediaPlayer_connect_DurationChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position);
void QMediaPlayer_connect_PositionChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_HasAudioChanged(QMediaPlayer* self, bool available);
void QMediaPlayer_connect_HasAudioChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_HasVideoChanged(QMediaPlayer* self, bool videoAvailable);
void QMediaPlayer_connect_HasVideoChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_BufferProgressChanged(QMediaPlayer* self, float progress);
void QMediaPlayer_connect_BufferProgressChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable);
void QMediaPlayer_connect_SeekableChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate);
void QMediaPlayer_connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_LoopsChanged(QMediaPlayer* self);
void QMediaPlayer_connect_LoopsChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_MetaDataChanged(QMediaPlayer* self);
void QMediaPlayer_connect_MetaDataChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_VideoOutputChanged(QMediaPlayer* self);
void QMediaPlayer_connect_VideoOutputChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_AudioOutputChanged(QMediaPlayer* self);
void QMediaPlayer_connect_AudioOutputChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_TracksChanged(QMediaPlayer* self);
void QMediaPlayer_connect_TracksChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_ActiveTracksChanged(QMediaPlayer* self);
void QMediaPlayer_connect_ActiveTracksChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_ErrorChanged(QMediaPlayer* self);
void QMediaPlayer_connect_ErrorChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_ErrorOccurred(QMediaPlayer* self, int error, struct miqt_string errorString);
void QMediaPlayer_connect_ErrorOccurred(QMediaPlayer* self, intptr_t slot);
struct miqt_string QMediaPlayer_Tr2(const char* s, const char* c);
struct miqt_string QMediaPlayer_Tr3(const char* s, const char* c, int n);
void QMediaPlayer_SetSourceDevice2(QMediaPlayer* self, QIODevice* device, QUrl* sourceUrl);
void QMediaPlayer_Delete(QMediaPlayer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
