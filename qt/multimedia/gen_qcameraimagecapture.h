#ifndef GEN_QCAMERAIMAGECAPTURE_H
#define GEN_QCAMERAIMAGECAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraImageCapture;
class QImage;
class QImageEncoderSettings;
class QMediaObject;
class QMetaObject;
class QObject;
class QSize;
class QVariant;
class QVideoFrame;
#else
typedef struct QCameraImageCapture QCameraImageCapture;
typedef struct QImage QImage;
typedef struct QImageEncoderSettings QImageEncoderSettings;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
#endif

QCameraImageCapture* QCameraImageCapture_new(QMediaObject* mediaObject);
QCameraImageCapture* QCameraImageCapture_new2(QMediaObject* mediaObject, QObject* parent);
QMetaObject* QCameraImageCapture_MetaObject(const QCameraImageCapture* self);
void* QCameraImageCapture_Metacast(QCameraImageCapture* self, const char* param1);
struct miqt_string QCameraImageCapture_Tr(const char* s);
struct miqt_string QCameraImageCapture_TrUtf8(const char* s);
bool QCameraImageCapture_IsAvailable(const QCameraImageCapture* self);
int QCameraImageCapture_Availability(const QCameraImageCapture* self);
QMediaObject* QCameraImageCapture_MediaObject(const QCameraImageCapture* self);
int QCameraImageCapture_Error(const QCameraImageCapture* self);
struct miqt_string QCameraImageCapture_ErrorString(const QCameraImageCapture* self);
bool QCameraImageCapture_IsReadyForCapture(const QCameraImageCapture* self);
struct miqt_array QCameraImageCapture_SupportedImageCodecs(const QCameraImageCapture* self);
struct miqt_string QCameraImageCapture_ImageCodecDescription(const QCameraImageCapture* self, struct miqt_string codecName);
struct miqt_array QCameraImageCapture_SupportedResolutions(const QCameraImageCapture* self);
QImageEncoderSettings* QCameraImageCapture_EncodingSettings(const QCameraImageCapture* self);
void QCameraImageCapture_SetEncodingSettings(QCameraImageCapture* self, QImageEncoderSettings* settings);
struct miqt_array QCameraImageCapture_SupportedBufferFormats(const QCameraImageCapture* self);
int QCameraImageCapture_BufferFormat(const QCameraImageCapture* self);
void QCameraImageCapture_SetBufferFormat(QCameraImageCapture* self, int format);
bool QCameraImageCapture_IsCaptureDestinationSupported(const QCameraImageCapture* self, int destination);
int QCameraImageCapture_CaptureDestination(const QCameraImageCapture* self);
void QCameraImageCapture_SetCaptureDestination(QCameraImageCapture* self, int destination);
int QCameraImageCapture_Capture(QCameraImageCapture* self);
void QCameraImageCapture_CancelCapture(QCameraImageCapture* self);
void QCameraImageCapture_Error2(QCameraImageCapture* self, int id, int error, struct miqt_string errorString);
void QCameraImageCapture_connect_Error2(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_ReadyForCaptureChanged(QCameraImageCapture* self, bool ready);
void QCameraImageCapture_connect_ReadyForCaptureChanged(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_BufferFormatChanged(QCameraImageCapture* self, int format);
void QCameraImageCapture_connect_BufferFormatChanged(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_CaptureDestinationChanged(QCameraImageCapture* self, int destination);
void QCameraImageCapture_connect_CaptureDestinationChanged(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_ImageExposed(QCameraImageCapture* self, int id);
void QCameraImageCapture_connect_ImageExposed(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_ImageCaptured(QCameraImageCapture* self, int id, QImage* preview);
void QCameraImageCapture_connect_ImageCaptured(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_ImageMetadataAvailable(QCameraImageCapture* self, int id, struct miqt_string key, QVariant* value);
void QCameraImageCapture_connect_ImageMetadataAvailable(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_ImageAvailable(QCameraImageCapture* self, int id, QVideoFrame* frame);
void QCameraImageCapture_connect_ImageAvailable(QCameraImageCapture* self, intptr_t slot);
void QCameraImageCapture_ImageSaved(QCameraImageCapture* self, int id, struct miqt_string fileName);
void QCameraImageCapture_connect_ImageSaved(QCameraImageCapture* self, intptr_t slot);
struct miqt_string QCameraImageCapture_Tr2(const char* s, const char* c);
struct miqt_string QCameraImageCapture_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageCapture_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraImageCapture_TrUtf83(const char* s, const char* c, int n);
struct miqt_array QCameraImageCapture_SupportedResolutions1(const QCameraImageCapture* self, QImageEncoderSettings* settings);
struct miqt_array QCameraImageCapture_SupportedResolutions2(const QCameraImageCapture* self, QImageEncoderSettings* settings, bool* continuous);
int QCameraImageCapture_Capture1(QCameraImageCapture* self, struct miqt_string location);
void QCameraImageCapture_Delete(QCameraImageCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
