#pragma once
#ifndef MIQT_QT_SCRIPT_GEN_QSCRIPTEXTENSIONPLUGIN_H
#define MIQT_QT_SCRIPT_GEN_QSCRIPTEXTENSIONPLUGIN_H

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
class QFactoryInterface;
class QMetaMethod;
class QMetaObject;
class QObject;
class QScriptEngine;
class QScriptExtensionInterface;
class QScriptExtensionPlugin;
class QScriptValue;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFactoryInterface QFactoryInterface;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptExtensionInterface QScriptExtensionInterface;
typedef struct QScriptExtensionPlugin QScriptExtensionPlugin;
typedef struct QScriptValue QScriptValue;
typedef struct QTimerEvent QTimerEvent;
#endif

QScriptExtensionPlugin* QScriptExtensionPlugin_new();
QScriptExtensionPlugin* QScriptExtensionPlugin_new2(QObject* parent);
void QScriptExtensionPlugin_virtbase(QScriptExtensionPlugin* src, QObject** outptr_QObject, QScriptExtensionInterface** outptr_QScriptExtensionInterface);
QMetaObject* QScriptExtensionPlugin_metaObject(const QScriptExtensionPlugin* self);
void* QScriptExtensionPlugin_metacast(QScriptExtensionPlugin* self, const char* param1);
struct miqt_string QScriptExtensionPlugin_tr(const char* s);
struct miqt_string QScriptExtensionPlugin_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QScriptExtensionPlugin_keys(const QScriptExtensionPlugin* self);
void QScriptExtensionPlugin_initialize(QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine);
QScriptValue* QScriptExtensionPlugin_setupPackage(const QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine);
struct miqt_string QScriptExtensionPlugin_tr2(const char* s, const char* c);
struct miqt_string QScriptExtensionPlugin_tr3(const char* s, const char* c, int n);
struct miqt_string QScriptExtensionPlugin_trUtf82(const char* s, const char* c);
struct miqt_string QScriptExtensionPlugin_trUtf83(const char* s, const char* c, int n);
bool QScriptExtensionPlugin_override_virtual_keys(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QScriptExtensionPlugin_virtualbase_keys(const void* self);
bool QScriptExtensionPlugin_override_virtual_initialize(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_initialize(void* self, struct miqt_string key, QScriptEngine* engine);
bool QScriptExtensionPlugin_override_virtual_event(void* self, intptr_t slot);
bool QScriptExtensionPlugin_virtualbase_event(void* self, QEvent* event);
bool QScriptExtensionPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScriptExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScriptExtensionPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScriptExtensionPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScriptExtensionPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QScriptExtensionPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScriptExtensionPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QScriptExtensionPlugin_delete(QScriptExtensionPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
