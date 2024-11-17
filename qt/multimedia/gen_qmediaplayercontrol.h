#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAPLAYERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAPLAYERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QMediaContent;
class QMediaPlayerControl;
class QMediaTimeRange;
class QMetaObject;
#else
typedef struct QIODevice QIODevice;
typedef struct QMediaContent QMediaContent;
typedef struct QMediaPlayerControl QMediaPlayerControl;
typedef struct QMediaTimeRange QMediaTimeRange;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QMediaPlayerControl_MetaObject(const QMediaPlayerControl* self);
void* QMediaPlayerControl_Metacast(QMediaPlayerControl* self, const char* param1);
struct miqt_string QMediaPlayerControl_Tr(const char* s);
struct miqt_string QMediaPlayerControl_TrUtf8(const char* s);
int QMediaPlayerControl_State(const QMediaPlayerControl* self);
int QMediaPlayerControl_MediaStatus(const QMediaPlayerControl* self);
long long QMediaPlayerControl_Duration(const QMediaPlayerControl* self);
long long QMediaPlayerControl_Position(const QMediaPlayerControl* self);
void QMediaPlayerControl_SetPosition(QMediaPlayerControl* self, long long position);
int QMediaPlayerControl_Volume(const QMediaPlayerControl* self);
void QMediaPlayerControl_SetVolume(QMediaPlayerControl* self, int volume);
bool QMediaPlayerControl_IsMuted(const QMediaPlayerControl* self);
void QMediaPlayerControl_SetMuted(QMediaPlayerControl* self, bool mute);
int QMediaPlayerControl_BufferStatus(const QMediaPlayerControl* self);
bool QMediaPlayerControl_IsAudioAvailable(const QMediaPlayerControl* self);
bool QMediaPlayerControl_IsVideoAvailable(const QMediaPlayerControl* self);
bool QMediaPlayerControl_IsSeekable(const QMediaPlayerControl* self);
QMediaTimeRange* QMediaPlayerControl_AvailablePlaybackRanges(const QMediaPlayerControl* self);
double QMediaPlayerControl_PlaybackRate(const QMediaPlayerControl* self);
void QMediaPlayerControl_SetPlaybackRate(QMediaPlayerControl* self, double rate);
QMediaContent* QMediaPlayerControl_Media(const QMediaPlayerControl* self);
QIODevice* QMediaPlayerControl_MediaStream(const QMediaPlayerControl* self);
void QMediaPlayerControl_SetMedia(QMediaPlayerControl* self, QMediaContent* media, QIODevice* stream);
void QMediaPlayerControl_Play(QMediaPlayerControl* self);
void QMediaPlayerControl_Pause(QMediaPlayerControl* self);
void QMediaPlayerControl_Stop(QMediaPlayerControl* self);
void QMediaPlayerControl_MediaChanged(QMediaPlayerControl* self, QMediaContent* content);
void QMediaPlayerControl_connect_MediaChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_DurationChanged(QMediaPlayerControl* self, long long duration);
void QMediaPlayerControl_connect_DurationChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_PositionChanged(QMediaPlayerControl* self, long long position);
void QMediaPlayerControl_connect_PositionChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_StateChanged(QMediaPlayerControl* self, int newState);
void QMediaPlayerControl_connect_StateChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_MediaStatusChanged(QMediaPlayerControl* self, int status);
void QMediaPlayerControl_connect_MediaStatusChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_VolumeChanged(QMediaPlayerControl* self, int volume);
void QMediaPlayerControl_connect_VolumeChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_MutedChanged(QMediaPlayerControl* self, bool mute);
void QMediaPlayerControl_connect_MutedChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_AudioAvailableChanged(QMediaPlayerControl* self, bool audioAvailable);
void QMediaPlayerControl_connect_AudioAvailableChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_VideoAvailableChanged(QMediaPlayerControl* self, bool videoAvailable);
void QMediaPlayerControl_connect_VideoAvailableChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_BufferStatusChanged(QMediaPlayerControl* self, int percentFilled);
void QMediaPlayerControl_connect_BufferStatusChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_SeekableChanged(QMediaPlayerControl* self, bool seekable);
void QMediaPlayerControl_connect_SeekableChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_AvailablePlaybackRangesChanged(QMediaPlayerControl* self, QMediaTimeRange* ranges);
void QMediaPlayerControl_connect_AvailablePlaybackRangesChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_PlaybackRateChanged(QMediaPlayerControl* self, double rate);
void QMediaPlayerControl_connect_PlaybackRateChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_Error(QMediaPlayerControl* self, int error, struct miqt_string errorString);
void QMediaPlayerControl_connect_Error(QMediaPlayerControl* self, intptr_t slot);
struct miqt_string QMediaPlayerControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaPlayerControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaPlayerControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaPlayerControl_TrUtf83(const char* s, const char* c, int n);
void QMediaPlayerControl_Delete(QMediaPlayerControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
