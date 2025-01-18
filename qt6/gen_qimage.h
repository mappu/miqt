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
void QImage_OperatorAssign(QImage* self, QImage* param1);
void QImage_Swap(QImage* self, QImage* other);
bool QImage_IsNull(const QImage* self);
int QImage_DevType(const QImage* self);
bool QImage_OperatorEqual(const QImage* self, QImage* param1);
bool QImage_OperatorNotEqual(const QImage* self, QImage* param1);
QVariant* QImage_ToQVariant(const QImage* self);
void QImage_Detach(QImage* self);
bool QImage_IsDetached(const QImage* self);
QImage* QImage_Copy(const QImage* self);
QImage* QImage_Copy2(const QImage* self, int x, int y, int w, int h);
int QImage_Format(const QImage* self);
QImage* QImage_ConvertToFormat(const QImage* self, int f);
QImage* QImage_ConvertToFormat2(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable);
bool QImage_ReinterpretAsFormat(QImage* self, int f);
QImage* QImage_ConvertedTo(const QImage* self, int f);
void QImage_ConvertTo(QImage* self, int f);
int QImage_Width(const QImage* self);
int QImage_Height(const QImage* self);
QSize* QImage_Size(const QImage* self);
QRect* QImage_Rect(const QImage* self);
int QImage_Depth(const QImage* self);
int QImage_ColorCount(const QImage* self);
int QImage_BitPlaneCount(const QImage* self);
unsigned int QImage_Color(const QImage* self, int i);
void QImage_SetColor(QImage* self, int i, unsigned int c);
void QImage_SetColorCount(QImage* self, int colorCount);
bool QImage_AllGray(const QImage* self);
bool QImage_IsGrayscale(const QImage* self);
unsigned char* QImage_Bits(QImage* self);
const unsigned char* QImage_Bits2(const QImage* self);
const unsigned char* QImage_ConstBits(const QImage* self);
ptrdiff_t QImage_SizeInBytes(const QImage* self);
unsigned char* QImage_ScanLine(QImage* self, int param1);
const unsigned char* QImage_ScanLineWithInt(const QImage* self, int param1);
const unsigned char* QImage_ConstScanLine(const QImage* self, int param1);
ptrdiff_t QImage_BytesPerLine(const QImage* self);
bool QImage_Valid(const QImage* self, int x, int y);
bool QImage_ValidWithPt(const QImage* self, QPoint* pt);
int QImage_PixelIndex(const QImage* self, int x, int y);
int QImage_PixelIndexWithPt(const QImage* self, QPoint* pt);
unsigned int QImage_Pixel(const QImage* self, int x, int y);
unsigned int QImage_PixelWithPt(const QImage* self, QPoint* pt);
void QImage_SetPixel(QImage* self, int x, int y, unsigned int index_or_rgb);
void QImage_SetPixel2(QImage* self, QPoint* pt, unsigned int index_or_rgb);
QColor* QImage_PixelColor(const QImage* self, int x, int y);
QColor* QImage_PixelColorWithPt(const QImage* self, QPoint* pt);
void QImage_SetPixelColor(QImage* self, int x, int y, QColor* c);
void QImage_SetPixelColor2(QImage* self, QPoint* pt, QColor* c);
struct miqt_array /* of unsigned int */  QImage_ColorTable(const QImage* self);
void QImage_SetColorTable(QImage* self, struct miqt_array /* of unsigned int */  colors);
double QImage_DevicePixelRatio(const QImage* self);
void QImage_SetDevicePixelRatio(QImage* self, double scaleFactor);
QSizeF* QImage_DeviceIndependentSize(const QImage* self);
void QImage_Fill(QImage* self, unsigned int pixel);
void QImage_FillWithColor(QImage* self, QColor* color);
void QImage_Fill2(QImage* self, int color);
bool QImage_HasAlphaChannel(const QImage* self);
void QImage_SetAlphaChannel(QImage* self, QImage* alphaChannel);
QImage* QImage_CreateAlphaMask(const QImage* self);
QImage* QImage_CreateHeuristicMask(const QImage* self);
QImage* QImage_CreateMaskFromColor(const QImage* self, unsigned int color);
QImage* QImage_Scaled(const QImage* self, int w, int h);
QImage* QImage_ScaledWithQSize(const QImage* self, QSize* s);
QImage* QImage_ScaledToWidth(const QImage* self, int w);
QImage* QImage_ScaledToHeight(const QImage* self, int h);
QImage* QImage_Transformed(const QImage* self, QTransform* matrix);
QTransform* QImage_TrueMatrix(QTransform* param1, int w, int h);
QImage* QImage_Mirrored(const QImage* self);
QImage* QImage_RgbSwapped(const QImage* self);
void QImage_Mirror(QImage* self);
void QImage_RgbSwap(QImage* self);
void QImage_InvertPixels(QImage* self);
QColorSpace* QImage_ColorSpace(const QImage* self);
QImage* QImage_ConvertedToColorSpace(const QImage* self, QColorSpace* param1);
void QImage_ConvertToColorSpace(QImage* self, QColorSpace* param1);
void QImage_SetColorSpace(QImage* self, QColorSpace* colorSpace);
QImage* QImage_ColorTransformed(const QImage* self, QColorTransform* transform);
void QImage_ApplyColorTransform(QImage* self, QColorTransform* transform);
bool QImage_Load(QImage* self, QIODevice* device, const char* format);
bool QImage_LoadWithFileName(QImage* self, struct miqt_string fileName);
bool QImage_LoadFromData(QImage* self, QByteArrayView* data);
bool QImage_LoadFromData2(QImage* self, const unsigned char* buf, int lenVal);
bool QImage_LoadFromDataWithData(QImage* self, struct miqt_string data);
bool QImage_Save(const QImage* self, struct miqt_string fileName);
bool QImage_SaveWithDevice(const QImage* self, QIODevice* device);
QImage* QImage_FromData(QByteArrayView* data);
QImage* QImage_FromData2(const unsigned char* data, int size);
QImage* QImage_FromDataWithData(struct miqt_string data);
long long QImage_CacheKey(const QImage* self);
QPaintEngine* QImage_PaintEngine(const QImage* self);
int QImage_DotsPerMeterX(const QImage* self);
int QImage_DotsPerMeterY(const QImage* self);
void QImage_SetDotsPerMeterX(QImage* self, int dotsPerMeterX);
void QImage_SetDotsPerMeterY(QImage* self, int dotsPerMeterY);
QPoint* QImage_Offset(const QImage* self);
void QImage_SetOffset(QImage* self, QPoint* offset);
struct miqt_array /* of struct miqt_string */  QImage_TextKeys(const QImage* self);
struct miqt_string QImage_Text(const QImage* self);
void QImage_SetText(QImage* self, struct miqt_string key, struct miqt_string value);
QPixelFormat* QImage_PixelFormat(const QImage* self);
QPixelFormat* QImage_ToPixelFormat(int format);
int QImage_ToImageFormat(QPixelFormat* format);
int QImage_Metric(const QImage* self, int metric);
QImage* QImage_Copy1(const QImage* self, QRect* rect);
QImage* QImage_ConvertToFormat22(const QImage* self, int f, int flags);
QImage* QImage_ConvertToFormat3(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable, int flags);
QImage* QImage_ConvertedTo2(const QImage* self, int f, int flags);
void QImage_ConvertTo2(QImage* self, int f, int flags);
QImage* QImage_CreateAlphaMask1(const QImage* self, int flags);
QImage* QImage_CreateHeuristicMask1(const QImage* self, bool clipTight);
QImage* QImage_CreateMaskFromColor2(const QImage* self, unsigned int color, int mode);
QImage* QImage_Scaled3(const QImage* self, int w, int h, int aspectMode);
QImage* QImage_Scaled4(const QImage* self, int w, int h, int aspectMode, int mode);
QImage* QImage_Scaled2(const QImage* self, QSize* s, int aspectMode);
QImage* QImage_Scaled32(const QImage* self, QSize* s, int aspectMode, int mode);
QImage* QImage_ScaledToWidth2(const QImage* self, int w, int mode);
QImage* QImage_ScaledToHeight2(const QImage* self, int h, int mode);
QImage* QImage_Transformed2(const QImage* self, QTransform* matrix, int mode);
QImage* QImage_Mirrored1(const QImage* self, bool horizontally);
QImage* QImage_Mirrored2(const QImage* self, bool horizontally, bool vertically);
void QImage_Mirror1(QImage* self, bool horizontally);
void QImage_Mirror2(QImage* self, bool horizontally, bool vertically);
void QImage_InvertPixels1(QImage* self, int param1);
bool QImage_Load2(QImage* self, struct miqt_string fileName, const char* format);
bool QImage_LoadFromData22(QImage* self, QByteArrayView* data, const char* format);
bool QImage_LoadFromData3(QImage* self, const unsigned char* buf, int lenVal, const char* format);
bool QImage_LoadFromData23(QImage* self, struct miqt_string data, const char* format);
bool QImage_Save2(const QImage* self, struct miqt_string fileName, const char* format);
bool QImage_Save3(const QImage* self, struct miqt_string fileName, const char* format, int quality);
bool QImage_Save22(const QImage* self, QIODevice* device, const char* format);
bool QImage_Save32(const QImage* self, QIODevice* device, const char* format, int quality);
QImage* QImage_FromData22(QByteArrayView* data, const char* format);
QImage* QImage_FromData3(const unsigned char* data, int size, const char* format);
QImage* QImage_FromData23(struct miqt_string data, const char* format);
struct miqt_string QImage_Text1(const QImage* self, struct miqt_string key);
void QImage_override_virtual_DevType(void* self, intptr_t slot);
int QImage_virtualbase_DevType(const void* self);
void QImage_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QImage_virtualbase_PaintEngine(const void* self);
void QImage_override_virtual_Metric(void* self, intptr_t slot);
int QImage_virtualbase_Metric(const void* self, int metric);
void QImage_override_virtual_InitPainter(void* self, intptr_t slot);
void QImage_virtualbase_InitPainter(const void* self, QPainter* painter);
void QImage_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QImage_virtualbase_Redirected(const void* self, QPoint* offset);
void QImage_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QImage_virtualbase_SharedPainter(const void* self);
void QImage_Delete(QImage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
