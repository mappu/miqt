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
class QByteArray;
class QCameraDevice;
class QCameraFormat;
class QSize;
#else
typedef struct QByteArray QByteArray;
typedef struct QCameraDevice QCameraDevice;
typedef struct QCameraFormat QCameraFormat;
typedef struct QSize QSize;
#endif

void QCameraFormat_new(QCameraFormat** outptr_QCameraFormat);
void QCameraFormat_new2(QCameraFormat* other, QCameraFormat** outptr_QCameraFormat);
void QCameraFormat_OperatorAssign(QCameraFormat* self, QCameraFormat* other);
int QCameraFormat_PixelFormat(const QCameraFormat* self);
QSize* QCameraFormat_Resolution(const QCameraFormat* self);
float QCameraFormat_MinFrameRate(const QCameraFormat* self);
float QCameraFormat_MaxFrameRate(const QCameraFormat* self);
bool QCameraFormat_IsNull(const QCameraFormat* self);
bool QCameraFormat_OperatorEqual(const QCameraFormat* self, QCameraFormat* other);
bool QCameraFormat_OperatorNotEqual(const QCameraFormat* self, QCameraFormat* other);
void QCameraFormat_Delete(QCameraFormat* self, bool isSubclass);

void QCameraDevice_new(QCameraDevice** outptr_QCameraDevice);
void QCameraDevice_new2(QCameraDevice* other, QCameraDevice** outptr_QCameraDevice);
void QCameraDevice_OperatorAssign(QCameraDevice* self, QCameraDevice* other);
bool QCameraDevice_OperatorEqual(const QCameraDevice* self, QCameraDevice* other);
bool QCameraDevice_OperatorNotEqual(const QCameraDevice* self, QCameraDevice* other);
bool QCameraDevice_IsNull(const QCameraDevice* self);
struct miqt_string QCameraDevice_Id(const QCameraDevice* self);
struct miqt_string QCameraDevice_Description(const QCameraDevice* self);
bool QCameraDevice_IsDefault(const QCameraDevice* self);
int QCameraDevice_Position(const QCameraDevice* self);
struct miqt_array /* of QSize* */  QCameraDevice_PhotoResolutions(const QCameraDevice* self);
struct miqt_array /* of QCameraFormat* */  QCameraDevice_VideoFormats(const QCameraDevice* self);
void QCameraDevice_Delete(QCameraDevice* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
