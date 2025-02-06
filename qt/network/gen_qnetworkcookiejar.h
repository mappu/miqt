#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKCOOKIEJAR_H
#define MIQT_QT_NETWORK_GEN_QNETWORKCOOKIEJAR_H

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
QMetaObject* QNetworkCookieJar_metaObject(const QNetworkCookieJar* self);
void* QNetworkCookieJar_metacast(QNetworkCookieJar* self, const char* param1);
struct miqt_string QNetworkCookieJar_tr(const char* s);
struct miqt_string QNetworkCookieJar_trUtf8(const char* s);
struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_cookiesForUrl(const QNetworkCookieJar* self, QUrl* url);
bool QNetworkCookieJar_setCookiesFromUrl(QNetworkCookieJar* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url);
bool QNetworkCookieJar_insertCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_updateCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_deleteCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_validateCookie(const QNetworkCookieJar* self, QNetworkCookie* cookie, QUrl* url);
struct miqt_string QNetworkCookieJar_tr2(const char* s, const char* c);
struct miqt_string QNetworkCookieJar_tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkCookieJar_trUtf82(const char* s, const char* c);
struct miqt_string QNetworkCookieJar_trUtf83(const char* s, const char* c, int n);
bool QNetworkCookieJar_override_virtual_cookiesForUrl(void* self, intptr_t slot);
struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_virtualbase_cookiesForUrl(const void* self, QUrl* url);
bool QNetworkCookieJar_override_virtual_setCookiesFromUrl(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_setCookiesFromUrl(void* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url);
bool QNetworkCookieJar_override_virtual_insertCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_insertCookie(void* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_override_virtual_updateCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_updateCookie(void* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_override_virtual_deleteCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_deleteCookie(void* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_override_virtual_validateCookie(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_validateCookie(const void* self, QNetworkCookie* cookie, QUrl* url);
bool QNetworkCookieJar_override_virtual_event(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_event(void* self, QEvent* event);
bool QNetworkCookieJar_override_virtual_eventFilter(void* self, intptr_t slot);
bool QNetworkCookieJar_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QNetworkCookieJar_override_virtual_timerEvent(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QNetworkCookieJar_override_virtual_childEvent(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_childEvent(void* self, QChildEvent* event);
bool QNetworkCookieJar_override_virtual_customEvent(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_customEvent(void* self, QEvent* event);
bool QNetworkCookieJar_override_virtual_connectNotify(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QNetworkCookieJar_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QNetworkCookieJar_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_protectedbase_allCookies(bool* _dynamic_cast_ok, const void* self);
void QNetworkCookieJar_protectedbase_setAllCookies(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QNetworkCookie* */  cookieList);
QObject* QNetworkCookieJar_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QNetworkCookieJar_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QNetworkCookieJar_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QNetworkCookieJar_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QNetworkCookieJar_delete(QNetworkCookieJar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
