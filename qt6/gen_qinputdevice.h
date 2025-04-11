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
QInputDevice* QInputDevice_new2(struct miqt_string name, long long systemId, int type);
QInputDevice* QInputDevice_new3(QObject* parent);
QInputDevice* QInputDevice_new4(struct miqt_string name, long long systemId, int type, struct miqt_string seatName);
QInputDevice* QInputDevice_new5(struct miqt_string name, long long systemId, int type, struct miqt_string seatName, QObject* parent);
void QInputDevice_virtbase(QInputDevice* src, QObject** outptr_QObject);
QMetaObject* QInputDevice_metaObject(const QInputDevice* self);
void* QInputDevice_metacast(QInputDevice* self, const char* param1);
struct miqt_string QInputDevice_tr(const char* s);
struct miqt_string QInputDevice_name(const QInputDevice* self);
int QInputDevice_type(const QInputDevice* self);
int QInputDevice_capabilities(const QInputDevice* self);
bool QInputDevice_hasCapability(const QInputDevice* self, int cap);
long long QInputDevice_systemId(const QInputDevice* self);
struct miqt_string QInputDevice_seatName(const QInputDevice* self);
QRect* QInputDevice_availableVirtualGeometry(const QInputDevice* self);
struct miqt_array /* of struct miqt_string */  QInputDevice_seatNames();
struct miqt_array /* of QInputDevice* */  QInputDevice_devices();
QInputDevice* QInputDevice_primaryKeyboard();
bool QInputDevice_operatorEqual(const QInputDevice* self, QInputDevice* other);
void QInputDevice_availableVirtualGeometryChanged(QInputDevice* self, QRect* area);
void QInputDevice_connect_availableVirtualGeometryChanged(QInputDevice* self, intptr_t slot);
struct miqt_string QInputDevice_tr2(const char* s, const char* c);
struct miqt_string QInputDevice_tr3(const char* s, const char* c, int n);
QInputDevice* QInputDevice_primaryKeyboardWithSeatName(struct miqt_string seatName);
bool QInputDevice_override_virtual_event(void* self, intptr_t slot);
bool QInputDevice_virtualbase_event(void* self, QEvent* event);
bool QInputDevice_override_virtual_eventFilter(void* self, intptr_t slot);
bool QInputDevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QInputDevice_override_virtual_timerEvent(void* self, intptr_t slot);
void QInputDevice_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QInputDevice_override_virtual_childEvent(void* self, intptr_t slot);
void QInputDevice_virtualbase_childEvent(void* self, QChildEvent* event);
bool QInputDevice_override_virtual_customEvent(void* self, intptr_t slot);
void QInputDevice_virtualbase_customEvent(void* self, QEvent* event);
bool QInputDevice_override_virtual_connectNotify(void* self, intptr_t slot);
void QInputDevice_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QInputDevice_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QInputDevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QInputDevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QInputDevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QInputDevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QInputDevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QInputDevice_delete(QInputDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
