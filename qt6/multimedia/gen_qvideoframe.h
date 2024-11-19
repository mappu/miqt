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
typedef struct QImage QImage;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QVideoFrame QVideoFrame;
typedef struct QVideoFrame__PaintOptions QVideoFrame__PaintOptions;
typedef struct QVideoFrameFormat QVideoFrameFormat;
#endif

void QVideoFrame_new(QVideoFrame** outptr_QVideoFrame);
void QVideoFrame_new2(QVideoFrameFormat* format, QVideoFrame** outptr_QVideoFrame);
void QVideoFrame_new3(QVideoFrame* other, QVideoFrame** outptr_QVideoFrame);
void QVideoFrame_Swap(QVideoFrame* self, QVideoFrame* other);
void QVideoFrame_OperatorAssign(QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_OperatorEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_OperatorNotEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_IsValid(const QVideoFrame* self);
int QVideoFrame_PixelFormat(const QVideoFrame* self);
QVideoFrameFormat* QVideoFrame_SurfaceFormat(const QVideoFrame* self);
int QVideoFrame_HandleType(const QVideoFrame* self);
QSize* QVideoFrame_Size(const QVideoFrame* self);
int QVideoFrame_Width(const QVideoFrame* self);
int QVideoFrame_Height(const QVideoFrame* self);
bool QVideoFrame_IsMapped(const QVideoFrame* self);
bool QVideoFrame_IsReadable(const QVideoFrame* self);
bool QVideoFrame_IsWritable(const QVideoFrame* self);
int QVideoFrame_MapMode(const QVideoFrame* self);
bool QVideoFrame_Map(QVideoFrame* self, int mode);
void QVideoFrame_Unmap(QVideoFrame* self);
int QVideoFrame_BytesPerLine(const QVideoFrame* self, int plane);
unsigned char* QVideoFrame_Bits(QVideoFrame* self, int plane);
const unsigned char* QVideoFrame_BitsWithPlane(const QVideoFrame* self, int plane);
int QVideoFrame_MappedBytes(const QVideoFrame* self, int plane);
int QVideoFrame_PlaneCount(const QVideoFrame* self);
long long QVideoFrame_StartTime(const QVideoFrame* self);
void QVideoFrame_SetStartTime(QVideoFrame* self, long long time);
long long QVideoFrame_EndTime(const QVideoFrame* self);
void QVideoFrame_SetEndTime(QVideoFrame* self, long long time);
void QVideoFrame_SetRotationAngle(QVideoFrame* self, int rotationAngle);
int QVideoFrame_RotationAngle(const QVideoFrame* self);
void QVideoFrame_SetMirrored(QVideoFrame* self, bool mirrored);
bool QVideoFrame_Mirrored(const QVideoFrame* self);
QImage* QVideoFrame_ToImage(const QVideoFrame* self);
struct miqt_string QVideoFrame_SubtitleText(const QVideoFrame* self);
void QVideoFrame_SetSubtitleText(QVideoFrame* self, struct miqt_string text);
void QVideoFrame_Paint(QVideoFrame* self, QPainter* painter, QRectF* rect, QVideoFrame__PaintOptions* options);
void QVideoFrame_Delete(QVideoFrame* self, bool isSubclass);

void QVideoFrame__PaintOptions_Delete(QVideoFrame__PaintOptions* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
