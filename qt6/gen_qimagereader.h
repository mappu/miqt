#pragma once
#ifndef MIQT_QT6_GEN_QIMAGEREADER_H
#define MIQT_QT6_GEN_QIMAGEREADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QIODevice;
class QImage;
class QImageReader;
class QRect;
class QSize;
#else
typedef struct QColor QColor;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageReader QImageReader;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QImageReader* QImageReader_new();
QImageReader* QImageReader_new2(QIODevice* device);
QImageReader* QImageReader_new3(struct miqt_string fileName);
QImageReader* QImageReader_new4(QIODevice* device, struct miqt_string format);
QImageReader* QImageReader_new5(struct miqt_string fileName, struct miqt_string format);
struct miqt_string QImageReader_Tr(const char* sourceText);
void QImageReader_SetFormat(QImageReader* self, struct miqt_string format);
struct miqt_string QImageReader_Format(const QImageReader* self);
void QImageReader_SetAutoDetectImageFormat(QImageReader* self, bool enabled);
bool QImageReader_AutoDetectImageFormat(const QImageReader* self);
void QImageReader_SetDecideFormatFromContent(QImageReader* self, bool ignored);
bool QImageReader_DecideFormatFromContent(const QImageReader* self);
void QImageReader_SetDevice(QImageReader* self, QIODevice* device);
QIODevice* QImageReader_Device(const QImageReader* self);
void QImageReader_SetFileName(QImageReader* self, struct miqt_string fileName);
struct miqt_string QImageReader_FileName(const QImageReader* self);
QSize* QImageReader_Size(const QImageReader* self);
int QImageReader_ImageFormat(const QImageReader* self);
struct miqt_array /* of struct miqt_string */  QImageReader_TextKeys(const QImageReader* self);
struct miqt_string QImageReader_Text(const QImageReader* self, struct miqt_string key);
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
struct miqt_string QImageReader_SubType(const QImageReader* self);
struct miqt_array /* of struct miqt_string */  QImageReader_SupportedSubTypes(const QImageReader* self);
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
int QImageReader_Error(const QImageReader* self);
struct miqt_string QImageReader_ErrorString(const QImageReader* self);
bool QImageReader_SupportsOption(const QImageReader* self, int option);
struct miqt_string QImageReader_ImageFormatWithFileName(struct miqt_string fileName);
struct miqt_string QImageReader_ImageFormatWithDevice(QIODevice* device);
struct miqt_array /* of struct miqt_string */  QImageReader_SupportedImageFormats();
struct miqt_array /* of struct miqt_string */  QImageReader_SupportedMimeTypes();
struct miqt_array /* of struct miqt_string */  QImageReader_ImageFormatsForMimeType(struct miqt_string mimeType);
int QImageReader_AllocationLimit();
void QImageReader_SetAllocationLimit(int mbLimit);
struct miqt_string QImageReader_Tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QImageReader_Tr3(const char* sourceText, const char* disambiguation, int n);
void QImageReader_Delete(QImageReader* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
