#pragma once
#ifndef MIQT_QT6_GEN_QACCESSIBLEBRIDGE_H
#define MIQT_QT6_GEN_QACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleBridge;
class QAccessibleBridgePlugin;
class QAccessibleEvent;
class QAccessibleInterface;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAccessibleBridge QAccessibleBridge;
typedef struct QAccessibleBridgePlugin QAccessibleBridgePlugin;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

void QAccessibleBridge_setRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject);
void QAccessibleBridge_notifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event);
void QAccessibleBridge_operatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1);

void QAccessibleBridge_delete(QAccessibleBridge* self);

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new();
QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent);
void QAccessibleBridgePlugin_virtbase(QAccessibleBridgePlugin* src, QObject** outptr_QObject);
QMetaObject* QAccessibleBridgePlugin_metaObject(const QAccessibleBridgePlugin* self);
void* QAccessibleBridgePlugin_metacast(QAccessibleBridgePlugin* self, const char* param1);
struct miqt_string QAccessibleBridgePlugin_tr(const char* s);
QAccessibleBridge* QAccessibleBridgePlugin_create(QAccessibleBridgePlugin* self, struct miqt_string key);
struct miqt_string QAccessibleBridgePlugin_tr2(const char* s, const char* c);
struct miqt_string QAccessibleBridgePlugin_tr3(const char* s, const char* c, int n);

bool QAccessibleBridgePlugin_override_virtual_create(void* self, intptr_t slot);
QAccessibleBridge* QAccessibleBridgePlugin_virtualbase_create(void* self, struct miqt_string key);
bool QAccessibleBridgePlugin_override_virtual_event(void* self, intptr_t slot);
bool QAccessibleBridgePlugin_virtualbase_event(void* self, QEvent* event);
bool QAccessibleBridgePlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAccessibleBridgePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAccessibleBridgePlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAccessibleBridgePlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAccessibleBridgePlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QAccessibleBridgePlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAccessibleBridgePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAccessibleBridgePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAccessibleBridgePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAccessibleBridgePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAccessibleBridgePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAccessibleBridgePlugin_delete(QAccessibleBridgePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
