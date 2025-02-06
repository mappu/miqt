#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAFOCUS_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAFOCUS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraFocus;
class QCameraFocusZone;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPointF;
class QRectF;
#else
typedef struct QCameraFocus QCameraFocus;
typedef struct QCameraFocusZone QCameraFocusZone;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
#endif

QCameraFocusZone* QCameraFocusZone_new();
QCameraFocusZone* QCameraFocusZone_new2(QRectF* area);
QCameraFocusZone* QCameraFocusZone_new3(QCameraFocusZone* other);
QCameraFocusZone* QCameraFocusZone_new4(QRectF* area, int status);
void QCameraFocusZone_operatorAssign(QCameraFocusZone* self, QCameraFocusZone* other);
bool QCameraFocusZone_operatorEqual(const QCameraFocusZone* self, QCameraFocusZone* other);
bool QCameraFocusZone_operatorNotEqual(const QCameraFocusZone* self, QCameraFocusZone* other);
bool QCameraFocusZone_isValid(const QCameraFocusZone* self);
QRectF* QCameraFocusZone_area(const QCameraFocusZone* self);
int QCameraFocusZone_status(const QCameraFocusZone* self);
void QCameraFocusZone_setStatus(QCameraFocusZone* self, int status);
void QCameraFocusZone_delete(QCameraFocusZone* self);

void QCameraFocus_virtbase(QCameraFocus* src, QObject** outptr_QObject);
QMetaObject* QCameraFocus_metaObject(const QCameraFocus* self);
void* QCameraFocus_metacast(QCameraFocus* self, const char* param1);
struct miqt_string QCameraFocus_tr(const char* s);
struct miqt_string QCameraFocus_trUtf8(const char* s);
bool QCameraFocus_isAvailable(const QCameraFocus* self);
int QCameraFocus_focusMode(const QCameraFocus* self);
void QCameraFocus_setFocusMode(QCameraFocus* self, int mode);
bool QCameraFocus_isFocusModeSupported(const QCameraFocus* self, int mode);
int QCameraFocus_focusPointMode(const QCameraFocus* self);
void QCameraFocus_setFocusPointMode(QCameraFocus* self, int mode);
bool QCameraFocus_isFocusPointModeSupported(const QCameraFocus* self, int param1);
QPointF* QCameraFocus_customFocusPoint(const QCameraFocus* self);
void QCameraFocus_setCustomFocusPoint(QCameraFocus* self, QPointF* point);
struct miqt_array /* of QCameraFocusZone* */  QCameraFocus_focusZones(const QCameraFocus* self);
double QCameraFocus_maximumOpticalZoom(const QCameraFocus* self);
double QCameraFocus_maximumDigitalZoom(const QCameraFocus* self);
double QCameraFocus_opticalZoom(const QCameraFocus* self);
double QCameraFocus_digitalZoom(const QCameraFocus* self);
void QCameraFocus_zoomTo(QCameraFocus* self, double opticalZoom, double digitalZoom);
void QCameraFocus_opticalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_opticalZoomChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_digitalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_digitalZoomChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_focusZonesChanged(QCameraFocus* self);
void QCameraFocus_connect_focusZonesChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_maximumOpticalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_maximumOpticalZoomChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_maximumDigitalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_maximumDigitalZoomChanged(QCameraFocus* self, intptr_t slot);
struct miqt_string QCameraFocus_tr2(const char* s, const char* c);
struct miqt_string QCameraFocus_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFocus_trUtf82(const char* s, const char* c);
struct miqt_string QCameraFocus_trUtf83(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
