#pragma once
#ifndef MIQT_QT6_GEN_QSTYLEPLUGIN_H
#define MIQT_QT6_GEN_QSTYLEPLUGIN_H

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
QMetaObject* QStylePlugin_metaObject(const QStylePlugin* self);
void* QStylePlugin_metacast(QStylePlugin* self, const char* param1);
struct miqt_string QStylePlugin_tr(const char* s);
QStyle* QStylePlugin_create(QStylePlugin* self, struct miqt_string key);
struct miqt_string QStylePlugin_tr2(const char* s, const char* c);
struct miqt_string QStylePlugin_tr3(const char* s, const char* c, int n);
bool QStylePlugin_override_virtual_create(void* self, intptr_t slot);
QStyle* QStylePlugin_virtualbase_create(void* self, struct miqt_string key);
bool QStylePlugin_override_virtual_event(void* self, intptr_t slot);
bool QStylePlugin_virtualbase_event(void* self, QEvent* event);
bool QStylePlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStylePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStylePlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QStylePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStylePlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QStylePlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStylePlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QStylePlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QStylePlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QStylePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStylePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStylePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QStylePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QStylePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QStylePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QStylePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QStylePlugin_delete(QStylePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
