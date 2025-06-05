#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAINFOCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAINFOCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraInfoControl;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCameraInfoControl QCameraInfoControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraInfoControl_virtbase(QCameraInfoControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraInfoControl_metaObject(const QCameraInfoControl* self);
void* QCameraInfoControl_metacast(QCameraInfoControl* self, const char* param1);
struct miqt_string QCameraInfoControl_tr(const char* s);
struct miqt_string QCameraInfoControl_trUtf8(const char* s);
int QCameraInfoControl_cameraPosition(const QCameraInfoControl* self, struct miqt_string deviceName);
int QCameraInfoControl_cameraOrientation(const QCameraInfoControl* self, struct miqt_string deviceName);
struct miqt_string QCameraInfoControl_tr2(const char* s, const char* c);
struct miqt_string QCameraInfoControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraInfoControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraInfoControl_trUtf83(const char* s, const char* c, int n);

void QCameraInfoControl_delete(QCameraInfoControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
