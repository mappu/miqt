#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBPLUGINFACTORY_H
#define MIQT_QT_WEBKIT_GEN_QWEBPLUGINFACTORY_H

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
class QTimerEvent;
class QUrl;
class QWebPluginFactory;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__ExtensionOption)
typedef QWebPluginFactory::ExtensionOption QWebPluginFactory__ExtensionOption;
#else
class QWebPluginFactory__ExtensionOption;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__ExtensionReturn)
typedef QWebPluginFactory::ExtensionReturn QWebPluginFactory__ExtensionReturn;
#else
class QWebPluginFactory__ExtensionReturn;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__MimeType)
typedef QWebPluginFactory::MimeType QWebPluginFactory__MimeType;
#else
class QWebPluginFactory__MimeType;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebPluginFactory__Plugin)
typedef QWebPluginFactory::Plugin QWebPluginFactory__Plugin;
#else
class QWebPluginFactory__Plugin;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebPluginFactory QWebPluginFactory;
typedef struct QWebPluginFactory__ExtensionOption QWebPluginFactory__ExtensionOption;
typedef struct QWebPluginFactory__ExtensionReturn QWebPluginFactory__ExtensionReturn;
typedef struct QWebPluginFactory__MimeType QWebPluginFactory__MimeType;
typedef struct QWebPluginFactory__Plugin QWebPluginFactory__Plugin;
#endif

QWebPluginFactory* QWebPluginFactory_new();
QWebPluginFactory* QWebPluginFactory_new2(QObject* parent);
void QWebPluginFactory_virtbase(QWebPluginFactory* src, QObject** outptr_QObject);
QMetaObject* QWebPluginFactory_MetaObject(const QWebPluginFactory* self);
void* QWebPluginFactory_Metacast(QWebPluginFactory* self, const char* param1);
struct miqt_string QWebPluginFactory_Tr(const char* s);
struct miqt_string QWebPluginFactory_TrUtf8(const char* s);
struct miqt_array /* of QWebPluginFactory__Plugin* */  QWebPluginFactory_Plugins(const QWebPluginFactory* self);
void QWebPluginFactory_RefreshPlugins(QWebPluginFactory* self);
QObject* QWebPluginFactory_Create(const QWebPluginFactory* self, struct miqt_string mimeType, QUrl* param2, struct miqt_array /* of struct miqt_string */  argumentNames, struct miqt_array /* of struct miqt_string */  argumentValues);
bool QWebPluginFactory_Extension(QWebPluginFactory* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output);
bool QWebPluginFactory_SupportsExtension(const QWebPluginFactory* self, int extension);
struct miqt_string QWebPluginFactory_Tr2(const char* s, const char* c);
struct miqt_string QWebPluginFactory_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebPluginFactory_TrUtf82(const char* s, const char* c);
struct miqt_string QWebPluginFactory_TrUtf83(const char* s, const char* c, int n);
void QWebPluginFactory_override_virtual_Plugins(void* self, intptr_t slot);
struct miqt_array /* of QWebPluginFactory__Plugin* */  QWebPluginFactory_virtualbase_Plugins(const void* self);
void QWebPluginFactory_override_virtual_RefreshPlugins(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_RefreshPlugins(void* self);
void QWebPluginFactory_override_virtual_Create(void* self, intptr_t slot);
QObject* QWebPluginFactory_virtualbase_Create(const void* self, struct miqt_string mimeType, QUrl* param2, struct miqt_array /* of struct miqt_string */  argumentNames, struct miqt_array /* of struct miqt_string */  argumentValues);
void QWebPluginFactory_override_virtual_Extension(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_Extension(void* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output);
void QWebPluginFactory_override_virtual_SupportsExtension(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_SupportsExtension(const void* self, int extension);
void QWebPluginFactory_override_virtual_Event(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_Event(void* self, QEvent* event);
void QWebPluginFactory_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWebPluginFactory_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWebPluginFactory_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWebPluginFactory_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_CustomEvent(void* self, QEvent* event);
void QWebPluginFactory_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWebPluginFactory_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebPluginFactory_Delete(QWebPluginFactory* self);

QWebPluginFactory__MimeType* QWebPluginFactory__MimeType_new(QWebPluginFactory__MimeType* param1);
bool QWebPluginFactory__MimeType_OperatorEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other);
bool QWebPluginFactory__MimeType_OperatorNotEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other);
void QWebPluginFactory__MimeType_OperatorAssign(QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* param1);
void QWebPluginFactory__MimeType_Delete(QWebPluginFactory__MimeType* self);

QWebPluginFactory__Plugin* QWebPluginFactory__Plugin_new(QWebPluginFactory__Plugin* param1);
void QWebPluginFactory__Plugin_OperatorAssign(QWebPluginFactory__Plugin* self, QWebPluginFactory__Plugin* param1);
void QWebPluginFactory__Plugin_Delete(QWebPluginFactory__Plugin* self);

void QWebPluginFactory__ExtensionOption_Delete(QWebPluginFactory__ExtensionOption* self);

void QWebPluginFactory__ExtensionReturn_Delete(QWebPluginFactory__ExtensionReturn* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
