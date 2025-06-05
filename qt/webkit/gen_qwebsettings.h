#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBSETTINGS_H
#define MIQT_QT_WEBKIT_GEN_QWEBSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QPixmap;
class QUrl;
class QWebSettings;
#else
typedef struct QIcon QIcon;
typedef struct QPixmap QPixmap;
typedef struct QUrl QUrl;
typedef struct QWebSettings QWebSettings;
#endif

QWebSettings* QWebSettings_globalSettings();
void QWebSettings_setFontFamily(QWebSettings* self, int which, struct miqt_string family);
struct miqt_string QWebSettings_fontFamily(const QWebSettings* self, int which);
void QWebSettings_resetFontFamily(QWebSettings* self, int which);
void QWebSettings_setFontSize(QWebSettings* self, int type, int size);
int QWebSettings_fontSize(const QWebSettings* self, int type);
void QWebSettings_resetFontSize(QWebSettings* self, int type);
void QWebSettings_setAttribute(QWebSettings* self, int attr, bool on);
bool QWebSettings_testAttribute(const QWebSettings* self, int attr);
void QWebSettings_resetAttribute(QWebSettings* self, int attr);
void QWebSettings_setUserStyleSheetUrl(QWebSettings* self, QUrl* location);
QUrl* QWebSettings_userStyleSheetUrl(const QWebSettings* self);
void QWebSettings_setDefaultTextEncoding(QWebSettings* self, struct miqt_string encoding);
struct miqt_string QWebSettings_defaultTextEncoding(const QWebSettings* self);
void QWebSettings_setIconDatabasePath(struct miqt_string location);
struct miqt_string QWebSettings_iconDatabasePath();
void QWebSettings_clearIconDatabase();
QIcon* QWebSettings_iconForUrl(QUrl* url);
void QWebSettings_setPluginSearchPaths(struct miqt_array /* of struct miqt_string */  paths);
struct miqt_array /* of struct miqt_string */  QWebSettings_pluginSearchPaths();
void QWebSettings_setWebGraphic(int type, QPixmap* graphic);
QPixmap* QWebSettings_webGraphic(int type);
void QWebSettings_setMaximumPagesInCache(int pages);
int QWebSettings_maximumPagesInCache();
void QWebSettings_setObjectCacheCapacities(int cacheMinDeadCapacity, int cacheMaxDead, int totalCapacity);
void QWebSettings_setOfflineStoragePath(struct miqt_string path);
struct miqt_string QWebSettings_offlineStoragePath();
void QWebSettings_setOfflineStorageDefaultQuota(long long maximumSize);
long long QWebSettings_offlineStorageDefaultQuota();
void QWebSettings_setOfflineWebApplicationCachePath(struct miqt_string path);
struct miqt_string QWebSettings_offlineWebApplicationCachePath();
void QWebSettings_setOfflineWebApplicationCacheQuota(long long maximumSize);
long long QWebSettings_offlineWebApplicationCacheQuota();
void QWebSettings_setLocalStoragePath(QWebSettings* self, struct miqt_string path);
struct miqt_string QWebSettings_localStoragePath(const QWebSettings* self);
void QWebSettings_clearMemoryCaches();
void QWebSettings_enablePersistentStorage();
void QWebSettings_setThirdPartyCookiePolicy(QWebSettings* self, int thirdPartyCookiePolicy);
int QWebSettings_thirdPartyCookiePolicy(const QWebSettings* self);
void QWebSettings_setCSSMediaType(QWebSettings* self, struct miqt_string cSSMediaType);
struct miqt_string QWebSettings_cssMediaType(const QWebSettings* self);
void QWebSettings_enablePersistentStorageWithPath(struct miqt_string path);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
