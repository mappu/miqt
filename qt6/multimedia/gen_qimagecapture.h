#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QIMAGECAPTURE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QIMAGECAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QImage;
class QImageCapture;
class QMediaCaptureSession;
class QMediaMetaData;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTimerEvent;
class QVideoFrame;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QImageCapture QImageCapture;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVideoFrame QVideoFrame;
#endif

void QImageCapture_new(QImageCapture** outptr_QImageCapture, QObject** outptr_QObject);
void QImageCapture_new2(QObject* parent, QImageCapture** outptr_QImageCapture, QObject** outptr_QObject);
QMetaObject* QImageCapture_MetaObject(const QImageCapture* self);
void* QImageCapture_Metacast(QImageCapture* self, const char* param1);
struct miqt_string QImageCapture_Tr(const char* s);
bool QImageCapture_IsAvailable(const QImageCapture* self);
QMediaCaptureSession* QImageCapture_CaptureSession(const QImageCapture* self);
int QImageCapture_Error(const QImageCapture* self);
struct miqt_string QImageCapture_ErrorString(const QImageCapture* self);
bool QImageCapture_IsReadyForCapture(const QImageCapture* self);
int QImageCapture_FileFormat(const QImageCapture* self);
void QImageCapture_SetFileFormat(QImageCapture* self, int format);
struct miqt_array /* of int */  QImageCapture_SupportedFormats();
struct miqt_string QImageCapture_FileFormatName(int c);
struct miqt_string QImageCapture_FileFormatDescription(int c);
QSize* QImageCapture_Resolution(const QImageCapture* self);
void QImageCapture_SetResolution(QImageCapture* self, QSize* resolution);
void QImageCapture_SetResolution2(QImageCapture* self, int width, int height);
int QImageCapture_Quality(const QImageCapture* self);
void QImageCapture_SetQuality(QImageCapture* self, int quality);
QMediaMetaData* QImageCapture_MetaData(const QImageCapture* self);
void QImageCapture_SetMetaData(QImageCapture* self, QMediaMetaData* metaData);
void QImageCapture_AddMetaData(QImageCapture* self, QMediaMetaData* metaData);
int QImageCapture_CaptureToFile(QImageCapture* self);
int QImageCapture_Capture(QImageCapture* self);
void QImageCapture_ErrorChanged(QImageCapture* self);
void QImageCapture_connect_ErrorChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ErrorOccurred(QImageCapture* self, int id, int error, struct miqt_string errorString);
void QImageCapture_connect_ErrorOccurred(QImageCapture* self, intptr_t slot);
void QImageCapture_ReadyForCaptureChanged(QImageCapture* self, bool ready);
void QImageCapture_connect_ReadyForCaptureChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_MetaDataChanged(QImageCapture* self);
void QImageCapture_connect_MetaDataChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_FileFormatChanged(QImageCapture* self);
void QImageCapture_connect_FileFormatChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_QualityChanged(QImageCapture* self);
void QImageCapture_connect_QualityChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ResolutionChanged(QImageCapture* self);
void QImageCapture_connect_ResolutionChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageExposed(QImageCapture* self, int id);
void QImageCapture_connect_ImageExposed(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageCaptured(QImageCapture* self, int id, QImage* preview);
void QImageCapture_connect_ImageCaptured(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageMetadataAvailable(QImageCapture* self, int id, QMediaMetaData* metaData);
void QImageCapture_connect_ImageMetadataAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageAvailable(QImageCapture* self, int id, QVideoFrame* frame);
void QImageCapture_connect_ImageAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_ImageSaved(QImageCapture* self, int id, struct miqt_string fileName);
void QImageCapture_connect_ImageSaved(QImageCapture* self, intptr_t slot);
struct miqt_string QImageCapture_Tr2(const char* s, const char* c);
struct miqt_string QImageCapture_Tr3(const char* s, const char* c, int n);
int QImageCapture_CaptureToFile1(QImageCapture* self, struct miqt_string location);
void QImageCapture_override_virtual_Event(void* self, intptr_t slot);
bool QImageCapture_virtualbase_Event(void* self, QEvent* event);
void QImageCapture_override_virtual_EventFilter(void* self, intptr_t slot);
bool QImageCapture_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QImageCapture_override_virtual_TimerEvent(void* self, intptr_t slot);
void QImageCapture_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QImageCapture_override_virtual_ChildEvent(void* self, intptr_t slot);
void QImageCapture_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QImageCapture_override_virtual_CustomEvent(void* self, intptr_t slot);
void QImageCapture_virtualbase_CustomEvent(void* self, QEvent* event);
void QImageCapture_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QImageCapture_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QImageCapture_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QImageCapture_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QImageCapture_Delete(QImageCapture* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
