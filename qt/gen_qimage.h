#ifndef GEN_QIMAGE_H
#define GEN_QIMAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QColor;
class QColorSpace;
class QColorTransform;
class QIODevice;
class QImage;
class QMatrix;
class QPaintEngine;
class QPixelFormat;
class QPoint;
class QRect;
class QSize;
class QTransform;
#else
typedef struct QByteArray QByteArray;
typedef struct QColor QColor;
typedef struct QColorSpace QColorSpace;
typedef struct QColorTransform QColorTransform;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMatrix QMatrix;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPixelFormat QPixelFormat;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
#endif

QImage* QImage_new();
QImage* QImage_new2(QSize* size, uintptr_t format);
QImage* QImage_new3(int width, int height, uintptr_t format);
QImage* QImage_new4(unsigned char* data, int width, int height, uintptr_t format);
QImage* QImage_new5(const unsigned char* data, int width, int height, uintptr_t format);
QImage* QImage_new6(unsigned char* data, int width, int height, int bytesPerLine, uintptr_t format);
QImage* QImage_new7(const unsigned char* data, int width, int height, int bytesPerLine, uintptr_t format);
QImage* QImage_new8(const char* fileName, size_t fileName_Strlen);
QImage* QImage_new9(QImage* param1);
QImage* QImage_new10(const char* fileName, size_t fileName_Strlen, const char* format);
void QImage_OperatorAssign(QImage* self, QImage* param1);
void QImage_Swap(QImage* self, QImage* other);
bool QImage_IsNull(QImage* self);
int QImage_DevType(QImage* self);
bool QImage_OperatorEqual(QImage* self, QImage* param1);
bool QImage_OperatorNotEqual(QImage* self, QImage* param1);
void QImage_Detach(QImage* self);
bool QImage_IsDetached(QImage* self);
QImage* QImage_Copy(QImage* self);
QImage* QImage_Copy2(QImage* self, int x, int y, int w, int h);
uintptr_t QImage_Format(QImage* self);
QImage* QImage_ConvertToFormat(QImage* self, uintptr_t f);
QImage* QImage_ConvertToFormat2(QImage* self, uintptr_t f, unsigned int* colorTable, size_t colorTable_len);
bool QImage_ReinterpretAsFormat(QImage* self, uintptr_t f);
void QImage_ConvertTo(QImage* self, uintptr_t f);
int QImage_Width(QImage* self);
int QImage_Height(QImage* self);
QSize* QImage_Size(QImage* self);
QRect* QImage_Rect(QImage* self);
int QImage_Depth(QImage* self);
int QImage_ColorCount(QImage* self);
int QImage_BitPlaneCount(QImage* self);
unsigned int QImage_Color(QImage* self, int i);
void QImage_SetColor(QImage* self, int i, unsigned int c);
void QImage_SetColorCount(QImage* self, int colorCount);
bool QImage_AllGray(QImage* self);
bool QImage_IsGrayscale(QImage* self);
unsigned char* QImage_Bits(QImage* self);
const unsigned char* QImage_Bits2(QImage* self);
const unsigned char* QImage_ConstBits(QImage* self);
int QImage_ByteCount(QImage* self);
size_t QImage_SizeInBytes(QImage* self);
unsigned char* QImage_ScanLine(QImage* self, int param1);
const unsigned char* QImage_ScanLineWithInt(QImage* self, int param1);
const unsigned char* QImage_ConstScanLine(QImage* self, int param1);
int QImage_BytesPerLine(QImage* self);
bool QImage_Valid(QImage* self, int x, int y);
bool QImage_ValidWithPt(QImage* self, QPoint* pt);
int QImage_PixelIndex(QImage* self, int x, int y);
int QImage_PixelIndexWithPt(QImage* self, QPoint* pt);
unsigned int QImage_Pixel(QImage* self, int x, int y);
unsigned int QImage_PixelWithPt(QImage* self, QPoint* pt);
void QImage_SetPixel(QImage* self, int x, int y, unsigned int index_or_rgb);
void QImage_SetPixel2(QImage* self, QPoint* pt, unsigned int index_or_rgb);
QColor* QImage_PixelColor(QImage* self, int x, int y);
QColor* QImage_PixelColorWithPt(QImage* self, QPoint* pt);
void QImage_SetPixelColor(QImage* self, int x, int y, QColor* c);
void QImage_SetPixelColor2(QImage* self, QPoint* pt, QColor* c);
void QImage_ColorTable(QImage* self, unsigned int** _out, size_t* _out_len);
void QImage_SetColorTable(QImage* self, unsigned int* colors, size_t colors_len);
double QImage_DevicePixelRatio(QImage* self);
void QImage_SetDevicePixelRatio(QImage* self, double scaleFactor);
void QImage_Fill(QImage* self, unsigned int pixel);
void QImage_FillWithColor(QImage* self, QColor* color);
void QImage_Fill2(QImage* self, uintptr_t color);
bool QImage_HasAlphaChannel(QImage* self);
void QImage_SetAlphaChannel(QImage* self, QImage* alphaChannel);
QImage* QImage_AlphaChannel(QImage* self);
QImage* QImage_CreateAlphaMask(QImage* self);
QImage* QImage_CreateHeuristicMask(QImage* self);
QImage* QImage_CreateMaskFromColor(QImage* self, unsigned int color);
QImage* QImage_Scaled(QImage* self, int w, int h);
QImage* QImage_ScaledWithQSize(QImage* self, QSize* s);
QImage* QImage_ScaledToWidth(QImage* self, int w);
QImage* QImage_ScaledToHeight(QImage* self, int h);
QImage* QImage_Transformed(QImage* self, QMatrix* matrix);
QMatrix* QImage_TrueMatrix(QMatrix* param1, int w, int h);
QImage* QImage_TransformedWithMatrix(QImage* self, QTransform* matrix);
QTransform* QImage_TrueMatrix2(QTransform* param1, int w, int h);
QImage* QImage_Mirrored(QImage* self);
QImage* QImage_RgbSwapped(QImage* self);
void QImage_InvertPixels(QImage* self);
QColorSpace* QImage_ColorSpace(QImage* self);
QImage* QImage_ConvertedToColorSpace(QImage* self, QColorSpace* param1);
void QImage_ConvertToColorSpace(QImage* self, QColorSpace* param1);
void QImage_SetColorSpace(QImage* self, QColorSpace* colorSpace);
void QImage_ApplyColorTransform(QImage* self, QColorTransform* transform);
bool QImage_Load(QImage* self, QIODevice* device, const char* format);
bool QImage_LoadWithFileName(QImage* self, const char* fileName, size_t fileName_Strlen);
bool QImage_LoadFromData(QImage* self, const unsigned char* buf, int lenVal);
bool QImage_LoadFromDataWithData(QImage* self, QByteArray* data);
bool QImage_Save(QImage* self, const char* fileName, size_t fileName_Strlen);
bool QImage_SaveWithDevice(QImage* self, QIODevice* device);
QImage* QImage_FromData(const unsigned char* data, int size);
QImage* QImage_FromDataWithData(QByteArray* data);
long long QImage_CacheKey(QImage* self);
QPaintEngine* QImage_PaintEngine(QImage* self);
int QImage_DotsPerMeterX(QImage* self);
int QImage_DotsPerMeterY(QImage* self);
void QImage_SetDotsPerMeterX(QImage* self, int dotsPerMeterX);
void QImage_SetDotsPerMeterY(QImage* self, int dotsPerMeterY);
QPoint* QImage_Offset(QImage* self);
void QImage_SetOffset(QImage* self, QPoint* offset);
void QImage_TextKeys(QImage* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QImage_Text(QImage* self, char** _out, int* _out_Strlen);
void QImage_SetText(QImage* self, const char* key, size_t key_Strlen, const char* value, size_t value_Strlen);
QPixelFormat* QImage_PixelFormat(QImage* self);
QPixelFormat* QImage_ToPixelFormat(uintptr_t format);
uintptr_t QImage_ToImageFormat(QPixelFormat* format);
QImage* QImage_Copy1(QImage* self, QRect* rect);
QImage* QImage_ConvertToFormat22(QImage* self, uintptr_t f, int flags);
QImage* QImage_ConvertToFormat3(QImage* self, uintptr_t f, unsigned int* colorTable, size_t colorTable_len, int flags);
void QImage_ConvertTo2(QImage* self, uintptr_t f, int flags);
QImage* QImage_CreateAlphaMask1(QImage* self, int flags);
QImage* QImage_CreateHeuristicMask1(QImage* self, bool clipTight);
QImage* QImage_CreateMaskFromColor2(QImage* self, unsigned int color, uintptr_t mode);
QImage* QImage_Scaled3(QImage* self, int w, int h, uintptr_t aspectMode);
QImage* QImage_Scaled4(QImage* self, int w, int h, uintptr_t aspectMode, uintptr_t mode);
QImage* QImage_Scaled2(QImage* self, QSize* s, uintptr_t aspectMode);
QImage* QImage_Scaled32(QImage* self, QSize* s, uintptr_t aspectMode, uintptr_t mode);
QImage* QImage_ScaledToWidth2(QImage* self, int w, uintptr_t mode);
QImage* QImage_ScaledToHeight2(QImage* self, int h, uintptr_t mode);
QImage* QImage_Transformed2(QImage* self, QMatrix* matrix, uintptr_t mode);
QImage* QImage_Transformed22(QImage* self, QTransform* matrix, uintptr_t mode);
QImage* QImage_Mirrored1(QImage* self, bool horizontally);
QImage* QImage_Mirrored2(QImage* self, bool horizontally, bool vertically);
void QImage_InvertPixels1(QImage* self, uintptr_t param1);
bool QImage_Load2(QImage* self, const char* fileName, size_t fileName_Strlen, const char* format);
bool QImage_LoadFromData3(QImage* self, const unsigned char* buf, int lenVal, const char* format);
bool QImage_LoadFromData2(QImage* self, QByteArray* data, const char* aformat);
bool QImage_Save2(QImage* self, const char* fileName, size_t fileName_Strlen, const char* format);
bool QImage_Save3(QImage* self, const char* fileName, size_t fileName_Strlen, const char* format, int quality);
bool QImage_Save22(QImage* self, QIODevice* device, const char* format);
bool QImage_Save32(QImage* self, QIODevice* device, const char* format, int quality);
QImage* QImage_FromData3(const unsigned char* data, int size, const char* format);
QImage* QImage_FromData2(QByteArray* data, const char* format);
void QImage_Text1(QImage* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen);
void QImage_Delete(QImage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
