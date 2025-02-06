#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGEPROCESSINGCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAIMAGEPROCESSINGCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraImageProcessingControl;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QCameraImageProcessingControl QCameraImageProcessingControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QCameraImageProcessingControl_virtbase(QCameraImageProcessingControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraImageProcessingControl_metaObject(const QCameraImageProcessingControl* self);
void* QCameraImageProcessingControl_metacast(QCameraImageProcessingControl* self, const char* param1);
struct miqt_string QCameraImageProcessingControl_tr(const char* s);
struct miqt_string QCameraImageProcessingControl_trUtf8(const char* s);
bool QCameraImageProcessingControl_isParameterSupported(const QCameraImageProcessingControl* self, int param1);
bool QCameraImageProcessingControl_isParameterValueSupported(const QCameraImageProcessingControl* self, int parameter, QVariant* value);
QVariant* QCameraImageProcessingControl_parameter(const QCameraImageProcessingControl* self, int parameter);
void QCameraImageProcessingControl_setParameter(QCameraImageProcessingControl* self, int parameter, QVariant* value);
struct miqt_string QCameraImageProcessingControl_tr2(const char* s, const char* c);
struct miqt_string QCameraImageProcessingControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageProcessingControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraImageProcessingControl_trUtf83(const char* s, const char* c, int n);
void QCameraImageProcessingControl_delete(QCameraImageProcessingControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
