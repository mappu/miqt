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

QImageCapture* QImageCapture_new();
QImageCapture* QImageCapture_new2(QObject* parent);
void QImageCapture_virtbase(QImageCapture* src, QObject** outptr_QObject);
QMetaObject* QImageCapture_metaObject(const QImageCapture* self);
void* QImageCapture_metacast(QImageCapture* self, const char* param1);
struct miqt_string QImageCapture_tr(const char* s);
bool QImageCapture_isAvailable(const QImageCapture* self);
QMediaCaptureSession* QImageCapture_captureSession(const QImageCapture* self);
int QImageCapture_error(const QImageCapture* self);
struct miqt_string QImageCapture_errorString(const QImageCapture* self);
bool QImageCapture_isReadyForCapture(const QImageCapture* self);
int QImageCapture_fileFormat(const QImageCapture* self);
void QImageCapture_setFileFormat(QImageCapture* self, int format);
struct miqt_array /* of int */  QImageCapture_supportedFormats();
struct miqt_string QImageCapture_fileFormatName(int c);
struct miqt_string QImageCapture_fileFormatDescription(int c);
QSize* QImageCapture_resolution(const QImageCapture* self);
void QImageCapture_setResolution(QImageCapture* self, QSize* resolution);
void QImageCapture_setResolution2(QImageCapture* self, int width, int height);
int QImageCapture_quality(const QImageCapture* self);
void QImageCapture_setQuality(QImageCapture* self, int quality);
QMediaMetaData* QImageCapture_metaData(const QImageCapture* self);
void QImageCapture_setMetaData(QImageCapture* self, QMediaMetaData* metaData);
void QImageCapture_addMetaData(QImageCapture* self, QMediaMetaData* metaData);
int QImageCapture_captureToFile(QImageCapture* self);
int QImageCapture_capture(QImageCapture* self);
void QImageCapture_errorChanged(QImageCapture* self);
void QImageCapture_connect_errorChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_errorOccurred(QImageCapture* self, int id, int error, struct miqt_string errorString);
void QImageCapture_connect_errorOccurred(QImageCapture* self, intptr_t slot);
void QImageCapture_readyForCaptureChanged(QImageCapture* self, bool ready);
void QImageCapture_connect_readyForCaptureChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_metaDataChanged(QImageCapture* self);
void QImageCapture_connect_metaDataChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_fileFormatChanged(QImageCapture* self);
void QImageCapture_connect_fileFormatChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_qualityChanged(QImageCapture* self);
void QImageCapture_connect_qualityChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_resolutionChanged(QImageCapture* self);
void QImageCapture_connect_resolutionChanged(QImageCapture* self, intptr_t slot);
void QImageCapture_imageExposed(QImageCapture* self, int id);
void QImageCapture_connect_imageExposed(QImageCapture* self, intptr_t slot);
void QImageCapture_imageCaptured(QImageCapture* self, int id, QImage* preview);
void QImageCapture_connect_imageCaptured(QImageCapture* self, intptr_t slot);
void QImageCapture_imageMetadataAvailable(QImageCapture* self, int id, QMediaMetaData* metaData);
void QImageCapture_connect_imageMetadataAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_imageAvailable(QImageCapture* self, int id, QVideoFrame* frame);
void QImageCapture_connect_imageAvailable(QImageCapture* self, intptr_t slot);
void QImageCapture_imageSaved(QImageCapture* self, int id, struct miqt_string fileName);
void QImageCapture_connect_imageSaved(QImageCapture* self, intptr_t slot);
struct miqt_string QImageCapture_tr2(const char* s, const char* c);
struct miqt_string QImageCapture_tr3(const char* s, const char* c, int n);
int QImageCapture_captureToFile1(QImageCapture* self, struct miqt_string location);
bool QImageCapture_override_virtual_event(void* self, intptr_t slot);
bool QImageCapture_virtualbase_event(void* self, QEvent* event);
bool QImageCapture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QImageCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QImageCapture_override_virtual_timerEvent(void* self, intptr_t slot);
void QImageCapture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QImageCapture_override_virtual_childEvent(void* self, intptr_t slot);
void QImageCapture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QImageCapture_override_virtual_customEvent(void* self, intptr_t slot);
void QImageCapture_virtualbase_customEvent(void* self, QEvent* event);
bool QImageCapture_override_virtual_connectNotify(void* self, intptr_t slot);
void QImageCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QImageCapture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QImageCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QImageCapture_delete(QImageCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
