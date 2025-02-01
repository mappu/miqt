#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAFOCUSCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAFOCUSCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraFocusControl;
class QCameraFocusZone;
class QMediaControl;
class QMetaObject;
class QObject;
class QPointF;
#else
typedef struct QCameraFocusControl QCameraFocusControl;
typedef struct QCameraFocusZone QCameraFocusZone;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
#endif

void QCameraFocusControl_virtbase(QCameraFocusControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraFocusControl_metaObject(const QCameraFocusControl* self);
void* QCameraFocusControl_metacast(QCameraFocusControl* self, const char* param1);
struct miqt_string QCameraFocusControl_tr(const char* s);
struct miqt_string QCameraFocusControl_trUtf8(const char* s);
int QCameraFocusControl_focusMode(const QCameraFocusControl* self);
void QCameraFocusControl_setFocusMode(QCameraFocusControl* self, int mode);
bool QCameraFocusControl_isFocusModeSupported(const QCameraFocusControl* self, int mode);
int QCameraFocusControl_focusPointMode(const QCameraFocusControl* self);
void QCameraFocusControl_setFocusPointMode(QCameraFocusControl* self, int mode);
bool QCameraFocusControl_isFocusPointModeSupported(const QCameraFocusControl* self, int mode);
QPointF* QCameraFocusControl_customFocusPoint(const QCameraFocusControl* self);
void QCameraFocusControl_setCustomFocusPoint(QCameraFocusControl* self, QPointF* point);
struct miqt_array /* of QCameraFocusZone* */  QCameraFocusControl_focusZones(const QCameraFocusControl* self);
void QCameraFocusControl_focusModeChanged(QCameraFocusControl* self, int mode);
void QCameraFocusControl_connect_focusModeChanged(QCameraFocusControl* self, intptr_t slot);
void QCameraFocusControl_focusPointModeChanged(QCameraFocusControl* self, int mode);
void QCameraFocusControl_connect_focusPointModeChanged(QCameraFocusControl* self, intptr_t slot);
void QCameraFocusControl_customFocusPointChanged(QCameraFocusControl* self, QPointF* point);
void QCameraFocusControl_connect_customFocusPointChanged(QCameraFocusControl* self, intptr_t slot);
void QCameraFocusControl_focusZonesChanged(QCameraFocusControl* self);
void QCameraFocusControl_connect_focusZonesChanged(QCameraFocusControl* self, intptr_t slot);
struct miqt_string QCameraFocusControl_tr2(const char* s, const char* c);
struct miqt_string QCameraFocusControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFocusControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraFocusControl_trUtf83(const char* s, const char* c, int n);
void QCameraFocusControl_delete(QCameraFocusControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
