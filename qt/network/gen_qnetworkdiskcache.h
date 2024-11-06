#ifndef GEN_QNETWORKDISKCACHE_H
#define GEN_QNETWORKDISKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QMetaObject;
class QNetworkCacheMetaData;
class QNetworkDiskCache;
class QObject;
class QUrl;
#else
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QNetworkDiskCache QNetworkDiskCache;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QNetworkDiskCache* QNetworkDiskCache_new();
QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent);
QMetaObject* QNetworkDiskCache_MetaObject(const QNetworkDiskCache* self);
void* QNetworkDiskCache_Metacast(QNetworkDiskCache* self, const char* param1);
struct miqt_string QNetworkDiskCache_Tr(const char* s);
struct miqt_string QNetworkDiskCache_TrUtf8(const char* s);
struct miqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self);
void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, struct miqt_string cacheDir);
long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self);
void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size);
long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self);
QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, QUrl* url);
void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData);
QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, QUrl* url);
bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, QUrl* url);
QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device);
QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, struct miqt_string fileName);
void QNetworkDiskCache_Clear(QNetworkDiskCache* self);
struct miqt_string QNetworkDiskCache_Tr2(const char* s, const char* c);
struct miqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkDiskCache_TrUtf82(const char* s, const char* c);
struct miqt_string QNetworkDiskCache_TrUtf83(const char* s, const char* c, int n);
void QNetworkDiskCache_Delete(QNetworkDiskCache* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
