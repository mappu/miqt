#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKCOOKIE_H
#define MIQT_QT_NETWORK_GEN_QNETWORKCOOKIE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QNetworkCookie;
class QUrl;
#else
typedef struct QDateTime QDateTime;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QUrl QUrl;
#endif

QNetworkCookie* QNetworkCookie_new();
QNetworkCookie* QNetworkCookie_new2(QNetworkCookie* other);
QNetworkCookie* QNetworkCookie_new3(struct miqt_string name);
QNetworkCookie* QNetworkCookie_new4(struct miqt_string name, struct miqt_string value);
void QNetworkCookie_operatorAssign(QNetworkCookie* self, QNetworkCookie* other);
void QNetworkCookie_swap(QNetworkCookie* self, QNetworkCookie* other);
bool QNetworkCookie_operatorEqual(const QNetworkCookie* self, QNetworkCookie* other);
bool QNetworkCookie_operatorNotEqual(const QNetworkCookie* self, QNetworkCookie* other);
bool QNetworkCookie_isSecure(const QNetworkCookie* self);
void QNetworkCookie_setSecure(QNetworkCookie* self, bool enable);
bool QNetworkCookie_isHttpOnly(const QNetworkCookie* self);
void QNetworkCookie_setHttpOnly(QNetworkCookie* self, bool enable);
bool QNetworkCookie_isSessionCookie(const QNetworkCookie* self);
QDateTime* QNetworkCookie_expirationDate(const QNetworkCookie* self);
void QNetworkCookie_setExpirationDate(QNetworkCookie* self, QDateTime* date);
struct miqt_string QNetworkCookie_domain(const QNetworkCookie* self);
void QNetworkCookie_setDomain(QNetworkCookie* self, struct miqt_string domain);
struct miqt_string QNetworkCookie_path(const QNetworkCookie* self);
void QNetworkCookie_setPath(QNetworkCookie* self, struct miqt_string path);
struct miqt_string QNetworkCookie_name(const QNetworkCookie* self);
void QNetworkCookie_setName(QNetworkCookie* self, struct miqt_string cookieName);
struct miqt_string QNetworkCookie_value(const QNetworkCookie* self);
void QNetworkCookie_setValue(QNetworkCookie* self, struct miqt_string value);
struct miqt_string QNetworkCookie_toRawForm(const QNetworkCookie* self);
bool QNetworkCookie_hasSameIdentifier(const QNetworkCookie* self, QNetworkCookie* other);
void QNetworkCookie_normalize(QNetworkCookie* self, QUrl* url);
struct miqt_array /* of QNetworkCookie* */  QNetworkCookie_parseCookies(struct miqt_string cookieString);
struct miqt_string QNetworkCookie_toRawFormWithForm(const QNetworkCookie* self, int form);
void QNetworkCookie_delete(QNetworkCookie* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
