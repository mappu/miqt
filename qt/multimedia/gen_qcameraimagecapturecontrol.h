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
class QMetaObject;
class QObject;
class QVariant;
class QVideoFrame;
#else
typedef struct QCameraImageCaptureControl QCameraImageCaptureControl;
typedef struct QImage QImage;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
#endif

void QCameraImageCaptureControl_virtbase(QCameraImageCaptureControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraImageCaptureControl_MetaObject(const QCameraImageCaptureControl* self);
void* QCameraImageCaptureControl_Metacast(QCameraImageCaptureControl* self, const char* param1);
struct miqt_string QCameraImageCaptureControl_Tr(const char* s);
struct miqt_string QCameraImageCaptureControl_TrUtf8(const char* s);
bool QCameraImageCaptureControl_IsReadyForCapture(const QCameraImageCaptureControl* self);
int QCameraImageCaptureControl_DriveMode(const QCameraImageCaptureControl* self);
void QCameraImageCaptureControl_SetDriveMode(QCameraImageCaptureControl* self, int mode);
int QCameraImageCaptureControl_Capture(QCameraImageCaptureControl* self, struct miqt_string fileName);
void QCameraImageCaptureControl_CancelCapture(QCameraImageCaptureControl* self);
void QCameraImageCaptureControl_ReadyForCaptureChanged(QCameraImageCaptureControl* self, bool ready);
void QCameraImageCaptureControl_connect_ReadyForCaptureChanged(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_ImageExposed(QCameraImageCaptureControl* self, int requestId);
void QCameraImageCaptureControl_connect_ImageExposed(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_ImageCaptured(QCameraImageCaptureControl* self, int requestId, QImage* preview);
void QCameraImageCaptureControl_connect_ImageCaptured(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_ImageMetadataAvailable(QCameraImageCaptureControl* self, int id, struct miqt_string key, QVariant* value);
void QCameraImageCaptureControl_connect_ImageMetadataAvailable(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_ImageAvailable(QCameraImageCaptureControl* self, int requestId, QVideoFrame* buffer);
void QCameraImageCaptureControl_connect_ImageAvailable(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_ImageSaved(QCameraImageCaptureControl* self, int requestId, struct miqt_string fileName);
void QCameraImageCaptureControl_connect_ImageSaved(QCameraImageCaptureControl* self, intptr_t slot);
void QCameraImageCaptureControl_Error(QCameraImageCaptureControl* self, int id, int error, struct miqt_string errorString);
void QCameraImageCaptureControl_connect_Error(QCameraImageCaptureControl* self, intptr_t slot);
struct miqt_string QCameraImageCaptureControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraImageCaptureControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageCaptureControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraImageCaptureControl_TrUtf83(const char* s, const char* c, int n);
void QCameraImageCaptureControl_Delete(QCameraImageCaptureControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
