#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QVIDEOFRAMEFORMAT_H
#define MIQT_QT6_MULTIMEDIA_GEN_QVIDEOFRAMEFORMAT_H

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
class QVideoFrameFormat;
#else
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVideoFrameFormat QVideoFrameFormat;
#endif

QVideoFrameFormat* QVideoFrameFormat_new();
QVideoFrameFormat* QVideoFrameFormat_new2(QSize* size, int pixelFormat);
QVideoFrameFormat* QVideoFrameFormat_new3(QVideoFrameFormat* format);
void QVideoFrameFormat_swap(QVideoFrameFormat* self, QVideoFrameFormat* other);
void QVideoFrameFormat_detach(QVideoFrameFormat* self);
void QVideoFrameFormat_operatorAssign(QVideoFrameFormat* self, QVideoFrameFormat* format);
bool QVideoFrameFormat_operatorEqual(const QVideoFrameFormat* self, QVideoFrameFormat* format);
bool QVideoFrameFormat_operatorNotEqual(const QVideoFrameFormat* self, QVideoFrameFormat* format);
bool QVideoFrameFormat_isValid(const QVideoFrameFormat* self);
int QVideoFrameFormat_pixelFormat(const QVideoFrameFormat* self);
QSize* QVideoFrameFormat_frameSize(const QVideoFrameFormat* self);
void QVideoFrameFormat_setFrameSize(QVideoFrameFormat* self, QSize* size);
void QVideoFrameFormat_setFrameSize2(QVideoFrameFormat* self, int width, int height);
int QVideoFrameFormat_frameWidth(const QVideoFrameFormat* self);
int QVideoFrameFormat_frameHeight(const QVideoFrameFormat* self);
int QVideoFrameFormat_planeCount(const QVideoFrameFormat* self);
QRect* QVideoFrameFormat_viewport(const QVideoFrameFormat* self);
void QVideoFrameFormat_setViewport(QVideoFrameFormat* self, QRect* viewport);
int QVideoFrameFormat_scanLineDirection(const QVideoFrameFormat* self);
void QVideoFrameFormat_setScanLineDirection(QVideoFrameFormat* self, int direction);
double QVideoFrameFormat_frameRate(const QVideoFrameFormat* self);
void QVideoFrameFormat_setFrameRate(QVideoFrameFormat* self, double rate);
int QVideoFrameFormat_yCbCrColorSpace(const QVideoFrameFormat* self);
void QVideoFrameFormat_setYCbCrColorSpace(QVideoFrameFormat* self, int colorSpace);
int QVideoFrameFormat_colorSpace(const QVideoFrameFormat* self);
void QVideoFrameFormat_setColorSpace(QVideoFrameFormat* self, int colorSpace);
int QVideoFrameFormat_colorTransfer(const QVideoFrameFormat* self);
void QVideoFrameFormat_setColorTransfer(QVideoFrameFormat* self, int colorTransfer);
int QVideoFrameFormat_colorRange(const QVideoFrameFormat* self);
void QVideoFrameFormat_setColorRange(QVideoFrameFormat* self, int range);
bool QVideoFrameFormat_isMirrored(const QVideoFrameFormat* self);
void QVideoFrameFormat_setMirrored(QVideoFrameFormat* self, bool mirrored);
struct miqt_string QVideoFrameFormat_vertexShaderFileName(const QVideoFrameFormat* self);
struct miqt_string QVideoFrameFormat_fragmentShaderFileName(const QVideoFrameFormat* self);
float QVideoFrameFormat_maxLuminance(const QVideoFrameFormat* self);
void QVideoFrameFormat_setMaxLuminance(QVideoFrameFormat* self, float lum);
int QVideoFrameFormat_pixelFormatFromImageFormat(int format);
int QVideoFrameFormat_imageFormatFromPixelFormat(int format);
struct miqt_string QVideoFrameFormat_pixelFormatToString(int pixelFormat);
void QVideoFrameFormat_delete(QVideoFrameFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
