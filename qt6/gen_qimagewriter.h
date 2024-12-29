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
struct miqt_string QImageWriter_Tr(const char* sourceText);
void QImageWriter_SetFormat(QImageWriter* self, struct miqt_string format);
struct miqt_string QImageWriter_Format(const QImageWriter* self);
void QImageWriter_SetDevice(QImageWriter* self, QIODevice* device);
QIODevice* QImageWriter_Device(const QImageWriter* self);
void QImageWriter_SetFileName(QImageWriter* self, struct miqt_string fileName);
struct miqt_string QImageWriter_FileName(const QImageWriter* self);
void QImageWriter_SetQuality(QImageWriter* self, int quality);
int QImageWriter_Quality(const QImageWriter* self);
void QImageWriter_SetCompression(QImageWriter* self, int compression);
int QImageWriter_Compression(const QImageWriter* self);
void QImageWriter_SetSubType(QImageWriter* self, struct miqt_string typeVal);
struct miqt_string QImageWriter_SubType(const QImageWriter* self);
struct miqt_array /* of struct miqt_string */  QImageWriter_SupportedSubTypes(const QImageWriter* self);
void QImageWriter_SetOptimizedWrite(QImageWriter* self, bool optimize);
bool QImageWriter_OptimizedWrite(const QImageWriter* self);
void QImageWriter_SetProgressiveScanWrite(QImageWriter* self, bool progressive);
bool QImageWriter_ProgressiveScanWrite(const QImageWriter* self);
int QImageWriter_Transformation(const QImageWriter* self);
void QImageWriter_SetTransformation(QImageWriter* self, int orientation);
void QImageWriter_SetText(QImageWriter* self, struct miqt_string key, struct miqt_string text);
bool QImageWriter_CanWrite(const QImageWriter* self);
bool QImageWriter_Write(QImageWriter* self, QImage* image);
int QImageWriter_Error(const QImageWriter* self);
struct miqt_string QImageWriter_ErrorString(const QImageWriter* self);
bool QImageWriter_SupportsOption(const QImageWriter* self, int option);
struct miqt_array /* of struct miqt_string */  QImageWriter_SupportedImageFormats();
struct miqt_array /* of struct miqt_string */  QImageWriter_SupportedMimeTypes();
struct miqt_array /* of struct miqt_string */  QImageWriter_ImageFormatsForMimeType(struct miqt_string mimeType);
struct miqt_string QImageWriter_Tr2(const char* sourceText, const char* disambiguation);
struct miqt_string QImageWriter_Tr3(const char* sourceText, const char* disambiguation, int n);
void QImageWriter_Delete(QImageWriter* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
