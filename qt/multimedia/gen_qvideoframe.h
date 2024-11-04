#ifndef GEN_QVIDEOFRAME_H
#define GEN_QVIDEOFRAME_H

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
void QVideoFrame_OperatorAssign(QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_OperatorEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_OperatorNotEqual(const QVideoFrame* self, QVideoFrame* other);
bool QVideoFrame_IsValid(const QVideoFrame* self);
int QVideoFrame_PixelFormat(const QVideoFrame* self);
int QVideoFrame_HandleType(const QVideoFrame* self);
QSize* QVideoFrame_Size(const QVideoFrame* self);
int QVideoFrame_Width(const QVideoFrame* self);
int QVideoFrame_Height(const QVideoFrame* self);
int QVideoFrame_FieldType(const QVideoFrame* self);
void QVideoFrame_SetFieldType(QVideoFrame* self, int fieldType);
bool QVideoFrame_IsMapped(const QVideoFrame* self);
bool QVideoFrame_IsReadable(const QVideoFrame* self);
bool QVideoFrame_IsWritable(const QVideoFrame* self);
int QVideoFrame_MapMode(const QVideoFrame* self);
bool QVideoFrame_Map(QVideoFrame* self, int mode);
void QVideoFrame_Unmap(QVideoFrame* self);
int QVideoFrame_BytesPerLine(const QVideoFrame* self);
int QVideoFrame_BytesPerLineWithPlane(const QVideoFrame* self, int plane);
unsigned char* QVideoFrame_Bits(QVideoFrame* self);
unsigned char* QVideoFrame_BitsWithPlane(QVideoFrame* self, int plane);
const unsigned char* QVideoFrame_Bits2(const QVideoFrame* self);
const unsigned char* QVideoFrame_Bits3(const QVideoFrame* self, int plane);
int QVideoFrame_MappedBytes(const QVideoFrame* self);
int QVideoFrame_PlaneCount(const QVideoFrame* self);
QVariant* QVideoFrame_Handle(const QVideoFrame* self);
long long QVideoFrame_StartTime(const QVideoFrame* self);
void QVideoFrame_SetStartTime(QVideoFrame* self, long long time);
long long QVideoFrame_EndTime(const QVideoFrame* self);
void QVideoFrame_SetEndTime(QVideoFrame* self, long long time);
struct miqt_map QVideoFrame_AvailableMetaData(const QVideoFrame* self);
QVariant* QVideoFrame_MetaData(const QVideoFrame* self, struct miqt_string key);
void QVideoFrame_SetMetaData(QVideoFrame* self, struct miqt_string key, QVariant* value);
QImage* QVideoFrame_Image(const QVideoFrame* self);
int QVideoFrame_PixelFormatFromImageFormat(int format);
int QVideoFrame_ImageFormatFromPixelFormat(int format);
void QVideoFrame_Delete(QVideoFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
