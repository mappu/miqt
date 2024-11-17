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
class QMetaObject;
class QPointF;
#else
typedef struct QCameraFocusControl QCameraFocusControl;
typedef struct QCameraFocusZone QCameraFocusZone;
typedef struct QMetaObject QMetaObject;
typedef struct QPointF QPointF;
#endif

QMetaObject* QCameraFocusControl_MetaObject(const QCameraFocusControl* self);
void* QCameraFocusControl_Metacast(QCameraFocusControl* self, const char* param1);
struct miqt_string QCameraFocusControl_Tr(const char* s);
struct miqt_string QCameraFocusControl_TrUtf8(const char* s);
int QCameraFocusControl_FocusMode(const QCameraFocusControl* self);
void QCameraFocusControl_SetFocusMode(QCameraFocusControl* self, int mode);
bool QCameraFocusControl_IsFocusModeSupported(const QCameraFocusControl* self, int mode);
int QCameraFocusControl_FocusPointMode(const QCameraFocusControl* self);
void QCameraFocusControl_SetFocusPointMode(QCameraFocusControl* self, int mode);
bool QCameraFocusControl_IsFocusPointModeSupported(const QCameraFocusControl* self, int mode);
QPointF* QCameraFocusControl_CustomFocusPoint(const QCameraFocusControl* self);
void QCameraFocusControl_SetCustomFocusPoint(QCameraFocusControl* self, QPointF* point);
struct miqt_array /* of QCameraFocusZone* */  QCameraFocusControl_FocusZones(const QCameraFocusControl* self);
void QCameraFocusControl_FocusModeChanged(QCameraFocusControl* self, int mode);
void QCameraFocusControl_connect_FocusModeChanged(QCameraFocusControl* self, intptr_t slot);
void QCameraFocusControl_FocusPointModeChanged(QCameraFocusControl* self, int mode);
void QCameraFocusControl_connect_FocusPointModeChanged(QCameraFocusControl* self, intptr_t slot);
void QCameraFocusControl_CustomFocusPointChanged(QCameraFocusControl* self, QPointF* point);
void QCameraFocusControl_connect_CustomFocusPointChanged(QCameraFocusControl* self, intptr_t slot);
void QCameraFocusControl_FocusZonesChanged(QCameraFocusControl* self);
void QCameraFocusControl_connect_FocusZonesChanged(QCameraFocusControl* self, intptr_t slot);
struct miqt_string QCameraFocusControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraFocusControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFocusControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraFocusControl_TrUtf83(const char* s, const char* c, int n);
void QCameraFocusControl_Delete(QCameraFocusControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
