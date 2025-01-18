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
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineCookieStore QWebEngineCookieStore;
typedef struct QWebEngineCookieStore__FilterRequest QWebEngineCookieStore__FilterRequest;
#endif

void QWebEngineCookieStore_virtbase(QWebEngineCookieStore* src, QObject** outptr_QObject);
QMetaObject* QWebEngineCookieStore_MetaObject(const QWebEngineCookieStore* self);
void* QWebEngineCookieStore_Metacast(QWebEngineCookieStore* self, const char* param1);
struct miqt_string QWebEngineCookieStore_Tr(const char* s);
struct miqt_string QWebEngineCookieStore_TrUtf8(const char* s);
void QWebEngineCookieStore_SetCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_DeleteCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_DeleteSessionCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_DeleteAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_LoadAllCookies(QWebEngineCookieStore* self);
void QWebEngineCookieStore_CookieAdded(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_connect_CookieAdded(QWebEngineCookieStore* self, intptr_t slot);
void QWebEngineCookieStore_CookieRemoved(QWebEngineCookieStore* self, QNetworkCookie* cookie);
void QWebEngineCookieStore_connect_CookieRemoved(QWebEngineCookieStore* self, intptr_t slot);
struct miqt_string QWebEngineCookieStore_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineCookieStore_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineCookieStore_TrUtf82(const char* s, const char* c);
struct miqt_string QWebEngineCookieStore_TrUtf83(const char* s, const char* c, int n);
void QWebEngineCookieStore_SetCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin);
void QWebEngineCookieStore_DeleteCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin);
void QWebEngineCookieStore_Delete(QWebEngineCookieStore* self);

QWebEngineCookieStore__FilterRequest* QWebEngineCookieStore__FilterRequest_new(QWebEngineCookieStore__FilterRequest* param1);
void QWebEngineCookieStore__FilterRequest_OperatorAssign(QWebEngineCookieStore__FilterRequest* self, QWebEngineCookieStore__FilterRequest* param1);
void QWebEngineCookieStore__FilterRequest_Delete(QWebEngineCookieStore__FilterRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
