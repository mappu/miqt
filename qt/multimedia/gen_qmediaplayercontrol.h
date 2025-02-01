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
class QMediaControl;
class QMediaPlayerControl;
class QMediaTimeRange;
class QMetaObject;
class QObject;
#else
typedef struct QIODevice QIODevice;
typedef struct QMediaContent QMediaContent;
typedef struct QMediaControl QMediaControl;
typedef struct QMediaPlayerControl QMediaPlayerControl;
typedef struct QMediaTimeRange QMediaTimeRange;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaPlayerControl_virtbase(QMediaPlayerControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaPlayerControl_metaObject(const QMediaPlayerControl* self);
void* QMediaPlayerControl_metacast(QMediaPlayerControl* self, const char* param1);
struct miqt_string QMediaPlayerControl_tr(const char* s);
struct miqt_string QMediaPlayerControl_trUtf8(const char* s);
int QMediaPlayerControl_state(const QMediaPlayerControl* self);
int QMediaPlayerControl_mediaStatus(const QMediaPlayerControl* self);
long long QMediaPlayerControl_duration(const QMediaPlayerControl* self);
long long QMediaPlayerControl_position(const QMediaPlayerControl* self);
void QMediaPlayerControl_setPosition(QMediaPlayerControl* self, long long position);
int QMediaPlayerControl_volume(const QMediaPlayerControl* self);
void QMediaPlayerControl_setVolume(QMediaPlayerControl* self, int volume);
bool QMediaPlayerControl_isMuted(const QMediaPlayerControl* self);
void QMediaPlayerControl_setMuted(QMediaPlayerControl* self, bool mute);
int QMediaPlayerControl_bufferStatus(const QMediaPlayerControl* self);
bool QMediaPlayerControl_isAudioAvailable(const QMediaPlayerControl* self);
bool QMediaPlayerControl_isVideoAvailable(const QMediaPlayerControl* self);
bool QMediaPlayerControl_isSeekable(const QMediaPlayerControl* self);
QMediaTimeRange* QMediaPlayerControl_availablePlaybackRanges(const QMediaPlayerControl* self);
double QMediaPlayerControl_playbackRate(const QMediaPlayerControl* self);
void QMediaPlayerControl_setPlaybackRate(QMediaPlayerControl* self, double rate);
QMediaContent* QMediaPlayerControl_media(const QMediaPlayerControl* self);
QIODevice* QMediaPlayerControl_mediaStream(const QMediaPlayerControl* self);
void QMediaPlayerControl_setMedia(QMediaPlayerControl* self, QMediaContent* media, QIODevice* stream);
void QMediaPlayerControl_play(QMediaPlayerControl* self);
void QMediaPlayerControl_pause(QMediaPlayerControl* self);
void QMediaPlayerControl_stop(QMediaPlayerControl* self);
void QMediaPlayerControl_mediaChanged(QMediaPlayerControl* self, QMediaContent* content);
void QMediaPlayerControl_connect_mediaChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_durationChanged(QMediaPlayerControl* self, long long duration);
void QMediaPlayerControl_connect_durationChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_positionChanged(QMediaPlayerControl* self, long long position);
void QMediaPlayerControl_connect_positionChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_stateChanged(QMediaPlayerControl* self, int newState);
void QMediaPlayerControl_connect_stateChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_mediaStatusChanged(QMediaPlayerControl* self, int status);
void QMediaPlayerControl_connect_mediaStatusChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_volumeChanged(QMediaPlayerControl* self, int volume);
void QMediaPlayerControl_connect_volumeChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_mutedChanged(QMediaPlayerControl* self, bool mute);
void QMediaPlayerControl_connect_mutedChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_audioAvailableChanged(QMediaPlayerControl* self, bool audioAvailable);
void QMediaPlayerControl_connect_audioAvailableChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_videoAvailableChanged(QMediaPlayerControl* self, bool videoAvailable);
void QMediaPlayerControl_connect_videoAvailableChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_bufferStatusChanged(QMediaPlayerControl* self, int percentFilled);
void QMediaPlayerControl_connect_bufferStatusChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_seekableChanged(QMediaPlayerControl* self, bool seekable);
void QMediaPlayerControl_connect_seekableChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_availablePlaybackRangesChanged(QMediaPlayerControl* self, QMediaTimeRange* ranges);
void QMediaPlayerControl_connect_availablePlaybackRangesChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_playbackRateChanged(QMediaPlayerControl* self, double rate);
void QMediaPlayerControl_connect_playbackRateChanged(QMediaPlayerControl* self, intptr_t slot);
void QMediaPlayerControl_error(QMediaPlayerControl* self, int error, struct miqt_string errorString);
void QMediaPlayerControl_connect_error(QMediaPlayerControl* self, intptr_t slot);
struct miqt_string QMediaPlayerControl_tr2(const char* s, const char* c);
struct miqt_string QMediaPlayerControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaPlayerControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaPlayerControl_trUtf83(const char* s, const char* c, int n);
void QMediaPlayerControl_delete(QMediaPlayerControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
