#ifndef GEN_QCAMERAVIEWFINDERSETTINGS_H
#define GEN_QCAMERAVIEWFINDERSETTINGS_H

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
void QCameraViewfinderSettings_OperatorAssign(QCameraViewfinderSettings* self, QCameraViewfinderSettings* other);
void QCameraViewfinderSettings_Swap(QCameraViewfinderSettings* self, QCameraViewfinderSettings* other);
bool QCameraViewfinderSettings_IsNull(const QCameraViewfinderSettings* self);
QSize* QCameraViewfinderSettings_Resolution(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_SetResolution(QCameraViewfinderSettings* self, QSize* resolution);
void QCameraViewfinderSettings_SetResolution2(QCameraViewfinderSettings* self, int width, int height);
double QCameraViewfinderSettings_MinimumFrameRate(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_SetMinimumFrameRate(QCameraViewfinderSettings* self, double rate);
double QCameraViewfinderSettings_MaximumFrameRate(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_SetMaximumFrameRate(QCameraViewfinderSettings* self, double rate);
int QCameraViewfinderSettings_PixelFormat(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_SetPixelFormat(QCameraViewfinderSettings* self, int format);
QSize* QCameraViewfinderSettings_PixelAspectRatio(const QCameraViewfinderSettings* self);
void QCameraViewfinderSettings_SetPixelAspectRatio(QCameraViewfinderSettings* self, QSize* ratio);
void QCameraViewfinderSettings_SetPixelAspectRatio2(QCameraViewfinderSettings* self, int horizontal, int vertical);
void QCameraViewfinderSettings_Delete(QCameraViewfinderSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
