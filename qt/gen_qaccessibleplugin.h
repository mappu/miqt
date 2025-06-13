#pragma once
#ifndef MIQT_QT_GEN_QACCESSIBLEPLUGIN_H
#define MIQT_QT_GEN_QACCESSIBLEPLUGIN_H

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
QMetaObject* QAccessiblePlugin_metaObject(const QAccessiblePlugin* self);
void* QAccessiblePlugin_metacast(QAccessiblePlugin* self, const char* param1);
struct miqt_string QAccessiblePlugin_tr(const char* s);
struct miqt_string QAccessiblePlugin_trUtf8(const char* s);
QAccessibleInterface* QAccessiblePlugin_create(QAccessiblePlugin* self, struct miqt_string key, QObject* object);
struct miqt_string QAccessiblePlugin_tr2(const char* s, const char* c);
struct miqt_string QAccessiblePlugin_tr3(const char* s, const char* c, int n);
struct miqt_string QAccessiblePlugin_trUtf82(const char* s, const char* c);
struct miqt_string QAccessiblePlugin_trUtf83(const char* s, const char* c, int n);

bool QAccessiblePlugin_override_virtual_create(void* self, intptr_t slot);
QAccessibleInterface* QAccessiblePlugin_virtualbase_create(void* self, struct miqt_string key, QObject* object);
bool QAccessiblePlugin_override_virtual_event(void* self, intptr_t slot);
bool QAccessiblePlugin_virtualbase_event(void* self, QEvent* event);
bool QAccessiblePlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAccessiblePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAccessiblePlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAccessiblePlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAccessiblePlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QAccessiblePlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAccessiblePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAccessiblePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QAccessiblePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAccessiblePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAccessiblePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAccessiblePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAccessiblePlugin_delete(QAccessiblePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
