#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QABSTRACTVIDEOFILTER_H
#define MIQT_QT_MULTIMEDIA_GEN_QABSTRACTVIDEOFILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractVideoFilter;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVideoFilterRunnable;
class QVideoFrame;
class QVideoSurfaceFormat;
#else
typedef struct QAbstractVideoFilter QAbstractVideoFilter;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFilterRunnable QVideoFilterRunnable;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSurfaceFormat QVideoSurfaceFormat;
#endif

QVideoFrame* QVideoFilterRunnable_run(QVideoFilterRunnable* self, QVideoFrame* input, QVideoSurfaceFormat* surfaceFormat, int flags);
void QVideoFilterRunnable_operatorAssign(QVideoFilterRunnable* self, QVideoFilterRunnable* param1);
void QVideoFilterRunnable_delete(QVideoFilterRunnable* self);

QAbstractVideoFilter* QAbstractVideoFilter_new();
QAbstractVideoFilter* QAbstractVideoFilter_new2(QObject* parent);
void QAbstractVideoFilter_virtbase(QAbstractVideoFilter* src, QObject** outptr_QObject);
QMetaObject* QAbstractVideoFilter_metaObject(const QAbstractVideoFilter* self);
void* QAbstractVideoFilter_metacast(QAbstractVideoFilter* self, const char* param1);
struct miqt_string QAbstractVideoFilter_tr(const char* s);
struct miqt_string QAbstractVideoFilter_trUtf8(const char* s);
bool QAbstractVideoFilter_isActive(const QAbstractVideoFilter* self);
void QAbstractVideoFilter_setActive(QAbstractVideoFilter* self, bool v);
QVideoFilterRunnable* QAbstractVideoFilter_createFilterRunnable(QAbstractVideoFilter* self);
void QAbstractVideoFilter_activeChanged(QAbstractVideoFilter* self);
void QAbstractVideoFilter_connect_activeChanged(QAbstractVideoFilter* self, intptr_t slot);
struct miqt_string QAbstractVideoFilter_tr2(const char* s, const char* c);
struct miqt_string QAbstractVideoFilter_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractVideoFilter_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractVideoFilter_trUtf83(const char* s, const char* c, int n);
bool QAbstractVideoFilter_override_virtual_createFilterRunnable(void* self, intptr_t slot);
QVideoFilterRunnable* QAbstractVideoFilter_virtualbase_createFilterRunnable(void* self);
bool QAbstractVideoFilter_override_virtual_event(void* self, intptr_t slot);
bool QAbstractVideoFilter_virtualbase_event(void* self, QEvent* event);
bool QAbstractVideoFilter_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractVideoFilter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractVideoFilter_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractVideoFilter_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractVideoFilter_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractVideoFilter_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractVideoFilter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QAbstractVideoFilter_delete(QAbstractVideoFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
