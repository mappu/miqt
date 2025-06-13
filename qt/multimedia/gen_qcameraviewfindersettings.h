#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDERSETTINGS_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDERSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraViewfinderSettings;
class QSize;
#else
typedef struct QCameraViewfinderSettings QCameraViewfinderSettings;
typedef struct QSize QSize;
#endif

QCameraViewfinderSettings* QCameraViewfinderSettings_new();
QCameraViewfinderSettings* QCameraViewfinderSettings_new2(QCameraViewfinderSettings* other);
void QCameraViewfinderSettings_operatorAssign(QCameraViewfinderSettings* self, QCameraViewfinderSettings* other);
void QCameraViewfinderSettings_swap(QCameraViewfinderSettings* self, QCameraViewfinderSettings* other);
bool QCameraViewfinderSettings_isNull(const QCameraViewfinderSettings* self);
QSize* QCameraViewfinderSettings_resolution(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_setResolution(QCameraViewfinderSettings* self, QSize* resolution);
void QCameraViewfinderSettings_setResolution2(QCameraViewfinderSettings* self, int width, int height);
double QCameraViewfinderSettings_minimumFrameRate(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_setMinimumFrameRate(QCameraViewfinderSettings* self, double rate);
double QCameraViewfinderSettings_maximumFrameRate(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_setMaximumFrameRate(QCameraViewfinderSettings* self, double rate);
int QCameraViewfinderSettings_pixelFormat(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_setPixelFormat(QCameraViewfinderSettings* self, int format);
QSize* QCameraViewfinderSettings_pixelAspectRatio(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_setPixelAspectRatio(QCameraViewfinderSettings* self, QSize* ratio);
void QCameraViewfinderSettings_setPixelAspectRatio2(QCameraViewfinderSettings* self, int horizontal, int vertical);

void QCameraViewfinderSettings_delete(QCameraViewfinderSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
