#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEPROFILE_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEPROFILE_H

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
class QWebEngineClientCertificateStore;
class QWebEngineCookieStore;
class QWebEngineDownloadItem;
class QWebEngineProfile;
class QWebEngineScriptCollection;
class QWebEngineSettings;
class QWebEngineUrlRequestInterceptor;
class QWebEngineUrlSchemeHandler;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebEngineClientCertificateStore QWebEngineClientCertificateStore;
typedef struct QWebEngineCookieStore QWebEngineCookieStore;
typedef struct QWebEngineDownloadItem QWebEngineDownloadItem;
typedef struct QWebEngineProfile QWebEngineProfile;
typedef struct QWebEngineScriptCollection QWebEngineScriptCollection;
typedef struct QWebEngineSettings QWebEngineSettings;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
typedef struct QWebEngineUrlSchemeHandler QWebEngineUrlSchemeHandler;
#endif

QWebEngineProfile* QWebEngineProfile_new();
QWebEngineProfile* QWebEngineProfile_new2(struct miqt_string name);
QWebEngineProfile* QWebEngineProfile_new3(QObject* parent);
QWebEngineProfile* QWebEngineProfile_new4(struct miqt_string name, QObject* parent);
void QWebEngineProfile_virtbase(QWebEngineProfile* src, QObject** outptr_QObject);
QMetaObject* QWebEngineProfile_MetaObject(const QWebEngineProfile* self);
void* QWebEngineProfile_Metacast(QWebEngineProfile* self, const char* param1);
struct miqt_string QWebEngineProfile_Tr(const char* s);
struct miqt_string QWebEngineProfile_TrUtf8(const char* s);
struct miqt_string QWebEngineProfile_StorageName(const QWebEngineProfile* self);
bool QWebEngineProfile_IsOffTheRecord(const QWebEngineProfile* self);
struct miqt_string QWebEngineProfile_PersistentStoragePath(const QWebEngineProfile* self);
void QWebEngineProfile_SetPersistentStoragePath(QWebEngineProfile* self, struct miqt_string path);
struct miqt_string QWebEngineProfile_CachePath(const QWebEngineProfile* self);
void QWebEngineProfile_SetCachePath(QWebEngineProfile* self, struct miqt_string path);
struct miqt_string QWebEngineProfile_HttpUserAgent(const QWebEngineProfile* self);
void QWebEngineProfile_SetHttpUserAgent(QWebEngineProfile* self, struct miqt_string userAgent);
int QWebEngineProfile_HttpCacheType(const QWebEngineProfile* self);
void QWebEngineProfile_SetHttpCacheType(QWebEngineProfile* self, int httpCacheType);
void QWebEngineProfile_SetHttpAcceptLanguage(QWebEngineProfile* self, struct miqt_string httpAcceptLanguage);
struct miqt_string QWebEngineProfile_HttpAcceptLanguage(const QWebEngineProfile* self);
int QWebEngineProfile_PersistentCookiesPolicy(const QWebEngineProfile* self);
void QWebEngineProfile_SetPersistentCookiesPolicy(QWebEngineProfile* self, int persistentCookiesPolicy);
int QWebEngineProfile_HttpCacheMaximumSize(const QWebEngineProfile* self);
void QWebEngineProfile_SetHttpCacheMaximumSize(QWebEngineProfile* self, int maxSize);
QWebEngineCookieStore* QWebEngineProfile_CookieStore(QWebEngineProfile* self);
void QWebEngineProfile_SetRequestInterceptor(QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor);
void QWebEngineProfile_SetUrlRequestInterceptor(QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor);
void QWebEngineProfile_ClearAllVisitedLinks(QWebEngineProfile* self);
void QWebEngineProfile_ClearVisitedLinks(QWebEngineProfile* self, struct miqt_array /* of QUrl* */  urls);
bool QWebEngineProfile_VisitedLinksContainsUrl(const QWebEngineProfile* self, QUrl* url);
QWebEngineSettings* QWebEngineProfile_Settings(const QWebEngineProfile* self);
QWebEngineScriptCollection* QWebEngineProfile_Scripts(const QWebEngineProfile* self);
QWebEngineUrlSchemeHandler* QWebEngineProfile_UrlSchemeHandler(const QWebEngineProfile* self, struct miqt_string param1);
void QWebEngineProfile_InstallUrlSchemeHandler(QWebEngineProfile* self, struct miqt_string scheme, QWebEngineUrlSchemeHandler* param2);
void QWebEngineProfile_RemoveUrlScheme(QWebEngineProfile* self, struct miqt_string scheme);
void QWebEngineProfile_RemoveUrlSchemeHandler(QWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1);
void QWebEngineProfile_RemoveAllUrlSchemeHandlers(QWebEngineProfile* self);
void QWebEngineProfile_ClearHttpCache(QWebEngineProfile* self);
void QWebEngineProfile_SetSpellCheckLanguages(QWebEngineProfile* self, struct miqt_array /* of struct miqt_string */  languages);
struct miqt_array /* of struct miqt_string */  QWebEngineProfile_SpellCheckLanguages(const QWebEngineProfile* self);
void QWebEngineProfile_SetSpellCheckEnabled(QWebEngineProfile* self, bool enabled);
bool QWebEngineProfile_IsSpellCheckEnabled(const QWebEngineProfile* self);
void QWebEngineProfile_SetUseForGlobalCertificateVerification(QWebEngineProfile* self);
bool QWebEngineProfile_IsUsedForGlobalCertificateVerification(const QWebEngineProfile* self);
struct miqt_string QWebEngineProfile_DownloadPath(const QWebEngineProfile* self);
void QWebEngineProfile_SetDownloadPath(QWebEngineProfile* self, struct miqt_string path);
QWebEngineClientCertificateStore* QWebEngineProfile_ClientCertificateStore(QWebEngineProfile* self);
QWebEngineProfile* QWebEngineProfile_DefaultProfile();
void QWebEngineProfile_DownloadRequested(QWebEngineProfile* self, QWebEngineDownloadItem* download);
void QWebEngineProfile_connect_DownloadRequested(QWebEngineProfile* self, intptr_t slot);
struct miqt_string QWebEngineProfile_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineProfile_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineProfile_TrUtf82(const char* s, const char* c);
struct miqt_string QWebEngineProfile_TrUtf83(const char* s, const char* c, int n);
void QWebEngineProfile_SetUseForGlobalCertificateVerification1(QWebEngineProfile* self, bool enabled);
void QWebEngineProfile_override_virtual_Event(void* self, intptr_t slot);
bool QWebEngineProfile_virtualbase_Event(void* self, QEvent* event);
void QWebEngineProfile_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebEngineProfile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWebEngineProfile_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWebEngineProfile_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWebEngineProfile_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_CustomEvent(void* self, QEvent* event);
void QWebEngineProfile_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWebEngineProfile_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebEngineProfile_Delete(QWebEngineProfile* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
