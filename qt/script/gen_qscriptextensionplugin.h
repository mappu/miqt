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

void QScriptExtensionPlugin_new(QScriptExtensionPlugin** outptr_QScriptExtensionPlugin, QObject** outptr_QObject, QScriptExtensionInterface** outptr_QScriptExtensionInterface, QFactoryInterface** outptr_QFactoryInterface);
void QScriptExtensionPlugin_new2(QObject* parent, QScriptExtensionPlugin** outptr_QScriptExtensionPlugin, QObject** outptr_QObject, QScriptExtensionInterface** outptr_QScriptExtensionInterface, QFactoryInterface** outptr_QFactoryInterface);
QMetaObject* QScriptExtensionPlugin_MetaObject(const QScriptExtensionPlugin* self);
void* QScriptExtensionPlugin_Metacast(QScriptExtensionPlugin* self, const char* param1);
struct miqt_string QScriptExtensionPlugin_Tr(const char* s);
struct miqt_string QScriptExtensionPlugin_TrUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QScriptExtensionPlugin_Keys(const QScriptExtensionPlugin* self);
void QScriptExtensionPlugin_Initialize(QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine);
QScriptValue* QScriptExtensionPlugin_SetupPackage(const QScriptExtensionPlugin* self, struct miqt_string key, QScriptEngine* engine);
struct miqt_string QScriptExtensionPlugin_Tr2(const char* s, const char* c);
struct miqt_string QScriptExtensionPlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QScriptExtensionPlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QScriptExtensionPlugin_TrUtf83(const char* s, const char* c, int n);
void QScriptExtensionPlugin_override_virtual_Keys(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QScriptExtensionPlugin_virtualbase_Keys(const void* self);
void QScriptExtensionPlugin_override_virtual_Initialize(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_Initialize(void* self, struct miqt_string key, QScriptEngine* engine);
void QScriptExtensionPlugin_override_virtual_Event(void* self, intptr_t slot);
bool QScriptExtensionPlugin_virtualbase_Event(void* self, QEvent* event);
void QScriptExtensionPlugin_override_virtual_EventFilter(void* self, intptr_t slot);
bool QScriptExtensionPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QScriptExtensionPlugin_override_virtual_TimerEvent(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QScriptExtensionPlugin_override_virtual_ChildEvent(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QScriptExtensionPlugin_override_virtual_CustomEvent(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_CustomEvent(void* self, QEvent* event);
void QScriptExtensionPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QScriptExtensionPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QScriptExtensionPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QScriptExtensionPlugin_Delete(QScriptExtensionPlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
