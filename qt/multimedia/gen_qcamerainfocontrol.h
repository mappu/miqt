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
class QMetaObject;
class QObject;
#else
typedef struct QCameraInfoControl QCameraInfoControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraInfoControl_virtbase(QCameraInfoControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraInfoControl_MetaObject(const QCameraInfoControl* self);
void* QCameraInfoControl_Metacast(QCameraInfoControl* self, const char* param1);
struct miqt_string QCameraInfoControl_Tr(const char* s);
struct miqt_string QCameraInfoControl_TrUtf8(const char* s);
int QCameraInfoControl_CameraPosition(const QCameraInfoControl* self, struct miqt_string deviceName);
int QCameraInfoControl_CameraOrientation(const QCameraInfoControl* self, struct miqt_string deviceName);
struct miqt_string QCameraInfoControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraInfoControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraInfoControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraInfoControl_TrUtf83(const char* s, const char* c, int n);
void QCameraInfoControl_Delete(QCameraInfoControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
