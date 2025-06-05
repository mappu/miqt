#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLENGINE_H
#define MIQT_QT6_QML_GEN_QQMLENGINE_H

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
class QJSEngine;
class QMetaMethod;
class QMetaObject;
class QMetaProperty;
class QObject;
class QQmlAbstractUrlInterceptor;
class QQmlContext;
class QQmlEngine;
class QQmlError;
class QQmlImageProviderBase;
class QQmlIncubationController;
class QQmlNetworkAccessManagerFactory;
class QTimerEvent;
class QUrl;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJSEngine QJSEngine;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaProperty QMetaProperty;
typedef struct QObject QObject;
typedef struct QQmlAbstractUrlInterceptor QQmlAbstractUrlInterceptor;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQmlImageProviderBase QQmlImageProviderBase;
typedef struct QQmlIncubationController QQmlIncubationController;
typedef struct QQmlNetworkAccessManagerFactory QQmlNetworkAccessManagerFactory;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

void QQmlImageProviderBase_virtbase(QQmlImageProviderBase* src, QObject** outptr_QObject);
QMetaObject* QQmlImageProviderBase_metaObject(const QQmlImageProviderBase* self);
void* QQmlImageProviderBase_metacast(QQmlImageProviderBase* self, const char* param1);
struct miqt_string QQmlImageProviderBase_tr(const char* s);
int QQmlImageProviderBase_imageType(const QQmlImageProviderBase* self);
int QQmlImageProviderBase_flags(const QQmlImageProviderBase* self);
struct miqt_string QQmlImageProviderBase_tr2(const char* s, const char* c);
struct miqt_string QQmlImageProviderBase_tr3(const char* s, const char* c, int n);

void QQmlImageProviderBase_delete(QQmlImageProviderBase* self);

QQmlEngine* QQmlEngine_new();
QQmlEngine* QQmlEngine_new2(QObject* p);
void QQmlEngine_virtbase(QQmlEngine* src, QJSEngine** outptr_QJSEngine);
QMetaObject* QQmlEngine_metaObject(const QQmlEngine* self);
void* QQmlEngine_metacast(QQmlEngine* self, const char* param1);
struct miqt_string QQmlEngine_tr(const char* s);
QQmlContext* QQmlEngine_rootContext(const QQmlEngine* self);
void QQmlEngine_clearComponentCache(QQmlEngine* self);
void QQmlEngine_trimComponentCache(QQmlEngine* self);
void QQmlEngine_clearSingletons(QQmlEngine* self);
struct miqt_array /* of struct miqt_string */  QQmlEngine_importPathList(const QQmlEngine* self);
void QQmlEngine_setImportPathList(QQmlEngine* self, struct miqt_array /* of struct miqt_string */  paths);
void QQmlEngine_addImportPath(QQmlEngine* self, struct miqt_string dir);
struct miqt_array /* of struct miqt_string */  QQmlEngine_pluginPathList(const QQmlEngine* self);
void QQmlEngine_setPluginPathList(QQmlEngine* self, struct miqt_array /* of struct miqt_string */  paths);
void QQmlEngine_addPluginPath(QQmlEngine* self, struct miqt_string dir);
bool QQmlEngine_addNamedBundle(QQmlEngine* self, struct miqt_string param1, struct miqt_string param2);
bool QQmlEngine_importPlugin(QQmlEngine* self, struct miqt_string filePath, struct miqt_string uri, struct miqt_array /* of QQmlError* */  errors);
void QQmlEngine_setNetworkAccessManagerFactory(QQmlEngine* self, QQmlNetworkAccessManagerFactory* networkAccessManagerFactory);
QQmlNetworkAccessManagerFactory* QQmlEngine_networkAccessManagerFactory(const QQmlEngine* self);
void QQmlEngine_setUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor);
QQmlAbstractUrlInterceptor* QQmlEngine_urlInterceptor(const QQmlEngine* self);
void QQmlEngine_addUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor);
void QQmlEngine_removeUrlInterceptor(QQmlEngine* self, QQmlAbstractUrlInterceptor* urlInterceptor);
struct miqt_array /* of QQmlAbstractUrlInterceptor* */  QQmlEngine_urlInterceptors(const QQmlEngine* self);
QUrl* QQmlEngine_interceptUrl(const QQmlEngine* self, QUrl* url, int type);
void QQmlEngine_addImageProvider(QQmlEngine* self, struct miqt_string id, QQmlImageProviderBase* param2);
QQmlImageProviderBase* QQmlEngine_imageProvider(const QQmlEngine* self, struct miqt_string id);
void QQmlEngine_removeImageProvider(QQmlEngine* self, struct miqt_string id);
void QQmlEngine_setIncubationController(QQmlEngine* self, QQmlIncubationController* incubationController);
QQmlIncubationController* QQmlEngine_incubationController(const QQmlEngine* self);
void QQmlEngine_setOfflineStoragePath(QQmlEngine* self, struct miqt_string dir);
struct miqt_string QQmlEngine_offlineStoragePath(const QQmlEngine* self);
struct miqt_string QQmlEngine_offlineStorageDatabaseFilePath(const QQmlEngine* self, struct miqt_string databaseName);
QUrl* QQmlEngine_baseUrl(const QQmlEngine* self);
void QQmlEngine_setBaseUrl(QQmlEngine* self, QUrl* baseUrl);
bool QQmlEngine_outputWarningsToStandardError(const QQmlEngine* self);
void QQmlEngine_setOutputWarningsToStandardError(QQmlEngine* self, bool outputWarningsToStandardError);
void QQmlEngine_captureProperty(const QQmlEngine* self, QObject* object, QMetaProperty* property);
void QQmlEngine_retranslate(QQmlEngine* self);
QQmlContext* QQmlEngine_contextForObject(QObject* param1);
void QQmlEngine_setContextForObject(QObject* param1, QQmlContext* param2);
bool QQmlEngine_event(QQmlEngine* self, QEvent* param1);
void QQmlEngine_quit(QQmlEngine* self);
void QQmlEngine_connect_quit(QQmlEngine* self, intptr_t slot);
void QQmlEngine_exit(QQmlEngine* self, int retCode);
void QQmlEngine_connect_exit(QQmlEngine* self, intptr_t slot);
void QQmlEngine_warnings(QQmlEngine* self, struct miqt_array /* of QQmlError* */  warnings);
void QQmlEngine_connect_warnings(QQmlEngine* self, intptr_t slot);
struct miqt_string QQmlEngine_tr2(const char* s, const char* c);
struct miqt_string QQmlEngine_tr3(const char* s, const char* c, int n);

bool QQmlEngine_override_virtual_event(void* self, intptr_t slot);
bool QQmlEngine_virtualbase_event(void* self, QEvent* param1);
bool QQmlEngine_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlEngine_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlEngine_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlEngine_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlEngine_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlEngine_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlEngine_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlEngine_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QQmlEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QQmlEngine_delete(QQmlEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
