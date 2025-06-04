#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDERSETTINGSCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDERSETTINGSCONTROL_H

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
class QCameraViewfinderSettingsControl;
class QCameraViewfinderSettingsControl2;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QCameraViewfinderSettings QCameraViewfinderSettings;
typedef struct QCameraViewfinderSettingsControl QCameraViewfinderSettingsControl;
typedef struct QCameraViewfinderSettingsControl2 QCameraViewfinderSettingsControl2;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QCameraViewfinderSettingsControl_virtbase(QCameraViewfinderSettingsControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraViewfinderSettingsControl_metaObject(const QCameraViewfinderSettingsControl* self);
void* QCameraViewfinderSettingsControl_metacast(QCameraViewfinderSettingsControl* self, const char* param1);
struct miqt_string QCameraViewfinderSettingsControl_tr(const char* s);
struct miqt_string QCameraViewfinderSettingsControl_trUtf8(const char* s);
bool QCameraViewfinderSettingsControl_isViewfinderParameterSupported(const QCameraViewfinderSettingsControl* self, int parameter);
QVariant* QCameraViewfinderSettingsControl_viewfinderParameter(const QCameraViewfinderSettingsControl* self, int parameter);
void QCameraViewfinderSettingsControl_setViewfinderParameter(QCameraViewfinderSettingsControl* self, int parameter, QVariant* value);
struct miqt_string QCameraViewfinderSettingsControl_tr2(const char* s, const char* c);
struct miqt_string QCameraViewfinderSettingsControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraViewfinderSettingsControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraViewfinderSettingsControl_trUtf83(const char* s, const char* c, int n);

void QCameraViewfinderSettingsControl_delete(QCameraViewfinderSettingsControl* self);

void QCameraViewfinderSettingsControl2_virtbase(QCameraViewfinderSettingsControl2* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraViewfinderSettingsControl2_metaObject(const QCameraViewfinderSettingsControl2* self);
void* QCameraViewfinderSettingsControl2_metacast(QCameraViewfinderSettingsControl2* self, const char* param1);
struct miqt_string QCameraViewfinderSettingsControl2_tr(const char* s);
struct miqt_string QCameraViewfinderSettingsControl2_trUtf8(const char* s);
struct miqt_array /* of QCameraViewfinderSettings* */  QCameraViewfinderSettingsControl2_supportedViewfinderSettings(const QCameraViewfinderSettingsControl2* self);
QCameraViewfinderSettings* QCameraViewfinderSettingsControl2_viewfinderSettings(const QCameraViewfinderSettingsControl2* self);
void QCameraViewfinderSettingsControl2_setViewfinderSettings(QCameraViewfinderSettingsControl2* self, QCameraViewfinderSettings* settings);
struct miqt_string QCameraViewfinderSettingsControl2_tr2(const char* s, const char* c);
struct miqt_string QCameraViewfinderSettingsControl2_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraViewfinderSettingsControl2_trUtf82(const char* s, const char* c);
struct miqt_string QCameraViewfinderSettingsControl2_trUtf83(const char* s, const char* c, int n);

void QCameraViewfinderSettingsControl2_delete(QCameraViewfinderSettingsControl2* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
