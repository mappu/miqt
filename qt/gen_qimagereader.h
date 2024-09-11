#ifndef GEN_QIMAGEREADER_H
#define GEN_QIMAGEREADER_H

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
class QIODevice;
class QImage;
class QImageReader;
class QRect;
class QSize;
#else
typedef struct QByteArray QByteArray;
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageReader QImageReader;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QImageReader* QImageReader_new();
QImageReader* QImageReader_new2(QIODevice* device);
QImageReader* QImageReader_new3(const char* fileName, size_t fileName_Strlen);
QImageReader* QImageReader_new4(QIODevice* device, QByteArray* format);
QImageReader* QImageReader_new5(const char* fileName, size_t fileName_Strlen, QByteArray* format);
void QImageReader_Tr(const char* sourceText, char** _out, int* _out_Strlen);
void QImageReader_TrUtf8(const char* sourceText, char** _out, int* _out_Strlen);
void QImageReader_SetFormat(QImageReader* self, QByteArray* format);
QByteArray* QImageReader_Format(const QImageReader* self);
void QImageReader_SetAutoDetectImageFormat(QImageReader* self, bool enabled);
bool QImageReader_AutoDetectImageFormat(const QImageReader* self);
void QImageReader_SetDecideFormatFromContent(QImageReader* self, bool ignored);
bool QImageReader_DecideFormatFromContent(const QImageReader* self);
void QImageReader_SetDevice(QImageReader* self, QIODevice* device);
QIODevice* QImageReader_Device(const QImageReader* self);
void QImageReader_SetFileName(QImageReader* self, const char* fileName, size_t fileName_Strlen);
void QImageReader_FileName(const QImageReader* self, char** _out, int* _out_Strlen);
QSize* QImageReader_Size(const QImageReader* self);
uintptr_t QImageReader_ImageFormat(const QImageReader* self);
void QImageReader_TextKeys(const QImageReader* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QImageReader_Text(const QImageReader* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen);
void QImageReader_SetClipRect(QImageReader* self, QRect* rect);
QRect* QImageReader_ClipRect(const QImageReader* self);
void QImageReader_SetScaledSize(QImageReader* self, QSize* size);
QSize* QImageReader_ScaledSize(const QImageReader* self);
void QImageReader_SetQuality(QImageReader* self, int quality);
int QImageReader_Quality(const QImageReader* self);
void QImageReader_SetScaledClipRect(QImageReader* self, QRect* rect);
QRect* QImageReader_ScaledClipRect(const QImageReader* self);
void QImageReader_SetBackgroundColor(QImageReader* self, QColor* color);
QColor* QImageReader_BackgroundColor(const QImageReader* self);
bool QImageReader_SupportsAnimation(const QImageReader* self);
int QImageReader_Transformation(const QImageReader* self);
void QImageReader_SetAutoTransform(QImageReader* self, bool enabled);
bool QImageReader_AutoTransform(const QImageReader* self);
void QImageReader_SetGamma(QImageReader* self, float gamma);
float QImageReader_Gamma(const QImageReader* self);
QByteArray* QImageReader_SubType(const QImageReader* self);
void QImageReader_SupportedSubTypes(const QImageReader* self, QByteArray*** _out, size_t* _out_len);
bool QImageReader_CanRead(const QImageReader* self);
QImage* QImageReader_Read(QImageReader* self);
bool QImageReader_ReadWithImage(QImageReader* self, QImage* image);
bool QImageReader_JumpToNextImage(QImageReader* self);
bool QImageReader_JumpToImage(QImageReader* self, int imageNumber);
int QImageReader_LoopCount(const QImageReader* self);
int QImageReader_ImageCount(const QImageReader* self);
int QImageReader_NextImageDelay(const QImageReader* self);
int QImageReader_CurrentImageNumber(const QImageReader* self);
QRect* QImageReader_CurrentImageRect(const QImageReader* self);
uintptr_t QImageReader_Error(const QImageReader* self);
void QImageReader_ErrorString(const QImageReader* self, char** _out, int* _out_Strlen);
bool QImageReader_SupportsOption(const QImageReader* self, uintptr_t option);
QByteArray* QImageReader_ImageFormatWithFileName(const char* fileName, size_t fileName_Strlen);
QByteArray* QImageReader_ImageFormatWithDevice(QIODevice* device);
void QImageReader_SupportedImageFormats(QByteArray*** _out, size_t* _out_len);
void QImageReader_SupportedMimeTypes(QByteArray*** _out, size_t* _out_len);
void QImageReader_ImageFormatsForMimeType(QByteArray* mimeType, QByteArray*** _out, size_t* _out_len);
void QImageReader_Tr2(const char* sourceText, const char* disambiguation, char** _out, int* _out_Strlen);
void QImageReader_Tr3(const char* sourceText, const char* disambiguation, int n, char** _out, int* _out_Strlen);
void QImageReader_TrUtf82(const char* sourceText, const char* disambiguation, char** _out, int* _out_Strlen);
void QImageReader_TrUtf83(const char* sourceText, const char* disambiguation, int n, char** _out, int* _out_Strlen);
void QImageReader_Delete(QImageReader* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
