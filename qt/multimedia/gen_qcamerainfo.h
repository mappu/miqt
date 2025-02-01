#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAINFO_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCamera;
class QCameraInfo;
#else
typedef struct QCamera QCamera;
typedef struct QCameraInfo QCameraInfo;
#endif

QCameraInfo* QCameraInfo_new();
QCameraInfo* QCameraInfo_new2(QCamera* camera);
QCameraInfo* QCameraInfo_new3(QCameraInfo* other);
QCameraInfo* QCameraInfo_new4(struct miqt_string name);
void QCameraInfo_operatorAssign(QCameraInfo* self, QCameraInfo* other);
bool QCameraInfo_operatorEqual(const QCameraInfo* self, QCameraInfo* other);
bool QCameraInfo_operatorNotEqual(const QCameraInfo* self, QCameraInfo* other);
bool QCameraInfo_isNull(const QCameraInfo* self);
struct miqt_string QCameraInfo_deviceName(const QCameraInfo* self);
struct miqt_string QCameraInfo_description(const QCameraInfo* self);
int QCameraInfo_position(const QCameraInfo* self);
int QCameraInfo_orientation(const QCameraInfo* self);
QCameraInfo* QCameraInfo_defaultCamera();
struct miqt_array /* of QCameraInfo* */  QCameraInfo_availableCameras();
struct miqt_array /* of QCameraInfo* */  QCameraInfo_availableCameras1(int position);
void QCameraInfo_delete(QCameraInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
