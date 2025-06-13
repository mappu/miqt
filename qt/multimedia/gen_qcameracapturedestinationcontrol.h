#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERACAPTUREDESTINATIONCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERACAPTUREDESTINATIONCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraCaptureDestinationControl;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCameraCaptureDestinationControl QCameraCaptureDestinationControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraCaptureDestinationControl_virtbase(QCameraCaptureDestinationControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraCaptureDestinationControl_metaObject(const QCameraCaptureDestinationControl* self);
void* QCameraCaptureDestinationControl_metacast(QCameraCaptureDestinationControl* self, const char* param1);
struct miqt_string QCameraCaptureDestinationControl_tr(const char* s);
struct miqt_string QCameraCaptureDestinationControl_trUtf8(const char* s);
bool QCameraCaptureDestinationControl_isCaptureDestinationSupported(const QCameraCaptureDestinationControl* self, int destination);
int QCameraCaptureDestinationControl_captureDestination(const QCameraCaptureDestinationControl* self);
void QCameraCaptureDestinationControl_setCaptureDestination(QCameraCaptureDestinationControl* self, int destination);
void QCameraCaptureDestinationControl_captureDestinationChanged(QCameraCaptureDestinationControl* self, int destination);
void QCameraCaptureDestinationControl_connect_captureDestinationChanged(QCameraCaptureDestinationControl* self, intptr_t slot);
struct miqt_string QCameraCaptureDestinationControl_tr2(const char* s, const char* c);
struct miqt_string QCameraCaptureDestinationControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraCaptureDestinationControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraCaptureDestinationControl_trUtf83(const char* s, const char* c, int n);

void QCameraCaptureDestinationControl_delete(QCameraCaptureDestinationControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
