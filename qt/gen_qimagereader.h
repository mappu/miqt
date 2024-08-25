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
void QImageReader_Tr(char* sourceText, char** _out, int* _out_Strlen);
void QImageReader_TrUtf8(char* sourceText, char** _out, int* _out_Strlen);
void QImageReader_SetFormat(QImageReader* self, QByteArray* format);
QByteArray* QImageReader_Format(QImageReader* self);
void QImageReader_SetAutoDetectImageFormat(QImageReader* self, bool enabled);
bool QImageReader_AutoDetectImageFormat(QImageReader* self);
void QImageReader_SetDecideFormatFromContent(QImageReader* self, bool ignored);
bool QImageReader_DecideFormatFromContent(QImageReader* self);
void QImageReader_SetDevice(QImageReader* self, QIODevice* device);
QIODevice* QImageReader_Device(QImageReader* self);
void QImageReader_SetFileName(QImageReader* self, const char* fileName, size_t fileName_Strlen);
void QImageReader_FileName(QImageReader* self, char** _out, int* _out_Strlen);
QSize* QImageReader_Size(QImageReader* self);
void QImageReader_TextKeys(QImageReader* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QImageReader_Text(QImageReader* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen);
void QImageReader_SetClipRect(QImageReader* self, QRect* rect);
QRect* QImageReader_ClipRect(QImageReader* self);
void QImageReader_SetScaledSize(QImageReader* self, QSize* size);
QSize* QImageReader_ScaledSize(QImageReader* self);
void QImageReader_SetQuality(QImageReader* self, int quality);
int QImageReader_Quality(QImageReader* self);
void QImageReader_SetScaledClipRect(QImageReader* self, QRect* rect);
QRect* QImageReader_ScaledClipRect(QImageReader* self);
void QImageReader_SetBackgroundColor(QImageReader* self, QColor* color);
QColor* QImageReader_BackgroundColor(QImageReader* self);
bool QImageReader_SupportsAnimation(QImageReader* self);
void QImageReader_SetAutoTransform(QImageReader* self, bool enabled);
bool QImageReader_AutoTransform(QImageReader* self);
void QImageReader_SetGamma(QImageReader* self, float gamma);
float QImageReader_Gamma(QImageReader* self);
QByteArray* QImageReader_SubType(QImageReader* self);
void QImageReader_SupportedSubTypes(QImageReader* self, QByteArray*** _out, size_t* _out_len);
bool QImageReader_CanRead(QImageReader* self);
QImage* QImageReader_Read(QImageReader* self);
bool QImageReader_ReadWithImage(QImageReader* self, QImage* image);
bool QImageReader_JumpToNextImage(QImageReader* self);
bool QImageReader_JumpToImage(QImageReader* self, int imageNumber);
int QImageReader_LoopCount(QImageReader* self);
int QImageReader_ImageCount(QImageReader* self);
int QImageReader_NextImageDelay(QImageReader* self);
int QImageReader_CurrentImageNumber(QImageReader* self);
QRect* QImageReader_CurrentImageRect(QImageReader* self);
void QImageReader_ErrorString(QImageReader* self, char** _out, int* _out_Strlen);
QByteArray* QImageReader_ImageFormat(const char* fileName, size_t fileName_Strlen);
QByteArray* QImageReader_ImageFormatWithDevice(QIODevice* device);
void QImageReader_SupportedImageFormats(QByteArray*** _out, size_t* _out_len);
void QImageReader_SupportedMimeTypes(QByteArray*** _out, size_t* _out_len);
void QImageReader_ImageFormatsForMimeType(QByteArray* mimeType, QByteArray*** _out, size_t* _out_len);
void QImageReader_Tr2(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen);
void QImageReader_Tr3(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen);
void QImageReader_TrUtf82(char* sourceText, char* disambiguation, char** _out, int* _out_Strlen);
void QImageReader_TrUtf83(char* sourceText, char* disambiguation, int n, char** _out, int* _out_Strlen);
void QImageReader_Delete(QImageReader* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
