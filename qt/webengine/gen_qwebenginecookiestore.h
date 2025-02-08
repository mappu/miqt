#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINECOOKIESTORE_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINECOOKIESTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaObject;
class QNetworkCookie;
class QObject;
class QUrl;
class QWebEngineCookieStore;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineCookieStore__FilterRequest)
typedef QWebEngineCookieStore::FilterRequest QWebEngineCookieStore__FilterRequest;
#else
class QWebEngineCookieStore__FilterRequest;
#endif
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineCookieStore QWebEngineCookieStore;
typedef struct QWebEngineCookieStore__FilterRequest QWebEngineCookieStore__FilterRequest;
#endif

void QWebEngineCookieStore_virtbase(QWebEngineCookieStore* src, QObject** outptr_QObject);
QMetaObject* QWebEngineCookieStore_metaObject(const QWebEngineCookieStore* self);
void* QWebEngineCookieStore_metacast(QWebEngineCookieStore* self, const char* param1);
struct miqt_string QWebEngineCookieStore_tr(const char* s);
struct miqt_string QWebEngineCookieStore_trUtf8(const char* s);
void QWebEngineCookieStore_setCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_deleteCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_deleteSessionCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_deleteAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_loadAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_cookieAdded(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_connect_cookieAdded(QWebEngineCookieStore* self, intptr_t slot);
void QWebEngineCookieStore_cookieRemoved(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_connect_cookieRemoved(QWebEngineCookieStore* self, intptr_t slot);
struct miqt_string QWebEngineCookieStore_tr2(const char* s, const char* c);
struct miqt_string QWebEngineCookieStore_tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineCookieStore_trUtf82(const char* s, const char* c);
struct miqt_string QWebEngineCookieStore_trUtf83(const char* s, const char* c, int n);
void QWebEngineCookieStore_setCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin);
void QWebEngineCookieStore_deleteCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin);
void QWebEngineCookieStore_delete(QWebEngineCookieStore* self);

QWebEngineCookieStore__FilterRequest* QWebEngineCookieStore__FilterRequest_new(QWebEngineCookieStore__FilterRequest* param1);
void QWebEngineCookieStore__FilterRequest_operatorAssign(QWebEngineCookieStore__FilterRequest* self, QWebEngineCookieStore__FilterRequest* param1);
void QWebEngineCookieStore__FilterRequest_delete(QWebEngineCookieStore__FilterRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
