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
struct miqt_array /* of QWebSecurityOrigin* */  QWebSecurityOrigin_AllOrigins();
void QWebSecurityOrigin_AddLocalScheme(struct miqt_string scheme);
void QWebSecurityOrigin_RemoveLocalScheme(struct miqt_string scheme);
struct miqt_array /* of struct miqt_string */  QWebSecurityOrigin_LocalSchemes();
void QWebSecurityOrigin_AddAccessWhitelistEntry(QWebSecurityOrigin* self, struct miqt_string scheme, struct miqt_string host, int subdomainSetting);
void QWebSecurityOrigin_RemoveAccessWhitelistEntry(QWebSecurityOrigin* self, struct miqt_string scheme, struct miqt_string host, int subdomainSetting);
struct miqt_string QWebSecurityOrigin_Scheme(const QWebSecurityOrigin* self);
struct miqt_string QWebSecurityOrigin_Host(const QWebSecurityOrigin* self);
int QWebSecurityOrigin_Port(const QWebSecurityOrigin* self);
long long QWebSecurityOrigin_DatabaseUsage(const QWebSecurityOrigin* self);
long long QWebSecurityOrigin_DatabaseQuota(const QWebSecurityOrigin* self);
void QWebSecurityOrigin_SetDatabaseQuota(QWebSecurityOrigin* self, long long quota);
void QWebSecurityOrigin_SetApplicationCacheQuota(QWebSecurityOrigin* self, long long quota);
struct miqt_array /* of QWebDatabase* */  QWebSecurityOrigin_Databases(const QWebSecurityOrigin* self);
void QWebSecurityOrigin_OperatorAssign(QWebSecurityOrigin* self, QWebSecurityOrigin* other);
void QWebSecurityOrigin_Delete(QWebSecurityOrigin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
