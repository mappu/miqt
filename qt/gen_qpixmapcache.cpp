#include <QPixmap>
#include <QPixmapCache>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPixmapCache__Key
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpixmapcache.h"

#include "gen_qpixmapcache.h"

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

bool QPixmapCache_Find4(QPixmapCache__Key* key, QPixmap* pixmap) {
	return QPixmapCache::find(*key, pixmap);
}

bool QPixmapCache_Insert(const char* key, size_t key_Strlen, QPixmap* pixmap) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return QPixmapCache::insert(key_QString, *pixmap);
}

QPixmapCache__Key* QPixmapCache_InsertWithPixmap(QPixmap* pixmap) {
	QPixmapCache::Key ret = QPixmapCache::insert(*pixmap);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmapCache::Key*>(new QPixmapCache::Key(ret));
}

bool QPixmapCache_Replace(QPixmapCache__Key* key, QPixmap* pixmap) {
	return QPixmapCache::replace(*key, *pixmap);
}

void QPixmapCache_Remove(const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QPixmapCache::remove(key_QString);
}

void QPixmapCache_RemoveWithKey(QPixmapCache__Key* key) {
	QPixmapCache::remove(*key);
}

void QPixmapCache_Clear() {
	QPixmapCache::clear();
}

void QPixmapCache_Delete(QPixmapCache* self) {
	delete self;
}

QPixmapCache__Key* QPixmapCache__Key_new() {
	return new QPixmapCache::Key();
}

QPixmapCache__Key* QPixmapCache__Key_new2(QPixmapCache__Key* other) {
	return new QPixmapCache::Key(*other);
}

bool QPixmapCache__Key_OperatorEqual(QPixmapCache__Key* self, QPixmapCache__Key* key) {
	return const_cast<const QPixmapCache::Key*>(self)->operator==(*key);
}

bool QPixmapCache__Key_OperatorNotEqual(QPixmapCache__Key* self, QPixmapCache__Key* key) {
	return const_cast<const QPixmapCache::Key*>(self)->operator!=(*key);
}

void QPixmapCache__Key_Swap(QPixmapCache__Key* self, QPixmapCache__Key* other) {
	self->swap(*other);
}

bool QPixmapCache__Key_IsValid(QPixmapCache__Key* self) {
	return const_cast<const QPixmapCache::Key*>(self)->isValid();
}

void QPixmapCache__Key_Delete(QPixmapCache__Key* self) {
	delete self;
}

