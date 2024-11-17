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
class QMetaObject;
class QSize;
class QVideoFrame;
class QVideoSurfaceFormat;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoSurfaceFormat QVideoSurfaceFormat;
#endif

QMetaObject* QAbstractVideoSurface_MetaObject(const QAbstractVideoSurface* self);
void* QAbstractVideoSurface_Metacast(QAbstractVideoSurface* self, const char* param1);
struct miqt_string QAbstractVideoSurface_Tr(const char* s);
struct miqt_string QAbstractVideoSurface_TrUtf8(const char* s);
struct miqt_array /* of int */  QAbstractVideoSurface_SupportedPixelFormats(const QAbstractVideoSurface* self);
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
struct miqt_array /* of int */  QAbstractVideoSurface_SupportedPixelFormats1(const QAbstractVideoSurface* self, int typeVal);
void QAbstractVideoSurface_Delete(QAbstractVideoSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
