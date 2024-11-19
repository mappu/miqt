#pragma once
#ifndef MIQT_QT_GEN_QOBJECTCLEANUPHANDLER_H
#define MIQT_QT_GEN_QOBJECTCLEANUPHANDLER_H

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
class QObjectCleanupHandler;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QObjectCleanupHandler QObjectCleanupHandler;
typedef struct QTimerEvent QTimerEvent;
#endif

void QObjectCleanupHandler_new(QObjectCleanupHandler** outptr_QObjectCleanupHandler, QObject** outptr_QObject);
QMetaObject* QObjectCleanupHandler_MetaObject(const QObjectCleanupHandler* self);
void* QObjectCleanupHandler_Metacast(QObjectCleanupHandler* self, const char* param1);
struct miqt_string QObjectCleanupHandler_Tr(const char* s);
struct miqt_string QObjectCleanupHandler_TrUtf8(const char* s);
QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object);
void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object);
bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self);
struct miqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c);
struct miqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n);
struct miqt_string QObjectCleanupHandler_TrUtf82(const char* s, const char* c);
struct miqt_string QObjectCleanupHandler_TrUtf83(const char* s, const char* c, int n);
void QObjectCleanupHandler_override_virtual_Event(void* self, intptr_t slot);
bool QObjectCleanupHandler_virtualbase_Event(void* self, QEvent* event);
void QObjectCleanupHandler_override_virtual_EventFilter(void* self, intptr_t slot);
bool QObjectCleanupHandler_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QObjectCleanupHandler_override_virtual_TimerEvent(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QObjectCleanupHandler_override_virtual_ChildEvent(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QObjectCleanupHandler_override_virtual_CustomEvent(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_CustomEvent(void* self, QEvent* event);
void QObjectCleanupHandler_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QObjectCleanupHandler_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
