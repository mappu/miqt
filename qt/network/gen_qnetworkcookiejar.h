#ifndef GEN_QNETWORKCOOKIEJAR_H
#define GEN_QNETWORKCOOKIEJAR_H

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
class QNetworkCookieJar;
class QObject;
class QUrl;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QNetworkCookieJar QNetworkCookieJar;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QNetworkCookieJar* QNetworkCookieJar_new();
QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent);
QMetaObject* QNetworkCookieJar_MetaObject(const QNetworkCookieJar* self);
void* QNetworkCookieJar_Metacast(QNetworkCookieJar* self, const char* param1);
struct miqt_string QNetworkCookieJar_Tr(const char* s);
struct miqt_string QNetworkCookieJar_TrUtf8(const char* s);
struct miqt_array QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, QUrl* url);
bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, struct miqt_array /* of QNetworkCookie* */ cookieList, QUrl* url);
bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, QNetworkCookie* cookie);
struct miqt_string QNetworkCookieJar_Tr2(const char* s, const char* c);
struct miqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkCookieJar_TrUtf82(const char* s, const char* c);
struct miqt_string QNetworkCookieJar_TrUtf83(const char* s, const char* c, int n);
void QNetworkCookieJar_Delete(QNetworkCookieJar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
