#pragma once
#ifndef MIQT_QT6_GEN_QOFFSCREENSURFACE_H
#define MIQT_QT6_GEN_QOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QOffscreenSurface;
class QScreen;
class QSize;
class QSurface;
class QSurfaceFormat;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QOffscreenSurface QOffscreenSurface;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTimerEvent QTimerEvent;
#endif

QOffscreenSurface* QOffscreenSurface_new();
QOffscreenSurface* QOffscreenSurface_new2(QScreen* screen);
QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen, QObject* parent);
void QOffscreenSurface_virtbase(QOffscreenSurface* src, QObject** outptr_QObject, QSurface** outptr_QSurface);
QMetaObject* QOffscreenSurface_metaObject(const QOffscreenSurface* self);
void* QOffscreenSurface_metacast(QOffscreenSurface* self, const char* param1);
struct miqt_string QOffscreenSurface_tr(const char* s);
int QOffscreenSurface_surfaceType(const QOffscreenSurface* self);
void QOffscreenSurface_create(QOffscreenSurface* self);
void QOffscreenSurface_destroy(QOffscreenSurface* self);
bool QOffscreenSurface_isValid(const QOffscreenSurface* self);
void QOffscreenSurface_setFormat(QOffscreenSurface* self, QSurfaceFormat* format);
QSurfaceFormat* QOffscreenSurface_format(const QOffscreenSurface* self);
QSurfaceFormat* QOffscreenSurface_requestedFormat(const QOffscreenSurface* self);
QSize* QOffscreenSurface_size(const QOffscreenSurface* self);
QScreen* QOffscreenSurface_screen(const QOffscreenSurface* self);
void QOffscreenSurface_setScreen(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_screenChanged(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_connect_screenChanged(QOffscreenSurface* self, intptr_t slot);
struct miqt_string QOffscreenSurface_tr2(const char* s, const char* c);
struct miqt_string QOffscreenSurface_tr3(const char* s, const char* c, int n);
bool QOffscreenSurface_override_virtual_surfaceType(void* self, intptr_t slot);
int QOffscreenSurface_virtualbase_surfaceType(const void* self);
bool QOffscreenSurface_override_virtual_format(void* self, intptr_t slot);
QSurfaceFormat* QOffscreenSurface_virtualbase_format(const void* self);
bool QOffscreenSurface_override_virtual_size(void* self, intptr_t slot);
QSize* QOffscreenSurface_virtualbase_size(const void* self);
bool QOffscreenSurface_override_virtual_event(void* self, intptr_t slot);
bool QOffscreenSurface_virtualbase_event(void* self, QEvent* event);
bool QOffscreenSurface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QOffscreenSurface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QOffscreenSurface_override_virtual_timerEvent(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QOffscreenSurface_override_virtual_childEvent(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QOffscreenSurface_override_virtual_customEvent(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_customEvent(void* self, QEvent* event);
bool QOffscreenSurface_override_virtual_connectNotify(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QOffscreenSurface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QOffscreenSurface_delete(QOffscreenSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
