#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOFRAME_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QImage;
class QSize;
class QVariant;
class QVideoFrame;
#else
typedef struct QImage QImage;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
#endif

QVideoFrame* QVideoFrame_new();
QVideoFrame* QVideoFrame_new2(int bytes, QSize* size, int bytesPerLine, int format);
QVideoFrame* QVideoFrame_new3(QImage* image);
QVideoFrame* QVideoFrame_new4(QVideoFrame* other);
void QVideoFrame_operatorAssign(QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_operatorEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_operatorNotEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_isValid(const QVideoFrame* self);
int QVideoFrame_pixelFormat(const QVideoFrame* self);
int QVideoFrame_handleType(const QVideoFrame* self);
QSize* QVideoFrame_size(const QVideoFrame* self);
int QVideoFrame_width(const QVideoFrame* self);
int QVideoFrame_height(const QVideoFrame* self);
int QVideoFrame_fieldType(const QVideoFrame* self);
void QVideoFrame_setFieldType(QVideoFrame* self, int fieldType);
bool QVideoFrame_isMapped(const QVideoFrame* self);
bool QVideoFrame_isReadable(const QVideoFrame* self);
bool QVideoFrame_isWritable(const QVideoFrame* self);
int QVideoFrame_mapMode(const QVideoFrame* self);
bool QVideoFrame_map(QVideoFrame* self, int mode);
void QVideoFrame_unmap(QVideoFrame* self);
int QVideoFrame_bytesPerLine(const QVideoFrame* self);
int QVideoFrame_bytesPerLineWithPlane(const QVideoFrame* self, int plane);
unsigned char* QVideoFrame_bits(QVideoFrame* self);
unsigned char* QVideoFrame_bitsWithPlane(QVideoFrame* self, int plane);
const unsigned char* QVideoFrame_bits2(const QVideoFrame* self);
const unsigned char* QVideoFrame_bits3(const QVideoFrame* self, int plane);
int QVideoFrame_mappedBytes(const QVideoFrame* self);
int QVideoFrame_planeCount(const QVideoFrame* self);
QVariant* QVideoFrame_handle(const QVideoFrame* self);
long long QVideoFrame_startTime(const QVideoFrame* self);
void QVideoFrame_setStartTime(QVideoFrame* self, long long time);
long long QVideoFrame_endTime(const QVideoFrame* self);
void QVideoFrame_setEndTime(QVideoFrame* self, long long time);
struct miqt_map /* of struct miqt_string to QVariant* */  QVideoFrame_availableMetaData(const QVideoFrame* self);
QVariant* QVideoFrame_metaData(const QVideoFrame* self, struct miqt_string key);
void QVideoFrame_setMetaData(QVideoFrame* self, struct miqt_string key, QVariant* value);
QImage* QVideoFrame_image(const QVideoFrame* self);
int QVideoFrame_pixelFormatFromImageFormat(int format);
int QVideoFrame_imageFormatFromPixelFormat(int format);

void QVideoFrame_delete(QVideoFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
