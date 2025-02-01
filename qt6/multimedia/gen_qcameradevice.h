#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QCAMERADEVICE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QCAMERADEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraDevice;
class QCameraFormat;
class QSize;
#else
typedef struct QCameraDevice QCameraDevice;
typedef struct QCameraFormat QCameraFormat;
typedef struct QSize QSize;
#endif

QCameraFormat* QCameraFormat_new();
QCameraFormat* QCameraFormat_new2(QCameraFormat* other);
void QCameraFormat_operatorAssign(QCameraFormat* self, QCameraFormat* other);
int QCameraFormat_pixelFormat(const QCameraFormat* self);
QSize* QCameraFormat_resolution(const QCameraFormat* self);
float QCameraFormat_minFrameRate(const QCameraFormat* self);
float QCameraFormat_maxFrameRate(const QCameraFormat* self);
bool QCameraFormat_isNull(const QCameraFormat* self);
bool QCameraFormat_operatorEqual(const QCameraFormat* self, QCameraFormat* other);
bool QCameraFormat_operatorNotEqual(const QCameraFormat* self, QCameraFormat* other);
void QCameraFormat_delete(QCameraFormat* self);

QCameraDevice* QCameraDevice_new();
QCameraDevice* QCameraDevice_new2(QCameraDevice* other);
void QCameraDevice_operatorAssign(QCameraDevice* self, QCameraDevice* other);
bool QCameraDevice_operatorEqual(const QCameraDevice* self, QCameraDevice* other);
bool QCameraDevice_operatorNotEqual(const QCameraDevice* self, QCameraDevice* other);
bool QCameraDevice_isNull(const QCameraDevice* self);
struct miqt_string QCameraDevice_id(const QCameraDevice* self);
struct miqt_string QCameraDevice_description(const QCameraDevice* self);
bool QCameraDevice_isDefault(const QCameraDevice* self);
int QCameraDevice_position(const QCameraDevice* self);
struct miqt_array /* of QSize* */  QCameraDevice_photoResolutions(const QCameraDevice* self);
struct miqt_array /* of QCameraFormat* */  QCameraDevice_videoFormats(const QCameraDevice* self);
void QCameraDevice_delete(QCameraDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
