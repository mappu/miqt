#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QABSTRACTNETWORKCACHE_H
#define MIQT_QT6_NETWORK_GEN_QABSTRACTNETWORKCACHE_H

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
class QDateTime;
class QIODevice;
class QMetaObject;
class QNetworkCacheMetaData;
class QUrl;
class QVariant;
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QNetworkCacheMetaData* QNetworkCacheMetaData_new();
QNetworkCacheMetaData* QNetworkCacheMetaData_new2(QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self);
QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, QUrl* url);
struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  headers);
QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, QDateTime* dateTime);
QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, QDateTime* dateTime);
bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow);
struct miqt_map /* of int to QVariant* */  QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, struct miqt_map /* of int to QVariant* */  attributes);
void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self);

QMetaObject* QAbstractNetworkCache_MetaObject(const QAbstractNetworkCache* self);
void* QAbstractNetworkCache_Metacast(QAbstractNetworkCache* self, const char* param1);
struct miqt_string QAbstractNetworkCache_Tr(const char* s);
QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, QUrl* url);
void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData);
QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, QUrl* url);
bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, QUrl* url);
long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self);
QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData);
void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device);
void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self);
struct miqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c);
struct miqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n);
void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
