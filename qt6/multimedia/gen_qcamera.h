#ifndef GEN_QCAMERA_H
#define GEN_QCAMERA_H

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
class QCameraDevice;
class QCameraFormat;
class QMediaCaptureSession;
class QMetaObject;
class QObject;
class QPointF;
#else
typedef struct QCamera QCamera;
typedef struct QCameraDevice QCameraDevice;
typedef struct QCameraFormat QCameraFormat;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
#endif

QCamera* QCamera_new();
QCamera* QCamera_new2(QCameraDevice* cameraDevice);
QCamera* QCamera_new3(int position);
QCamera* QCamera_new4(QObject* parent);
QCamera* QCamera_new5(QCameraDevice* cameraDevice, QObject* parent);
QCamera* QCamera_new6(int position, QObject* parent);
QMetaObject* QCamera_MetaObject(const QCamera* self);
void* QCamera_Metacast(QCamera* self, const char* param1);
struct miqt_string QCamera_Tr(const char* s);
bool QCamera_IsAvailable(const QCamera* self);
bool QCamera_IsActive(const QCamera* self);
QMediaCaptureSession* QCamera_CaptureSession(const QCamera* self);
QCameraDevice* QCamera_CameraDevice(const QCamera* self);
void QCamera_SetCameraDevice(QCamera* self, QCameraDevice* cameraDevice);
QCameraFormat* QCamera_CameraFormat(const QCamera* self);
void QCamera_SetCameraFormat(QCamera* self, QCameraFormat* format);
int QCamera_Error(const QCamera* self);
struct miqt_string QCamera_ErrorString(const QCamera* self);
int QCamera_SupportedFeatures(const QCamera* self);
int QCamera_FocusMode(const QCamera* self);
void QCamera_SetFocusMode(QCamera* self, int mode);
bool QCamera_IsFocusModeSupported(const QCamera* self, int mode);
QPointF* QCamera_FocusPoint(const QCamera* self);
QPointF* QCamera_CustomFocusPoint(const QCamera* self);
void QCamera_SetCustomFocusPoint(QCamera* self, QPointF* point);
void QCamera_SetFocusDistance(QCamera* self, float d);
float QCamera_FocusDistance(const QCamera* self);
float QCamera_MinimumZoomFactor(const QCamera* self);
float QCamera_MaximumZoomFactor(const QCamera* self);
float QCamera_ZoomFactor(const QCamera* self);
void QCamera_SetZoomFactor(QCamera* self, float factor);
int QCamera_FlashMode(const QCamera* self);
bool QCamera_IsFlashModeSupported(const QCamera* self, int mode);
bool QCamera_IsFlashReady(const QCamera* self);
int QCamera_TorchMode(const QCamera* self);
bool QCamera_IsTorchModeSupported(const QCamera* self, int mode);
int QCamera_ExposureMode(const QCamera* self);
bool QCamera_IsExposureModeSupported(const QCamera* self, int mode);
float QCamera_ExposureCompensation(const QCamera* self);
int QCamera_IsoSensitivity(const QCamera* self);
int QCamera_ManualIsoSensitivity(const QCamera* self);
float QCamera_ExposureTime(const QCamera* self);
float QCamera_ManualExposureTime(const QCamera* self);
int QCamera_MinimumIsoSensitivity(const QCamera* self);
int QCamera_MaximumIsoSensitivity(const QCamera* self);
float QCamera_MinimumExposureTime(const QCamera* self);
float QCamera_MaximumExposureTime(const QCamera* self);
int QCamera_WhiteBalanceMode(const QCamera* self);
bool QCamera_IsWhiteBalanceModeSupported(const QCamera* self, int mode);
int QCamera_ColorTemperature(const QCamera* self);
void QCamera_SetActive(QCamera* self, bool active);
void QCamera_Start(QCamera* self);
void QCamera_Stop(QCamera* self);
void QCamera_ZoomTo(QCamera* self, float zoom, float rate);
void QCamera_SetFlashMode(QCamera* self, int mode);
void QCamera_SetTorchMode(QCamera* self, int mode);
void QCamera_SetExposureMode(QCamera* self, int mode);
void QCamera_SetExposureCompensation(QCamera* self, float ev);
void QCamera_SetManualIsoSensitivity(QCamera* self, int iso);
void QCamera_SetAutoIsoSensitivity(QCamera* self);
void QCamera_SetManualExposureTime(QCamera* self, float seconds);
void QCamera_SetAutoExposureTime(QCamera* self);
void QCamera_SetWhiteBalanceMode(QCamera* self, int mode);
void QCamera_SetColorTemperature(QCamera* self, int colorTemperature);
void QCamera_ActiveChanged(QCamera* self, bool param1);
void QCamera_connect_ActiveChanged(QCamera* self, intptr_t slot);
void QCamera_ErrorChanged(QCamera* self);
void QCamera_connect_ErrorChanged(QCamera* self, intptr_t slot);
void QCamera_ErrorOccurred(QCamera* self, int error, struct miqt_string errorString);
void QCamera_connect_ErrorOccurred(QCamera* self, intptr_t slot);
void QCamera_CameraDeviceChanged(QCamera* self);
void QCamera_connect_CameraDeviceChanged(QCamera* self, intptr_t slot);
void QCamera_CameraFormatChanged(QCamera* self);
void QCamera_connect_CameraFormatChanged(QCamera* self, intptr_t slot);
void QCamera_SupportedFeaturesChanged(QCamera* self);
void QCamera_connect_SupportedFeaturesChanged(QCamera* self, intptr_t slot);
void QCamera_FocusModeChanged(QCamera* self);
void QCamera_connect_FocusModeChanged(QCamera* self, intptr_t slot);
void QCamera_ZoomFactorChanged(QCamera* self, float param1);
void QCamera_connect_ZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_MinimumZoomFactorChanged(QCamera* self, float param1);
void QCamera_connect_MinimumZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_MaximumZoomFactorChanged(QCamera* self, float param1);
void QCamera_connect_MaximumZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_FocusDistanceChanged(QCamera* self, float param1);
void QCamera_connect_FocusDistanceChanged(QCamera* self, intptr_t slot);
void QCamera_FocusPointChanged(QCamera* self);
void QCamera_connect_FocusPointChanged(QCamera* self, intptr_t slot);
void QCamera_CustomFocusPointChanged(QCamera* self);
void QCamera_connect_CustomFocusPointChanged(QCamera* self, intptr_t slot);
void QCamera_FlashReady(QCamera* self, bool param1);
void QCamera_connect_FlashReady(QCamera* self, intptr_t slot);
void QCamera_FlashModeChanged(QCamera* self);
void QCamera_connect_FlashModeChanged(QCamera* self, intptr_t slot);
void QCamera_TorchModeChanged(QCamera* self);
void QCamera_connect_TorchModeChanged(QCamera* self, intptr_t slot);
void QCamera_ExposureTimeChanged(QCamera* self, float speed);
void QCamera_connect_ExposureTimeChanged(QCamera* self, intptr_t slot);
void QCamera_ManualExposureTimeChanged(QCamera* self, float speed);
void QCamera_connect_ManualExposureTimeChanged(QCamera* self, intptr_t slot);
void QCamera_IsoSensitivityChanged(QCamera* self, int param1);
void QCamera_connect_IsoSensitivityChanged(QCamera* self, intptr_t slot);
void QCamera_ManualIsoSensitivityChanged(QCamera* self, int param1);
void QCamera_connect_ManualIsoSensitivityChanged(QCamera* self, intptr_t slot);
void QCamera_ExposureCompensationChanged(QCamera* self, float param1);
void QCamera_connect_ExposureCompensationChanged(QCamera* self, intptr_t slot);
void QCamera_ExposureModeChanged(QCamera* self);
void QCamera_connect_ExposureModeChanged(QCamera* self, intptr_t slot);
void QCamera_WhiteBalanceModeChanged(const QCamera* self);
void QCamera_connect_WhiteBalanceModeChanged(QCamera* self, intptr_t slot);
void QCamera_ColorTemperatureChanged(const QCamera* self);
void QCamera_connect_ColorTemperatureChanged(QCamera* self, intptr_t slot);
void QCamera_BrightnessChanged(QCamera* self);
void QCamera_connect_BrightnessChanged(QCamera* self, intptr_t slot);
void QCamera_ContrastChanged(QCamera* self);
void QCamera_connect_ContrastChanged(QCamera* self, intptr_t slot);
void QCamera_SaturationChanged(QCamera* self);
void QCamera_connect_SaturationChanged(QCamera* self, intptr_t slot);
void QCamera_HueChanged(QCamera* self);
void QCamera_connect_HueChanged(QCamera* self, intptr_t slot);
struct miqt_string QCamera_Tr2(const char* s, const char* c);
struct miqt_string QCamera_Tr3(const char* s, const char* c, int n);
void QCamera_Delete(QCamera* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
