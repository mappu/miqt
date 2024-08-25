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
QImage* QImage_new2(char* xpm);
QImage* QImage_new3(const char* fileName, size_t fileName_Strlen);
QImage* QImage_new4(QImage* param1);
QImage* QImage_new5(const char* fileName, size_t fileName_Strlen, char* format);
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
unsigned char* QImage_Bits2(QImage* self);
unsigned char* QImage_ConstBits(QImage* self);
int QImage_ByteCount(QImage* self);
size_t QImage_SizeInBytes(QImage* self);
unsigned char* QImage_ScanLine(QImage* self, int param1);
unsigned char* QImage_ScanLineWithInt(QImage* self, int param1);
unsigned char* QImage_ConstScanLine(QImage* self, int param1);
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
bool QImage_HasAlphaChannel(QImage* self);
void QImage_SetAlphaChannel(QImage* self, QImage* alphaChannel);
QImage* QImage_AlphaChannel(QImage* self);
QImage* QImage_CreateHeuristicMask(QImage* self);
QMatrix* QImage_TrueMatrix(QMatrix* param1, int w, int h);
QTransform* QImage_TrueMatrix2(QTransform* param1, int w, int h);
QImage* QImage_Mirrored(QImage* self);
QImage* QImage_RgbSwapped(QImage* self);
QColorSpace* QImage_ColorSpace(QImage* self);
QImage* QImage_ConvertedToColorSpace(QImage* self, QColorSpace* param1);
void QImage_ConvertToColorSpace(QImage* self, QColorSpace* param1);
void QImage_SetColorSpace(QImage* self, QColorSpace* colorSpace);
void QImage_ApplyColorTransform(QImage* self, QColorTransform* transform);
bool QImage_Load(QImage* self, QIODevice* device, char* format);
bool QImage_LoadWithFileName(QImage* self, const char* fileName, size_t fileName_Strlen);
bool QImage_LoadFromData(QImage* self, unsigned char* buf, int lenVal);
bool QImage_LoadFromDataWithData(QImage* self, QByteArray* data);
bool QImage_Save(QImage* self, const char* fileName, size_t fileName_Strlen);
bool QImage_SaveWithDevice(QImage* self, QIODevice* device);
QImage* QImage_FromData(unsigned char* data, int size);
QImage* QImage_FromDataWithData(QByteArray* data);
int64_t QImage_CacheKey(QImage* self);
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
QImage* QImage_Copy1(QImage* self, QRect* rect);
QImage* QImage_CreateHeuristicMask1(QImage* self, bool clipTight);
QImage* QImage_Mirrored1(QImage* self, bool horizontally);
QImage* QImage_Mirrored2(QImage* self, bool horizontally, bool vertically);
bool QImage_Load2(QImage* self, const char* fileName, size_t fileName_Strlen, char* format);
bool QImage_LoadFromData3(QImage* self, unsigned char* buf, int lenVal, char* format);
bool QImage_LoadFromData2(QImage* self, QByteArray* data, char* aformat);
bool QImage_Save2(QImage* self, const char* fileName, size_t fileName_Strlen, char* format);
bool QImage_Save3(QImage* self, const char* fileName, size_t fileName_Strlen, char* format, int quality);
bool QImage_Save22(QImage* self, QIODevice* device, char* format);
bool QImage_Save32(QImage* self, QIODevice* device, char* format, int quality);
QImage* QImage_FromData3(unsigned char* data, int size, char* format);
QImage* QImage_FromData2(QByteArray* data, char* format);
void QImage_Text1(QImage* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen);
void QImage_Delete(QImage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
