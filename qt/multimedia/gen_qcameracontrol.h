#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERACONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERACONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraControl;
class QMediaControl;
class QMetaObject;
class QObject;
#else
typedef struct QCameraControl QCameraControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QCameraControl_MetaObject(const QCameraControl* self);
void* QCameraControl_Metacast(QCameraControl* self, const char* param1);
struct miqt_string QCameraControl_Tr(const char* s);
struct miqt_string QCameraControl_TrUtf8(const char* s);
int QCameraControl_State(const QCameraControl* self);
void QCameraControl_SetState(QCameraControl* self, int state);
int QCameraControl_Status(const QCameraControl* self);
int QCameraControl_CaptureMode(const QCameraControl* self);
void QCameraControl_SetCaptureMode(QCameraControl* self, int captureMode);
bool QCameraControl_IsCaptureModeSupported(const QCameraControl* self, int mode);
bool QCameraControl_CanChangeProperty(const QCameraControl* self, int changeType, int status);
void QCameraControl_StateChanged(QCameraControl* self, int param1);
void QCameraControl_connect_StateChanged(QCameraControl* self, intptr_t slot);
void QCameraControl_StatusChanged(QCameraControl* self, int param1);
void QCameraControl_connect_StatusChanged(QCameraControl* self, intptr_t slot);
void QCameraControl_Error(QCameraControl* self, int error, struct miqt_string errorString);
void QCameraControl_connect_Error(QCameraControl* self, intptr_t slot);
void QCameraControl_CaptureModeChanged(QCameraControl* self, int mode);
void QCameraControl_connect_CaptureModeChanged(QCameraControl* self, intptr_t slot);
struct miqt_string QCameraControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraControl_TrUtf83(const char* s, const char* c, int n);
void QCameraControl_Delete(QCameraControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
