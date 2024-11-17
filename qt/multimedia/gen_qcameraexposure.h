#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAEXPOSURE_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAEXPOSURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraExposure;
class QMetaObject;
class QPointF;
#else
typedef struct QCameraExposure QCameraExposure;
typedef struct QMetaObject QMetaObject;
typedef struct QPointF QPointF;
#endif

QMetaObject* QCameraExposure_MetaObject(const QCameraExposure* self);
void* QCameraExposure_Metacast(QCameraExposure* self, const char* param1);
struct miqt_string QCameraExposure_Tr(const char* s);
struct miqt_string QCameraExposure_TrUtf8(const char* s);
bool QCameraExposure_IsAvailable(const QCameraExposure* self);
int QCameraExposure_FlashMode(const QCameraExposure* self);
bool QCameraExposure_IsFlashModeSupported(const QCameraExposure* self, int mode);
bool QCameraExposure_IsFlashReady(const QCameraExposure* self);
int QCameraExposure_ExposureMode(const QCameraExposure* self);
bool QCameraExposure_IsExposureModeSupported(const QCameraExposure* self, int mode);
double QCameraExposure_ExposureCompensation(const QCameraExposure* self);
int QCameraExposure_MeteringMode(const QCameraExposure* self);
bool QCameraExposure_IsMeteringModeSupported(const QCameraExposure* self, int mode);
QPointF* QCameraExposure_SpotMeteringPoint(const QCameraExposure* self);
void QCameraExposure_SetSpotMeteringPoint(QCameraExposure* self, QPointF* point);
int QCameraExposure_IsoSensitivity(const QCameraExposure* self);
double QCameraExposure_Aperture(const QCameraExposure* self);
double QCameraExposure_ShutterSpeed(const QCameraExposure* self);
int QCameraExposure_RequestedIsoSensitivity(const QCameraExposure* self);
double QCameraExposure_RequestedAperture(const QCameraExposure* self);
double QCameraExposure_RequestedShutterSpeed(const QCameraExposure* self);
struct miqt_array /* of int */  QCameraExposure_SupportedIsoSensitivities(const QCameraExposure* self);
struct miqt_array /* of double */  QCameraExposure_SupportedApertures(const QCameraExposure* self);
struct miqt_array /* of double */  QCameraExposure_SupportedShutterSpeeds(const QCameraExposure* self);
void QCameraExposure_SetFlashMode(QCameraExposure* self, int mode);
void QCameraExposure_SetExposureMode(QCameraExposure* self, int mode);
void QCameraExposure_SetMeteringMode(QCameraExposure* self, int mode);
void QCameraExposure_SetExposureCompensation(QCameraExposure* self, double ev);
void QCameraExposure_SetManualIsoSensitivity(QCameraExposure* self, int iso);
void QCameraExposure_SetAutoIsoSensitivity(QCameraExposure* self);
void QCameraExposure_SetManualAperture(QCameraExposure* self, double aperture);
void QCameraExposure_SetAutoAperture(QCameraExposure* self);
void QCameraExposure_SetManualShutterSpeed(QCameraExposure* self, double seconds);
void QCameraExposure_SetAutoShutterSpeed(QCameraExposure* self);
void QCameraExposure_FlashReady(QCameraExposure* self, bool param1);
void QCameraExposure_connect_FlashReady(QCameraExposure* self, intptr_t slot);
void QCameraExposure_ApertureChanged(QCameraExposure* self, double param1);
void QCameraExposure_connect_ApertureChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_ApertureRangeChanged(QCameraExposure* self);
void QCameraExposure_connect_ApertureRangeChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_ShutterSpeedChanged(QCameraExposure* self, double speed);
void QCameraExposure_connect_ShutterSpeedChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_ShutterSpeedRangeChanged(QCameraExposure* self);
void QCameraExposure_connect_ShutterSpeedRangeChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_IsoSensitivityChanged(QCameraExposure* self, int param1);
void QCameraExposure_connect_IsoSensitivityChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_ExposureCompensationChanged(QCameraExposure* self, double param1);
void QCameraExposure_connect_ExposureCompensationChanged(QCameraExposure* self, intptr_t slot);
struct miqt_string QCameraExposure_Tr2(const char* s, const char* c);
struct miqt_string QCameraExposure_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraExposure_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraExposure_TrUtf83(const char* s, const char* c, int n);
struct miqt_array /* of int */  QCameraExposure_SupportedIsoSensitivities1(const QCameraExposure* self, bool* continuous);
struct miqt_array /* of double */  QCameraExposure_SupportedApertures1(const QCameraExposure* self, bool* continuous);
struct miqt_array /* of double */  QCameraExposure_SupportedShutterSpeeds1(const QCameraExposure* self, bool* continuous);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
