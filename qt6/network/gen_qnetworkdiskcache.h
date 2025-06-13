#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKDISKCACHE_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKDISKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractNetworkCache;
class QChildEvent;
class QEvent;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QNetworkCacheMetaData;
class QNetworkDiskCache;
class QObject;
class QTimerEvent;
class QUrl;
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QNetworkDiskCache QNetworkDiskCache;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QNetworkDiskCache* QNetworkDiskCache_new();
QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent);
void QNetworkDiskCache_virtbase(QNetworkDiskCache* src, QAbstractNetworkCache** outptr_QAbstractNetworkCache);
QMetaObject* QNetworkDiskCache_metaObject(const QNetworkDiskCache* self);
void* QNetworkDiskCache_metacast(QNetworkDiskCache* self, const char* param1);
struct miqt_string QNetworkDiskCache_tr(const char* s);
struct miqt_string QNetworkDiskCache_cacheDirectory(const QNetworkDiskCache* self);
void QNetworkDiskCache_setCacheDirectory(QNetworkDiskCache* self, struct miqt_string cacheDir);
long long QNetworkDiskCache_maximumCacheSize(const QNetworkDiskCache* self);
void QNetworkDiskCache_setMaximumCacheSize(QNetworkDiskCache* self, long long size);
long long QNetworkDiskCache_cacheSize(const QNetworkDiskCache* self);
QNetworkCacheMetaData* QNetworkDiskCache_metaData(QNetworkDiskCache* self, QUrl* url);
void QNetworkDiskCache_updateMetaData(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData);
QIODevice* QNetworkDiskCache_data(QNetworkDiskCache* self, QUrl* url);
bool QNetworkDiskCache_remove(QNetworkDiskCache* self, QUrl* url);
QIODevice* QNetworkDiskCache_prepare(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_insert(QNetworkDiskCache* self, QIODevice* device);
QNetworkCacheMetaData* QNetworkDiskCache_fileMetaData(const QNetworkDiskCache* self, struct miqt_string fileName);
void QNetworkDiskCache_clear(QNetworkDiskCache* self);
long long QNetworkDiskCache_expire(QNetworkDiskCache* self);
struct miqt_string QNetworkDiskCache_tr2(const char* s, const char* c);
struct miqt_string QNetworkDiskCache_tr3(const char* s, const char* c, int n);

bool QNetworkDiskCache_override_virtual_cacheSize(void* self, intptr_t slot);
long long QNetworkDiskCache_virtualbase_cacheSize(const void* self);
bool QNetworkDiskCache_override_virtual_metaData(void* self, intptr_t slot);
QNetworkCacheMetaData* QNetworkDiskCache_virtualbase_metaData(void* self, QUrl* url);
bool QNetworkDiskCache_override_virtual_updateMetaData(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_updateMetaData(void* self, QNetworkCacheMetaData* metaData);
bool QNetworkDiskCache_override_virtual_data(void* self, intptr_t slot);
QIODevice* QNetworkDiskCache_virtualbase_data(void* self, QUrl* url);
bool QNetworkDiskCache_override_virtual_remove(void* self, intptr_t slot);
bool QNetworkDiskCache_virtualbase_remove(void* self, QUrl* url);
bool QNetworkDiskCache_override_virtual_prepare(void* self, intptr_t slot);
QIODevice* QNetworkDiskCache_virtualbase_prepare(void* self, QNetworkCacheMetaData* metaData);
bool QNetworkDiskCache_override_virtual_insert(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_insert(void* self, QIODevice* device);
bool QNetworkDiskCache_override_virtual_clear(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_clear(void* self);
bool QNetworkDiskCache_override_virtual_expire(void* self, intptr_t slot);
long long QNetworkDiskCache_virtualbase_expire(void* self);
bool QNetworkDiskCache_override_virtual_event(void* self, intptr_t slot);
bool QNetworkDiskCache_virtualbase_event(void* self, QEvent* event);
bool QNetworkDiskCache_override_virtual_eventFilter(void* self, intptr_t slot);
bool QNetworkDiskCache_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QNetworkDiskCache_override_virtual_timerEvent(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QNetworkDiskCache_override_virtual_childEvent(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_childEvent(void* self, QChildEvent* event);
bool QNetworkDiskCache_override_virtual_customEvent(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_customEvent(void* self, QEvent* event);
bool QNetworkDiskCache_override_virtual_connectNotify(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QNetworkDiskCache_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QNetworkDiskCache_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QNetworkDiskCache_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QNetworkDiskCache_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QNetworkDiskCache_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QNetworkDiskCache_delete(QNetworkDiskCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
