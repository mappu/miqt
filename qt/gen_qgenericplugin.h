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
QMetaObject* QGenericPlugin_metaObject(const QGenericPlugin* self);
void* QGenericPlugin_metacast(QGenericPlugin* self, const char* param1);
struct miqt_string QGenericPlugin_tr(const char* s);
struct miqt_string QGenericPlugin_trUtf8(const char* s);
QObject* QGenericPlugin_create(QGenericPlugin* self, struct miqt_string name, struct miqt_string spec);
struct miqt_string QGenericPlugin_tr2(const char* s, const char* c);
struct miqt_string QGenericPlugin_tr3(const char* s, const char* c, int n);
struct miqt_string QGenericPlugin_trUtf82(const char* s, const char* c);
struct miqt_string QGenericPlugin_trUtf83(const char* s, const char* c, int n);

bool QGenericPlugin_override_virtual_create(void* self, intptr_t slot);
QObject* QGenericPlugin_virtualbase_create(void* self, struct miqt_string name, struct miqt_string spec);
bool QGenericPlugin_override_virtual_event(void* self, intptr_t slot);
bool QGenericPlugin_virtualbase_event(void* self, QEvent* event);
bool QGenericPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGenericPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGenericPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGenericPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGenericPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QGenericPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGenericPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGenericPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QGenericPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGenericPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGenericPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGenericPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGenericPlugin_delete(QGenericPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
