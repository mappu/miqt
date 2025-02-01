#pragma once
#ifndef MIQT_QT_GEN_QIMAGEREADER_H
#define MIQT_QT_GEN_QIMAGEREADER_H

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
struct miqt_string QImageReader_tr(const char* sourceText);
struct miqt_string QImageReader_trUtf8(const char* sourceText);
void QImageReader_setFormat(QImageReader* self, struct miqt_string format);
struct miqt_string QImageReader_format(const QImageReader* self);
void QImageReader_setAutoDetectImageFormat(QImageReader* self, bool enabled);
bool QImageReader_autoDetectImageFormat(const QImageReader* self);
void QImageReader_setDecideFormatFromContent(QImageReader* self, bool ignored);
bool QImageReader_decideFormatFromContent(const QImageReader* self);
void QImageReader_setDevice(QImageReader* self, QIODevice* device);
QIODevice* QImageReader_device(const QImageReader* self);
void QImageReader_setFileName(QImageReader* self, struct miqt_string fileName);
struct miqt_string QImageReader_fileName(const QImageReader* self);
QSize* QImageReader_size(const QImageReader* self);
int QImageReader_imageFormat(const QImageReader* self);
struct miqt_array /* of struct miqt_string */  QImageReader_textKeys(const QImageReader* self);
struct miqt_string QImageReader_text(const QImageReader* self, struct miqt_string key);
void QImageReader_setClipRect(QImageReader* self, QRect* rect);
QRect* QImageReader_clipRect(const QImageReader* self);
void QImageReader_setScaledSize(QImageReader* self, QSize* size);
QSize* QImageReader_scaledSize(const QImageReader* self);
void QImageReader_setQuality(QImageReader* self, int quality);
int QImageReader_quality(const QImageReader* self);
void QImageReader_setScaledClipRect(QImageReader* self, QRect* rect);
QRect* QImageReader_scaledClipRect(const QImageReader* self);
void QImageReader_setBackgroundColor(QImageReader* self, QColor* color);
QColor* QImageReader_backgroundColor(const QImageReader* self);
bool QImageReader_supportsAnimation(const QImageReader* self);
int QImageReader_transformation(const QImageReader* self);
void QImageReader_setAutoTransform(QImageReader* self, bool enabled);
bool QImageReader_autoTransform(const QImageReader* self);
void QImageReader_setGamma(QImageReader* self, float gamma);
float QImageReader_gamma(const QImageReader* self);
struct miqt_string QImageReader_subType(const QImageReader* self);
struct miqt_array /* of struct miqt_string */  QImageReader_supportedSubTypes(const QImageReader* self);
bool QImageReader_canRead(const QImageReader* self);
QImage* QImageReader_read(QImageReader* self);
bool QImageReader_readWithImage(QImageReader* self, QImage* image);
bool QImageReader_jumpToNextImage(QImageReader* self);
bool QImageReader_jumpToImage(QImageReader* self, int imageNumber);
int QImageReader_loopCount(const QImageReader* self);
int QImageReader_imageCount(const QImageReader* self);
int QImageReader_nextImageDelay(const QImageReader* self);
int QImageReader_currentImageNumber(const QImageReader* self);
QRect* QImageReader_currentImageRect(const QImageReader* self);
int QImageReader_error(const QImageReader* self);
struct miqt_string QImageReader_errorString(const QImageReader* self);
bool QImageReader_supportsOption(const QImageReader* self, int option);
struct miqt_string QImageReader_imageFormatWithFileName(struct miqt_string fileName);
struct miqt_string QImageReader_imageFormatWithDevice(QIODevice* device);
struct miqt_array /* of struct miqt_string */  QImageReader_supportedImageFormats();
struct miqt_array /* of struct miqt_string */  QImageReader_supportedMimeTypes();
struct miqt_array /* of struct miqt_string */  QImageReader_imageFormatsForMimeType(struct miqt_string mimeType);
struct miqt_string QImageReader_tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QImageReader_tr3(const char* sourceText, const char* disambiguation, int n);
struct miqt_string QImageReader_trUtf82(const char* sourceText, const char* disambiguation);
struct miqt_string QImageReader_trUtf83(const char* sourceText, const char* disambiguation, int n);
void QImageReader_delete(QImageReader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
