#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERA_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERA_H

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
class QChildEvent;
class QEvent;
class QGraphicsVideoItem;
class QMediaObject;
class QMediaService;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTimerEvent;
class QVideoWidget;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QCamera QCamera;
typedef struct QCamera__FrameRateRange QCamera__FrameRateRange;
typedef struct QCameraExposure QCameraExposure;
typedef struct QCameraFocus QCameraFocus;
typedef struct QCameraImageProcessing QCameraImageProcessing;
typedef struct QCameraInfo QCameraInfo;
typedef struct QCameraViewfinderSettings QCameraViewfinderSettings;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaService QMediaService;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
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
void QCamera_virtbase(QCamera* src, QMediaObject** outptr_QMediaObject);
QMetaObject* QCamera_metaObject(const QCamera* self);
void* QCamera_metacast(QCamera* self, const char* param1);
struct miqt_string QCamera_tr(const char* s);
struct miqt_string QCamera_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QCamera_availableDevices();
struct miqt_string QCamera_deviceDescription(struct miqt_string device);
int QCamera_availability(const QCamera* self);
int QCamera_state(const QCamera* self);
int QCamera_status(const QCamera* self);
int QCamera_captureMode(const QCamera* self);
bool QCamera_isCaptureModeSupported(const QCamera* self, int mode);
QCameraExposure* QCamera_exposure(const QCamera* self);
QCameraFocus* QCamera_focus(const QCamera* self);
QCameraImageProcessing* QCamera_imageProcessing(const QCamera* self);
void QCamera_setViewfinder(QCamera* self, QVideoWidget* viewfinder);
void QCamera_setViewfinderWithViewfinder(QCamera* self, QGraphicsVideoItem* viewfinder);
void QCamera_setViewfinderWithSurface(QCamera* self, QAbstractVideoSurface* surface);
QCameraViewfinderSettings* QCamera_viewfinderSettings(const QCamera* self);
void QCamera_setViewfinderSettings(QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array /* of QCameraViewfinderSettings* */  QCamera_supportedViewfinderSettings(const QCamera* self);
struct miqt_array /* of QSize* */  QCamera_supportedViewfinderResolutions(const QCamera* self);
struct miqt_array /* of QCamera__FrameRateRange* */  QCamera_supportedViewfinderFrameRateRanges(const QCamera* self);
struct miqt_array /* of int */  QCamera_supportedViewfinderPixelFormats(const QCamera* self);
int QCamera_error(const QCamera* self);
struct miqt_string QCamera_errorString(const QCamera* self);
int QCamera_supportedLocks(const QCamera* self);
int QCamera_requestedLocks(const QCamera* self);
int QCamera_lockStatus(const QCamera* self);
int QCamera_lockStatusWithLock(const QCamera* self, int lock);
void QCamera_setCaptureMode(QCamera* self, int mode);
void QCamera_load(QCamera* self);
void QCamera_unload(QCamera* self);
void QCamera_start(QCamera* self);
void QCamera_stop(QCamera* self);
void QCamera_searchAndLock(QCamera* self);
void QCamera_unlock(QCamera* self);
void QCamera_searchAndLockWithLocks(QCamera* self, int locks);
void QCamera_unlockWithLocks(QCamera* self, int locks);
void QCamera_stateChanged(QCamera* self, int state);
void QCamera_connect_stateChanged(QCamera* self, intptr_t slot);
void QCamera_captureModeChanged(QCamera* self, int param1);
void QCamera_connect_captureModeChanged(QCamera* self, intptr_t slot);
void QCamera_statusChanged(QCamera* self, int status);
void QCamera_connect_statusChanged(QCamera* self, intptr_t slot);
void QCamera_locked(QCamera* self);
void QCamera_connect_locked(QCamera* self, intptr_t slot);
void QCamera_lockFailed(QCamera* self);
void QCamera_connect_lockFailed(QCamera* self, intptr_t slot);
void QCamera_lockStatusChanged(QCamera* self, int status, int reason);
void QCamera_connect_lockStatusChanged(QCamera* self, intptr_t slot);
void QCamera_lockStatusChanged2(QCamera* self, int lock, int status, int reason);
void QCamera_connect_lockStatusChanged2(QCamera* self, intptr_t slot);
void QCamera_errorWithQCameraError(QCamera* self, int param1);
void QCamera_connect_errorWithQCameraError(QCamera* self, intptr_t slot);
void QCamera_errorOccurred(QCamera* self, int param1);
void QCamera_connect_errorOccurred(QCamera* self, intptr_t slot);
struct miqt_string QCamera_tr2(const char* s, const char* c);
struct miqt_string QCamera_tr3(const char* s, const char* c, int n);
struct miqt_string QCamera_trUtf82(const char* s, const char* c);
struct miqt_string QCamera_trUtf83(const char* s, const char* c, int n);
struct miqt_array /* of QCameraViewfinderSettings* */  QCamera_supportedViewfinderSettingsWithSettings(const QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array /* of QSize* */  QCamera_supportedViewfinderResolutionsWithSettings(const QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array /* of QCamera__FrameRateRange* */  QCamera_supportedViewfinderFrameRateRangesWithSettings(const QCamera* self, QCameraViewfinderSettings* settings);
struct miqt_array /* of int */  QCamera_supportedViewfinderPixelFormatsWithSettings(const QCamera* self, QCameraViewfinderSettings* settings);

bool QCamera_override_virtual_availability(void* self, intptr_t slot);
int QCamera_virtualbase_availability(const void* self);
bool QCamera_override_virtual_isAvailable(void* self, intptr_t slot);
bool QCamera_virtualbase_isAvailable(const void* self);
bool QCamera_override_virtual_service(void* self, intptr_t slot);
QMediaService* QCamera_virtualbase_service(const void* self);
bool QCamera_override_virtual_bind(void* self, intptr_t slot);
bool QCamera_virtualbase_bind(void* self, QObject* param1);
bool QCamera_override_virtual_unbind(void* self, intptr_t slot);
void QCamera_virtualbase_unbind(void* self, QObject* param1);
bool QCamera_override_virtual_event(void* self, intptr_t slot);
bool QCamera_virtualbase_event(void* self, QEvent* event);
bool QCamera_override_virtual_eventFilter(void* self, intptr_t slot);
bool QCamera_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QCamera_override_virtual_timerEvent(void* self, intptr_t slot);
void QCamera_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QCamera_override_virtual_childEvent(void* self, intptr_t slot);
void QCamera_virtualbase_childEvent(void* self, QChildEvent* event);
bool QCamera_override_virtual_customEvent(void* self, intptr_t slot);
void QCamera_virtualbase_customEvent(void* self, QEvent* event);
bool QCamera_override_virtual_connectNotify(void* self, intptr_t slot);
void QCamera_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QCamera_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QCamera_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QCamera_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
void QCamera_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
QObject* QCamera_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCamera_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCamera_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCamera_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QCamera_delete(QCamera* self);

QCamera__FrameRateRange* QCamera__FrameRateRange_new();
QCamera__FrameRateRange* QCamera__FrameRateRange_new2(double minimum, double maximum);
QCamera__FrameRateRange* QCamera__FrameRateRange_new3(QCamera__FrameRateRange* param1);
void QCamera__FrameRateRange_delete(QCamera__FrameRateRange* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
