#pragma once
#ifndef MIQT_QT_GEN_QPIXMAPCACHE_H
#define MIQT_QT_GEN_QPIXMAPCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPixmap;
class QPixmapCache;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPixmapCache__Key)
typedef QPixmapCache::Key QPixmapCache__Key;
#else
class QPixmapCache__Key;
#endif
#else
typedef struct QPixmap QPixmap;
typedef struct QPixmapCache QPixmapCache;
typedef struct QPixmapCache__Key QPixmapCache__Key;
#endif

int QPixmapCache_cacheLimit();
void QPixmapCache_setCacheLimit(int cacheLimit);
QPixmap* QPixmapCache_find(struct miqt_string key);
bool QPixmapCache_find2(struct miqt_string key, QPixmap* pixmap);
bool QPixmapCache_find3(struct miqt_string key, QPixmap* pixmap);
bool QPixmapCache_find4(QPixmapCache__Key* key, QPixmap* pixmap);
bool QPixmapCache_insert(struct miqt_string key, QPixmap* pixmap);
QPixmapCache__Key* QPixmapCache_insertWithPixmap(QPixmap* pixmap);
bool QPixmapCache_replace(QPixmapCache__Key* key, QPixmap* pixmap);
void QPixmapCache_remove(struct miqt_string key);
void QPixmapCache_removeWithKey(QPixmapCache__Key* key);
void QPixmapCache_clear();
void QPixmapCache_delete(QPixmapCache* self);

QPixmapCache__Key* QPixmapCache__Key_new();
QPixmapCache__Key* QPixmapCache__Key_new2(QPixmapCache__Key* other);
bool QPixmapCache__Key_operatorEqual(const QPixmapCache__Key* self, QPixmapCache__Key* key);
bool QPixmapCache__Key_operatorNotEqual(const QPixmapCache__Key* self, QPixmapCache__Key* key);
void QPixmapCache__Key_operatorAssign(QPixmapCache__Key* self, QPixmapCache__Key* other);
void QPixmapCache__Key_swap(QPixmapCache__Key* self, QPixmapCache__Key* other);
bool QPixmapCache__Key_isValid(const QPixmapCache__Key* self);
void QPixmapCache__Key_delete(QPixmapCache__Key* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
