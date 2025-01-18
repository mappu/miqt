#pragma once
#ifndef MIQT_QT_GEN_QSTYLEPLUGIN_H
#define MIQT_QT_GEN_QSTYLEPLUGIN_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QStyle;
class QStylePlugin;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QStyle QStyle;
typedef struct QStylePlugin QStylePlugin;
typedef struct QTimerEvent QTimerEvent;
#endif

QStylePlugin* QStylePlugin_new();
QStylePlugin* QStylePlugin_new2(QObject* parent);
void QStylePlugin_virtbase(QStylePlugin* src, QObject** outptr_QObject);
QMetaObject* QStylePlugin_MetaObject(const QStylePlugin* self);
void* QStylePlugin_Metacast(QStylePlugin* self, const char* param1);
struct miqt_string QStylePlugin_Tr(const char* s);
struct miqt_string QStylePlugin_TrUtf8(const char* s);
QStyle* QStylePlugin_Create(QStylePlugin* self, struct miqt_string key);
struct miqt_string QStylePlugin_Tr2(const char* s, const char* c);
struct miqt_string QStylePlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QStylePlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QStylePlugin_TrUtf83(const char* s, const char* c, int n);
void QStylePlugin_override_virtual_Create(void* self, intptr_t slot);
QStyle* QStylePlugin_virtualbase_Create(void* self, struct miqt_string key);
void QStylePlugin_override_virtual_Event(void* self, intptr_t slot);
bool QStylePlugin_virtualbase_Event(void* self, QEvent* event);
void QStylePlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStylePlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QStylePlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QStylePlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QStylePlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QStylePlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QStylePlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QStylePlugin_virtualbase_CustomEvent(void* self, QEvent* event);
void QStylePlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QStylePlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QStylePlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QStylePlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QStylePlugin_Delete(QStylePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
