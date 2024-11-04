#ifndef GEN_QVIDEOSURFACEFORMAT_H
#define GEN_QVIDEOSURFACEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QRect;
class QSize;
class QVariant;
class QVideoSurfaceFormat;
#else
typedef struct QByteArray QByteArray;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QVideoSurfaceFormat QVideoSurfaceFormat;
#endif

QVideoSurfaceFormat* QVideoSurfaceFormat_new();
QVideoSurfaceFormat* QVideoSurfaceFormat_new2(QSize* size, int pixelFormat);
QVideoSurfaceFormat* QVideoSurfaceFormat_new3(QVideoSurfaceFormat* format);
QVideoSurfaceFormat* QVideoSurfaceFormat_new4(QSize* size, int pixelFormat, int handleType);
void QVideoSurfaceFormat_OperatorAssign(QVideoSurfaceFormat* self, QVideoSurfaceFormat* format);
bool QVideoSurfaceFormat_OperatorEqual(const QVideoSurfaceFormat* self, QVideoSurfaceFormat* format);
bool QVideoSurfaceFormat_OperatorNotEqual(const QVideoSurfaceFormat* self, QVideoSurfaceFormat* format);
bool QVideoSurfaceFormat_IsValid(const QVideoSurfaceFormat* self);
int QVideoSurfaceFormat_PixelFormat(const QVideoSurfaceFormat* self);
int QVideoSurfaceFormat_HandleType(const QVideoSurfaceFormat* self);
QSize* QVideoSurfaceFormat_FrameSize(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_SetFrameSize(QVideoSurfaceFormat* self, QSize* size);
void QVideoSurfaceFormat_SetFrameSize2(QVideoSurfaceFormat* self, int width, int height);
int QVideoSurfaceFormat_FrameWidth(const QVideoSurfaceFormat* self);
int QVideoSurfaceFormat_FrameHeight(const QVideoSurfaceFormat* self);
QRect* QVideoSurfaceFormat_Viewport(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_SetViewport(QVideoSurfaceFormat* self, QRect* viewport);
int QVideoSurfaceFormat_ScanLineDirection(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_SetScanLineDirection(QVideoSurfaceFormat* self, int direction);
double QVideoSurfaceFormat_FrameRate(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_SetFrameRate(QVideoSurfaceFormat* self, double rate);
QSize* QVideoSurfaceFormat_PixelAspectRatio(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_SetPixelAspectRatio(QVideoSurfaceFormat* self, QSize* ratio);
void QVideoSurfaceFormat_SetPixelAspectRatio2(QVideoSurfaceFormat* self, int width, int height);
int QVideoSurfaceFormat_YCbCrColorSpace(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_SetYCbCrColorSpace(QVideoSurfaceFormat* self, int colorSpace);
bool QVideoSurfaceFormat_IsMirrored(const QVideoSurfaceFormat* self);
void QVideoSurfaceFormat_SetMirrored(QVideoSurfaceFormat* self, bool mirrored);
QSize* QVideoSurfaceFormat_SizeHint(const QVideoSurfaceFormat* self);
struct miqt_array QVideoSurfaceFormat_PropertyNames(const QVideoSurfaceFormat* self);
QVariant* QVideoSurfaceFormat_Property(const QVideoSurfaceFormat* self, const char* name);
void QVideoSurfaceFormat_SetProperty(QVideoSurfaceFormat* self, const char* name, QVariant* value);
void QVideoSurfaceFormat_Delete(QVideoSurfaceFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
