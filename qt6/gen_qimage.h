#pragma once
#ifndef MIQT_QT6_GEN_QIMAGE_H
#define MIQT_QT6_GEN_QIMAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayView;
class QColor;
class QColorSpace;
class QColorTransform;
class QIODevice;
class QImage;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPixelFormat;
class QPoint;
class QRect;
class QSize;
class QSizeF;
class QTransform;
class QVariant;
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QColor QColor;
typedef struct QColorSpace QColorSpace;
typedef struct QColorTransform QColorTransform;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPixelFormat QPixelFormat;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QImage* QImage_new();
QImage* QImage_new2(QSize* size, int format);
QImage* QImage_new3(int width, int height, int format);
QImage* QImage_new4(unsigned char* data, int width, int height, int format);
QImage* QImage_new5(const unsigned char* data, int width, int height, int format);
QImage* QImage_new6(unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format);
QImage* QImage_new7(const unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format);
QImage* QImage_new8(struct miqt_string fileName);
QImage* QImage_new9(QImage* param1);
QImage* QImage_new10(struct miqt_string fileName, const char* format);
void QImage_virtbase(QImage* src, QPaintDevice** outptr_QPaintDevice);
void QImage_operatorAssign(QImage* self, QImage* param1);
void QImage_swap(QImage* self, QImage* other);
bool QImage_isNull(const QImage* self);
int QImage_devType(const QImage* self);
bool QImage_operatorEqual(const QImage* self, QImage* param1);
bool QImage_operatorNotEqual(const QImage* self, QImage* param1);
QVariant* QImage_ToQVariant(const QImage* self);
void QImage_detach(QImage* self);
bool QImage_isDetached(const QImage* self);
QImage* QImage_copy(const QImage* self);
QImage* QImage_copy2(const QImage* self, int x, int y, int w, int h);
int QImage_format(const QImage* self);
QImage* QImage_convertToFormat(const QImage* self, int f);
QImage* QImage_convertToFormat2(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable);
bool QImage_reinterpretAsFormat(QImage* self, int f);
QImage* QImage_convertedTo(const QImage* self, int f);
void QImage_convertTo(QImage* self, int f);
int QImage_width(const QImage* self);
int QImage_height(const QImage* self);
QSize* QImage_size(const QImage* self);
QRect* QImage_rect(const QImage* self);
int QImage_depth(const QImage* self);
int QImage_colorCount(const QImage* self);
int QImage_bitPlaneCount(const QImage* self);
unsigned int QImage_color(const QImage* self, int i);
void QImage_setColor(QImage* self, int i, unsigned int c);
void QImage_setColorCount(QImage* self, int colorCount);
bool QImage_allGray(const QImage* self);
bool QImage_isGrayscale(const QImage* self);
unsigned char* QImage_bits(QImage* self);
const unsigned char* QImage_bits2(const QImage* self);
const unsigned char* QImage_constBits(const QImage* self);
ptrdiff_t QImage_sizeInBytes(const QImage* self);
unsigned char* QImage_scanLine(QImage* self, int param1);
const unsigned char* QImage_scanLineWithInt(const QImage* self, int param1);
const unsigned char* QImage_constScanLine(const QImage* self, int param1);
ptrdiff_t QImage_bytesPerLine(const QImage* self);
bool QImage_valid(const QImage* self, int x, int y);
bool QImage_validWithPt(const QImage* self, QPoint* pt);
int QImage_pixelIndex(const QImage* self, int x, int y);
int QImage_pixelIndexWithPt(const QImage* self, QPoint* pt);
unsigned int QImage_pixel(const QImage* self, int x, int y);
unsigned int QImage_pixelWithPt(const QImage* self, QPoint* pt);
void QImage_setPixel(QImage* self, int x, int y, unsigned int index_or_rgb);
void QImage_setPixel2(QImage* self, QPoint* pt, unsigned int index_or_rgb);
QColor* QImage_pixelColor(const QImage* self, int x, int y);
QColor* QImage_pixelColorWithPt(const QImage* self, QPoint* pt);
void QImage_setPixelColor(QImage* self, int x, int y, QColor* c);
void QImage_setPixelColor2(QImage* self, QPoint* pt, QColor* c);
struct miqt_array /* of unsigned int */  QImage_colorTable(const QImage* self);
void QImage_setColorTable(QImage* self, struct miqt_array /* of unsigned int */  colors);
double QImage_devicePixelRatio(const QImage* self);
void QImage_setDevicePixelRatio(QImage* self, double scaleFactor);
QSizeF* QImage_deviceIndependentSize(const QImage* self);
void QImage_fill(QImage* self, unsigned int pixel);
void QImage_fillWithColor(QImage* self, QColor* color);
void QImage_fill2(QImage* self, int color);
bool QImage_hasAlphaChannel(const QImage* self);
void QImage_setAlphaChannel(QImage* self, QImage* alphaChannel);
QImage* QImage_createAlphaMask(const QImage* self);
QImage* QImage_createHeuristicMask(const QImage* self);
QImage* QImage_createMaskFromColor(const QImage* self, unsigned int color);
QImage* QImage_scaled(const QImage* self, int w, int h);
QImage* QImage_scaledWithQSize(const QImage* self, QSize* s);
QImage* QImage_scaledToWidth(const QImage* self, int w);
QImage* QImage_scaledToHeight(const QImage* self, int h);
QImage* QImage_transformed(const QImage* self, QTransform* matrix);
QTransform* QImage_trueMatrix(QTransform* param1, int w, int h);
QImage* QImage_mirrored(const QImage* self);
QImage* QImage_rgbSwapped(const QImage* self);
void QImage_mirror(QImage* self);
void QImage_rgbSwap(QImage* self);
void QImage_invertPixels(QImage* self);
QColorSpace* QImage_colorSpace(const QImage* self);
QImage* QImage_convertedToColorSpace(const QImage* self, QColorSpace* param1);
void QImage_convertToColorSpace(QImage* self, QColorSpace* param1);
void QImage_setColorSpace(QImage* self, QColorSpace* colorSpace);
QImage* QImage_colorTransformed(const QImage* self, QColorTransform* transform);
void QImage_applyColorTransform(QImage* self, QColorTransform* transform);
bool QImage_load(QImage* self, QIODevice* device, const char* format);
bool QImage_loadWithFileName(QImage* self, struct miqt_string fileName);
bool QImage_loadFromData(QImage* self, QByteArrayView* data);
bool QImage_loadFromData2(QImage* self, const unsigned char* buf, int len);
bool QImage_loadFromDataWithData(QImage* self, struct miqt_string data);
bool QImage_save(const QImage* self, struct miqt_string fileName);
bool QImage_saveWithDevice(const QImage* self, QIODevice* device);
QImage* QImage_fromData(QByteArrayView* data);
QImage* QImage_fromData2(const unsigned char* data, int size);
QImage* QImage_fromDataWithData(struct miqt_string data);
long long QImage_cacheKey(const QImage* self);
QPaintEngine* QImage_paintEngine(const QImage* self);
int QImage_dotsPerMeterX(const QImage* self);
int QImage_dotsPerMeterY(const QImage* self);
void QImage_setDotsPerMeterX(QImage* self, int dotsPerMeterX);
void QImage_setDotsPerMeterY(QImage* self, int dotsPerMeterY);
QPoint* QImage_offset(const QImage* self);
void QImage_setOffset(QImage* self, QPoint* offset);
struct miqt_array /* of struct miqt_string */  QImage_textKeys(const QImage* self);
struct miqt_string QImage_text(const QImage* self);
void QImage_setText(QImage* self, struct miqt_string key, struct miqt_string value);
QPixelFormat* QImage_pixelFormat(const QImage* self);
QPixelFormat* QImage_toPixelFormat(int format);
int QImage_toImageFormat(QPixelFormat* format);
int QImage_metric(const QImage* self, int metric);
QImage* QImage_copy1(const QImage* self, QRect* rect);
QImage* QImage_convertToFormat22(const QImage* self, int f, int flags);
QImage* QImage_convertToFormat3(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable, int flags);
QImage* QImage_convertedTo2(const QImage* self, int f, int flags);
void QImage_convertTo2(QImage* self, int f, int flags);
QImage* QImage_createAlphaMask1(const QImage* self, int flags);
QImage* QImage_createHeuristicMask1(const QImage* self, bool clipTight);
QImage* QImage_createMaskFromColor2(const QImage* self, unsigned int color, int mode);
QImage* QImage_scaled3(const QImage* self, int w, int h, int aspectMode);
QImage* QImage_scaled4(const QImage* self, int w, int h, int aspectMode, int mode);
QImage* QImage_scaled2(const QImage* self, QSize* s, int aspectMode);
QImage* QImage_scaled32(const QImage* self, QSize* s, int aspectMode, int mode);
QImage* QImage_scaledToWidth2(const QImage* self, int w, int mode);
QImage* QImage_scaledToHeight2(const QImage* self, int h, int mode);
QImage* QImage_transformed2(const QImage* self, QTransform* matrix, int mode);
QImage* QImage_mirrored1(const QImage* self, bool horizontally);
QImage* QImage_mirrored2(const QImage* self, bool horizontally, bool vertically);
void QImage_mirror1(QImage* self, bool horizontally);
void QImage_mirror2(QImage* self, bool horizontally, bool vertically);
void QImage_invertPixels1(QImage* self, int param1);
bool QImage_load2(QImage* self, struct miqt_string fileName, const char* format);
bool QImage_loadFromData22(QImage* self, QByteArrayView* data, const char* format);
bool QImage_loadFromData3(QImage* self, const unsigned char* buf, int len, const char* format);
bool QImage_loadFromData23(QImage* self, struct miqt_string data, const char* format);
bool QImage_save2(const QImage* self, struct miqt_string fileName, const char* format);
bool QImage_save3(const QImage* self, struct miqt_string fileName, const char* format, int quality);
bool QImage_save22(const QImage* self, QIODevice* device, const char* format);
bool QImage_save32(const QImage* self, QIODevice* device, const char* format, int quality);
QImage* QImage_fromData22(QByteArrayView* data, const char* format);
QImage* QImage_fromData3(const unsigned char* data, int size, const char* format);
QImage* QImage_fromData23(struct miqt_string data, const char* format);
struct miqt_string QImage_text1(const QImage* self, struct miqt_string key);
bool QImage_override_virtual_devType(void* self, intptr_t slot);
int QImage_virtualbase_devType(const void* self);
bool QImage_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QImage_virtualbase_paintEngine(const void* self);
bool QImage_override_virtual_metric(void* self, intptr_t slot);
int QImage_virtualbase_metric(const void* self, int metric);
bool QImage_override_virtual_initPainter(void* self, intptr_t slot);
void QImage_virtualbase_initPainter(const void* self, QPainter* painter);
bool QImage_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QImage_virtualbase_redirected(const void* self, QPoint* offset);
bool QImage_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QImage_virtualbase_sharedPainter(const void* self);
QImage* QImage_protectedbase_mirroredHelper(bool* _dynamic_cast_ok, const void* self, bool horizontal, bool vertical);
QImage* QImage_protectedbase_rgbSwappedHelper(bool* _dynamic_cast_ok, const void* self);
void QImage_protectedbase_mirroredInplace(bool* _dynamic_cast_ok, void* self, bool horizontal, bool vertical);
void QImage_protectedbase_rgbSwappedInplace(bool* _dynamic_cast_ok, void* self);
QImage* QImage_protectedbase_convertToFormatHelper(bool* _dynamic_cast_ok, const void* self, int format, int flags);
bool QImage_protectedbase_convertToFormatInplace(bool* _dynamic_cast_ok, void* self, int format, int flags);
QImage* QImage_protectedbase_smoothScaled(bool* _dynamic_cast_ok, const void* self, int w, int h);
void QImage_protectedbase_detachMetadata(bool* _dynamic_cast_ok, void* self);
void QImage_protectedbase_detachMetadata1(bool* _dynamic_cast_ok, void* self, bool invalidateCache);
void QImage_delete(QImage* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
