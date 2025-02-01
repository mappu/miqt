#pragma once
#ifndef MIQT_QT6_GEN_QPOINTINGDEVICE_H
#define MIQT_QT6_GEN_QPOINTINGDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QEventPoint;
class QInputDevice;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPointerEvent;
class QPointingDevice;
class QPointingDeviceUniqueId;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QEventPoint QEventPoint;
typedef struct QInputDevice QInputDevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointerEvent QPointerEvent;
typedef struct QPointingDevice QPointingDevice;
typedef struct QPointingDeviceUniqueId QPointingDeviceUniqueId;
typedef struct QTimerEvent QTimerEvent;
#endif

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new();
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_fromNumericId(long long id);
bool QPointingDeviceUniqueId_isValid(const QPointingDeviceUniqueId* self);
long long QPointingDeviceUniqueId_numericId(const QPointingDeviceUniqueId* self);
void QPointingDeviceUniqueId_delete(QPointingDeviceUniqueId* self);

QPointingDevice* QPointingDevice_new();
QPointingDevice* QPointingDevice_new2(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount);
QPointingDevice* QPointingDevice_new3(QObject* parent);
QPointingDevice* QPointingDevice_new4(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName);
QPointingDevice* QPointingDevice_new5(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId);
QPointingDevice* QPointingDevice_new6(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent);
void QPointingDevice_virtbase(QPointingDevice* src, QInputDevice** outptr_QInputDevice);
QMetaObject* QPointingDevice_metaObject(const QPointingDevice* self);
void* QPointingDevice_metacast(QPointingDevice* self, const char* param1);
struct miqt_string QPointingDevice_tr(const char* s);
void QPointingDevice_setType(QPointingDevice* self, int devType);
void QPointingDevice_setCapabilities(QPointingDevice* self, int caps);
void QPointingDevice_setMaximumTouchPoints(QPointingDevice* self, int c);
int QPointingDevice_pointerType(const QPointingDevice* self);
int QPointingDevice_maximumPoints(const QPointingDevice* self);
int QPointingDevice_buttonCount(const QPointingDevice* self);
QPointingDeviceUniqueId* QPointingDevice_uniqueId(const QPointingDevice* self);
QPointingDevice* QPointingDevice_primaryPointingDevice();
bool QPointingDevice_operatorEqual(const QPointingDevice* self, QPointingDevice* other);
void QPointingDevice_grabChanged(const QPointingDevice* self, QObject* grabber, int transition, QPointerEvent* event, QEventPoint* point);
void QPointingDevice_connect_grabChanged(QPointingDevice* self, intptr_t slot);
struct miqt_string QPointingDevice_tr2(const char* s, const char* c);
struct miqt_string QPointingDevice_tr3(const char* s, const char* c, int n);
QPointingDevice* QPointingDevice_primaryPointingDevice1(struct miqt_string seatName);
bool QPointingDevice_override_virtual_event(void* self, intptr_t slot);
bool QPointingDevice_virtualbase_event(void* self, QEvent* event);
bool QPointingDevice_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPointingDevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPointingDevice_override_virtual_timerEvent(void* self, intptr_t slot);
void QPointingDevice_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPointingDevice_override_virtual_childEvent(void* self, intptr_t slot);
void QPointingDevice_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPointingDevice_override_virtual_customEvent(void* self, intptr_t slot);
void QPointingDevice_virtualbase_customEvent(void* self, QEvent* event);
bool QPointingDevice_override_virtual_connectNotify(void* self, intptr_t slot);
void QPointingDevice_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPointingDevice_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPointingDevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QPointingDevice_delete(QPointingDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
