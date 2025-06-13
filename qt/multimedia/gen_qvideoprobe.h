#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOPROBE_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOPROBE_H

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
class QMediaObject;
class QMediaRecorder;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVideoFrame;
class QVideoProbe;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoProbe QVideoProbe;
#endif

QVideoProbe* QVideoProbe_new();
QVideoProbe* QVideoProbe_new2(QObject* parent);
void QVideoProbe_virtbase(QVideoProbe* src, QObject** outptr_QObject);
QMetaObject* QVideoProbe_metaObject(const QVideoProbe* self);
void* QVideoProbe_metacast(QVideoProbe* self, const char* param1);
struct miqt_string QVideoProbe_tr(const char* s);
struct miqt_string QVideoProbe_trUtf8(const char* s);
bool QVideoProbe_setSource(QVideoProbe* self, QMediaObject* source);
bool QVideoProbe_setSourceWithSource(QVideoProbe* self, QMediaRecorder* source);
bool QVideoProbe_isActive(const QVideoProbe* self);
void QVideoProbe_videoFrameProbed(QVideoProbe* self, QVideoFrame* frame);
void QVideoProbe_connect_videoFrameProbed(QVideoProbe* self, intptr_t slot);
void QVideoProbe_flush(QVideoProbe* self);
void QVideoProbe_connect_flush(QVideoProbe* self, intptr_t slot);
struct miqt_string QVideoProbe_tr2(const char* s, const char* c);
struct miqt_string QVideoProbe_tr3(const char* s, const char* c, int n);
struct miqt_string QVideoProbe_trUtf82(const char* s, const char* c);
struct miqt_string QVideoProbe_trUtf83(const char* s, const char* c, int n);

bool QVideoProbe_override_virtual_event(void* self, intptr_t slot);
bool QVideoProbe_virtualbase_event(void* self, QEvent* event);
bool QVideoProbe_override_virtual_eventFilter(void* self, intptr_t slot);
bool QVideoProbe_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QVideoProbe_override_virtual_timerEvent(void* self, intptr_t slot);
void QVideoProbe_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QVideoProbe_override_virtual_childEvent(void* self, intptr_t slot);
void QVideoProbe_virtualbase_childEvent(void* self, QChildEvent* event);
bool QVideoProbe_override_virtual_customEvent(void* self, intptr_t slot);
void QVideoProbe_virtualbase_customEvent(void* self, QEvent* event);
bool QVideoProbe_override_virtual_connectNotify(void* self, intptr_t slot);
void QVideoProbe_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QVideoProbe_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QVideoProbe_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QVideoProbe_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QVideoProbe_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QVideoProbe_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QVideoProbe_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QVideoProbe_delete(QVideoProbe* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
