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
QMetaObject* QVideoSink_MetaObject(const QVideoSink* self);
void* QVideoSink_Metacast(QVideoSink* self, const char* param1);
struct miqt_string QVideoSink_Tr(const char* s);
QSize* QVideoSink_VideoSize(const QVideoSink* self);
struct miqt_string QVideoSink_SubtitleText(const QVideoSink* self);
void QVideoSink_SetSubtitleText(QVideoSink* self, struct miqt_string subtitle);
void QVideoSink_SetVideoFrame(QVideoSink* self, QVideoFrame* frame);
QVideoFrame* QVideoSink_VideoFrame(const QVideoSink* self);
void QVideoSink_VideoFrameChanged(const QVideoSink* self, QVideoFrame* frame);
void QVideoSink_connect_VideoFrameChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_SubtitleTextChanged(const QVideoSink* self, struct miqt_string subtitleText);
void QVideoSink_connect_SubtitleTextChanged(QVideoSink* self, intptr_t slot);
void QVideoSink_VideoSizeChanged(QVideoSink* self);
void QVideoSink_connect_VideoSizeChanged(QVideoSink* self, intptr_t slot);
struct miqt_string QVideoSink_Tr2(const char* s, const char* c);
struct miqt_string QVideoSink_Tr3(const char* s, const char* c, int n);
bool QVideoSink_override_virtual_Event(void* self, intptr_t slot);
bool QVideoSink_virtualbase_Event(void* self, QEvent* event);
bool QVideoSink_override_virtual_EventFilter(void* self, intptr_t slot);
bool QVideoSink_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QVideoSink_override_virtual_TimerEvent(void* self, intptr_t slot);
void QVideoSink_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QVideoSink_override_virtual_ChildEvent(void* self, intptr_t slot);
void QVideoSink_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QVideoSink_override_virtual_CustomEvent(void* self, intptr_t slot);
void QVideoSink_virtualbase_CustomEvent(void* self, QEvent* event);
bool QVideoSink_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QVideoSink_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QVideoSink_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QVideoSink_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QVideoSink_Delete(QVideoSink* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
