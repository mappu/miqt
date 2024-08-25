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
#else
typedef struct QPixmap QPixmap;
typedef struct QPixmapCache QPixmapCache;
#endif

int QPixmapCache_CacheLimit();
void QPixmapCache_SetCacheLimit(int cacheLimit);
QPixmap* QPixmapCache_Find(const char* key, size_t key_Strlen);
bool QPixmapCache_Find2(const char* key, size_t key_Strlen, QPixmap* pixmap);
bool QPixmapCache_Find3(const char* key, size_t key_Strlen, QPixmap* pixmap);
bool QPixmapCache_Insert(const char* key, size_t key_Strlen, QPixmap* pixmap);
void QPixmapCache_Remove(const char* key, size_t key_Strlen);
void QPixmapCache_Clear();
void QPixmapCache_Delete(QPixmapCache* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
