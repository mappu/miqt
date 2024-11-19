#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAEXPOSURECONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAEXPOSURECONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraExposureControl;
class QMediaControl;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QCameraExposureControl QCameraExposureControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* QCameraExposureControl_MetaObject(const QCameraExposureControl* self);
void* QCameraExposureControl_Metacast(QCameraExposureControl* self, const char* param1);
struct miqt_string QCameraExposureControl_Tr(const char* s);
struct miqt_string QCameraExposureControl_TrUtf8(const char* s);
bool QCameraExposureControl_IsParameterSupported(const QCameraExposureControl* self, int parameter);
QVariant* QCameraExposureControl_RequestedValue(const QCameraExposureControl* self, int parameter);
QVariant* QCameraExposureControl_ActualValue(const QCameraExposureControl* self, int parameter);
bool QCameraExposureControl_SetValue(QCameraExposureControl* self, int parameter, QVariant* value);
void QCameraExposureControl_RequestedValueChanged(QCameraExposureControl* self, int parameter);
void QCameraExposureControl_connect_RequestedValueChanged(QCameraExposureControl* self, intptr_t slot);
void QCameraExposureControl_ActualValueChanged(QCameraExposureControl* self, int parameter);
void QCameraExposureControl_connect_ActualValueChanged(QCameraExposureControl* self, intptr_t slot);
void QCameraExposureControl_ParameterRangeChanged(QCameraExposureControl* self, int parameter);
void QCameraExposureControl_connect_ParameterRangeChanged(QCameraExposureControl* self, intptr_t slot);
struct miqt_string QCameraExposureControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraExposureControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraExposureControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraExposureControl_TrUtf83(const char* s, const char* c, int n);
void QCameraExposureControl_Delete(QCameraExposureControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
