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
class QMetaMethod;
class QMetaObject;
class QObject;
class QPointF;
#else
typedef struct QCameraExposure QCameraExposure;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
#endif

void QCameraExposure_virtbase(QCameraExposure* src, QObject** outptr_QObject);
QMetaObject* QCameraExposure_metaObject(const QCameraExposure* self);
void* QCameraExposure_metacast(QCameraExposure* self, const char* param1);
struct miqt_string QCameraExposure_tr(const char* s);
struct miqt_string QCameraExposure_trUtf8(const char* s);
bool QCameraExposure_isAvailable(const QCameraExposure* self);
int QCameraExposure_flashMode(const QCameraExposure* self);
bool QCameraExposure_isFlashModeSupported(const QCameraExposure* self, int mode);
bool QCameraExposure_isFlashReady(const QCameraExposure* self);
int QCameraExposure_exposureMode(const QCameraExposure* self);
bool QCameraExposure_isExposureModeSupported(const QCameraExposure* self, int mode);
double QCameraExposure_exposureCompensation(const QCameraExposure* self);
int QCameraExposure_meteringMode(const QCameraExposure* self);
bool QCameraExposure_isMeteringModeSupported(const QCameraExposure* self, int mode);
QPointF* QCameraExposure_spotMeteringPoint(const QCameraExposure* self);
void QCameraExposure_setSpotMeteringPoint(QCameraExposure* self, QPointF* point);
int QCameraExposure_isoSensitivity(const QCameraExposure* self);
double QCameraExposure_aperture(const QCameraExposure* self);
double QCameraExposure_shutterSpeed(const QCameraExposure* self);
int QCameraExposure_requestedIsoSensitivity(const QCameraExposure* self);
double QCameraExposure_requestedAperture(const QCameraExposure* self);
double QCameraExposure_requestedShutterSpeed(const QCameraExposure* self);
struct miqt_array /* of int */  QCameraExposure_supportedIsoSensitivities(const QCameraExposure* self);
struct miqt_array /* of double */  QCameraExposure_supportedApertures(const QCameraExposure* self);
struct miqt_array /* of double */  QCameraExposure_supportedShutterSpeeds(const QCameraExposure* self);
void QCameraExposure_setFlashMode(QCameraExposure* self, int mode);
void QCameraExposure_setExposureMode(QCameraExposure* self, int mode);
void QCameraExposure_setMeteringMode(QCameraExposure* self, int mode);
void QCameraExposure_setExposureCompensation(QCameraExposure* self, double ev);
void QCameraExposure_setManualIsoSensitivity(QCameraExposure* self, int iso);
void QCameraExposure_setAutoIsoSensitivity(QCameraExposure* self);
void QCameraExposure_setManualAperture(QCameraExposure* self, double aperture);
void QCameraExposure_setAutoAperture(QCameraExposure* self);
void QCameraExposure_setManualShutterSpeed(QCameraExposure* self, double seconds);
void QCameraExposure_setAutoShutterSpeed(QCameraExposure* self);
void QCameraExposure_flashReady(QCameraExposure* self, bool param1);
void QCameraExposure_connect_flashReady(QCameraExposure* self, intptr_t slot);
void QCameraExposure_apertureChanged(QCameraExposure* self, double param1);
void QCameraExposure_connect_apertureChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_apertureRangeChanged(QCameraExposure* self);
void QCameraExposure_connect_apertureRangeChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_shutterSpeedChanged(QCameraExposure* self, double speed);
void QCameraExposure_connect_shutterSpeedChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_shutterSpeedRangeChanged(QCameraExposure* self);
void QCameraExposure_connect_shutterSpeedRangeChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_isoSensitivityChanged(QCameraExposure* self, int param1);
void QCameraExposure_connect_isoSensitivityChanged(QCameraExposure* self, intptr_t slot);
void QCameraExposure_exposureCompensationChanged(QCameraExposure* self, double param1);
void QCameraExposure_connect_exposureCompensationChanged(QCameraExposure* self, intptr_t slot);
struct miqt_string QCameraExposure_tr2(const char* s, const char* c);
struct miqt_string QCameraExposure_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraExposure_trUtf82(const char* s, const char* c);
struct miqt_string QCameraExposure_trUtf83(const char* s, const char* c, int n);
struct miqt_array /* of int */  QCameraExposure_supportedIsoSensitivitiesWithContinuous(const QCameraExposure* self, bool* continuous);
struct miqt_array /* of double */  QCameraExposure_supportedAperturesWithContinuous(const QCameraExposure* self, bool* continuous);
struct miqt_array /* of double */  QCameraExposure_supportedShutterSpeedsWithContinuous(const QCameraExposure* self, bool* continuous);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
