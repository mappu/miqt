#ifndef GEN_QCAMERAFOCUS_H
#define GEN_QCAMERAFOCUS_H

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
class QMetaObject;
class QPointF;
class QRectF;
#else
typedef struct QCameraFocus QCameraFocus;
typedef struct QCameraFocusZone QCameraFocusZone;
typedef struct QMetaObject QMetaObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
#endif

QCameraFocusZone* QCameraFocusZone_new();
QCameraFocusZone* QCameraFocusZone_new2(QRectF* area);
QCameraFocusZone* QCameraFocusZone_new3(QCameraFocusZone* other);
QCameraFocusZone* QCameraFocusZone_new4(QRectF* area, int status);
void QCameraFocusZone_OperatorAssign(QCameraFocusZone* self, QCameraFocusZone* other);
bool QCameraFocusZone_OperatorEqual(const QCameraFocusZone* self, QCameraFocusZone* other);
bool QCameraFocusZone_OperatorNotEqual(const QCameraFocusZone* self, QCameraFocusZone* other);
bool QCameraFocusZone_IsValid(const QCameraFocusZone* self);
QRectF* QCameraFocusZone_Area(const QCameraFocusZone* self);
int QCameraFocusZone_Status(const QCameraFocusZone* self);
void QCameraFocusZone_SetStatus(QCameraFocusZone* self, int status);
void QCameraFocusZone_Delete(QCameraFocusZone* self);

QMetaObject* QCameraFocus_MetaObject(const QCameraFocus* self);
void* QCameraFocus_Metacast(QCameraFocus* self, const char* param1);
struct miqt_string QCameraFocus_Tr(const char* s);
struct miqt_string QCameraFocus_TrUtf8(const char* s);
bool QCameraFocus_IsAvailable(const QCameraFocus* self);
int QCameraFocus_FocusMode(const QCameraFocus* self);
void QCameraFocus_SetFocusMode(QCameraFocus* self, int mode);
bool QCameraFocus_IsFocusModeSupported(const QCameraFocus* self, int mode);
int QCameraFocus_FocusPointMode(const QCameraFocus* self);
void QCameraFocus_SetFocusPointMode(QCameraFocus* self, int mode);
bool QCameraFocus_IsFocusPointModeSupported(const QCameraFocus* self, int param1);
QPointF* QCameraFocus_CustomFocusPoint(const QCameraFocus* self);
void QCameraFocus_SetCustomFocusPoint(QCameraFocus* self, QPointF* point);
struct miqt_array QCameraFocus_FocusZones(const QCameraFocus* self);
double QCameraFocus_MaximumOpticalZoom(const QCameraFocus* self);
double QCameraFocus_MaximumDigitalZoom(const QCameraFocus* self);
double QCameraFocus_OpticalZoom(const QCameraFocus* self);
double QCameraFocus_DigitalZoom(const QCameraFocus* self);
void QCameraFocus_ZoomTo(QCameraFocus* self, double opticalZoom, double digitalZoom);
void QCameraFocus_OpticalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_OpticalZoomChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_DigitalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_DigitalZoomChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_FocusZonesChanged(QCameraFocus* self);
void QCameraFocus_connect_FocusZonesChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_MaximumOpticalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_MaximumOpticalZoomChanged(QCameraFocus* self, intptr_t slot);
void QCameraFocus_MaximumDigitalZoomChanged(QCameraFocus* self, double param1);
void QCameraFocus_connect_MaximumDigitalZoomChanged(QCameraFocus* self, intptr_t slot);
struct miqt_string QCameraFocus_Tr2(const char* s, const char* c);
struct miqt_string QCameraFocus_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFocus_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraFocus_TrUtf83(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
