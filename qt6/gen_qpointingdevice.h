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
QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id);
bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self);
long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self);
void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self);

QPointingDevice* QPointingDevice_new();
QPointingDevice* QPointingDevice_new2(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount);
QPointingDevice* QPointingDevice_new3(QObject* parent);
QPointingDevice* QPointingDevice_new4(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName);
QPointingDevice* QPointingDevice_new5(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId);
QPointingDevice* QPointingDevice_new6(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent);
void QPointingDevice_virtbase(QPointingDevice* src, QInputDevice** outptr_QInputDevice);
QMetaObject* QPointingDevice_MetaObject(const QPointingDevice* self);
void* QPointingDevice_Metacast(QPointingDevice* self, const char* param1);
struct miqt_string QPointingDevice_Tr(const char* s);
void QPointingDevice_SetType(QPointingDevice* self, int devType);
void QPointingDevice_SetCapabilities(QPointingDevice* self, int caps);
void QPointingDevice_SetMaximumTouchPoints(QPointingDevice* self, int c);
int QPointingDevice_PointerType(const QPointingDevice* self);
int QPointingDevice_MaximumPoints(const QPointingDevice* self);
int QPointingDevice_ButtonCount(const QPointingDevice* self);
QPointingDeviceUniqueId* QPointingDevice_UniqueId(const QPointingDevice* self);
QPointingDevice* QPointingDevice_PrimaryPointingDevice();
bool QPointingDevice_OperatorEqual(const QPointingDevice* self, QPointingDevice* other);
void QPointingDevice_GrabChanged(const QPointingDevice* self, QObject* grabber, int transition, QPointerEvent* event, QEventPoint* point);
void QPointingDevice_connect_GrabChanged(QPointingDevice* self, intptr_t slot);
struct miqt_string QPointingDevice_Tr2(const char* s, const char* c);
struct miqt_string QPointingDevice_Tr3(const char* s, const char* c, int n);
QPointingDevice* QPointingDevice_PrimaryPointingDevice1(struct miqt_string seatName);
bool QPointingDevice_override_virtual_Event(void* self, intptr_t slot);
bool QPointingDevice_virtualbase_Event(void* self, QEvent* event);
bool QPointingDevice_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPointingDevice_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QPointingDevice_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPointingDevice_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QPointingDevice_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPointingDevice_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QPointingDevice_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPointingDevice_virtualbase_CustomEvent(void* self, QEvent* event);
bool QPointingDevice_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPointingDevice_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QPointingDevice_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPointingDevice_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPointingDevice_Delete(QPointingDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
