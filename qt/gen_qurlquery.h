#pragma once
#ifndef MIQT_QT_GEN_QURLQUERY_H
#define MIQT_QT_GEN_QURLQUERY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QUrl;
class QUrlQuery;
#else
typedef struct QChar QChar;
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
#endif

QUrlQuery* QUrlQuery_new();
QUrlQuery* QUrlQuery_new2(QUrl* url);
QUrlQuery* QUrlQuery_new3(struct miqt_string queryString);
QUrlQuery* QUrlQuery_new4(QUrlQuery* other);
void QUrlQuery_operatorAssign(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_operatorEqual(const QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_operatorNotEqual(const QUrlQuery* self, QUrlQuery* other);
void QUrlQuery_swap(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_isEmpty(const QUrlQuery* self);
bool QUrlQuery_isDetached(const QUrlQuery* self);
void QUrlQuery_clear(QUrlQuery* self);
struct miqt_string QUrlQuery_query(const QUrlQuery* self);
void QUrlQuery_setQuery(QUrlQuery* self, struct miqt_string queryString);
struct miqt_string QUrlQuery_toString(const QUrlQuery* self);
void QUrlQuery_setQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter);
QChar* QUrlQuery_queryValueDelimiter(const QUrlQuery* self);
QChar* QUrlQuery_queryPairDelimiter(const QUrlQuery* self);
void QUrlQuery_setQueryItems(QUrlQuery* self, struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  query);
struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QUrlQuery_queryItems(const QUrlQuery* self);
bool QUrlQuery_hasQueryItem(const QUrlQuery* self, struct miqt_string key);
void QUrlQuery_addQueryItem(QUrlQuery* self, struct miqt_string key, struct miqt_string value);
void QUrlQuery_removeQueryItem(QUrlQuery* self, struct miqt_string key);
struct miqt_string QUrlQuery_queryItemValue(const QUrlQuery* self, struct miqt_string key);
struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues(const QUrlQuery* self, struct miqt_string key);
void QUrlQuery_removeAllQueryItems(QUrlQuery* self, struct miqt_string key);
QChar* QUrlQuery_defaultQueryValueDelimiter();
QChar* QUrlQuery_defaultQueryPairDelimiter();
struct miqt_string QUrlQuery_query1(const QUrlQuery* self, int encoding);
struct miqt_string QUrlQuery_toString1(const QUrlQuery* self, int encoding);
struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QUrlQuery_queryItems1(const QUrlQuery* self, int encoding);
struct miqt_string QUrlQuery_queryItemValue2(const QUrlQuery* self, struct miqt_string key, int encoding);
struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues2(const QUrlQuery* self, struct miqt_string key, int encoding);
void QUrlQuery_delete(QUrlQuery* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
