#ifndef GEN_QURLQUERY_H
#define GEN_QURLQUERY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QUrlQuery* QUrlQuery_new3(const char* queryString, size_t queryString_Strlen);
QUrlQuery* QUrlQuery_new4(QUrlQuery* other);
void QUrlQuery_OperatorAssign(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_OperatorEqual(const QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_OperatorNotEqual(const QUrlQuery* self, QUrlQuery* other);
void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_IsEmpty(const QUrlQuery* self);
bool QUrlQuery_IsDetached(const QUrlQuery* self);
void QUrlQuery_Clear(QUrlQuery* self);
void QUrlQuery_Query(const QUrlQuery* self, char** _out, int* _out_Strlen);
void QUrlQuery_SetQuery(QUrlQuery* self, const char* queryString, size_t queryString_Strlen);
void QUrlQuery_ToString(const QUrlQuery* self, char** _out, int* _out_Strlen);
void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter);
QChar* QUrlQuery_QueryValueDelimiter(const QUrlQuery* self);
QChar* QUrlQuery_QueryPairDelimiter(const QUrlQuery* self);
bool QUrlQuery_HasQueryItem(const QUrlQuery* self, const char* key, size_t key_Strlen);
void QUrlQuery_AddQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen, const char* value, size_t value_Strlen);
void QUrlQuery_RemoveQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen);
void QUrlQuery_QueryItemValue(const QUrlQuery* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen);
void QUrlQuery_AllQueryItemValues(const QUrlQuery* self, const char* key, size_t key_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, const char* key, size_t key_Strlen);
QChar* QUrlQuery_DefaultQueryValueDelimiter();
QChar* QUrlQuery_DefaultQueryPairDelimiter();
void QUrlQuery_Query1(const QUrlQuery* self, int encoding, char** _out, int* _out_Strlen);
void QUrlQuery_ToString1(const QUrlQuery* self, int encoding, char** _out, int* _out_Strlen);
void QUrlQuery_QueryItemValue2(const QUrlQuery* self, const char* key, size_t key_Strlen, int encoding, char** _out, int* _out_Strlen);
void QUrlQuery_AllQueryItemValues2(const QUrlQuery* self, const char* key, size_t key_Strlen, int encoding, char*** _out, int** _out_Lengths, size_t* _out_len);
void QUrlQuery_Delete(QUrlQuery* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
