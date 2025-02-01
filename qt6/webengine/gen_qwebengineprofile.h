#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEPROFILE_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEPROFILE_H

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
class QWebEngineDownloadRequest;
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
typedef struct QWebEngineDownloadRequest QWebEngineDownloadRequest;
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
QMetaObject* QWebEngineProfile_metaObject(const QWebEngineProfile* self);
void* QWebEngineProfile_metacast(QWebEngineProfile* self, const char* param1);
struct miqt_string QWebEngineProfile_tr(const char* s);
struct miqt_string QWebEngineProfile_storageName(const QWebEngineProfile* self);
bool QWebEngineProfile_isOffTheRecord(const QWebEngineProfile* self);
struct miqt_string QWebEngineProfile_persistentStoragePath(const QWebEngineProfile* self);
void QWebEngineProfile_setPersistentStoragePath(QWebEngineProfile* self, struct miqt_string path);
struct miqt_string QWebEngineProfile_cachePath(const QWebEngineProfile* self);
void QWebEngineProfile_setCachePath(QWebEngineProfile* self, struct miqt_string path);
struct miqt_string QWebEngineProfile_httpUserAgent(const QWebEngineProfile* self);
void QWebEngineProfile_setHttpUserAgent(QWebEngineProfile* self, struct miqt_string userAgent);
int QWebEngineProfile_httpCacheType(const QWebEngineProfile* self);
void QWebEngineProfile_setHttpCacheType(QWebEngineProfile* self, int httpCacheType);
void QWebEngineProfile_setHttpAcceptLanguage(QWebEngineProfile* self, struct miqt_string httpAcceptLanguage);
struct miqt_string QWebEngineProfile_httpAcceptLanguage(const QWebEngineProfile* self);
int QWebEngineProfile_persistentCookiesPolicy(const QWebEngineProfile* self);
void QWebEngineProfile_setPersistentCookiesPolicy(QWebEngineProfile* self, int persistentCookiesPolicy);
int QWebEngineProfile_httpCacheMaximumSize(const QWebEngineProfile* self);
void QWebEngineProfile_setHttpCacheMaximumSize(QWebEngineProfile* self, int maxSize);
QWebEngineCookieStore* QWebEngineProfile_cookieStore(QWebEngineProfile* self);
void QWebEngineProfile_setUrlRequestInterceptor(QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor);
void QWebEngineProfile_clearAllVisitedLinks(QWebEngineProfile* self);
void QWebEngineProfile_clearVisitedLinks(QWebEngineProfile* self, struct miqt_array /* of QUrl* */  urls);
bool QWebEngineProfile_visitedLinksContainsUrl(const QWebEngineProfile* self, QUrl* url);
QWebEngineSettings* QWebEngineProfile_settings(const QWebEngineProfile* self);
QWebEngineScriptCollection* QWebEngineProfile_scripts(const QWebEngineProfile* self);
QWebEngineUrlSchemeHandler* QWebEngineProfile_urlSchemeHandler(const QWebEngineProfile* self, struct miqt_string param1);
void QWebEngineProfile_installUrlSchemeHandler(QWebEngineProfile* self, struct miqt_string scheme, QWebEngineUrlSchemeHandler* param2);
void QWebEngineProfile_removeUrlScheme(QWebEngineProfile* self, struct miqt_string scheme);
void QWebEngineProfile_removeUrlSchemeHandler(QWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1);
void QWebEngineProfile_removeAllUrlSchemeHandlers(QWebEngineProfile* self);
void QWebEngineProfile_clearHttpCache(QWebEngineProfile* self);
void QWebEngineProfile_setSpellCheckLanguages(QWebEngineProfile* self, struct miqt_array /* of struct miqt_string */  languages);
struct miqt_array /* of struct miqt_string */  QWebEngineProfile_spellCheckLanguages(const QWebEngineProfile* self);
void QWebEngineProfile_setSpellCheckEnabled(QWebEngineProfile* self, bool enabled);
bool QWebEngineProfile_isSpellCheckEnabled(const QWebEngineProfile* self);
struct miqt_string QWebEngineProfile_downloadPath(const QWebEngineProfile* self);
void QWebEngineProfile_setDownloadPath(QWebEngineProfile* self, struct miqt_string path);
QWebEngineClientCertificateStore* QWebEngineProfile_clientCertificateStore(QWebEngineProfile* self);
QWebEngineProfile* QWebEngineProfile_defaultProfile();
void QWebEngineProfile_downloadRequested(QWebEngineProfile* self, QWebEngineDownloadRequest* download);
void QWebEngineProfile_connect_downloadRequested(QWebEngineProfile* self, intptr_t slot);
struct miqt_string QWebEngineProfile_tr2(const char* s, const char* c);
struct miqt_string QWebEngineProfile_tr3(const char* s, const char* c, int n);
bool QWebEngineProfile_override_virtual_event(void* self, intptr_t slot);
bool QWebEngineProfile_virtualbase_event(void* self, QEvent* event);
bool QWebEngineProfile_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebEngineProfile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebEngineProfile_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebEngineProfile_override_virtual_childEvent(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebEngineProfile_override_virtual_customEvent(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_customEvent(void* self, QEvent* event);
bool QWebEngineProfile_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebEngineProfile_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebEngineProfile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QWebEngineProfile_delete(QWebEngineProfile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
