#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAPLAYER_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAPLAYER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractVideoSurface;
class QGraphicsVideoItem;
class QIODevice;
class QMediaContent;
class QMediaObject;
class QMediaPlayer;
class QMediaPlaylist;
class QMediaService;
class QMetaObject;
class QNetworkConfiguration;
class QObject;
class QVideoWidget;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QIODevice QIODevice;
typedef struct QMediaContent QMediaContent;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaPlayer QMediaPlayer;
typedef struct QMediaPlaylist QMediaPlaylist;
typedef struct QMediaService QMediaService;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkConfiguration QNetworkConfiguration;
typedef struct QObject QObject;
typedef struct QVideoWidget QVideoWidget;
#endif

void QMediaPlayer_new(QMediaPlayer** outptr_QMediaPlayer, QMediaObject** outptr_QMediaObject, QObject** outptr_QObject);
void QMediaPlayer_new2(QObject* parent, QMediaPlayer** outptr_QMediaPlayer, QMediaObject** outptr_QMediaObject, QObject** outptr_QObject);
void QMediaPlayer_new3(QObject* parent, int flags, QMediaPlayer** outptr_QMediaPlayer, QMediaObject** outptr_QMediaObject, QObject** outptr_QObject);
QMetaObject* QMediaPlayer_MetaObject(const QMediaPlayer* self);
void* QMediaPlayer_Metacast(QMediaPlayer* self, const char* param1);
struct miqt_string QMediaPlayer_Tr(const char* s);
struct miqt_string QMediaPlayer_TrUtf8(const char* s);
int QMediaPlayer_HasSupport(struct miqt_string mimeType);
struct miqt_array /* of struct miqt_string */  QMediaPlayer_SupportedMimeTypes();
void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QVideoWidget* videoOutput);
void QMediaPlayer_SetVideoOutputWithVideoOutput(QMediaPlayer* self, QGraphicsVideoItem* videoOutput);
void QMediaPlayer_SetVideoOutputWithSurface(QMediaPlayer* self, QAbstractVideoSurface* surface);
void QMediaPlayer_SetVideoOutputWithSurfaces(QMediaPlayer* self, struct miqt_array /* of QAbstractVideoSurface* */  surfaces);
QMediaContent* QMediaPlayer_Media(const QMediaPlayer* self);
QIODevice* QMediaPlayer_MediaStream(const QMediaPlayer* self);
QMediaPlaylist* QMediaPlayer_Playlist(const QMediaPlayer* self);
QMediaContent* QMediaPlayer_CurrentMedia(const QMediaPlayer* self);
int QMediaPlayer_State(const QMediaPlayer* self);
int QMediaPlayer_MediaStatus(const QMediaPlayer* self);
long long QMediaPlayer_Duration(const QMediaPlayer* self);
long long QMediaPlayer_Position(const QMediaPlayer* self);
int QMediaPlayer_Volume(const QMediaPlayer* self);
bool QMediaPlayer_IsMuted(const QMediaPlayer* self);
bool QMediaPlayer_IsAudioAvailable(const QMediaPlayer* self);
bool QMediaPlayer_IsVideoAvailable(const QMediaPlayer* self);
int QMediaPlayer_BufferStatus(const QMediaPlayer* self);
bool QMediaPlayer_IsSeekable(const QMediaPlayer* self);
double QMediaPlayer_PlaybackRate(const QMediaPlayer* self);
int QMediaPlayer_Error(const QMediaPlayer* self);
struct miqt_string QMediaPlayer_ErrorString(const QMediaPlayer* self);
QNetworkConfiguration* QMediaPlayer_CurrentNetworkConfiguration(const QMediaPlayer* self);
int QMediaPlayer_Availability(const QMediaPlayer* self);
int QMediaPlayer_AudioRole(const QMediaPlayer* self);
void QMediaPlayer_SetAudioRole(QMediaPlayer* self, int audioRole);
struct miqt_array /* of int */  QMediaPlayer_SupportedAudioRoles(const QMediaPlayer* self);
struct miqt_string QMediaPlayer_CustomAudioRole(const QMediaPlayer* self);
void QMediaPlayer_SetCustomAudioRole(QMediaPlayer* self, struct miqt_string audioRole);
struct miqt_array /* of struct miqt_string */  QMediaPlayer_SupportedCustomAudioRoles(const QMediaPlayer* self);
void QMediaPlayer_Play(QMediaPlayer* self);
void QMediaPlayer_Pause(QMediaPlayer* self);
void QMediaPlayer_Stop(QMediaPlayer* self);
void QMediaPlayer_SetPosition(QMediaPlayer* self, long long position);
void QMediaPlayer_SetVolume(QMediaPlayer* self, int volume);
void QMediaPlayer_SetMuted(QMediaPlayer* self, bool muted);
void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate);
void QMediaPlayer_SetMedia(QMediaPlayer* self, QMediaContent* media);
void QMediaPlayer_SetPlaylist(QMediaPlayer* self, QMediaPlaylist* playlist);
void QMediaPlayer_SetNetworkConfigurations(QMediaPlayer* self, struct miqt_array /* of QNetworkConfiguration* */  configurations);
void QMediaPlayer_MediaChanged(QMediaPlayer* self, QMediaContent* media);
void QMediaPlayer_connect_MediaChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_CurrentMediaChanged(QMediaPlayer* self, QMediaContent* media);
void QMediaPlayer_connect_CurrentMediaChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_StateChanged(QMediaPlayer* self, int newState);
void QMediaPlayer_connect_StateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status);
void QMediaPlayer_connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration);
void QMediaPlayer_connect_DurationChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position);
void QMediaPlayer_connect_PositionChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_VolumeChanged(QMediaPlayer* self, int volume);
void QMediaPlayer_connect_VolumeChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_MutedChanged(QMediaPlayer* self, bool muted);
void QMediaPlayer_connect_MutedChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_AudioAvailableChanged(QMediaPlayer* self, bool available);
void QMediaPlayer_connect_AudioAvailableChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_VideoAvailableChanged(QMediaPlayer* self, bool videoAvailable);
void QMediaPlayer_connect_VideoAvailableChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_BufferStatusChanged(QMediaPlayer* self, int percentFilled);
void QMediaPlayer_connect_BufferStatusChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable);
void QMediaPlayer_connect_SeekableChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate);
void QMediaPlayer_connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_AudioRoleChanged(QMediaPlayer* self, int role);
void QMediaPlayer_connect_AudioRoleChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_CustomAudioRoleChanged(QMediaPlayer* self, struct miqt_string role);
void QMediaPlayer_connect_CustomAudioRoleChanged(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_ErrorWithError(QMediaPlayer* self, int error);
void QMediaPlayer_connect_ErrorWithError(QMediaPlayer* self, intptr_t slot);
void QMediaPlayer_NetworkConfigurationChanged(QMediaPlayer* self, QNetworkConfiguration* configuration);
void QMediaPlayer_connect_NetworkConfigurationChanged(QMediaPlayer* self, intptr_t slot);
bool QMediaPlayer_Bind(QMediaPlayer* self, QObject* param1);
void QMediaPlayer_Unbind(QMediaPlayer* self, QObject* param1);
struct miqt_string QMediaPlayer_Tr2(const char* s, const char* c);
struct miqt_string QMediaPlayer_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaPlayer_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaPlayer_TrUtf83(const char* s, const char* c, int n);
int QMediaPlayer_HasSupport2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs);
int QMediaPlayer_HasSupport3(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs, int flags);
struct miqt_array /* of struct miqt_string */  QMediaPlayer_SupportedMimeTypes1(int flags);
void QMediaPlayer_SetMedia2(QMediaPlayer* self, QMediaContent* media, QIODevice* stream);
void QMediaPlayer_override_virtual_Availability(void* self, intptr_t slot);
int QMediaPlayer_virtualbase_Availability(const void* self);
void QMediaPlayer_override_virtual_Bind(void* self, intptr_t slot);
bool QMediaPlayer_virtualbase_Bind(void* self, QObject* param1);
void QMediaPlayer_override_virtual_Unbind(void* self, intptr_t slot);
void QMediaPlayer_virtualbase_Unbind(void* self, QObject* param1);
void QMediaPlayer_override_virtual_IsAvailable(void* self, intptr_t slot);
bool QMediaPlayer_virtualbase_IsAvailable(const void* self);
void QMediaPlayer_override_virtual_Service(void* self, intptr_t slot);
QMediaService* QMediaPlayer_virtualbase_Service(const void* self);
void QMediaPlayer_Delete(QMediaPlayer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
