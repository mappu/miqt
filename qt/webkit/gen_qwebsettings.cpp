#include <QIcon>
#include <QList>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebSettings>
#include <qwebsettings.h>
#include "gen_qwebsettings.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebSettings* QWebSettings_globalSettings() {
	return QWebSettings::globalSettings();
}

void QWebSettings_setFontFamily(QWebSettings* self, int which, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFontFamily(static_cast<QWebSettings::FontFamily>(which), family_QString);
}

struct miqt_string QWebSettings_fontFamily(const QWebSettings* self, int which) {
	QString _ret = self->fontFamily(static_cast<QWebSettings::FontFamily>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSettings_resetFontFamily(QWebSettings* self, int which) {
	self->resetFontFamily(static_cast<QWebSettings::FontFamily>(which));
}

void QWebSettings_setFontSize(QWebSettings* self, int type, int size) {
	self->setFontSize(static_cast<QWebSettings::FontSize>(type), static_cast<int>(size));
}

int QWebSettings_fontSize(const QWebSettings* self, int type) {
	return self->fontSize(static_cast<QWebSettings::FontSize>(type));
}

void QWebSettings_resetFontSize(QWebSettings* self, int type) {
	self->resetFontSize(static_cast<QWebSettings::FontSize>(type));
}

void QWebSettings_setAttribute(QWebSettings* self, int attr, bool on) {
	self->setAttribute(static_cast<QWebSettings::WebAttribute>(attr), on);
}

bool QWebSettings_testAttribute(const QWebSettings* self, int attr) {
	return self->testAttribute(static_cast<QWebSettings::WebAttribute>(attr));
}

void QWebSettings_resetAttribute(QWebSettings* self, int attr) {
	self->resetAttribute(static_cast<QWebSettings::WebAttribute>(attr));
}

void QWebSettings_setUserStyleSheetUrl(QWebSettings* self, QUrl* location) {
	self->setUserStyleSheetUrl(*location);
}

QUrl* QWebSettings_userStyleSheetUrl(const QWebSettings* self) {
	return new QUrl(self->userStyleSheetUrl());
}

void QWebSettings_setDefaultTextEncoding(QWebSettings* self, struct miqt_string encoding) {
	QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
	self->setDefaultTextEncoding(encoding_QString);
}

struct miqt_string QWebSettings_defaultTextEncoding(const QWebSettings* self) {
	QString _ret = self->defaultTextEncoding();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSettings_setIconDatabasePath(struct miqt_string location) {
	QString location_QString = QString::fromUtf8(location.data, location.len);
	QWebSettings::setIconDatabasePath(location_QString);
}

struct miqt_string QWebSettings_iconDatabasePath() {
	QString _ret = QWebSettings::iconDatabasePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSettings_clearIconDatabase() {
	QWebSettings::clearIconDatabase();
}

QIcon* QWebSettings_iconForUrl(QUrl* url) {
	return new QIcon(QWebSettings::iconForUrl(*url));
}

void QWebSettings_setPluginSearchPaths(struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	QWebSettings::setPluginSearchPaths(paths_QList);
}

struct miqt_array /* of struct miqt_string */  QWebSettings_pluginSearchPaths() {
	QStringList _ret = QWebSettings::pluginSearchPaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebSettings_setWebGraphic(int type, QPixmap* graphic) {
	QWebSettings::setWebGraphic(static_cast<QWebSettings::WebGraphic>(type), *graphic);
}

QPixmap* QWebSettings_webGraphic(int type) {
	return new QPixmap(QWebSettings::webGraphic(static_cast<QWebSettings::WebGraphic>(type)));
}

void QWebSettings_setMaximumPagesInCache(int pages) {
	QWebSettings::setMaximumPagesInCache(static_cast<int>(pages));
}

int QWebSettings_maximumPagesInCache() {
	return QWebSettings::maximumPagesInCache();
}

void QWebSettings_setObjectCacheCapacities(int cacheMinDeadCapacity, int cacheMaxDead, int totalCapacity) {
	QWebSettings::setObjectCacheCapacities(static_cast<int>(cacheMinDeadCapacity), static_cast<int>(cacheMaxDead), static_cast<int>(totalCapacity));
}

void QWebSettings_setOfflineStoragePath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QWebSettings::setOfflineStoragePath(path_QString);
}

struct miqt_string QWebSettings_offlineStoragePath() {
	QString _ret = QWebSettings::offlineStoragePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSettings_setOfflineStorageDefaultQuota(long long maximumSize) {
	QWebSettings::setOfflineStorageDefaultQuota(static_cast<qint64>(maximumSize));
}

long long QWebSettings_offlineStorageDefaultQuota() {
	qint64 _ret = QWebSettings::offlineStorageDefaultQuota();
	return static_cast<long long>(_ret);
}

void QWebSettings_setOfflineWebApplicationCachePath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QWebSettings::setOfflineWebApplicationCachePath(path_QString);
}

struct miqt_string QWebSettings_offlineWebApplicationCachePath() {
	QString _ret = QWebSettings::offlineWebApplicationCachePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSettings_setOfflineWebApplicationCacheQuota(long long maximumSize) {
	QWebSettings::setOfflineWebApplicationCacheQuota(static_cast<qint64>(maximumSize));
}

long long QWebSettings_offlineWebApplicationCacheQuota() {
	qint64 _ret = QWebSettings::offlineWebApplicationCacheQuota();
	return static_cast<long long>(_ret);
}

void QWebSettings_setLocalStoragePath(QWebSettings* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setLocalStoragePath(path_QString);
}

struct miqt_string QWebSettings_localStoragePath(const QWebSettings* self) {
	QString _ret = self->localStoragePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSettings_clearMemoryCaches() {
	QWebSettings::clearMemoryCaches();
}

void QWebSettings_enablePersistentStorage() {
	QWebSettings::enablePersistentStorage();
}

void QWebSettings_setThirdPartyCookiePolicy(QWebSettings* self, int thirdPartyCookiePolicy) {
	self->setThirdPartyCookiePolicy(static_cast<QWebSettings::ThirdPartyCookiePolicy>(thirdPartyCookiePolicy));
}

int QWebSettings_thirdPartyCookiePolicy(const QWebSettings* self) {
	QWebSettings::ThirdPartyCookiePolicy _ret = self->thirdPartyCookiePolicy();
	return static_cast<int>(_ret);
}

void QWebSettings_setCSSMediaType(QWebSettings* self, struct miqt_string cSSMediaType) {
	QString cSSMediaType_QString = QString::fromUtf8(cSSMediaType.data, cSSMediaType.len);
	self->setCSSMediaType(cSSMediaType_QString);
}

struct miqt_string QWebSettings_cssMediaType(const QWebSettings* self) {
	QString _ret = self->cssMediaType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSettings_enablePersistentStorage1(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QWebSettings::enablePersistentStorage(path_QString);
}

