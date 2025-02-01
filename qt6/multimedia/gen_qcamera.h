#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QCAMERA_H
#define MIQT_QT6_MULTIMEDIA_GEN_QCAMERA_H

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
class QChildEvent;
class QEvent;
class QMediaCaptureSession;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPointF;
class QTimerEvent;
#else
typedef struct QCamera QCamera;
typedef struct QCameraDevice QCameraDevice;
typedef struct QCameraFormat QCameraFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimerEvent QTimerEvent;
#endif

QCamera* QCamera_new();
QCamera* QCamera_new2(QCameraDevice* cameraDevice);
QCamera* QCamera_new3(int position);
QCamera* QCamera_new4(QObject* parent);
QCamera* QCamera_new5(QCameraDevice* cameraDevice, QObject* parent);
QCamera* QCamera_new6(int position, QObject* parent);
void QCamera_virtbase(QCamera* src, QObject** outptr_QObject);
QMetaObject* QCamera_metaObject(const QCamera* self);
void* QCamera_metacast(QCamera* self, const char* param1);
struct miqt_string QCamera_tr(const char* s);
bool QCamera_isAvailable(const QCamera* self);
bool QCamera_isActive(const QCamera* self);
QMediaCaptureSession* QCamera_captureSession(const QCamera* self);
QCameraDevice* QCamera_cameraDevice(const QCamera* self);
void QCamera_setCameraDevice(QCamera* self, QCameraDevice* cameraDevice);
QCameraFormat* QCamera_cameraFormat(const QCamera* self);
void QCamera_setCameraFormat(QCamera* self, QCameraFormat* format);
int QCamera_error(const QCamera* self);
struct miqt_string QCamera_errorString(const QCamera* self);
int QCamera_supportedFeatures(const QCamera* self);
int QCamera_focusMode(const QCamera* self);
void QCamera_setFocusMode(QCamera* self, int mode);
bool QCamera_isFocusModeSupported(const QCamera* self, int mode);
QPointF* QCamera_focusPoint(const QCamera* self);
QPointF* QCamera_customFocusPoint(const QCamera* self);
void QCamera_setCustomFocusPoint(QCamera* self, QPointF* point);
void QCamera_setFocusDistance(QCamera* self, float d);
float QCamera_focusDistance(const QCamera* self);
float QCamera_minimumZoomFactor(const QCamera* self);
float QCamera_maximumZoomFactor(const QCamera* self);
float QCamera_zoomFactor(const QCamera* self);
void QCamera_setZoomFactor(QCamera* self, float factor);
int QCamera_flashMode(const QCamera* self);
bool QCamera_isFlashModeSupported(const QCamera* self, int mode);
bool QCamera_isFlashReady(const QCamera* self);
int QCamera_torchMode(const QCamera* self);
bool QCamera_isTorchModeSupported(const QCamera* self, int mode);
int QCamera_exposureMode(const QCamera* self);
bool QCamera_isExposureModeSupported(const QCamera* self, int mode);
float QCamera_exposureCompensation(const QCamera* self);
int QCamera_isoSensitivity(const QCamera* self);
int QCamera_manualIsoSensitivity(const QCamera* self);
float QCamera_exposureTime(const QCamera* self);
float QCamera_manualExposureTime(const QCamera* self);
int QCamera_minimumIsoSensitivity(const QCamera* self);
int QCamera_maximumIsoSensitivity(const QCamera* self);
float QCamera_minimumExposureTime(const QCamera* self);
float QCamera_maximumExposureTime(const QCamera* self);
int QCamera_whiteBalanceMode(const QCamera* self);
bool QCamera_isWhiteBalanceModeSupported(const QCamera* self, int mode);
int QCamera_colorTemperature(const QCamera* self);
void QCamera_setActive(QCamera* self, bool active);
void QCamera_start(QCamera* self);
void QCamera_stop(QCamera* self);
void QCamera_zoomTo(QCamera* self, float zoom, float rate);
void QCamera_setFlashMode(QCamera* self, int mode);
void QCamera_setTorchMode(QCamera* self, int mode);
void QCamera_setExposureMode(QCamera* self, int mode);
void QCamera_setExposureCompensation(QCamera* self, float ev);
void QCamera_setManualIsoSensitivity(QCamera* self, int iso);
void QCamera_setAutoIsoSensitivity(QCamera* self);
void QCamera_setManualExposureTime(QCamera* self, float seconds);
void QCamera_setAutoExposureTime(QCamera* self);
void QCamera_setWhiteBalanceMode(QCamera* self, int mode);
void QCamera_setColorTemperature(QCamera* self, int colorTemperature);
void QCamera_activeChanged(QCamera* self, bool param1);
void QCamera_connect_activeChanged(QCamera* self, intptr_t slot);
void QCamera_errorChanged(QCamera* self);
void QCamera_connect_errorChanged(QCamera* self, intptr_t slot);
void QCamera_errorOccurred(QCamera* self, int error, struct miqt_string errorString);
void QCamera_connect_errorOccurred(QCamera* self, intptr_t slot);
void QCamera_cameraDeviceChanged(QCamera* self);
void QCamera_connect_cameraDeviceChanged(QCamera* self, intptr_t slot);
void QCamera_cameraFormatChanged(QCamera* self);
void QCamera_connect_cameraFormatChanged(QCamera* self, intptr_t slot);
void QCamera_supportedFeaturesChanged(QCamera* self);
void QCamera_connect_supportedFeaturesChanged(QCamera* self, intptr_t slot);
void QCamera_focusModeChanged(QCamera* self);
void QCamera_connect_focusModeChanged(QCamera* self, intptr_t slot);
void QCamera_zoomFactorChanged(QCamera* self, float param1);
void QCamera_connect_zoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_minimumZoomFactorChanged(QCamera* self, float param1);
void QCamera_connect_minimumZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_maximumZoomFactorChanged(QCamera* self, float param1);
void QCamera_connect_maximumZoomFactorChanged(QCamera* self, intptr_t slot);
void QCamera_focusDistanceChanged(QCamera* self, float param1);
void QCamera_connect_focusDistanceChanged(QCamera* self, intptr_t slot);
void QCamera_focusPointChanged(QCamera* self);
void QCamera_connect_focusPointChanged(QCamera* self, intptr_t slot);
void QCamera_customFocusPointChanged(QCamera* self);
void QCamera_connect_customFocusPointChanged(QCamera* self, intptr_t slot);
void QCamera_flashReady(QCamera* self, bool param1);
void QCamera_connect_flashReady(QCamera* self, intptr_t slot);
void QCamera_flashModeChanged(QCamera* self);
void QCamera_connect_flashModeChanged(QCamera* self, intptr_t slot);
void QCamera_torchModeChanged(QCamera* self);
void QCamera_connect_torchModeChanged(QCamera* self, intptr_t slot);
void QCamera_exposureTimeChanged(QCamera* self, float speed);
void QCamera_connect_exposureTimeChanged(QCamera* self, intptr_t slot);
void QCamera_manualExposureTimeChanged(QCamera* self, float speed);
void QCamera_connect_manualExposureTimeChanged(QCamera* self, intptr_t slot);
void QCamera_isoSensitivityChanged(QCamera* self, int param1);
void QCamera_connect_isoSensitivityChanged(QCamera* self, intptr_t slot);
void QCamera_manualIsoSensitivityChanged(QCamera* self, int param1);
void QCamera_connect_manualIsoSensitivityChanged(QCamera* self, intptr_t slot);
void QCamera_exposureCompensationChanged(QCamera* self, float param1);
void QCamera_connect_exposureCompensationChanged(QCamera* self, intptr_t slot);
void QCamera_exposureModeChanged(QCamera* self);
void QCamera_connect_exposureModeChanged(QCamera* self, intptr_t slot);
void QCamera_whiteBalanceModeChanged(const QCamera* self);
void QCamera_connect_whiteBalanceModeChanged(QCamera* self, intptr_t slot);
void QCamera_colorTemperatureChanged(const QCamera* self);
void QCamera_connect_colorTemperatureChanged(QCamera* self, intptr_t slot);
void QCamera_brightnessChanged(QCamera* self);
void QCamera_connect_brightnessChanged(QCamera* self, intptr_t slot);
void QCamera_contrastChanged(QCamera* self);
void QCamera_connect_contrastChanged(QCamera* self, intptr_t slot);
void QCamera_saturationChanged(QCamera* self);
void QCamera_connect_saturationChanged(QCamera* self, intptr_t slot);
void QCamera_hueChanged(QCamera* self);
void QCamera_connect_hueChanged(QCamera* self, intptr_t slot);
struct miqt_string QCamera_tr2(const char* s, const char* c);
struct miqt_string QCamera_tr3(const char* s, const char* c, int n);
bool QCamera_override_virtual_event(void* self, intptr_t slot);
bool QCamera_virtualbase_event(void* self, QEvent* event);
bool QCamera_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCamera_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCamera_override_virtual_timerEvent(void* self, intptr_t slot);
void QCamera_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCamera_override_virtual_childEvent(void* self, intptr_t slot);
void QCamera_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCamera_override_virtual_customEvent(void* self, intptr_t slot);
void QCamera_virtualbase_customEvent(void* self, QEvent* event);
bool QCamera_override_virtual_connectNotify(void* self, intptr_t slot);
void QCamera_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCamera_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCamera_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QCamera_delete(QCamera* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
