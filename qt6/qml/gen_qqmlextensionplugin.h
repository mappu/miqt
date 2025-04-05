#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLEXTENSIONPLUGIN_H
#define MIQT_QT6_QML_GEN_QQMLEXTENSIONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QQmlEngine;
class QQmlEngineExtensionInterface;
class QQmlEngineExtensionPlugin;
class QQmlExtensionInterface;
class QQmlExtensionPlugin;
class QQmlTypesExtensionInterface;
class QTimerEvent;
class QUrl;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlEngineExtensionInterface QQmlEngineExtensionInterface;
typedef struct QQmlEngineExtensionPlugin QQmlEngineExtensionPlugin;
typedef struct QQmlExtensionInterface QQmlExtensionInterface;
typedef struct QQmlExtensionPlugin QQmlExtensionPlugin;
typedef struct QQmlTypesExtensionInterface QQmlTypesExtensionInterface;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QQmlExtensionPlugin* QQmlExtensionPlugin_new();
QQmlExtensionPlugin* QQmlExtensionPlugin_new2(QObject* parent);
void QQmlExtensionPlugin_virtbase(QQmlExtensionPlugin* src, QObject** outptr_QObject, QQmlExtensionInterface** outptr_QQmlExtensionInterface);
QMetaObject* QQmlExtensionPlugin_metaObject(const QQmlExtensionPlugin* self);
void* QQmlExtensionPlugin_metacast(QQmlExtensionPlugin* self, const char* param1);
struct miqt_string QQmlExtensionPlugin_tr(const char* s);
QUrl* QQmlExtensionPlugin_baseUrl(const QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_registerTypes(QQmlExtensionPlugin* self, const char* uri);
void QQmlExtensionPlugin_unregisterTypes(QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_initializeEngine(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri);
struct miqt_string QQmlExtensionPlugin_tr2(const char* s, const char* c);
struct miqt_string QQmlExtensionPlugin_tr3(const char* s, const char* c, int n);
bool QQmlExtensionPlugin_override_virtual_registerTypes(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_registerTypes(void* self, const char* uri);
bool QQmlExtensionPlugin_override_virtual_unregisterTypes(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_unregisterTypes(void* self);
bool QQmlExtensionPlugin_override_virtual_initializeEngine(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_initializeEngine(void* self, QQmlEngine* engine, const char* uri);
bool QQmlExtensionPlugin_override_virtual_event(void* self, intptr_t slot);
bool QQmlExtensionPlugin_virtualbase_event(void* self, QEvent* event);
bool QQmlExtensionPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlExtensionPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlExtensionPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlExtensionPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlExtensionPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlExtensionPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QQmlExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QQmlExtensionPlugin_delete(QQmlExtensionPlugin* self);

QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new();
QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new2(QObject* parent);
void QQmlEngineExtensionPlugin_virtbase(QQmlEngineExtensionPlugin* src, QObject** outptr_QObject, QQmlEngineExtensionInterface** outptr_QQmlEngineExtensionInterface);
QMetaObject* QQmlEngineExtensionPlugin_metaObject(const QQmlEngineExtensionPlugin* self);
void* QQmlEngineExtensionPlugin_metacast(QQmlEngineExtensionPlugin* self, const char* param1);
struct miqt_string QQmlEngineExtensionPlugin_tr(const char* s);
void QQmlEngineExtensionPlugin_initializeEngine(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri);
struct miqt_string QQmlEngineExtensionPlugin_tr2(const char* s, const char* c);
struct miqt_string QQmlEngineExtensionPlugin_tr3(const char* s, const char* c, int n);
bool QQmlEngineExtensionPlugin_override_virtual_initializeEngine(void* self, intptr_t slot);
void QQmlEngineExtensionPlugin_virtualbase_initializeEngine(void* self, QQmlEngine* engine, const char* uri);
bool QQmlEngineExtensionPlugin_override_virtual_event(void* self, intptr_t slot);
bool QQmlEngineExtensionPlugin_virtualbase_event(void* self, QEvent* event);
bool QQmlEngineExtensionPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlEngineExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlEngineExtensionPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlEngineExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlEngineExtensionPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlEngineExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlEngineExtensionPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlEngineExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlEngineExtensionPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlEngineExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlEngineExtensionPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlEngineExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QQmlEngineExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlEngineExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlEngineExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlEngineExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QQmlEngineExtensionPlugin_delete(QQmlEngineExtensionPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
