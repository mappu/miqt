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
QMetaObject* QMediaPlaylist_MetaObject(const QMediaPlaylist* self);
void* QMediaPlaylist_Metacast(QMediaPlaylist* self, const char* param1);
struct miqt_string QMediaPlaylist_Tr(const char* s);
struct miqt_string QMediaPlaylist_TrUtf8(const char* s);
QMediaObject* QMediaPlaylist_MediaObject(const QMediaPlaylist* self);
int QMediaPlaylist_PlaybackMode(const QMediaPlaylist* self);
void QMediaPlaylist_SetPlaybackMode(QMediaPlaylist* self, int mode);
int QMediaPlaylist_CurrentIndex(const QMediaPlaylist* self);
QMediaContent* QMediaPlaylist_CurrentMedia(const QMediaPlaylist* self);
int QMediaPlaylist_NextIndex(const QMediaPlaylist* self);
int QMediaPlaylist_PreviousIndex(const QMediaPlaylist* self);
QMediaContent* QMediaPlaylist_Media(const QMediaPlaylist* self, int index);
int QMediaPlaylist_MediaCount(const QMediaPlaylist* self);
bool QMediaPlaylist_IsEmpty(const QMediaPlaylist* self);
bool QMediaPlaylist_IsReadOnly(const QMediaPlaylist* self);
bool QMediaPlaylist_AddMedia(QMediaPlaylist* self, QMediaContent* content);
bool QMediaPlaylist_AddMediaWithItems(QMediaPlaylist* self, struct miqt_array /* of QMediaContent* */  items);
bool QMediaPlaylist_InsertMedia(QMediaPlaylist* self, int index, QMediaContent* content);
bool QMediaPlaylist_InsertMedia2(QMediaPlaylist* self, int index, struct miqt_array /* of QMediaContent* */  items);
bool QMediaPlaylist_MoveMedia(QMediaPlaylist* self, int from, int to);
bool QMediaPlaylist_RemoveMedia(QMediaPlaylist* self, int pos);
bool QMediaPlaylist_RemoveMedia2(QMediaPlaylist* self, int start, int end);
bool QMediaPlaylist_Clear(QMediaPlaylist* self);
void QMediaPlaylist_Load(QMediaPlaylist* self, QNetworkRequest* request);
void QMediaPlaylist_LoadWithLocation(QMediaPlaylist* self, QUrl* location);
void QMediaPlaylist_LoadWithDevice(QMediaPlaylist* self, QIODevice* device);
bool QMediaPlaylist_Save(QMediaPlaylist* self, QUrl* location);
bool QMediaPlaylist_Save2(QMediaPlaylist* self, QIODevice* device, const char* format);
int QMediaPlaylist_Error(const QMediaPlaylist* self);
struct miqt_string QMediaPlaylist_ErrorString(const QMediaPlaylist* self);
void QMediaPlaylist_Shuffle(QMediaPlaylist* self);
void QMediaPlaylist_Next(QMediaPlaylist* self);
void QMediaPlaylist_Previous(QMediaPlaylist* self);
void QMediaPlaylist_SetCurrentIndex(QMediaPlaylist* self, int index);
void QMediaPlaylist_CurrentIndexChanged(QMediaPlaylist* self, int index);
void QMediaPlaylist_connect_CurrentIndexChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_PlaybackModeChanged(QMediaPlaylist* self, int mode);
void QMediaPlaylist_connect_PlaybackModeChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_CurrentMediaChanged(QMediaPlaylist* self, QMediaContent* param1);
void QMediaPlaylist_connect_CurrentMediaChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_MediaAboutToBeInserted(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_MediaAboutToBeInserted(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_MediaInserted(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_MediaInserted(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_MediaAboutToBeRemoved(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_MediaAboutToBeRemoved(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_MediaRemoved(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_MediaRemoved(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_MediaChanged(QMediaPlaylist* self, int start, int end);
void QMediaPlaylist_connect_MediaChanged(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_Loaded(QMediaPlaylist* self);
void QMediaPlaylist_connect_Loaded(QMediaPlaylist* self, intptr_t slot);
void QMediaPlaylist_LoadFailed(QMediaPlaylist* self);
void QMediaPlaylist_connect_LoadFailed(QMediaPlaylist* self, intptr_t slot);
bool QMediaPlaylist_SetMediaObject(QMediaPlaylist* self, QMediaObject* object);
struct miqt_string QMediaPlaylist_Tr2(const char* s, const char* c);
struct miqt_string QMediaPlaylist_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaPlaylist_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaPlaylist_TrUtf83(const char* s, const char* c, int n);
int QMediaPlaylist_NextIndex1(const QMediaPlaylist* self, int steps);
int QMediaPlaylist_PreviousIndex1(const QMediaPlaylist* self, int steps);
void QMediaPlaylist_Load2(QMediaPlaylist* self, QNetworkRequest* request, const char* format);
void QMediaPlaylist_Load22(QMediaPlaylist* self, QUrl* location, const char* format);
void QMediaPlaylist_Load23(QMediaPlaylist* self, QIODevice* device, const char* format);
bool QMediaPlaylist_Save22(QMediaPlaylist* self, QUrl* location, const char* format);
void QMediaPlaylist_override_virtual_MediaObject(void* self, intptr_t slot);
QMediaObject* QMediaPlaylist_virtualbase_MediaObject(const void* self);
void QMediaPlaylist_override_virtual_SetMediaObject(void* self, intptr_t slot);
bool QMediaPlaylist_virtualbase_SetMediaObject(void* self, QMediaObject* object);
void QMediaPlaylist_override_virtual_Event(void* self, intptr_t slot);
bool QMediaPlaylist_virtualbase_Event(void* self, QEvent* event);
void QMediaPlaylist_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMediaPlaylist_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QMediaPlaylist_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QMediaPlaylist_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QMediaPlaylist_override_virtual_CustomEvent(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_CustomEvent(void* self, QEvent* event);
void QMediaPlaylist_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QMediaPlaylist_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QMediaPlaylist_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QMediaPlaylist_Delete(QMediaPlaylist* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
