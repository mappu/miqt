#pragma once
#ifndef MIQT_QT6_GEN_QACCESSIBLEPLUGIN_H
#define MIQT_QT6_GEN_QACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleInterface;
class QAccessiblePlugin;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessiblePlugin QAccessiblePlugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAccessiblePlugin* QAccessiblePlugin_new();
QAccessiblePlugin* QAccessiblePlugin_new2(QObject* parent);
void QAccessiblePlugin_virtbase(QAccessiblePlugin* src, QObject** outptr_QObject);
QMetaObject* QAccessiblePlugin_MetaObject(const QAccessiblePlugin* self);
void* QAccessiblePlugin_Metacast(QAccessiblePlugin* self, const char* param1);
struct miqt_string QAccessiblePlugin_Tr(const char* s);
QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, struct miqt_string key, QObject* object);
struct miqt_string QAccessiblePlugin_Tr2(const char* s, const char* c);
struct miqt_string QAccessiblePlugin_Tr3(const char* s, const char* c, int n);
bool QAccessiblePlugin_override_virtual_Create(void* self, intptr_t slot);
QAccessibleInterface* QAccessiblePlugin_virtualbase_Create(void* self, struct miqt_string key, QObject* object);
bool QAccessiblePlugin_override_virtual_Event(void* self, intptr_t slot);
bool QAccessiblePlugin_virtualbase_Event(void* self, QEvent* event);
bool QAccessiblePlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAccessiblePlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAccessiblePlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAccessiblePlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAccessiblePlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAccessiblePlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAccessiblePlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAccessiblePlugin_Delete(QAccessiblePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
