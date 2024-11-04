#ifndef GEN_QCAMERAZOOMCONTROL_H
#define GEN_QCAMERAZOOMCONTROL_H

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
class QMetaObject;
#else
typedef struct QCameraZoomControl QCameraZoomControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QCameraZoomControl_MetaObject(const QCameraZoomControl* self);
void* QCameraZoomControl_Metacast(QCameraZoomControl* self, const char* param1);
struct miqt_string QCameraZoomControl_Tr(const char* s);
struct miqt_string QCameraZoomControl_TrUtf8(const char* s);
double QCameraZoomControl_MaximumOpticalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_MaximumDigitalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_RequestedOpticalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_RequestedDigitalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_CurrentOpticalZoom(const QCameraZoomControl* self);
double QCameraZoomControl_CurrentDigitalZoom(const QCameraZoomControl* self);
void QCameraZoomControl_ZoomTo(QCameraZoomControl* self, double optical, double digital);
void QCameraZoomControl_MaximumOpticalZoomChanged(QCameraZoomControl* self, double param1);
void QCameraZoomControl_connect_MaximumOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_MaximumDigitalZoomChanged(QCameraZoomControl* self, double param1);
void QCameraZoomControl_connect_MaximumDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_RequestedOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom);
void QCameraZoomControl_connect_RequestedOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_RequestedDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom);
void QCameraZoomControl_connect_RequestedDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_CurrentOpticalZoomChanged(QCameraZoomControl* self, double opticalZoom);
void QCameraZoomControl_connect_CurrentOpticalZoomChanged(QCameraZoomControl* self, intptr_t slot);
void QCameraZoomControl_CurrentDigitalZoomChanged(QCameraZoomControl* self, double digitalZoom);
void QCameraZoomControl_connect_CurrentDigitalZoomChanged(QCameraZoomControl* self, intptr_t slot);
struct miqt_string QCameraZoomControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraZoomControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraZoomControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraZoomControl_TrUtf83(const char* s, const char* c, int n);
void QCameraZoomControl_Delete(QCameraZoomControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
