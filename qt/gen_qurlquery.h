#ifndef GEN_QURLQUERY_H
#define GEN_QURLQUERY_H

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
void QUrlQuery_OperatorAssign(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_OperatorEqual(const QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_OperatorNotEqual(const QUrlQuery* self, QUrlQuery* other);
void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_IsEmpty(const QUrlQuery* self);
bool QUrlQuery_IsDetached(const QUrlQuery* self);
void QUrlQuery_Clear(QUrlQuery* self);
struct miqt_string QUrlQuery_Query(const QUrlQuery* self);
void QUrlQuery_SetQuery(QUrlQuery* self, struct miqt_string queryString);
struct miqt_string QUrlQuery_ToString(const QUrlQuery* self);
void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter);
QChar* QUrlQuery_QueryValueDelimiter(const QUrlQuery* self);
QChar* QUrlQuery_QueryPairDelimiter(const QUrlQuery* self);
bool QUrlQuery_HasQueryItem(const QUrlQuery* self, struct miqt_string key);
void QUrlQuery_AddQueryItem(QUrlQuery* self, struct miqt_string key, struct miqt_string value);
void QUrlQuery_RemoveQueryItem(QUrlQuery* self, struct miqt_string key);
struct miqt_string QUrlQuery_QueryItemValue(const QUrlQuery* self, struct miqt_string key);
struct miqt_array QUrlQuery_AllQueryItemValues(const QUrlQuery* self, struct miqt_string key);
void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, struct miqt_string key);
QChar* QUrlQuery_DefaultQueryValueDelimiter();
QChar* QUrlQuery_DefaultQueryPairDelimiter();
struct miqt_string QUrlQuery_Query1(const QUrlQuery* self, int encoding);
struct miqt_string QUrlQuery_ToString1(const QUrlQuery* self, int encoding);
struct miqt_string QUrlQuery_QueryItemValue2(const QUrlQuery* self, struct miqt_string key, int encoding);
struct miqt_array QUrlQuery_AllQueryItemValues2(const QUrlQuery* self, struct miqt_string key, int encoding);
void QUrlQuery_Delete(QUrlQuery* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
