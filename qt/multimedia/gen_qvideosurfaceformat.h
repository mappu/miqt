#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOSURFACEFORMAT_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOSURFACEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRect;
class QSize;
class QVariant;
class QVideoSurfaceFormat;
#else
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QVideoSurfaceFormat QVideoSurfaceFormat;
#endif

QVideoSurfaceFormat* QVideoSurfaceFormat_new();
QVideoSurfaceFormat* QVideoSurfaceFormat_new2(QSize* size, int pixelFormat);
QVideoSurfaceFormat* QVideoSurfaceFormat_new3(QVideoSurfaceFormat* format);
QVideoSurfaceFormat* QVideoSurfaceFormat_new4(QSize* size, int pixelFormat, int handleType);
void QVideoSurfaceFormat_operatorAssign(QVideoSurfaceFormat* self, QVideoSurfaceFormat* format);
bool QVideoSurfaceFormat_operatorEqual(const QVideoSurfaceFormat* self, QVideoSurfaceFormat* format);
bool QVideoSurfaceFormat_operatorNotEqual(const QVideoSurfaceFormat* self, QVideoSurfaceFormat* format);
bool QVideoSurfaceFormat_isValid(const QVideoSurfaceFormat* self);
int QVideoSurfaceFormat_pixelFormat(const QVideoSurfaceFormat* self);
int QVideoSurfaceFormat_handleType(const QVideoSurfaceFormat* self);
QSize* QVideoSurfaceFormat_frameSize(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_setFrameSize(QVideoSurfaceFormat* self, QSize* size);
void QVideoSurfaceFormat_setFrameSize2(QVideoSurfaceFormat* self, int width, int height);
int QVideoSurfaceFormat_frameWidth(const QVideoSurfaceFormat* self);
int QVideoSurfaceFormat_frameHeight(const QVideoSurfaceFormat* self);
QRect* QVideoSurfaceFormat_viewport(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_setViewport(QVideoSurfaceFormat* self, QRect* viewport);
int QVideoSurfaceFormat_scanLineDirection(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_setScanLineDirection(QVideoSurfaceFormat* self, int direction);
double QVideoSurfaceFormat_frameRate(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_setFrameRate(QVideoSurfaceFormat* self, double rate);
QSize* QVideoSurfaceFormat_pixelAspectRatio(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_setPixelAspectRatio(QVideoSurfaceFormat* self, QSize* ratio);
void QVideoSurfaceFormat_setPixelAspectRatio2(QVideoSurfaceFormat* self, int width, int height);
int QVideoSurfaceFormat_yCbCrColorSpace(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_setYCbCrColorSpace(QVideoSurfaceFormat* self, int colorSpace);
bool QVideoSurfaceFormat_isMirrored(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_setMirrored(QVideoSurfaceFormat* self, bool mirrored);
QSize* QVideoSurfaceFormat_sizeHint(const QVideoSurfaceFormat* self);
struct miqt_array /* of struct miqt_string */  QVideoSurfaceFormat_propertyNames(const QVideoSurfaceFormat* self);
QVariant* QVideoSurfaceFormat_property(const QVideoSurfaceFormat* self, const char* name);
void QVideoSurfaceFormat_setProperty(QVideoSurfaceFormat* self, const char* name, QVariant* value);
void QVideoSurfaceFormat_delete(QVideoSurfaceFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
