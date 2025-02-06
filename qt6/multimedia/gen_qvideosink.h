#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QVIDEOSINK_H
#define MIQT_QT6_MULTIMEDIA_GEN_QVIDEOSINK_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTimerEvent;
class QVideoFrame;
class QVideoSink;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSink QVideoSink;
#endif

QVideoSink* QVideoSink_new();
QVideoSink* QVideoSink_new2(QObject* parent);
void QVideoSink_virtbase(QVideoSink* src, QObject** outptr_QObject);
QMetaObject* QVideoSink_metaObject(const QVideoSink* self);
void* QVideoSink_metacast(QVideoSink* self, const char* param1);
struct miqt_string QVideoSink_tr(const char* s);
QSize* QVideoSink_videoSize(const QVideoSink* self);
struct miqt_string QVideoSink_subtitleText(const QVideoSink* self);
void QVideoSink_setSubtitleText(QVideoSink* self, struct miqt_string subtitle);
void QVideoSink_setVideoFrame(QVideoSink* self, QVideoFrame* frame);
QVideoFrame* QVideoSink_videoFrame(const QVideoSink* self);
void QVideoSink_videoFrameChanged(const QVideoSink* self, QVideoFrame* frame);
void QVideoSink_connect_videoFrameChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_subtitleTextChanged(const QVideoSink* self, struct miqt_string subtitleText);
void QVideoSink_connect_subtitleTextChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_videoSizeChanged(QVideoSink* self);
void QVideoSink_connect_videoSizeChanged(QVideoSink* self, intptr_t slot);
struct miqt_string QVideoSink_tr2(const char* s, const char* c);
struct miqt_string QVideoSink_tr3(const char* s, const char* c, int n);
bool QVideoSink_override_virtual_event(void* self, intptr_t slot);
bool QVideoSink_virtualbase_event(void* self, QEvent* event);
bool QVideoSink_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVideoSink_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVideoSink_override_virtual_timerEvent(void* self, intptr_t slot);
void QVideoSink_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVideoSink_override_virtual_childEvent(void* self, intptr_t slot);
void QVideoSink_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVideoSink_override_virtual_customEvent(void* self, intptr_t slot);
void QVideoSink_virtualbase_customEvent(void* self, QEvent* event);
bool QVideoSink_override_virtual_connectNotify(void* self, intptr_t slot);
void QVideoSink_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVideoSink_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVideoSink_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QVideoSink_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVideoSink_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVideoSink_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVideoSink_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QVideoSink_delete(QVideoSink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
