#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAFLASHCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAFLASHCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraFlashControl;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCameraFlashControl QCameraFlashControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraFlashControl_virtbase(QCameraFlashControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraFlashControl_metaObject(const QCameraFlashControl* self);
void* QCameraFlashControl_metacast(QCameraFlashControl* self, const char* param1);
struct miqt_string QCameraFlashControl_tr(const char* s);
struct miqt_string QCameraFlashControl_trUtf8(const char* s);
int QCameraFlashControl_flashMode(const QCameraFlashControl* self);
void QCameraFlashControl_setFlashMode(QCameraFlashControl* self, int mode);
bool QCameraFlashControl_isFlashModeSupported(const QCameraFlashControl* self, int mode);
bool QCameraFlashControl_isFlashReady(const QCameraFlashControl* self);
void QCameraFlashControl_flashReady(QCameraFlashControl* self, bool param1);
void QCameraFlashControl_connect_flashReady(QCameraFlashControl* self, intptr_t slot);
struct miqt_string QCameraFlashControl_tr2(const char* s, const char* c);
struct miqt_string QCameraFlashControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFlashControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraFlashControl_trUtf83(const char* s, const char* c, int n);
void QCameraFlashControl_delete(QCameraFlashControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
