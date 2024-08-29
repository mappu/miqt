#ifndef GEN_QPIXMAPCACHE_H
#define GEN_QPIXMAPCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

int QPixmapCache_CacheLimit();
void QPixmapCache_SetCacheLimit(int cacheLimit);
QPixmap* QPixmapCache_Find(const char* key, size_t key_Strlen);
bool QPixmapCache_Find2(const char* key, size_t key_Strlen, QPixmap* pixmap);
bool QPixmapCache_Find3(const char* key, size_t key_Strlen, QPixmap* pixmap);
bool QPixmapCache_Find4(QPixmapCache__Key* key, QPixmap* pixmap);
bool QPixmapCache_Insert(const char* key, size_t key_Strlen, QPixmap* pixmap);
QPixmapCache__Key* QPixmapCache_InsertWithPixmap(QPixmap* pixmap);
bool QPixmapCache_Replace(QPixmapCache__Key* key, QPixmap* pixmap);
void QPixmapCache_Remove(const char* key, size_t key_Strlen);
void QPixmapCache_RemoveWithKey(QPixmapCache__Key* key);
void QPixmapCache_Clear();
void QPixmapCache_Delete(QPixmapCache* self);

QPixmapCache__Key* QPixmapCache__Key_new();
QPixmapCache__Key* QPixmapCache__Key_new2(QPixmapCache__Key* other);
bool QPixmapCache__Key_OperatorEqual(QPixmapCache__Key* self, QPixmapCache__Key* key);
bool QPixmapCache__Key_OperatorNotEqual(QPixmapCache__Key* self, QPixmapCache__Key* key);
void QPixmapCache__Key_Swap(QPixmapCache__Key* self, QPixmapCache__Key* other);
bool QPixmapCache__Key_IsValid(QPixmapCache__Key* self);
void QPixmapCache__Key_Delete(QPixmapCache__Key* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
