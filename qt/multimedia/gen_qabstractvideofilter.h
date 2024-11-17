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
class QMetaObject;
class QVideoFilterRunnable;
class QVideoFrame;
class QVideoSurfaceFormat;
#else
typedef struct QAbstractVideoFilter QAbstractVideoFilter;
typedef struct QMetaObject QMetaObject;
typedef struct QVideoFilterRunnable QVideoFilterRunnable;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSurfaceFormat QVideoSurfaceFormat;
#endif

QVideoFrame* QVideoFilterRunnable_Run(QVideoFilterRunnable* self, QVideoFrame* input, QVideoSurfaceFormat* surfaceFormat, int flags);
void QVideoFilterRunnable_OperatorAssign(QVideoFilterRunnable* self, QVideoFilterRunnable* param1);
void QVideoFilterRunnable_Delete(QVideoFilterRunnable* self);

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
void QAbstractVideoFilter_Delete(QAbstractVideoFilter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
