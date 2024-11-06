#ifndef GEN_QCAMERA_H
#define GEN_QCAMERA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractVideoSurface;
class QByteArray;
class QCamera;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCamera__FrameRateRange)
typedef QCamera::FrameRateRange QCamera__FrameRateRange;
#else
class QCamera__FrameRateRange;
#endif
class QCameraExposure;
class QCameraFocus;
class QCameraImageProcessing;
class QCameraInfo;
class QCameraViewfinderSettings;
class QGraphicsVideoItem;
class QMetaObject;
class QObject;
class QSize;
class QVideoWidget;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QByteArray QByteArray;
typedef struct QCamera QCamera;
typedef struct QCamera__FrameRateRange QCamera__FrameRateRange;
typedef struct QCameraExposure QCameraExposure;
typedef struct QCameraFocus QCameraFocus;
typedef struct QCameraImageProcessing QCameraImageProcessing;
typedef struct QCameraInfo QCameraInfo;
typedef struct QCameraViewfinderSettings QCameraViewfinderSettings;
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVideoWidget QVideoWidget;
#endif

QCamera* QCamera_new();
QCamera* QCamera_new2(struct miqt_string deviceName);
QCamera* QCamera_new3(QCameraInfo* cameraInfo);
QCamera* QCamera_new4(int position);
QCamera* QCamera_new5(QObject* parent);
QCamera* QCamera_new6(struct miqt_string deviceName, QObject* parent);
QCamera* QCamera_new7(QCameraInfo* cameraInfo, QObject* parent);
QCamera* QCamera_new8(int position, QObject* parent);
QMetaObject* QCamera_MetaObject(const QCamera* self);
void* QCamera_Metacast(QCamera* self, const char* param1);
struct miqt_string QCamera_Tr(const char* s);
struct miqt_string QCamera_TrUtf8(const char* s);
struct miqt_array QCamera_AvailableDevices();
struct miqt_string QCamera_DeviceDescription(struct miqt_string device);
int QCamera_Availability(const QCamera* self);
int QCamera_State(const QCamera* self);
int QCamera_Status(const QCamera* self);
int QCamera_CaptureMode(const QCamera* self);
bool QCamera_IsCaptureModeSupported(const QCamera* self, int mode);
QCameraExposure* QCamera_Exposure(const QCamera* self);
QCameraFocus* QCamera_Focus(const QCamera* self);
QCameraImageProcessing* QCamera_ImageProcessing(const QCamera* self);
void QCamera_SetViewfinder(QCamera* self, QVideoWidget* viewfinder);
void QCamera_SetViewfinderWithViewfinder(QCamera* self, QGraphicsVideoItem* viewfinder);
void QCamera_SetViewfinderWithSurface(QCamera* self, QAbstractVideoSurface* surface);
QCameraViewfinderSettings* QCamera_ViewfinderSettings(const QCamera* self);
void QCamera_SetViewfinderSettings(QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array QCamera_SupportedViewfinderSettings(const QCamera* self);
struct miqt_array QCamera_SupportedViewfinderResolutions(const QCamera* self);
struct miqt_array QCamera_SupportedViewfinderFrameRateRanges(const QCamera* self);
struct miqt_array QCamera_SupportedViewfinderPixelFormats(const QCamera* self);
int QCamera_Error(const QCamera* self);
struct miqt_string QCamera_ErrorString(const QCamera* self);
int QCamera_SupportedLocks(const QCamera* self);
int QCamera_RequestedLocks(const QCamera* self);
int QCamera_LockStatus(const QCamera* self);
int QCamera_LockStatusWithLock(const QCamera* self, int lock);
void QCamera_SetCaptureMode(QCamera* self, int mode);
void QCamera_Load(QCamera* self);
void QCamera_Unload(QCamera* self);
void QCamera_Start(QCamera* self);
void QCamera_Stop(QCamera* self);
void QCamera_SearchAndLock(QCamera* self);
void QCamera_Unlock(QCamera* self);
void QCamera_SearchAndLockWithLocks(QCamera* self, int locks);
void QCamera_UnlockWithLocks(QCamera* self, int locks);
void QCamera_StateChanged(QCamera* self, int state);
void QCamera_connect_StateChanged(QCamera* self, intptr_t slot);
void QCamera_CaptureModeChanged(QCamera* self, int param1);
void QCamera_connect_CaptureModeChanged(QCamera* self, intptr_t slot);
void QCamera_StatusChanged(QCamera* self, int status);
void QCamera_connect_StatusChanged(QCamera* self, intptr_t slot);
void QCamera_Locked(QCamera* self);
void QCamera_connect_Locked(QCamera* self, intptr_t slot);
void QCamera_LockFailed(QCamera* self);
void QCamera_connect_LockFailed(QCamera* self, intptr_t slot);
void QCamera_LockStatusChanged(QCamera* self, int status, int reason);
void QCamera_connect_LockStatusChanged(QCamera* self, intptr_t slot);
void QCamera_LockStatusChanged2(QCamera* self, int lock, int status, int reason);
void QCamera_connect_LockStatusChanged2(QCamera* self, intptr_t slot);
void QCamera_ErrorWithQCameraError(QCamera* self, int param1);
void QCamera_connect_ErrorWithQCameraError(QCamera* self, intptr_t slot);
void QCamera_ErrorOccurred(QCamera* self, int param1);
void QCamera_connect_ErrorOccurred(QCamera* self, intptr_t slot);
struct miqt_string QCamera_Tr2(const char* s, const char* c);
struct miqt_string QCamera_Tr3(const char* s, const char* c, int n);
struct miqt_string QCamera_TrUtf82(const char* s, const char* c);
struct miqt_string QCamera_TrUtf83(const char* s, const char* c, int n);
struct miqt_array QCamera_SupportedViewfinderSettings1(const QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array QCamera_SupportedViewfinderResolutions1(const QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array QCamera_SupportedViewfinderFrameRateRanges1(const QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array QCamera_SupportedViewfinderPixelFormats1(const QCamera* self, QCameraViewfinderSettings* settings);
void QCamera_Delete(QCamera* self);

QCamera__FrameRateRange* QCamera__FrameRateRange_new();
QCamera__FrameRateRange* QCamera__FrameRateRange_new2(double minimum, double maximum);
QCamera__FrameRateRange* QCamera__FrameRateRange_new3(QCamera__FrameRateRange* param1);
void QCamera__FrameRateRange_Delete(QCamera__FrameRateRange* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
