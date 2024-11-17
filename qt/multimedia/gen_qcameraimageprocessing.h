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
class QMetaObject;
#else
typedef struct QCameraImageProcessing QCameraImageProcessing;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QCameraImageProcessing_MetaObject(const QCameraImageProcessing* self);
void* QCameraImageProcessing_Metacast(QCameraImageProcessing* self, const char* param1);
struct miqt_string QCameraImageProcessing_Tr(const char* s);
struct miqt_string QCameraImageProcessing_TrUtf8(const char* s);
bool QCameraImageProcessing_IsAvailable(const QCameraImageProcessing* self);
int QCameraImageProcessing_WhiteBalanceMode(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetWhiteBalanceMode(QCameraImageProcessing* self, int mode);
bool QCameraImageProcessing_IsWhiteBalanceModeSupported(const QCameraImageProcessing* self, int mode);
double QCameraImageProcessing_ManualWhiteBalance(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetManualWhiteBalance(QCameraImageProcessing* self, double colorTemperature);
double QCameraImageProcessing_Brightness(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetBrightness(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_Contrast(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetContrast(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_Saturation(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetSaturation(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_SharpeningLevel(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetSharpeningLevel(QCameraImageProcessing* self, double value);
double QCameraImageProcessing_DenoisingLevel(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetDenoisingLevel(QCameraImageProcessing* self, double value);
int QCameraImageProcessing_ColorFilter(const QCameraImageProcessing* self);
void QCameraImageProcessing_SetColorFilter(QCameraImageProcessing* self, int filter);
bool QCameraImageProcessing_IsColorFilterSupported(const QCameraImageProcessing* self, int filter);
struct miqt_string QCameraImageProcessing_Tr2(const char* s, const char* c);
struct miqt_string QCameraImageProcessing_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageProcessing_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraImageProcessing_TrUtf83(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
