#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QVIDEOFRAME_H
#define MIQT_QT6_MULTIMEDIA_GEN_QVIDEOFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QImage;
class QPainter;
class QRectF;
class QSize;
class QVideoFrame;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QVideoFrame__PaintOptions)
typedef QVideoFrame::PaintOptions QVideoFrame__PaintOptions;
#else
class QVideoFrame__PaintOptions;
#endif
class QVideoFrameFormat;
#else
typedef struct QColor QColor;
typedef struct QImage QImage;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoFrame__PaintOptions QVideoFrame__PaintOptions;
typedef struct QVideoFrameFormat QVideoFrameFormat;
#endif

QVideoFrame* QVideoFrame_new();
QVideoFrame* QVideoFrame_new2(QVideoFrameFormat* format);
QVideoFrame* QVideoFrame_new3(QVideoFrame* other);
void QVideoFrame_swap(QVideoFrame* self, QVideoFrame* other);
void QVideoFrame_operatorAssign(QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_operatorEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_operatorNotEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_isValid(const QVideoFrame* self);
int QVideoFrame_pixelFormat(const QVideoFrame* self);
QVideoFrameFormat* QVideoFrame_surfaceFormat(const QVideoFrame* self);
int QVideoFrame_handleType(const QVideoFrame* self);
QSize* QVideoFrame_size(const QVideoFrame* self);
int QVideoFrame_width(const QVideoFrame* self);
int QVideoFrame_height(const QVideoFrame* self);
bool QVideoFrame_isMapped(const QVideoFrame* self);
bool QVideoFrame_isReadable(const QVideoFrame* self);
bool QVideoFrame_isWritable(const QVideoFrame* self);
int QVideoFrame_mapMode(const QVideoFrame* self);
bool QVideoFrame_map(QVideoFrame* self, int mode);
void QVideoFrame_unmap(QVideoFrame* self);
int QVideoFrame_bytesPerLine(const QVideoFrame* self, int plane);
unsigned char* QVideoFrame_bits(QVideoFrame* self, int plane);
const unsigned char* QVideoFrame_bitsWithPlane(const QVideoFrame* self, int plane);
int QVideoFrame_mappedBytes(const QVideoFrame* self, int plane);
int QVideoFrame_planeCount(const QVideoFrame* self);
long long QVideoFrame_startTime(const QVideoFrame* self);
void QVideoFrame_setStartTime(QVideoFrame* self, long long time);
long long QVideoFrame_endTime(const QVideoFrame* self);
void QVideoFrame_setEndTime(QVideoFrame* self, long long time);
void QVideoFrame_setRotationAngle(QVideoFrame* self, int rotationAngle);
int QVideoFrame_rotationAngle(const QVideoFrame* self);
void QVideoFrame_setMirrored(QVideoFrame* self, bool mirrored);
bool QVideoFrame_mirrored(const QVideoFrame* self);
QImage* QVideoFrame_toImage(const QVideoFrame* self);
struct miqt_string QVideoFrame_subtitleText(const QVideoFrame* self);
void QVideoFrame_setSubtitleText(QVideoFrame* self, struct miqt_string text);
void QVideoFrame_paint(QVideoFrame* self, QPainter* painter, QRectF* rect, QVideoFrame__PaintOptions* options);

void QVideoFrame_delete(QVideoFrame* self);

QColor* QVideoFrame__PaintOptions_backgroundColor(const QVideoFrame__PaintOptions* self);
void QVideoFrame__PaintOptions_setBackgroundColor(QVideoFrame__PaintOptions* self, QColor* backgroundColor);
int QVideoFrame__PaintOptions_aspectRatioMode(const QVideoFrame__PaintOptions* self);
void QVideoFrame__PaintOptions_setAspectRatioMode(QVideoFrame__PaintOptions* self, int aspectRatioMode);
int QVideoFrame__PaintOptions_paintFlags(const QVideoFrame__PaintOptions* self);
void QVideoFrame__PaintOptions_setPaintFlags(QVideoFrame__PaintOptions* self, int paintFlags);

void QVideoFrame__PaintOptions_delete(QVideoFrame__PaintOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
