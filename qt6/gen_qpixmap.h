#pragma once
#ifndef MIQT_QT6_GEN_QPIXMAP_H
#define MIQT_QT6_GEN_QPIXMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitmap;
class QColor;
class QIODevice;
class QImage;
class QImageReader;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPixmap;
class QPoint;
class QRect;
class QRegion;
class QSize;
class QSizeF;
class QTransform;
class QVariant;
#else
typedef struct QBitmap QBitmap;
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageReader QImageReader;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QPixmap* QPixmap_new();
QPixmap* QPixmap_new2(int w, int h);
QPixmap* QPixmap_new3(QSize* param1);
QPixmap* QPixmap_new4(struct miqt_string fileName);
QPixmap* QPixmap_new5(QPixmap* param1);
QPixmap* QPixmap_new6(struct miqt_string fileName, const char* format);
QPixmap* QPixmap_new7(struct miqt_string fileName, const char* format, int flags);
void QPixmap_virtbase(QPixmap* src, QPaintDevice** outptr_QPaintDevice);
void QPixmap_OperatorAssign(QPixmap* self, QPixmap* param1);
void QPixmap_Swap(QPixmap* self, QPixmap* other);
QVariant* QPixmap_ToQVariant(const QPixmap* self);
bool QPixmap_IsNull(const QPixmap* self);
int QPixmap_DevType(const QPixmap* self);
int QPixmap_Width(const QPixmap* self);
int QPixmap_Height(const QPixmap* self);
QSize* QPixmap_Size(const QPixmap* self);
QRect* QPixmap_Rect(const QPixmap* self);
int QPixmap_Depth(const QPixmap* self);
int QPixmap_DefaultDepth();
void QPixmap_Fill(QPixmap* self);
QBitmap* QPixmap_Mask(const QPixmap* self);
void QPixmap_SetMask(QPixmap* self, QBitmap* mask);
double QPixmap_DevicePixelRatio(const QPixmap* self);
void QPixmap_SetDevicePixelRatio(QPixmap* self, double scaleFactor);
QSizeF* QPixmap_DeviceIndependentSize(const QPixmap* self);
bool QPixmap_HasAlpha(const QPixmap* self);
bool QPixmap_HasAlphaChannel(const QPixmap* self);
QBitmap* QPixmap_CreateHeuristicMask(const QPixmap* self);
QBitmap* QPixmap_CreateMaskFromColor(const QPixmap* self, QColor* maskColor);
QPixmap* QPixmap_Scaled(const QPixmap* self, int w, int h);
QPixmap* QPixmap_ScaledWithQSize(const QPixmap* self, QSize* s);
QPixmap* QPixmap_ScaledToWidth(const QPixmap* self, int w);
QPixmap* QPixmap_ScaledToHeight(const QPixmap* self, int h);
QPixmap* QPixmap_Transformed(const QPixmap* self, QTransform* param1);
QTransform* QPixmap_TrueMatrix(QTransform* m, int w, int h);
QImage* QPixmap_ToImage(const QPixmap* self);
QPixmap* QPixmap_FromImage(QImage* image);
QPixmap* QPixmap_FromImageReader(QImageReader* imageReader);
bool QPixmap_Load(QPixmap* self, struct miqt_string fileName);
bool QPixmap_LoadFromData(QPixmap* self, const unsigned char* buf, unsigned int lenVal);
bool QPixmap_LoadFromDataWithData(QPixmap* self, struct miqt_string data);
bool QPixmap_Save(const QPixmap* self, struct miqt_string fileName);
bool QPixmap_SaveWithDevice(const QPixmap* self, QIODevice* device);
bool QPixmap_ConvertFromImage(QPixmap* self, QImage* img);
QPixmap* QPixmap_Copy(const QPixmap* self, int x, int y, int width, int height);
QPixmap* QPixmap_Copy2(const QPixmap* self);
void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height);
void QPixmap_Scroll2(QPixmap* self, int dx, int dy, QRect* rect);
long long QPixmap_CacheKey(const QPixmap* self);
bool QPixmap_IsDetached(const QPixmap* self);
void QPixmap_Detach(QPixmap* self);
bool QPixmap_IsQBitmap(const QPixmap* self);
QPaintEngine* QPixmap_PaintEngine(const QPixmap* self);
bool QPixmap_OperatorNot(const QPixmap* self);
int QPixmap_Metric(const QPixmap* self, int param1);
void QPixmap_Fill1(QPixmap* self, QColor* fillColor);
QBitmap* QPixmap_CreateHeuristicMask1(const QPixmap* self, bool clipTight);
QBitmap* QPixmap_CreateMaskFromColor2(const QPixmap* self, QColor* maskColor, int mode);
QPixmap* QPixmap_Scaled3(const QPixmap* self, int w, int h, int aspectMode);
QPixmap* QPixmap_Scaled4(const QPixmap* self, int w, int h, int aspectMode, int mode);
QPixmap* QPixmap_Scaled2(const QPixmap* self, QSize* s, int aspectMode);
QPixmap* QPixmap_Scaled32(const QPixmap* self, QSize* s, int aspectMode, int mode);
QPixmap* QPixmap_ScaledToWidth2(const QPixmap* self, int w, int mode);
QPixmap* QPixmap_ScaledToHeight2(const QPixmap* self, int h, int mode);
QPixmap* QPixmap_Transformed2(const QPixmap* self, QTransform* param1, int mode);
QPixmap* QPixmap_FromImage2(QImage* image, int flags);
QPixmap* QPixmap_FromImageReader2(QImageReader* imageReader, int flags);
bool QPixmap_Load2(QPixmap* self, struct miqt_string fileName, const char* format);
bool QPixmap_Load3(QPixmap* self, struct miqt_string fileName, const char* format, int flags);
bool QPixmap_LoadFromData3(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format);
bool QPixmap_LoadFromData4(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format, int flags);
bool QPixmap_LoadFromData2(QPixmap* self, struct miqt_string data, const char* format);
bool QPixmap_LoadFromData32(QPixmap* self, struct miqt_string data, const char* format, int flags);
bool QPixmap_Save2(const QPixmap* self, struct miqt_string fileName, const char* format);
bool QPixmap_Save3(const QPixmap* self, struct miqt_string fileName, const char* format, int quality);
bool QPixmap_Save22(const QPixmap* self, QIODevice* device, const char* format);
bool QPixmap_Save32(const QPixmap* self, QIODevice* device, const char* format, int quality);
bool QPixmap_ConvertFromImage2(QPixmap* self, QImage* img, int flags);
QPixmap* QPixmap_Copy1(const QPixmap* self, QRect* rect);
void QPixmap_Scroll7(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed);
void QPixmap_Scroll4(QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed);
bool QPixmap_override_virtual_DevType(void* self, intptr_t slot);
int QPixmap_virtualbase_DevType(const void* self);
bool QPixmap_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPixmap_virtualbase_PaintEngine(const void* self);
bool QPixmap_override_virtual_Metric(void* self, intptr_t slot);
int QPixmap_virtualbase_Metric(const void* self, int param1);
bool QPixmap_override_virtual_InitPainter(void* self, intptr_t slot);
void QPixmap_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QPixmap_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QPixmap_virtualbase_Redirected(const void* self, QPoint* offset);
bool QPixmap_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QPixmap_virtualbase_SharedPainter(const void* self);
void QPixmap_Delete(QPixmap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
