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
QMetaObject* QAbstractVideoSurface_MetaObject(const QAbstractVideoSurface* self);
void* QAbstractVideoSurface_Metacast(QAbstractVideoSurface* self, const char* param1);
struct miqt_string QAbstractVideoSurface_Tr(const char* s);
struct miqt_string QAbstractVideoSurface_TrUtf8(const char* s);
struct miqt_array /* of int */  QAbstractVideoSurface_SupportedPixelFormats(const QAbstractVideoSurface* self, int typeVal);
bool QAbstractVideoSurface_IsFormatSupported(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
QVideoSurfaceFormat* QAbstractVideoSurface_NearestFormat(const QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
QVideoSurfaceFormat* QAbstractVideoSurface_SurfaceFormat(const QAbstractVideoSurface* self);
QSize* QAbstractVideoSurface_NativeResolution(const QAbstractVideoSurface* self);
bool QAbstractVideoSurface_Start(QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
void QAbstractVideoSurface_Stop(QAbstractVideoSurface* self);
bool QAbstractVideoSurface_IsActive(const QAbstractVideoSurface* self);
bool QAbstractVideoSurface_Present(QAbstractVideoSurface* self, QVideoFrame* frame);
int QAbstractVideoSurface_Error(const QAbstractVideoSurface* self);
void QAbstractVideoSurface_ActiveChanged(QAbstractVideoSurface* self, bool active);
void QAbstractVideoSurface_connect_ActiveChanged(QAbstractVideoSurface* self, intptr_t slot);
void QAbstractVideoSurface_SurfaceFormatChanged(QAbstractVideoSurface* self, QVideoSurfaceFormat* format);
void QAbstractVideoSurface_connect_SurfaceFormatChanged(QAbstractVideoSurface* self, intptr_t slot);
void QAbstractVideoSurface_SupportedFormatsChanged(QAbstractVideoSurface* self);
void QAbstractVideoSurface_connect_SupportedFormatsChanged(QAbstractVideoSurface* self, intptr_t slot);
void QAbstractVideoSurface_NativeResolutionChanged(QAbstractVideoSurface* self, QSize* resolution);
void QAbstractVideoSurface_connect_NativeResolutionChanged(QAbstractVideoSurface* self, intptr_t slot);
struct miqt_string QAbstractVideoSurface_Tr2(const char* s, const char* c);
struct miqt_string QAbstractVideoSurface_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractVideoSurface_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractVideoSurface_TrUtf83(const char* s, const char* c, int n);
void QAbstractVideoSurface_override_virtual_SupportedPixelFormats(void* self, intptr_t slot);
struct miqt_array /* of int */  QAbstractVideoSurface_virtualbase_SupportedPixelFormats(const void* self, int typeVal);
void QAbstractVideoSurface_override_virtual_IsFormatSupported(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_IsFormatSupported(const void* self, QVideoSurfaceFormat* format);
void QAbstractVideoSurface_override_virtual_NearestFormat(void* self, intptr_t slot);
QVideoSurfaceFormat* QAbstractVideoSurface_virtualbase_NearestFormat(const void* self, QVideoSurfaceFormat* format);
void QAbstractVideoSurface_override_virtual_Start(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_Start(void* self, QVideoSurfaceFormat* format);
void QAbstractVideoSurface_override_virtual_Stop(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_Stop(void* self);
void QAbstractVideoSurface_override_virtual_Present(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_Present(void* self, QVideoFrame* frame);
void QAbstractVideoSurface_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_Event(void* self, QEvent* event);
void QAbstractVideoSurface_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractVideoSurface_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAbstractVideoSurface_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAbstractVideoSurface_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAbstractVideoSurface_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_CustomEvent(void* self, QEvent* event);
void QAbstractVideoSurface_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAbstractVideoSurface_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractVideoSurface_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractVideoSurface_Delete(QAbstractVideoSurface* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
