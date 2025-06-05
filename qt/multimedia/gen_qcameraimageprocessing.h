#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGEPROCESSING_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGEPROCESSING_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraImageProcessing;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCameraImageProcessing QCameraImageProcessing;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraImageProcessing_virtbase(QCameraImageProcessing* src, QObject** outptr_QObject);
QMetaObject* QCameraImageProcessing_metaObject(const QCameraImageProcessing* self);
void* QCameraImageProcessing_metacast(QCameraImageProcessing* self, const char* param1);
struct miqt_string QCameraImageProcessing_tr(const char* s);
struct miqt_string QCameraImageProcessing_trUtf8(const char* s);
bool QCameraImageProcessing_isAvailable(const QCameraImageProcessing* self);
int QCameraImageProcessing_whiteBalanceMode(const QCameraImageProcessing* self);
void QCameraImageProcessing_setWhiteBalanceMode(QCameraImageProcessing* self, int mode);
bool QCameraImageProcessing_isWhiteBalanceModeSupported(const QCameraImageProcessing* self, int mode);
double QCameraImageProcessing_manualWhiteBalance(const QCameraImageProcessing* self);
void QCameraImageProcessing_setManualWhiteBalance(QCameraImageProcessing* self, double colorTemperature);
double QCameraImageProcessing_brightness(const QCameraImageProcessing* self);
void QCameraImageProcessing_setBrightness(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_contrast(const QCameraImageProcessing* self);
void QCameraImageProcessing_setContrast(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_saturation(const QCameraImageProcessing* self);
void QCameraImageProcessing_setSaturation(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_sharpeningLevel(const QCameraImageProcessing* self);
void QCameraImageProcessing_setSharpeningLevel(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_denoisingLevel(const QCameraImageProcessing* self);
void QCameraImageProcessing_setDenoisingLevel(QCameraImageProcessing* self, double value);
int QCameraImageProcessing_colorFilter(const QCameraImageProcessing* self);
void QCameraImageProcessing_setColorFilter(QCameraImageProcessing* self, int filter);
bool QCameraImageProcessing_isColorFilterSupported(const QCameraImageProcessing* self, int filter);
struct miqt_string QCameraImageProcessing_tr2(const char* s, const char* c);
struct miqt_string QCameraImageProcessing_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageProcessing_trUtf82(const char* s, const char* c);
struct miqt_string QCameraImageProcessing_trUtf83(const char* s, const char* c, int n);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
