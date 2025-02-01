#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAZOOMCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAZOOMCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraZoomControl;
class QMediaControl;
class QMetaObject;
class QObject;
#else
typedef struct QCameraZoomControl QCameraZoomControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraZoomControl_virtbase(QCameraZoomControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraZoomControl_metaObject(const QCameraZoomControl* self);
void* QCameraZoomControl_metacast(QCameraZoomControl* self, const char* param1);
struct miqt_string QCameraZoomControl_tr(const char* s);
struct miqt_string QCameraZoomControl_trUtf8(const char* s);
double QCameraZoomControl_maximumOpticalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_maximumDigitalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_requestedOpticalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_requestedDigitalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_currentOpticalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_currentDigitalZoom(const QCameraZoomControl* self);
void QCameraZoomControl_zoomTo(QCameraZoomControl* self, double optical, double digital);
void QCameraZoomControl_maximumOpticalZoomChanged(QCameraZoomControl* self, double param1);
void QCameraZoomControl_connect_maximumOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_maximumDigitalZoomChanged(QCameraZoomControl* self, double param1);
void QCameraZoomControl_connect_maximumDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_requestedOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom);
void QCameraZoomControl_connect_requestedOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_requestedDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom);
void QCameraZoomControl_connect_requestedDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_currentOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom);
void QCameraZoomControl_connect_currentOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_currentDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom);
void QCameraZoomControl_connect_currentDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot);
struct miqt_string QCameraZoomControl_tr2(const char* s, const char* c);
struct miqt_string QCameraZoomControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraZoomControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraZoomControl_trUtf83(const char* s, const char* c, int n);
void QCameraZoomControl_delete(QCameraZoomControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
