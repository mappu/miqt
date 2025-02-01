#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBSECURITYORIGIN_H
#define MIQT_QT_WEBKIT_GEN_QWEBSECURITYORIGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebDatabase;
class QWebSecurityOrigin;
#else
typedef struct QUrl QUrl;
typedef struct QWebDatabase QWebDatabase;
typedef struct QWebSecurityOrigin QWebSecurityOrigin;
#endif

QWebSecurityOrigin* QWebSecurityOrigin_new(QUrl* url);
QWebSecurityOrigin* QWebSecurityOrigin_new2(QWebSecurityOrigin* other);
struct miqt_array /* of QWebSecurityOrigin* */  QWebSecurityOrigin_allOrigins();
void QWebSecurityOrigin_addLocalScheme(struct miqt_string scheme);
void QWebSecurityOrigin_removeLocalScheme(struct miqt_string scheme);
struct miqt_array /* of struct miqt_string */  QWebSecurityOrigin_localSchemes();
void QWebSecurityOrigin_addAccessWhitelistEntry(QWebSecurityOrigin* self, struct miqt_string scheme, struct miqt_string host, int subdomainSetting);
void QWebSecurityOrigin_removeAccessWhitelistEntry(QWebSecurityOrigin* self, struct miqt_string scheme, struct miqt_string host, int subdomainSetting);
struct miqt_string QWebSecurityOrigin_scheme(const QWebSecurityOrigin* self);
struct miqt_string QWebSecurityOrigin_host(const QWebSecurityOrigin* self);
int QWebSecurityOrigin_port(const QWebSecurityOrigin* self);
long long QWebSecurityOrigin_databaseUsage(const QWebSecurityOrigin* self);
long long QWebSecurityOrigin_databaseQuota(const QWebSecurityOrigin* self);
void QWebSecurityOrigin_setDatabaseQuota(QWebSecurityOrigin* self, long long quota);
void QWebSecurityOrigin_setApplicationCacheQuota(QWebSecurityOrigin* self, long long quota);
struct miqt_array /* of QWebDatabase* */  QWebSecurityOrigin_databases(const QWebSecurityOrigin* self);
void QWebSecurityOrigin_operatorAssign(QWebSecurityOrigin* self, QWebSecurityOrigin* other);
void QWebSecurityOrigin_delete(QWebSecurityOrigin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
