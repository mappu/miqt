#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLCONTEXT_H
#define MIQT_QT6_QML_GEN_QQMLCONTEXT_H

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
class QJSValue;
class QMetaMethod;
class QMetaObject;
class QObject;
class QQmlContext;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQmlContext__PropertyPair)
typedef QQmlContext::PropertyPair QQmlContext__PropertyPair;
#else
class QQmlContext__PropertyPair;
#endif
class QQmlEngine;
class QTimerEvent;
class QUrl;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJSValue QJSValue;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlContext__PropertyPair QQmlContext__PropertyPair;
typedef struct QQmlEngine QQmlEngine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QQmlContext* QQmlContext_new(QQmlEngine* parent);
QQmlContext* QQmlContext_new2(QQmlContext* parent);
QQmlContext* QQmlContext_new3(QQmlEngine* parent, QObject* objParent);
QQmlContext* QQmlContext_new4(QQmlContext* parent, QObject* objParent);
void QQmlContext_virtbase(QQmlContext* src, QObject** outptr_QObject);
QMetaObject* QQmlContext_metaObject(const QQmlContext* self);
void* QQmlContext_metacast(QQmlContext* self, const char* param1);
struct miqt_string QQmlContext_tr(const char* s);
bool QQmlContext_isValid(const QQmlContext* self);
QQmlEngine* QQmlContext_engine(const QQmlContext* self);
QQmlContext* QQmlContext_parentContext(const QQmlContext* self);
QObject* QQmlContext_contextObject(const QQmlContext* self);
void QQmlContext_setContextObject(QQmlContext* self, QObject* contextObject);
QVariant* QQmlContext_contextProperty(const QQmlContext* self, struct miqt_string param1);
void QQmlContext_setContextProperty(QQmlContext* self, struct miqt_string param1, QObject* param2);
void QQmlContext_setContextProperty2(QQmlContext* self, struct miqt_string param1, QVariant* param2);
void QQmlContext_setContextProperties(QQmlContext* self, struct miqt_array /* of QQmlContext__PropertyPair* */  properties);
struct miqt_string QQmlContext_nameForObject(const QQmlContext* self, QObject* param1);
QObject* QQmlContext_objectForName(const QQmlContext* self, struct miqt_string param1);
QUrl* QQmlContext_resolvedUrl(const QQmlContext* self, QUrl* param1);
void QQmlContext_setBaseUrl(QQmlContext* self, QUrl* baseUrl);
QUrl* QQmlContext_baseUrl(const QQmlContext* self);
QJSValue* QQmlContext_importedScript(const QQmlContext* self, struct miqt_string name);
struct miqt_string QQmlContext_tr2(const char* s, const char* c);
struct miqt_string QQmlContext_tr3(const char* s, const char* c, int n);
bool QQmlContext_override_virtual_event(void* self, intptr_t slot);
bool QQmlContext_virtualbase_event(void* self, QEvent* event);
bool QQmlContext_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlContext_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlContext_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlContext_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlContext_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlContext_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlContext_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlContext_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlContext_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlContext_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlContext_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlContext_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QQmlContext_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlContext_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlContext_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlContext_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QQmlContext_delete(QQmlContext* self);

QQmlContext__PropertyPair* QQmlContext__PropertyPair_new(QQmlContext__PropertyPair* param1);
void QQmlContext__PropertyPair_operatorAssign(QQmlContext__PropertyPair* self, QQmlContext__PropertyPair* param1);
void QQmlContext__PropertyPair_delete(QQmlContext__PropertyPair* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
