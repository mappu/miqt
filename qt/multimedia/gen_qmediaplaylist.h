#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAPLAYLIST_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAPLAYLIST_H

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
class QIODevice;
class QMediaBindableInterface;
class QMediaContent;
class QMediaObject;
class QMediaPlaylist;
class QMetaMethod;
class QMetaObject;
class QNetworkRequest;
class QObject;
class QTimerEvent;
class QUrl;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaContent QMediaContent;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaPlaylist QMediaPlaylist;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QMediaPlaylist* QMediaPlaylist_new();
QMediaPlaylist* QMediaPlaylist_new2(QObject* parent);
void QMediaPlaylist_virtbase(QMediaPlaylist* src, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface);
QMetaObject* QMediaPlaylist_metaObject(const QMediaPlaylist* self);
void* QMediaPlaylist_metacast(QMediaPlaylist* self, const char* param1);
struct miqt_string QMediaPlaylist_tr(const char* s);
struct miqt_string QMediaPlaylist_trUtf8(const char* s);
QMediaObject* QMediaPlaylist_mediaObject(const QMediaPlaylist* self);
int QMediaPlaylist_playbackMode(const QMediaPlaylist* self);
void QMediaPlaylist_setPlaybackMode(QMediaPlaylist* self, int mode);
int QMediaPlaylist_currentIndex(const QMediaPlaylist* self);
QMediaContent* QMediaPlaylist_currentMedia(const QMediaPlaylist* self);
int QMediaPlaylist_nextIndex(const QMediaPlaylist* self);
int QMediaPlaylist_previousIndex(const QMediaPlaylist* self);
QMediaContent* QMediaPlaylist_media(const QMediaPlaylist* self, int index);
int QMediaPlaylist_mediaCount(const QMediaPlaylist* self);
bool QMediaPlaylist_isEmpty(const QMediaPlaylist* self);
bool QMediaPlaylist_isReadOnly(const QMediaPlaylist* self);
bool QMediaPlaylist_addMedia(QMediaPlaylist* self, QMediaContent* content);
bool QMediaPlaylist_addMediaWithItems(QMediaPlaylist* self, struct miqt_array /* of QMediaContent* */  items);
bool QMediaPlaylist_insertMedia(QMediaPlaylist* self, int index, QMediaContent* content);
bool QMediaPlaylist_insertMedia2(QMediaPlaylist* self, int index, struct miqt_array /* of QMediaContent* */  items);
bool QMediaPlaylist_moveMedia(QMediaPlaylist* self, int from, int to);
bool QMediaPlaylist_removeMedia(QMediaPlaylist* self, int pos);
bool QMediaPlaylist_removeMedia2(QMediaPlaylist* self, int start, int end);
bool QMediaPlaylist_clear(QMediaPlaylist* self);
void QMediaPlaylist_load(QMediaPlaylist* self, QNetworkRequest* request);
void QMediaPlaylist_loadWithLocation(QMediaPlaylist* self, QUrl* location);
void QMediaPlaylist_loadWithDevice(QMediaPlaylist* self, QIODevice* device);
bool QMediaPlaylist_save(QMediaPlaylist* self, QUrl* location);
bool QMediaPlaylist_save2(QMediaPlaylist* self, QIODevice* device, const char* format);
int QMediaPlaylist_error(const QMediaPlaylist* self);
struct miqt_string QMediaPlaylist_errorString(const QMediaPlaylist* self);
void QMediaPlaylist_shuffle(QMediaPlaylist* self);
void QMediaPlaylist_next(QMediaPlaylist* self);
void QMediaPlaylist_previous(QMediaPlaylist* self);
void QMediaPlaylist_setCurrentIndex(QMediaPlaylist* self, int index);
void QMediaPlaylist_currentIndexChanged(QMediaPlaylist* self, int index);
void QMediaPlaylist_connect_currentIndexChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_playbackModeChanged(QMediaPlaylist* self, int mode);
void QMediaPlaylist_connect_playbackModeChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_currentMediaChanged(QMediaPlaylist* self, QMediaContent* param1);
void QMediaPlaylist_connect_currentMediaChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_mediaAboutToBeInserted(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_mediaAboutToBeInserted(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_mediaInserted(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_mediaInserted(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_mediaAboutToBeRemoved(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_mediaAboutToBeRemoved(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_mediaRemoved(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_mediaRemoved(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_mediaChanged(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_mediaChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_loaded(QMediaPlaylist* self);
void QMediaPlaylist_connect_loaded(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_loadFailed(QMediaPlaylist* self);
void QMediaPlaylist_connect_loadFailed(QMediaPlaylist* self, intptr_t slot);
bool QMediaPlaylist_setMediaObject(QMediaPlaylist* self, QMediaObject* object);
struct miqt_string QMediaPlaylist_tr2(const char* s, const char* c);
struct miqt_string QMediaPlaylist_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaPlaylist_trUtf82(const char* s, const char* c);
struct miqt_string QMediaPlaylist_trUtf83(const char* s, const char* c, int n);
int QMediaPlaylist_nextIndex1(const QMediaPlaylist* self, int steps);
int QMediaPlaylist_previousIndex1(const QMediaPlaylist* self, int steps);
void QMediaPlaylist_load2(QMediaPlaylist* self, QNetworkRequest* request, const char* format);
void QMediaPlaylist_load22(QMediaPlaylist* self, QUrl* location, const char* format);
void QMediaPlaylist_load23(QMediaPlaylist* self, QIODevice* device, const char* format);
bool QMediaPlaylist_save22(QMediaPlaylist* self, QUrl* location, const char* format);
bool QMediaPlaylist_override_virtual_mediaObject(void* self, intptr_t slot);
QMediaObject* QMediaPlaylist_virtualbase_mediaObject(const void* self);
bool QMediaPlaylist_override_virtual_setMediaObject(void* self, intptr_t slot);
bool QMediaPlaylist_virtualbase_setMediaObject(void* self, QMediaObject* object);
bool QMediaPlaylist_override_virtual_event(void* self, intptr_t slot);
bool QMediaPlaylist_virtualbase_event(void* self, QEvent* event);
bool QMediaPlaylist_override_virtual_eventFilter(void* self, intptr_t slot);
bool QMediaPlaylist_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QMediaPlaylist_override_virtual_timerEvent(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QMediaPlaylist_override_virtual_childEvent(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_childEvent(void* self, QChildEvent* event);
bool QMediaPlaylist_override_virtual_customEvent(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_customEvent(void* self, QEvent* event);
bool QMediaPlaylist_override_virtual_connectNotify(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QMediaPlaylist_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QMediaPlaylist_delete(QMediaPlaylist* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
