#pragma once
#ifndef MIQT_QT6_GEN_QIMAGEWRITER_H
#define MIQT_QT6_GEN_QIMAGEWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QImage;
class QImageWriter;
#else
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageWriter QImageWriter;
#endif

QImageWriter* QImageWriter_new();
QImageWriter* QImageWriter_new2(QIODevice* device, struct miqt_string format);
QImageWriter* QImageWriter_new3(struct miqt_string fileName);
QImageWriter* QImageWriter_new4(struct miqt_string fileName, struct miqt_string format);
struct miqt_string QImageWriter_tr(const char* sourceText);
void QImageWriter_setFormat(QImageWriter* self, struct miqt_string format);
struct miqt_string QImageWriter_format(const QImageWriter* self);
void QImageWriter_setDevice(QImageWriter* self, QIODevice* device);
QIODevice* QImageWriter_device(const QImageWriter* self);
void QImageWriter_setFileName(QImageWriter* self, struct miqt_string fileName);
struct miqt_string QImageWriter_fileName(const QImageWriter* self);
void QImageWriter_setQuality(QImageWriter* self, int quality);
int QImageWriter_quality(const QImageWriter* self);
void QImageWriter_setCompression(QImageWriter* self, int compression);
int QImageWriter_compression(const QImageWriter* self);
void QImageWriter_setSubType(QImageWriter* self, struct miqt_string type);
struct miqt_string QImageWriter_subType(const QImageWriter* self);
struct miqt_array /* of struct miqt_string */  QImageWriter_supportedSubTypes(const QImageWriter* self);
void QImageWriter_setOptimizedWrite(QImageWriter* self, bool optimize);
bool QImageWriter_optimizedWrite(const QImageWriter* self);
void QImageWriter_setProgressiveScanWrite(QImageWriter* self, bool progressive);
bool QImageWriter_progressiveScanWrite(const QImageWriter* self);
int QImageWriter_transformation(const QImageWriter* self);
void QImageWriter_setTransformation(QImageWriter* self, int orientation);
void QImageWriter_setText(QImageWriter* self, struct miqt_string key, struct miqt_string text);
bool QImageWriter_canWrite(const QImageWriter* self);
bool QImageWriter_write(QImageWriter* self, QImage* image);
int QImageWriter_error(const QImageWriter* self);
struct miqt_string QImageWriter_errorString(const QImageWriter* self);
bool QImageWriter_supportsOption(const QImageWriter* self, int option);
struct miqt_array /* of struct miqt_string */  QImageWriter_supportedImageFormats();
struct miqt_array /* of struct miqt_string */  QImageWriter_supportedMimeTypes();
struct miqt_array /* of struct miqt_string */  QImageWriter_imageFormatsForMimeType(struct miqt_string mimeType);
struct miqt_string QImageWriter_tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QImageWriter_tr3(const char* sourceText, const char* disambiguation, int n);

void QImageWriter_delete(QImageWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
