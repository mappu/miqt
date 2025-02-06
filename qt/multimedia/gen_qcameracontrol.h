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
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCameraControl QCameraControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraControl_virtbase(QCameraControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraControl_metaObject(const QCameraControl* self);
void* QCameraControl_metacast(QCameraControl* self, const char* param1);
struct miqt_string QCameraControl_tr(const char* s);
struct miqt_string QCameraControl_trUtf8(const char* s);
int QCameraControl_state(const QCameraControl* self);
void QCameraControl_setState(QCameraControl* self, int state);
int QCameraControl_status(const QCameraControl* self);
int QCameraControl_captureMode(const QCameraControl* self);
void QCameraControl_setCaptureMode(QCameraControl* self, int captureMode);
bool QCameraControl_isCaptureModeSupported(const QCameraControl* self, int mode);
bool QCameraControl_canChangeProperty(const QCameraControl* self, int changeType, int status);
void QCameraControl_stateChanged(QCameraControl* self, int param1);
void QCameraControl_connect_stateChanged(QCameraControl* self, intptr_t slot);
void QCameraControl_statusChanged(QCameraControl* self, int param1);
void QCameraControl_connect_statusChanged(QCameraControl* self, intptr_t slot);
void QCameraControl_error(QCameraControl* self, int error, struct miqt_string errorString);
void QCameraControl_connect_error(QCameraControl* self, intptr_t slot);
void QCameraControl_captureModeChanged(QCameraControl* self, int mode);
void QCameraControl_connect_captureModeChanged(QCameraControl* self, intptr_t slot);
struct miqt_string QCameraControl_tr2(const char* s, const char* c);
struct miqt_string QCameraControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraControl_trUtf83(const char* s, const char* c, int n);
void QCameraControl_delete(QCameraControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
