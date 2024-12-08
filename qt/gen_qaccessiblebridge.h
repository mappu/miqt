#pragma once
#ifndef MIQT_QT_GEN_QACCESSIBLEBRIDGE_H
#define MIQT_QT_GEN_QACCESSIBLEBRIDGE_H

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

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject);
void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event);
void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1);
void QAccessibleBridge_Delete(QAccessibleBridge* self, bool isSubclass);

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new();
QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent);
void QAccessibleBridgePlugin_virtbase(QAccessibleBridgePlugin* src, QObject** outptr_QObject);
QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self);
void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1);
struct miqt_string QAccessibleBridgePlugin_Tr(const char* s);
struct miqt_string QAccessibleBridgePlugin_TrUtf8(const char* s);
QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, struct miqt_string key);
struct miqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c);
struct miqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QAccessibleBridgePlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QAccessibleBridgePlugin_TrUtf83(const char* s, const char* c, int n);
void QAccessibleBridgePlugin_override_virtual_Create(void* self, intptr_t slot);
QAccessibleBridge* QAccessibleBridgePlugin_virtualbase_Create(void* self, struct miqt_string key);
void QAccessibleBridgePlugin_override_virtual_Event(void* self, intptr_t slot);
bool QAccessibleBridgePlugin_virtualbase_Event(void* self, QEvent* event);
void QAccessibleBridgePlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAccessibleBridgePlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAccessibleBridgePlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAccessibleBridgePlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAccessibleBridgePlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_CustomEvent(void* self, QEvent* event);
void QAccessibleBridgePlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAccessibleBridgePlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAccessibleBridgePlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
