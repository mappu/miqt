#pragma once
#ifndef MIQT_QT6_GEN_QINPUTDEVICE_H
#define MIQT_QT6_GEN_QINPUTDEVICE_H

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
class QInputDevice;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QInputDevice QInputDevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QTimerEvent QTimerEvent;
#endif

QInputDevice* QInputDevice_new();
QInputDevice* QInputDevice_new2(struct miqt_string name, long long systemId, int typeVal);
QInputDevice* QInputDevice_new3(QObject* parent);
QInputDevice* QInputDevice_new4(struct miqt_string name, long long systemId, int typeVal, struct miqt_string seatName);
QInputDevice* QInputDevice_new5(struct miqt_string name, long long systemId, int typeVal, struct miqt_string seatName, QObject* parent);
void QInputDevice_virtbase(QInputDevice* src, QObject** outptr_QObject);
QMetaObject* QInputDevice_MetaObject(const QInputDevice* self);
void* QInputDevice_Metacast(QInputDevice* self, const char* param1);
struct miqt_string QInputDevice_Tr(const char* s);
struct miqt_string QInputDevice_Name(const QInputDevice* self);
int QInputDevice_Type(const QInputDevice* self);
int QInputDevice_Capabilities(const QInputDevice* self);
bool QInputDevice_HasCapability(const QInputDevice* self, int cap);
long long QInputDevice_SystemId(const QInputDevice* self);
struct miqt_string QInputDevice_SeatName(const QInputDevice* self);
QRect* QInputDevice_AvailableVirtualGeometry(const QInputDevice* self);
struct miqt_array /* of struct miqt_string */  QInputDevice_SeatNames();
struct miqt_array /* of QInputDevice* */  QInputDevice_Devices();
QInputDevice* QInputDevice_PrimaryKeyboard();
bool QInputDevice_OperatorEqual(const QInputDevice* self, QInputDevice* other);
void QInputDevice_AvailableVirtualGeometryChanged(QInputDevice* self, QRect* area);
void QInputDevice_connect_AvailableVirtualGeometryChanged(QInputDevice* self, intptr_t slot);
struct miqt_string QInputDevice_Tr2(const char* s, const char* c);
struct miqt_string QInputDevice_Tr3(const char* s, const char* c, int n);
QInputDevice* QInputDevice_PrimaryKeyboard1(struct miqt_string seatName);
void QInputDevice_override_virtual_Event(void* self, intptr_t slot);
bool QInputDevice_virtualbase_Event(void* self, QEvent* event);
void QInputDevice_override_virtual_EventFilter(void* self, intptr_t slot);
bool QInputDevice_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QInputDevice_override_virtual_TimerEvent(void* self, intptr_t slot);
void QInputDevice_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QInputDevice_override_virtual_ChildEvent(void* self, intptr_t slot);
void QInputDevice_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QInputDevice_override_virtual_CustomEvent(void* self, intptr_t slot);
void QInputDevice_virtualbase_CustomEvent(void* self, QEvent* event);
void QInputDevice_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QInputDevice_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QInputDevice_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QInputDevice_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QInputDevice_Delete(QInputDevice* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
