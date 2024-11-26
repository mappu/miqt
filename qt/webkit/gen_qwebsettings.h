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

QWebSettings* QWebSettings_GlobalSettings();
void QWebSettings_SetFontFamily(QWebSettings* self, int which, struct miqt_string family);
struct miqt_string QWebSettings_FontFamily(const QWebSettings* self, int which);
void QWebSettings_ResetFontFamily(QWebSettings* self, int which);
void QWebSettings_SetFontSize(QWebSettings* self, int typeVal, int size);
int QWebSettings_FontSize(const QWebSettings* self, int typeVal);
void QWebSettings_ResetFontSize(QWebSettings* self, int typeVal);
void QWebSettings_SetAttribute(QWebSettings* self, int attr, bool on);
bool QWebSettings_TestAttribute(const QWebSettings* self, int attr);
void QWebSettings_ResetAttribute(QWebSettings* self, int attr);
void QWebSettings_SetUserStyleSheetUrl(QWebSettings* self, QUrl* location);
QUrl* QWebSettings_UserStyleSheetUrl(const QWebSettings* self);
void QWebSettings_SetDefaultTextEncoding(QWebSettings* self, struct miqt_string encoding);
struct miqt_string QWebSettings_DefaultTextEncoding(const QWebSettings* self);
void QWebSettings_SetIconDatabasePath(struct miqt_string location);
struct miqt_string QWebSettings_IconDatabasePath();
void QWebSettings_ClearIconDatabase();
QIcon* QWebSettings_IconForUrl(QUrl* url);
void QWebSettings_SetPluginSearchPaths(struct miqt_array /* of struct miqt_string */  paths);
struct miqt_array /* of struct miqt_string */  QWebSettings_PluginSearchPaths();
void QWebSettings_SetWebGraphic(int typeVal, QPixmap* graphic);
QPixmap* QWebSettings_WebGraphic(int typeVal);
void QWebSettings_SetMaximumPagesInCache(int pages);
int QWebSettings_MaximumPagesInCache();
void QWebSettings_SetObjectCacheCapacities(int cacheMinDeadCapacity, int cacheMaxDead, int totalCapacity);
void QWebSettings_SetOfflineStoragePath(struct miqt_string path);
struct miqt_string QWebSettings_OfflineStoragePath();
void QWebSettings_SetOfflineStorageDefaultQuota(long long maximumSize);
long long QWebSettings_OfflineStorageDefaultQuota();
void QWebSettings_SetOfflineWebApplicationCachePath(struct miqt_string path);
struct miqt_string QWebSettings_OfflineWebApplicationCachePath();
void QWebSettings_SetOfflineWebApplicationCacheQuota(long long maximumSize);
long long QWebSettings_OfflineWebApplicationCacheQuota();
void QWebSettings_SetLocalStoragePath(QWebSettings* self, struct miqt_string path);
struct miqt_string QWebSettings_LocalStoragePath(const QWebSettings* self);
void QWebSettings_ClearMemoryCaches();
void QWebSettings_EnablePersistentStorage();
void QWebSettings_SetThirdPartyCookiePolicy(QWebSettings* self, int thirdPartyCookiePolicy);
int QWebSettings_ThirdPartyCookiePolicy(const QWebSettings* self);
void QWebSettings_SetCSSMediaType(QWebSettings* self, struct miqt_string cSSMediaType);
struct miqt_string QWebSettings_CssMediaType(const QWebSettings* self);
void QWebSettings_EnablePersistentStorage1(struct miqt_string path);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
