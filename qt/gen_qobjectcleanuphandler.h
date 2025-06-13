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

QObjectCleanupHandler* QObjectCleanupHandler_new();
void QObjectCleanupHandler_virtbase(QObjectCleanupHandler* src, QObject** outptr_QObject);
QMetaObject* QObjectCleanupHandler_metaObject(const QObjectCleanupHandler* self);
void* QObjectCleanupHandler_metacast(QObjectCleanupHandler* self, const char* param1);
struct miqt_string QObjectCleanupHandler_tr(const char* s);
struct miqt_string QObjectCleanupHandler_trUtf8(const char* s);
QObject* QObjectCleanupHandler_add(QObjectCleanupHandler* self, QObject* object);
void QObjectCleanupHandler_remove(QObjectCleanupHandler* self, QObject* object);
bool QObjectCleanupHandler_isEmpty(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_clear(QObjectCleanupHandler* self);
struct miqt_string QObjectCleanupHandler_tr2(const char* s, const char* c);
struct miqt_string QObjectCleanupHandler_tr3(const char* s, const char* c, int n);
struct miqt_string QObjectCleanupHandler_trUtf82(const char* s, const char* c);
struct miqt_string QObjectCleanupHandler_trUtf83(const char* s, const char* c, int n);

bool QObjectCleanupHandler_override_virtual_event(void* self, intptr_t slot);
bool QObjectCleanupHandler_virtualbase_event(void* self, QEvent* event);
bool QObjectCleanupHandler_override_virtual_eventFilter(void* self, intptr_t slot);
bool QObjectCleanupHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QObjectCleanupHandler_override_virtual_timerEvent(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QObjectCleanupHandler_override_virtual_childEvent(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_childEvent(void* self, QChildEvent* event);
bool QObjectCleanupHandler_override_virtual_customEvent(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_customEvent(void* self, QEvent* event);
bool QObjectCleanupHandler_override_virtual_connectNotify(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QObjectCleanupHandler_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QObjectCleanupHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QObjectCleanupHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QObjectCleanupHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QObjectCleanupHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QObjectCleanupHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QObjectCleanupHandler_delete(QObjectCleanupHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
