#include <QPixmap>
#include <QPixmapCache>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPixmapCache__Key
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpixmapcache.h>
#include "gen_qpixmapcache.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QPixmapCache_cacheLimit() {
	return QPixmapCache::cacheLimit();
}

void QPixmapCache_setCacheLimit(int cacheLimit) {
	QPixmapCache::setCacheLimit(static_cast<int>(cacheLimit));
}

bool QPixmapCache_find(struct miqt_string key, QPixmap* pixmap) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return QPixmapCache::find(key_QString, pixmap);
}

bool QPixmapCache_find2(QPixmapCache__Key* key, QPixmap* pixmap) {
	return QPixmapCache::find(*key, pixmap);
}

bool QPixmapCache_insert(struct miqt_string key, QPixmap* pixmap) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return QPixmapCache::insert(key_QString, *pixmap);
}

QPixmapCache__Key* QPixmapCache_insertWithPixmap(QPixmap* pixmap) {
	return new QPixmapCache::Key(QPixmapCache::insert(*pixmap));
}

bool QPixmapCache_replace(QPixmapCache__Key* key, QPixmap* pixmap) {
	return QPixmapCache::replace(*key, *pixmap);
}

void QPixmapCache_remove(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QPixmapCache::remove(key_QString);
}

void QPixmapCache_removeWithKey(QPixmapCache__Key* key) {
	QPixmapCache::remove(*key);
}

void QPixmapCache_clear() {
	QPixmapCache::clear();
}

void QPixmapCache_delete(QPixmapCache* self) {
	delete self;
}

QPixmapCache__Key* QPixmapCache__Key_new() {
	return new QPixmapCache::Key();
}

QPixmapCache__Key* QPixmapCache__Key_new2(QPixmapCache__Key* other) {
	return new QPixmapCache::Key(*other);
}

bool QPixmapCache__Key_operatorEqual(const QPixmapCache__Key* self, QPixmapCache__Key* key) {
	return (*self == *key);
}

bool QPixmapCache__Key_operatorNotEqual(const QPixmapCache__Key* self, QPixmapCache__Key* key) {
	return (*self != *key);
}

void QPixmapCache__Key_operatorAssign(QPixmapCache__Key* self, QPixmapCache__Key* other) {
	self->operator=(*other);
}

void QPixmapCache__Key_swap(QPixmapCache__Key* self, QPixmapCache__Key* other) {
	self->swap(*other);
}

bool QPixmapCache__Key_isValid(const QPixmapCache__Key* self) {
	return self->isValid();
}

void QPixmapCache__Key_delete(QPixmapCache__Key* self) {
	delete self;
}

