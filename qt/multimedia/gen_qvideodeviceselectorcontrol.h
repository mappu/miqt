#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEODEVICESELECTORCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEODEVICESELECTORCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaControl;
class QMetaObject;
class QObject;
class QVideoDeviceSelectorControl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVideoDeviceSelectorControl QVideoDeviceSelectorControl;
#endif

void QVideoDeviceSelectorControl_virtbase(QVideoDeviceSelectorControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QVideoDeviceSelectorControl_metaObject(const QVideoDeviceSelectorControl* self);
void* QVideoDeviceSelectorControl_metacast(QVideoDeviceSelectorControl* self, const char* param1);
struct miqt_string QVideoDeviceSelectorControl_tr(const char* s);
struct miqt_string QVideoDeviceSelectorControl_trUtf8(const char* s);
int QVideoDeviceSelectorControl_deviceCount(const QVideoDeviceSelectorControl* self);
struct miqt_string QVideoDeviceSelectorControl_deviceName(const QVideoDeviceSelectorControl* self, int index);
struct miqt_string QVideoDeviceSelectorControl_deviceDescription(const QVideoDeviceSelectorControl* self, int index);
int QVideoDeviceSelectorControl_defaultDevice(const QVideoDeviceSelectorControl* self);
int QVideoDeviceSelectorControl_selectedDevice(const QVideoDeviceSelectorControl* self);
void QVideoDeviceSelectorControl_setSelectedDevice(QVideoDeviceSelectorControl* self, int index);
void QVideoDeviceSelectorControl_selectedDeviceChanged(QVideoDeviceSelectorControl* self, int index);
void QVideoDeviceSelectorControl_connect_selectedDeviceChanged(QVideoDeviceSelectorControl* self, intptr_t slot);
void QVideoDeviceSelectorControl_selectedDeviceChangedWithName(QVideoDeviceSelectorControl* self, struct miqt_string name);
void QVideoDeviceSelectorControl_connect_selectedDeviceChangedWithName(QVideoDeviceSelectorControl* self, intptr_t slot);
void QVideoDeviceSelectorControl_devicesChanged(QVideoDeviceSelectorControl* self);
void QVideoDeviceSelectorControl_connect_devicesChanged(QVideoDeviceSelectorControl* self, intptr_t slot);
struct miqt_string QVideoDeviceSelectorControl_tr2(const char* s, const char* c);
struct miqt_string QVideoDeviceSelectorControl_tr3(const char* s, const char* c, int n);
struct miqt_string QVideoDeviceSelectorControl_trUtf82(const char* s, const char* c);
struct miqt_string QVideoDeviceSelectorControl_trUtf83(const char* s, const char* c, int n);
void QVideoDeviceSelectorControl_delete(QVideoDeviceSelectorControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
