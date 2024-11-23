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

QVideoFrame* QVideoFilterRunnable_Run(QVideoFilterRunnable* self, QVideoFrame* input, QVideoSurfaceFormat* surfaceFormat, int flags);
void QVideoFilterRunnable_OperatorAssign(QVideoFilterRunnable* self, QVideoFilterRunnable* param1);
void QVideoFilterRunnable_Delete(QVideoFilterRunnable* self, bool isSubclass);

void QAbstractVideoFilter_new(QAbstractVideoFilter** outptr_QAbstractVideoFilter, QObject** outptr_QObject);
void QAbstractVideoFilter_new2(QObject* parent, QAbstractVideoFilter** outptr_QAbstractVideoFilter, QObject** outptr_QObject);
QMetaObject* QAbstractVideoFilter_MetaObject(const QAbstractVideoFilter* self);
void* QAbstractVideoFilter_Metacast(QAbstractVideoFilter* self, const char* param1);
struct miqt_string QAbstractVideoFilter_Tr(const char* s);
struct miqt_string QAbstractVideoFilter_TrUtf8(const char* s);
bool QAbstractVideoFilter_IsActive(const QAbstractVideoFilter* self);
void QAbstractVideoFilter_SetActive(QAbstractVideoFilter* self, bool v);
QVideoFilterRunnable* QAbstractVideoFilter_CreateFilterRunnable(QAbstractVideoFilter* self);
void QAbstractVideoFilter_ActiveChanged(QAbstractVideoFilter* self);
void QAbstractVideoFilter_connect_ActiveChanged(QAbstractVideoFilter* self, intptr_t slot);
struct miqt_string QAbstractVideoFilter_Tr2(const char* s, const char* c);
struct miqt_string QAbstractVideoFilter_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractVideoFilter_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractVideoFilter_TrUtf83(const char* s, const char* c, int n);
void QAbstractVideoFilter_override_virtual_CreateFilterRunnable(void* self, intptr_t slot);
QVideoFilterRunnable* QAbstractVideoFilter_virtualbase_CreateFilterRunnable(void* self);
void QAbstractVideoFilter_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractVideoFilter_virtualbase_Event(void* self, QEvent* event);
void QAbstractVideoFilter_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractVideoFilter_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAbstractVideoFilter_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAbstractVideoFilter_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAbstractVideoFilter_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_CustomEvent(void* self, QEvent* event);
void QAbstractVideoFilter_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAbstractVideoFilter_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractVideoFilter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractVideoFilter_Delete(QAbstractVideoFilter* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
