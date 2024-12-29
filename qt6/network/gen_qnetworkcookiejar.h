#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKCOOKIEJAR_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKCOOKIEJAR_H

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
class QNetworkCookie;
class QNetworkCookieJar;
class QObject;
class QTimerEvent;
class QUrl;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QNetworkCookieJar QNetworkCookieJar;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QNetworkCookieJar* QNetworkCookieJar_new();
QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent);
void QNetworkCookieJar_virtbase(QNetworkCookieJar* src, QObject** outptr_QObject);
QMetaObject* QNetworkCookieJar_MetaObject(const QNetworkCookieJar* self);
void* QNetworkCookieJar_Metacast(QNetworkCookieJar* self, const char* param1);
struct miqt_string QNetworkCookieJar_Tr(const char* s);
struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, QUrl* url);
bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url);
bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_ValidateCookie(const QNetworkCookieJar* self, QNetworkCookie* cookie, QUrl* url);
struct miqt_string QNetworkCookieJar_Tr2(const char* s, const char* c);
struct miqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n);
void QNetworkCookieJar_override_virtual_CookiesForUrl(void* self, intptr_t slot);
struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_virtualbase_CookiesForUrl(const void* self, QUrl* url);
void QNetworkCookieJar_override_virtual_SetCookiesFromUrl(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_SetCookiesFromUrl(void* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url);
void QNetworkCookieJar_override_virtual_InsertCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_InsertCookie(void* self, QNetworkCookie* cookie);
void QNetworkCookieJar_override_virtual_UpdateCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_UpdateCookie(void* self, QNetworkCookie* cookie);
void QNetworkCookieJar_override_virtual_DeleteCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_DeleteCookie(void* self, QNetworkCookie* cookie);
void QNetworkCookieJar_override_virtual_ValidateCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_ValidateCookie(const void* self, QNetworkCookie* cookie, QUrl* url);
void QNetworkCookieJar_override_virtual_Event(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_Event(void* self, QEvent* event);
void QNetworkCookieJar_override_virtual_EventFilter(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QNetworkCookieJar_override_virtual_TimerEvent(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QNetworkCookieJar_override_virtual_ChildEvent(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QNetworkCookieJar_override_virtual_CustomEvent(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_CustomEvent(void* self, QEvent* event);
void QNetworkCookieJar_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QNetworkCookieJar_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QNetworkCookieJar_Delete(QNetworkCookieJar* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
