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
QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self);
void* QOffscreenSurface_Metacast(QOffscreenSurface* self, const char* param1);
struct miqt_string QOffscreenSurface_Tr(const char* s);
int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self);
void QOffscreenSurface_Create(QOffscreenSurface* self);
void QOffscreenSurface_Destroy(QOffscreenSurface* self);
bool QOffscreenSurface_IsValid(const QOffscreenSurface* self);
void QOffscreenSurface_SetFormat(QOffscreenSurface* self, QSurfaceFormat* format);
QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self);
QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self);
QSize* QOffscreenSurface_Size(const QOffscreenSurface* self);
QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self);
void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot);
struct miqt_string QOffscreenSurface_Tr2(const char* s, const char* c);
struct miqt_string QOffscreenSurface_Tr3(const char* s, const char* c, int n);
bool QOffscreenSurface_override_virtual_SurfaceType(void* self, intptr_t slot);
int QOffscreenSurface_virtualbase_SurfaceType(const void* self);
bool QOffscreenSurface_override_virtual_Format(void* self, intptr_t slot);
QSurfaceFormat* QOffscreenSurface_virtualbase_Format(const void* self);
bool QOffscreenSurface_override_virtual_Size(void* self, intptr_t slot);
QSize* QOffscreenSurface_virtualbase_Size(const void* self);
bool QOffscreenSurface_override_virtual_Event(void* self, intptr_t slot);
bool QOffscreenSurface_virtualbase_Event(void* self, QEvent* event);
bool QOffscreenSurface_override_virtual_EventFilter(void* self, intptr_t slot);
bool QOffscreenSurface_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QOffscreenSurface_override_virtual_TimerEvent(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QOffscreenSurface_override_virtual_ChildEvent(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QOffscreenSurface_override_virtual_CustomEvent(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_CustomEvent(void* self, QEvent* event);
bool QOffscreenSurface_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QOffscreenSurface_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QOffscreenSurface_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QOffscreenSurface_Delete(QOffscreenSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
