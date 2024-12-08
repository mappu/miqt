#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGECAPTURE_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGECAPTURE_H

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
class QChildEvent;
class QEvent;
class QImage;
class QImageEncoderSettings;
class QMediaBindableInterface;
class QMediaObject;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTimerEvent;
class QVariant;
class QVideoFrame;
#else
typedef struct QCameraImageCapture QCameraImageCapture;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QImageEncoderSettings QImageEncoderSettings;
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
#endif

QCameraImageCapture* QCameraImageCapture_new(QMediaObject* mediaObject);
QCameraImageCapture* QCameraImageCapture_new2(QMediaObject* mediaObject, QObject* parent);
void QCameraImageCapture_virtbase(QCameraImageCapture* src, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface);
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
struct miqt_array /* of struct miqt_string */  QCameraImageCapture_SupportedImageCodecs(const QCameraImageCapture* self);
struct miqt_string QCameraImageCapture_ImageCodecDescription(const QCameraImageCapture* self, struct miqt_string codecName);
struct miqt_array /* of QSize* */  QCameraImageCapture_SupportedResolutions(const QCameraImageCapture* self);
QImageEncoderSettings* QCameraImageCapture_EncodingSettings(const QCameraImageCapture* self);
void QCameraImageCapture_SetEncodingSettings(QCameraImageCapture* self, QImageEncoderSettings* settings);
struct miqt_array /* of int */  QCameraImageCapture_SupportedBufferFormats(const QCameraImageCapture* self);
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
bool QCameraImageCapture_SetMediaObject(QCameraImageCapture* self, QMediaObject* mediaObject);
struct miqt_string QCameraImageCapture_Tr2(const char* s, const char* c);
struct miqt_string QCameraImageCapture_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageCapture_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraImageCapture_TrUtf83(const char* s, const char* c, int n);
struct miqt_array /* of QSize* */  QCameraImageCapture_SupportedResolutions1(const QCameraImageCapture* self, QImageEncoderSettings* settings);
struct miqt_array /* of QSize* */  QCameraImageCapture_SupportedResolutions2(const QCameraImageCapture* self, QImageEncoderSettings* settings, bool* continuous);
int QCameraImageCapture_Capture1(QCameraImageCapture* self, struct miqt_string location);
void QCameraImageCapture_override_virtual_MediaObject(void* self, intptr_t slot);
QMediaObject* QCameraImageCapture_virtualbase_MediaObject(const void* self);
void QCameraImageCapture_override_virtual_SetMediaObject(void* self, intptr_t slot);
bool QCameraImageCapture_virtualbase_SetMediaObject(void* self, QMediaObject* mediaObject);
void QCameraImageCapture_override_virtual_Event(void* self, intptr_t slot);
bool QCameraImageCapture_virtualbase_Event(void* self, QEvent* event);
void QCameraImageCapture_override_virtual_EventFilter(void* self, intptr_t slot);
bool QCameraImageCapture_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QCameraImageCapture_override_virtual_TimerEvent(void* self, intptr_t slot);
void QCameraImageCapture_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QCameraImageCapture_override_virtual_ChildEvent(void* self, intptr_t slot);
void QCameraImageCapture_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QCameraImageCapture_override_virtual_CustomEvent(void* self, intptr_t slot);
void QCameraImageCapture_virtualbase_CustomEvent(void* self, QEvent* event);
void QCameraImageCapture_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QCameraImageCapture_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QCameraImageCapture_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QCameraImageCapture_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QCameraImageCapture_Delete(QCameraImageCapture* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
