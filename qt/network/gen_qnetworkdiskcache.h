#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKDISKCACHE_H
#define MIQT_QT_NETWORK_GEN_QNETWORKDISKCACHE_H

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
long long QNetworkDiskCache_Expire(QNetworkDiskCache* self);
struct miqt_string QNetworkDiskCache_Tr2(const char* s, const char* c);
struct miqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkDiskCache_TrUtf82(const char* s, const char* c);
struct miqt_string QNetworkDiskCache_TrUtf83(const char* s, const char* c, int n);
bool QNetworkDiskCache_override_virtual_CacheSize(void* self, intptr_t slot);
long long QNetworkDiskCache_virtualbase_CacheSize(const void* self);
bool QNetworkDiskCache_override_virtual_MetaData(void* self, intptr_t slot);
QNetworkCacheMetaData* QNetworkDiskCache_virtualbase_MetaData(void* self, QUrl* url);
bool QNetworkDiskCache_override_virtual_UpdateMetaData(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_UpdateMetaData(void* self, QNetworkCacheMetaData* metaData);
bool QNetworkDiskCache_override_virtual_Data(void* self, intptr_t slot);
QIODevice* QNetworkDiskCache_virtualbase_Data(void* self, QUrl* url);
bool QNetworkDiskCache_override_virtual_Remove(void* self, intptr_t slot);
bool QNetworkDiskCache_virtualbase_Remove(void* self, QUrl* url);
bool QNetworkDiskCache_override_virtual_Prepare(void* self, intptr_t slot);
QIODevice* QNetworkDiskCache_virtualbase_Prepare(void* self, QNetworkCacheMetaData* metaData);
bool QNetworkDiskCache_override_virtual_Insert(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_Insert(void* self, QIODevice* device);
bool QNetworkDiskCache_override_virtual_Clear(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_Clear(void* self);
bool QNetworkDiskCache_override_virtual_Expire(void* self, intptr_t slot);
long long QNetworkDiskCache_virtualbase_Expire(void* self);
bool QNetworkDiskCache_override_virtual_Event(void* self, intptr_t slot);
bool QNetworkDiskCache_virtualbase_Event(void* self, QEvent* event);
bool QNetworkDiskCache_override_virtual_EventFilter(void* self, intptr_t slot);
bool QNetworkDiskCache_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QNetworkDiskCache_override_virtual_TimerEvent(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QNetworkDiskCache_override_virtual_ChildEvent(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QNetworkDiskCache_override_virtual_CustomEvent(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_CustomEvent(void* self, QEvent* event);
bool QNetworkDiskCache_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QNetworkDiskCache_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QNetworkDiskCache_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QNetworkDiskCache_Delete(QNetworkDiskCache* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
