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
class QMetaObject;
class QObject;
#else
typedef struct QCameraCaptureDestinationControl QCameraCaptureDestinationControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraCaptureDestinationControl_virtbase(QCameraCaptureDestinationControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraCaptureDestinationControl_MetaObject(const QCameraCaptureDestinationControl* self);
void* QCameraCaptureDestinationControl_Metacast(QCameraCaptureDestinationControl* self, const char* param1);
struct miqt_string QCameraCaptureDestinationControl_Tr(const char* s);
struct miqt_string QCameraCaptureDestinationControl_TrUtf8(const char* s);
bool QCameraCaptureDestinationControl_IsCaptureDestinationSupported(const QCameraCaptureDestinationControl* self, int destination);
int QCameraCaptureDestinationControl_CaptureDestination(const QCameraCaptureDestinationControl* self);
void QCameraCaptureDestinationControl_SetCaptureDestination(QCameraCaptureDestinationControl* self, int destination);
void QCameraCaptureDestinationControl_CaptureDestinationChanged(QCameraCaptureDestinationControl* self, int destination);
void QCameraCaptureDestinationControl_connect_CaptureDestinationChanged(QCameraCaptureDestinationControl* self, intptr_t slot);
struct miqt_string QCameraCaptureDestinationControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraCaptureDestinationControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraCaptureDestinationControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraCaptureDestinationControl_TrUtf83(const char* s, const char* c, int n);
void QCameraCaptureDestinationControl_Delete(QCameraCaptureDestinationControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
