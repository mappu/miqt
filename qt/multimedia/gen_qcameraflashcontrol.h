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
class QMetaObject;
class QObject;
#else
typedef struct QCameraFlashControl QCameraFlashControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QCameraFlashControl_MetaObject(const QCameraFlashControl* self);
void* QCameraFlashControl_Metacast(QCameraFlashControl* self, const char* param1);
struct miqt_string QCameraFlashControl_Tr(const char* s);
struct miqt_string QCameraFlashControl_TrUtf8(const char* s);
int QCameraFlashControl_FlashMode(const QCameraFlashControl* self);
void QCameraFlashControl_SetFlashMode(QCameraFlashControl* self, int mode);
bool QCameraFlashControl_IsFlashModeSupported(const QCameraFlashControl* self, int mode);
bool QCameraFlashControl_IsFlashReady(const QCameraFlashControl* self);
void QCameraFlashControl_FlashReady(QCameraFlashControl* self, bool param1);
void QCameraFlashControl_connect_FlashReady(QCameraFlashControl* self, intptr_t slot);
struct miqt_string QCameraFlashControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraFlashControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFlashControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraFlashControl_TrUtf83(const char* s, const char* c, int n);
void QCameraFlashControl_Delete(QCameraFlashControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
