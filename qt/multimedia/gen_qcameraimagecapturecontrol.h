#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGECAPTURECONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGECAPTURECONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraImageCaptureControl;
class QImage;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QVariant;
class QVideoFrame;
#else
typedef struct QCameraImageCaptureControl QCameraImageCaptureControl;
typedef struct QImage QImage;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
#endif

void QCameraImageCaptureControl_virtbase(QCameraImageCaptureControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraImageCaptureControl_metaObject(const QCameraImageCaptureControl* self);
void* QCameraImageCaptureControl_metacast(QCameraImageCaptureControl* self, const char* param1);
struct miqt_string QCameraImageCaptureControl_tr(const char* s);
struct miqt_string QCameraImageCaptureControl_trUtf8(const char* s);
bool QCameraImageCaptureControl_isReadyForCapture(const QCameraImageCaptureControl* self);
int QCameraImageCaptureControl_driveMode(const QCameraImageCaptureControl* self);
void QCameraImageCaptureControl_setDriveMode(QCameraImageCaptureControl* self, int mode);
int QCameraImageCaptureControl_capture(QCameraImageCaptureControl* self, struct miqt_string fileName);
void QCameraImageCaptureControl_cancelCapture(QCameraImageCaptureControl* self);
void QCameraImageCaptureControl_readyForCaptureChanged(QCameraImageCaptureControl* self, bool ready);
void QCameraImageCaptureControl_connect_readyForCaptureChanged(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_imageExposed(QCameraImageCaptureControl* self, int requestId);
void QCameraImageCaptureControl_connect_imageExposed(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_imageCaptured(QCameraImageCaptureControl* self, int requestId, QImage* preview);
void QCameraImageCaptureControl_connect_imageCaptured(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_imageMetadataAvailable(QCameraImageCaptureControl* self, int id, struct miqt_string key, QVariant* value);
void QCameraImageCaptureControl_connect_imageMetadataAvailable(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_imageAvailable(QCameraImageCaptureControl* self, int requestId, QVideoFrame* buffer);
void QCameraImageCaptureControl_connect_imageAvailable(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_imageSaved(QCameraImageCaptureControl* self, int requestId, struct miqt_string fileName);
void QCameraImageCaptureControl_connect_imageSaved(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_error(QCameraImageCaptureControl* self, int id, int error, struct miqt_string errorString);
void QCameraImageCaptureControl_connect_error(QCameraImageCaptureControl* self, intptr_t slot);
struct miqt_string QCameraImageCaptureControl_tr2(const char* s, const char* c);
struct miqt_string QCameraImageCaptureControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageCaptureControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraImageCaptureControl_trUtf83(const char* s, const char* c, int n);
void QCameraImageCaptureControl_delete(QCameraImageCaptureControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
