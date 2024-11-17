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
class QMetaObject;
class QVideoDeviceSelectorControl;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QVideoDeviceSelectorControl QVideoDeviceSelectorControl;
#endif

QMetaObject* QVideoDeviceSelectorControl_MetaObject(const QVideoDeviceSelectorControl* self);
void* QVideoDeviceSelectorControl_Metacast(QVideoDeviceSelectorControl* self, const char* param1);
struct miqt_string QVideoDeviceSelectorControl_Tr(const char* s);
struct miqt_string QVideoDeviceSelectorControl_TrUtf8(const char* s);
int QVideoDeviceSelectorControl_DeviceCount(const QVideoDeviceSelectorControl* self);
struct miqt_string QVideoDeviceSelectorControl_DeviceName(const QVideoDeviceSelectorControl* self, int index);
struct miqt_string QVideoDeviceSelectorControl_DeviceDescription(const QVideoDeviceSelectorControl* self, int index);
int QVideoDeviceSelectorControl_DefaultDevice(const QVideoDeviceSelectorControl* self);
int QVideoDeviceSelectorControl_SelectedDevice(const QVideoDeviceSelectorControl* self);
void QVideoDeviceSelectorControl_SetSelectedDevice(QVideoDeviceSelectorControl* self, int index);
void QVideoDeviceSelectorControl_SelectedDeviceChanged(QVideoDeviceSelectorControl* self, int index);
void QVideoDeviceSelectorControl_connect_SelectedDeviceChanged(QVideoDeviceSelectorControl* self, intptr_t slot);
void QVideoDeviceSelectorControl_SelectedDeviceChangedWithName(QVideoDeviceSelectorControl* self, struct miqt_string name);
void QVideoDeviceSelectorControl_connect_SelectedDeviceChangedWithName(QVideoDeviceSelectorControl* self, intptr_t slot);
void QVideoDeviceSelectorControl_DevicesChanged(QVideoDeviceSelectorControl* self);
void QVideoDeviceSelectorControl_connect_DevicesChanged(QVideoDeviceSelectorControl* self, intptr_t slot);
struct miqt_string QVideoDeviceSelectorControl_Tr2(const char* s, const char* c);
struct miqt_string QVideoDeviceSelectorControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QVideoDeviceSelectorControl_TrUtf82(const char* s, const char* c);
struct miqt_string QVideoDeviceSelectorControl_TrUtf83(const char* s, const char* c, int n);
void QVideoDeviceSelectorControl_Delete(QVideoDeviceSelectorControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
