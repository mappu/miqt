#pragma once
#ifndef MIQT_QT_GEN_QGENERICPLUGIN_H
#define MIQT_QT_GEN_QGENERICPLUGIN_H

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
class QGenericPlugin;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGenericPlugin QGenericPlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QGenericPlugin* QGenericPlugin_new();
QGenericPlugin* QGenericPlugin_new2(QObject* parent);
void QGenericPlugin_virtbase(QGenericPlugin* src, QObject** outptr_QObject);
QMetaObject* QGenericPlugin_MetaObject(const QGenericPlugin* self);
void* QGenericPlugin_Metacast(QGenericPlugin* self, const char* param1);
struct miqt_string QGenericPlugin_Tr(const char* s);
struct miqt_string QGenericPlugin_TrUtf8(const char* s);
QObject* QGenericPlugin_Create(QGenericPlugin* self, struct miqt_string name, struct miqt_string spec);
struct miqt_string QGenericPlugin_Tr2(const char* s, const char* c);
struct miqt_string QGenericPlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QGenericPlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QGenericPlugin_TrUtf83(const char* s, const char* c, int n);
void QGenericPlugin_override_virtual_Create(void* self, intptr_t slot);
QObject* QGenericPlugin_virtualbase_Create(void* self, struct miqt_string name, struct miqt_string spec);
void QGenericPlugin_override_virtual_Event(void* self, intptr_t slot);
bool QGenericPlugin_virtualbase_Event(void* self, QEvent* event);
void QGenericPlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGenericPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QGenericPlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QGenericPlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QGenericPlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_CustomEvent(void* self, QEvent* event);
void QGenericPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QGenericPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QGenericPlugin_Delete(QGenericPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
