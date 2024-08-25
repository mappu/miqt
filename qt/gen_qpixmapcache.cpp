#include "gen_qpixmapcache.h"
#include "qpixmapcache.h"

#include <QPixmap>
#include <QPixmapCache>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

int QPixmapCache_CacheLimit() {
	return QPixmapCache::cacheLimit();
}

void QPixmapCache_SetCacheLimit(int cacheLimit) {
	QPixmapCache::setCacheLimit(static_cast<int>(cacheLimit));
}

QPixmap* QPixmapCache_Find(const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return QPixmapCache::find(key_QString);
}

bool QPixmapCache_Find2(const char* key, size_t key_Strlen, QPixmap* pixmap) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return QPixmapCache::find(key_QString, *pixmap);
}

bool QPixmapCache_Find3(const char* key, size_t key_Strlen, QPixmap* pixmap) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return QPixmapCache::find(key_QString, pixmap);
}

bool QPixmapCache_Insert(const char* key, size_t key_Strlen, QPixmap* pixmap) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return QPixmapCache::insert(key_QString, *pixmap);
}

void QPixmapCache_Remove(const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QPixmapCache::remove(key_QString);
}

void QPixmapCache_Clear() {
	QPixmapCache::clear();
}

void QPixmapCache_Delete(QPixmapCache* self) {
	delete self;
}

