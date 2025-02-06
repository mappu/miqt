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
QMetaObject* QWebPluginFactory_metaObject(const QWebPluginFactory* self);
void* QWebPluginFactory_metacast(QWebPluginFactory* self, const char* param1);
struct miqt_string QWebPluginFactory_tr(const char* s);
struct miqt_string QWebPluginFactory_trUtf8(const char* s);
struct miqt_array /* of QWebPluginFactory__Plugin* */  QWebPluginFactory_plugins(const QWebPluginFactory* self);
void QWebPluginFactory_refreshPlugins(QWebPluginFactory* self);
QObject* QWebPluginFactory_create(const QWebPluginFactory* self, struct miqt_string mimeType, QUrl* param2, struct miqt_array /* of struct miqt_string */  argumentNames, struct miqt_array /* of struct miqt_string */  argumentValues);
bool QWebPluginFactory_extension(QWebPluginFactory* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output);
bool QWebPluginFactory_supportsExtension(const QWebPluginFactory* self, int extension);
struct miqt_string QWebPluginFactory_tr2(const char* s, const char* c);
struct miqt_string QWebPluginFactory_tr3(const char* s, const char* c, int n);
struct miqt_string QWebPluginFactory_trUtf82(const char* s, const char* c);
struct miqt_string QWebPluginFactory_trUtf83(const char* s, const char* c, int n);
bool QWebPluginFactory_override_virtual_plugins(void* self, intptr_t slot);
struct miqt_array /* of QWebPluginFactory__Plugin* */  QWebPluginFactory_virtualbase_plugins(const void* self);
bool QWebPluginFactory_override_virtual_refreshPlugins(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_refreshPlugins(void* self);
bool QWebPluginFactory_override_virtual_create(void* self, intptr_t slot);
QObject* QWebPluginFactory_virtualbase_create(const void* self, struct miqt_string mimeType, QUrl* param2, struct miqt_array /* of struct miqt_string */  argumentNames, struct miqt_array /* of struct miqt_string */  argumentValues);
bool QWebPluginFactory_override_virtual_extension(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_extension(void* self, int extension, QWebPluginFactory__ExtensionOption* option, QWebPluginFactory__ExtensionReturn* output);
bool QWebPluginFactory_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_supportsExtension(const void* self, int extension);
bool QWebPluginFactory_override_virtual_event(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_event(void* self, QEvent* event);
bool QWebPluginFactory_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebPluginFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebPluginFactory_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebPluginFactory_override_virtual_childEvent(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebPluginFactory_override_virtual_customEvent(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_customEvent(void* self, QEvent* event);
bool QWebPluginFactory_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebPluginFactory_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebPluginFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QWebPluginFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebPluginFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebPluginFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebPluginFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QWebPluginFactory_delete(QWebPluginFactory* self);

QWebPluginFactory__MimeType* QWebPluginFactory__MimeType_new(QWebPluginFactory__MimeType* param1);
bool QWebPluginFactory__MimeType_operatorEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other);
bool QWebPluginFactory__MimeType_operatorNotEqual(const QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* other);
void QWebPluginFactory__MimeType_operatorAssign(QWebPluginFactory__MimeType* self, QWebPluginFactory__MimeType* param1);
void QWebPluginFactory__MimeType_delete(QWebPluginFactory__MimeType* self);

QWebPluginFactory__Plugin* QWebPluginFactory__Plugin_new(QWebPluginFactory__Plugin* param1);
void QWebPluginFactory__Plugin_operatorAssign(QWebPluginFactory__Plugin* self, QWebPluginFactory__Plugin* param1);
void QWebPluginFactory__Plugin_delete(QWebPluginFactory__Plugin* self);

void QWebPluginFactory__ExtensionOption_delete(QWebPluginFactory__ExtensionOption* self);

void QWebPluginFactory__ExtensionReturn_delete(QWebPluginFactory__ExtensionReturn* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
