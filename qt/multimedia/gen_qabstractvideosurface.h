#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QABSTRACTVIDEOSURFACE_H
#define MIQT_QT_MULTIMEDIA_GEN_QABSTRACTVIDEOSURFACE_H

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
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTimerEvent;
class QVideoFrame;
class QVideoSurfaceFormat;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSurfaceFormat QVideoSurfaceFormat;
#endif

QAbstractVideoSurface* QAbstractVideoSurface_new();
QAbstractVideoSurface* QAbstractVideoSurface_new2(QObject* parent);
void QAbstractVideoSurface_virtbase(QAbstractVideoSurface* src, QObject** outptr_QObject);
QMetaObject* QAbstractVideoSurface_metaObject(const QAbstractVideoSurface* self);
void* QAbstractVideoSurface_metacast(QAbstractVideoSurface* self, const char* param1);
struct miqt_string QAbstractVideoSurface_tr(const char* s);
struct miqt_string QAbstractVideoSurface_trUtf8(const char* s);
struct miqt_array /* of int */  QAbstractVideoSurface_supportedPixelFormats(const QAbstractVideoSurface* self, int type);
bool QAbstractVideoSurface_isFormatSupported(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
QVideoSurfaceFormat* QAbstractVideoSurface_nearestFormat(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
QVideoSurfaceFormat* QAbstractVideoSurface_surfaceFormat(const QAbstractVideoSurface* self);
QSize* QAbstractVideoSurface_nativeResolution(const QAbstractVideoSurface* self);
bool QAbstractVideoSurface_start(QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
void QAbstractVideoSurface_stop(QAbstractVideoSurface* self);
bool QAbstractVideoSurface_isActive(const QAbstractVideoSurface* self);
bool QAbstractVideoSurface_present(QAbstractVideoSurface* self, QVideoFrame* frame);
int QAbstractVideoSurface_error(const QAbstractVideoSurface* self);
void QAbstractVideoSurface_activeChanged(QAbstractVideoSurface* self, bool active);
void QAbstractVideoSurface_connect_activeChanged(QAbstractVideoSurface* self, intptr_t slot);
void QAbstractVideoSurface_surfaceFormatChanged(QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
void QAbstractVideoSurface_connect_surfaceFormatChanged(QAbstractVideoSurface* self, intptr_t slot);
void QAbstractVideoSurface_supportedFormatsChanged(QAbstractVideoSurface* self);
void QAbstractVideoSurface_connect_supportedFormatsChanged(QAbstractVideoSurface* self, intptr_t slot);
void QAbstractVideoSurface_nativeResolutionChanged(QAbstractVideoSurface* self, QSize* resolution);
void QAbstractVideoSurface_connect_nativeResolutionChanged(QAbstractVideoSurface* self, intptr_t slot);
struct miqt_string QAbstractVideoSurface_tr2(const char* s, const char* c);
struct miqt_string QAbstractVideoSurface_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractVideoSurface_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractVideoSurface_trUtf83(const char* s, const char* c, int n);

bool QAbstractVideoSurface_override_virtual_supportedPixelFormats(void* self, intptr_t slot);
struct miqt_array /* of int */  QAbstractVideoSurface_virtualbase_supportedPixelFormats(const void* self, int type);
bool QAbstractVideoSurface_override_virtual_isFormatSupported(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_isFormatSupported(const void* self, QVideoSurfaceFormat* format);
bool QAbstractVideoSurface_override_virtual_nearestFormat(void* self, intptr_t slot);
QVideoSurfaceFormat* QAbstractVideoSurface_virtualbase_nearestFormat(const void* self, QVideoSurfaceFormat* format);
bool QAbstractVideoSurface_override_virtual_start(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_start(void* self, QVideoSurfaceFormat* format);
bool QAbstractVideoSurface_override_virtual_stop(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_stop(void* self);
bool QAbstractVideoSurface_override_virtual_present(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_present(void* self, QVideoFrame* frame);
bool QAbstractVideoSurface_override_virtual_event(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_event(void* self, QEvent* event);
bool QAbstractVideoSurface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractVideoSurface_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractVideoSurface_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractVideoSurface_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractVideoSurface_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractVideoSurface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QAbstractVideoSurface_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int error);
void QAbstractVideoSurface_protectedbase_setNativeResolution(bool* _dynamic_cast_ok, void* self, QSize* resolution);
QObject* QAbstractVideoSurface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractVideoSurface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractVideoSurface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractVideoSurface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAbstractVideoSurface_delete(QAbstractVideoSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
