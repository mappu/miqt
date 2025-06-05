#pragma once
#ifndef MIQT_QT_GEN_QPIXMAP_H
#define MIQT_QT_GEN_QPIXMAP_H

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
class QMatrix;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPixmap;
class QPoint;
class QRect;
class QRegion;
class QSize;
class QTransform;
class QVariant;
#else
typedef struct QBitmap QBitmap;
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageReader QImageReader;
typedef struct QMatrix QMatrix;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
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
void QPixmap_operatorAssign(QPixmap* self, QPixmap* param1);
void QPixmap_swap(QPixmap* self, QPixmap* other);
QVariant* QPixmap_ToQVariant(const QPixmap* self);
bool QPixmap_isNull(const QPixmap* self);
int QPixmap_devType(const QPixmap* self);
int QPixmap_width(const QPixmap* self);
int QPixmap_height(const QPixmap* self);
QSize* QPixmap_size(const QPixmap* self);
QRect* QPixmap_rect(const QPixmap* self);
int QPixmap_depth(const QPixmap* self);
int QPixmap_defaultDepth();
void QPixmap_fill(QPixmap* self);
void QPixmap_fill2(QPixmap* self, QPaintDevice* device, QPoint* ofs);
void QPixmap_fill3(QPixmap* self, QPaintDevice* device, int xofs, int yofs);
QBitmap* QPixmap_mask(const QPixmap* self);
void QPixmap_setMask(QPixmap* self, QBitmap* mask);
double QPixmap_devicePixelRatio(const QPixmap* self);
void QPixmap_setDevicePixelRatio(QPixmap* self, double scaleFactor);
bool QPixmap_hasAlpha(const QPixmap* self);
bool QPixmap_hasAlphaChannel(const QPixmap* self);
QBitmap* QPixmap_createHeuristicMask(const QPixmap* self);
QBitmap* QPixmap_createMaskFromColor(const QPixmap* self, QColor* maskColor);
QPixmap* QPixmap_grabWindow(uintptr_t param1);
QPixmap* QPixmap_grabWidget(QObject* widget, QRect* rect);
QPixmap* QPixmap_grabWidgetWithWidget(QObject* widget);
QPixmap* QPixmap_scaled(const QPixmap* self, int w, int h);
QPixmap* QPixmap_scaledWithQSize(const QPixmap* self, QSize* s);
QPixmap* QPixmap_scaledToWidth(const QPixmap* self, int w);
QPixmap* QPixmap_scaledToHeight(const QPixmap* self, int h);
QPixmap* QPixmap_transformed(const QPixmap* self, QMatrix* param1);
QMatrix* QPixmap_trueMatrix(QMatrix* m, int w, int h);
QPixmap* QPixmap_transformedWithQTransform(const QPixmap* self, QTransform* param1);
QTransform* QPixmap_trueMatrix2(QTransform* m, int w, int h);
QImage* QPixmap_toImage(const QPixmap* self);
QPixmap* QPixmap_fromImage(QImage* image);
QPixmap* QPixmap_fromImageReader(QImageReader* imageReader);
bool QPixmap_load(QPixmap* self, struct miqt_string fileName);
bool QPixmap_loadFromData(QPixmap* self, const unsigned char* buf, unsigned int len);
bool QPixmap_loadFromDataWithData(QPixmap* self, struct miqt_string data);
bool QPixmap_save(const QPixmap* self, struct miqt_string fileName);
bool QPixmap_saveWithDevice(const QPixmap* self, QIODevice* device);
bool QPixmap_convertFromImage(QPixmap* self, QImage* img);
QPixmap* QPixmap_copy(const QPixmap* self, int x, int y, int width, int height);
QPixmap* QPixmap_copy2(const QPixmap* self);
void QPixmap_scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height);
void QPixmap_scroll2(QPixmap* self, int dx, int dy, QRect* rect);
long long QPixmap_cacheKey(const QPixmap* self);
bool QPixmap_isDetached(const QPixmap* self);
void QPixmap_detach(QPixmap* self);
bool QPixmap_isQBitmap(const QPixmap* self);
QPaintEngine* QPixmap_paintEngine(const QPixmap* self);
bool QPixmap_operatorNot(const QPixmap* self);
int QPixmap_metric(const QPixmap* self, int param1);
void QPixmap_fillWithFillColor(QPixmap* self, QColor* fillColor);
QBitmap* QPixmap_createHeuristicMaskWithClipTight(const QPixmap* self, bool clipTight);
QBitmap* QPixmap_createMaskFromColor2(const QPixmap* self, QColor* maskColor, int mode);
QPixmap* QPixmap_grabWindow2(uintptr_t param1, int x);
QPixmap* QPixmap_grabWindow3(uintptr_t param1, int x, int y);
QPixmap* QPixmap_grabWindow4(uintptr_t param1, int x, int y, int w);
QPixmap* QPixmap_grabWindow5(uintptr_t param1, int x, int y, int w, int h);
QPixmap* QPixmap_grabWidget2(QObject* widget, int x);
QPixmap* QPixmap_grabWidget3(QObject* widget, int x, int y);
QPixmap* QPixmap_grabWidget4(QObject* widget, int x, int y, int w);
QPixmap* QPixmap_grabWidget5(QObject* widget, int x, int y, int w, int h);
QPixmap* QPixmap_scaled2(const QPixmap* self, int w, int h, int aspectMode);
QPixmap* QPixmap_scaled3(const QPixmap* self, int w, int h, int aspectMode, int mode);
QPixmap* QPixmap_scaled4(const QPixmap* self, QSize* s, int aspectMode);
QPixmap* QPixmap_scaled5(const QPixmap* self, QSize* s, int aspectMode, int mode);
QPixmap* QPixmap_scaledToWidth2(const QPixmap* self, int w, int mode);
QPixmap* QPixmap_scaledToHeight2(const QPixmap* self, int h, int mode);
QPixmap* QPixmap_transformed2(const QPixmap* self, QMatrix* param1, int mode);
QPixmap* QPixmap_transformed3(const QPixmap* self, QTransform* param1, int mode);
QPixmap* QPixmap_fromImage2(QImage* image, int flags);
QPixmap* QPixmap_fromImageReader2(QImageReader* imageReader, int flags);
bool QPixmap_load2(QPixmap* self, struct miqt_string fileName, const char* format);
bool QPixmap_load3(QPixmap* self, struct miqt_string fileName, const char* format, int flags);
bool QPixmap_loadFromData2(QPixmap* self, const unsigned char* buf, unsigned int len, const char* format);
bool QPixmap_loadFromData3(QPixmap* self, const unsigned char* buf, unsigned int len, const char* format, int flags);
bool QPixmap_loadFromData4(QPixmap* self, struct miqt_string data, const char* format);
bool QPixmap_loadFromData5(QPixmap* self, struct miqt_string data, const char* format, int flags);
bool QPixmap_save2(const QPixmap* self, struct miqt_string fileName, const char* format);
bool QPixmap_save3(const QPixmap* self, struct miqt_string fileName, const char* format, int quality);
bool QPixmap_save4(const QPixmap* self, QIODevice* device, const char* format);
bool QPixmap_save5(const QPixmap* self, QIODevice* device, const char* format, int quality);
bool QPixmap_convertFromImage2(QPixmap* self, QImage* img, int flags);
QPixmap* QPixmap_copyWithRect(const QPixmap* self, QRect* rect);
void QPixmap_scroll3(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed);
void QPixmap_scroll4(QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed);

bool QPixmap_override_virtual_devType(void* self, intptr_t slot);
int QPixmap_virtualbase_devType(const void* self);
bool QPixmap_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPixmap_virtualbase_paintEngine(const void* self);
bool QPixmap_override_virtual_metric(void* self, intptr_t slot);
int QPixmap_virtualbase_metric(const void* self, int param1);
bool QPixmap_override_virtual_initPainter(void* self, intptr_t slot);
void QPixmap_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPixmap_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPixmap_virtualbase_redirected(const void* self, QPoint* offset);
bool QPixmap_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPixmap_virtualbase_sharedPainter(const void* self);

void QPixmap_delete(QPixmap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
