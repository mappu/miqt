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
void QNetworkCookie_OperatorAssign(QNetworkCookie* self, QNetworkCookie* other);
void QNetworkCookie_Swap(QNetworkCookie* self, QNetworkCookie* other);
bool QNetworkCookie_OperatorEqual(const QNetworkCookie* self, QNetworkCookie* other);
bool QNetworkCookie_OperatorNotEqual(const QNetworkCookie* self, QNetworkCookie* other);
bool QNetworkCookie_IsSecure(const QNetworkCookie* self);
void QNetworkCookie_SetSecure(QNetworkCookie* self, bool enable);
bool QNetworkCookie_IsHttpOnly(const QNetworkCookie* self);
void QNetworkCookie_SetHttpOnly(QNetworkCookie* self, bool enable);
bool QNetworkCookie_IsSessionCookie(const QNetworkCookie* self);
QDateTime* QNetworkCookie_ExpirationDate(const QNetworkCookie* self);
void QNetworkCookie_SetExpirationDate(QNetworkCookie* self, QDateTime* date);
struct miqt_string QNetworkCookie_Domain(const QNetworkCookie* self);
void QNetworkCookie_SetDomain(QNetworkCookie* self, struct miqt_string domain);
struct miqt_string QNetworkCookie_Path(const QNetworkCookie* self);
void QNetworkCookie_SetPath(QNetworkCookie* self, struct miqt_string path);
struct miqt_string QNetworkCookie_Name(const QNetworkCookie* self);
void QNetworkCookie_SetName(QNetworkCookie* self, struct miqt_string cookieName);
struct miqt_string QNetworkCookie_Value(const QNetworkCookie* self);
void QNetworkCookie_SetValue(QNetworkCookie* self, struct miqt_string value);
struct miqt_string QNetworkCookie_ToRawForm(const QNetworkCookie* self);
bool QNetworkCookie_HasSameIdentifier(const QNetworkCookie* self, QNetworkCookie* other);
void QNetworkCookie_Normalize(QNetworkCookie* self, QUrl* url);
struct miqt_array /* of QNetworkCookie* */  QNetworkCookie_ParseCookies(struct miqt_string cookieString);
struct miqt_string QNetworkCookie_ToRawForm1(const QNetworkCookie* self, int form);
void QNetworkCookie_Delete(QNetworkCookie* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
