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
bool QUrlQuery_OperatorEqual(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_OperatorNotEqual(QUrlQuery* self, QUrlQuery* other);
void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other);
bool QUrlQuery_IsEmpty(QUrlQuery* self);
bool QUrlQuery_IsDetached(QUrlQuery* self);
void QUrlQuery_Clear(QUrlQuery* self);
void QUrlQuery_Query(QUrlQuery* self, char** _out, int* _out_Strlen);
void QUrlQuery_SetQuery(QUrlQuery* self, const char* queryString, size_t queryString_Strlen);
void QUrlQuery_ToString(QUrlQuery* self, char** _out, int* _out_Strlen);
void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter);
QChar* QUrlQuery_QueryValueDelimiter(QUrlQuery* self);
QChar* QUrlQuery_QueryPairDelimiter(QUrlQuery* self);
bool QUrlQuery_HasQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen);
void QUrlQuery_AddQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen, const char* value, size_t value_Strlen);
void QUrlQuery_RemoveQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen);
void QUrlQuery_QueryItemValue(QUrlQuery* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen);
void QUrlQuery_AllQueryItemValues(QUrlQuery* self, const char* key, size_t key_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, const char* key, size_t key_Strlen);
QChar* QUrlQuery_DefaultQueryValueDelimiter();
QChar* QUrlQuery_DefaultQueryPairDelimiter();
void QUrlQuery_Query1(QUrlQuery* self, int encoding, char** _out, int* _out_Strlen);
void QUrlQuery_ToString1(QUrlQuery* self, int encoding, char** _out, int* _out_Strlen);
void QUrlQuery_QueryItemValue2(QUrlQuery* self, const char* key, size_t key_Strlen, int encoding, char** _out, int* _out_Strlen);
void QUrlQuery_AllQueryItemValues2(QUrlQuery* self, const char* key, size_t key_Strlen, int encoding, char*** _out, int** _out_Lengths, size_t* _out_len);
void QUrlQuery_Delete(QUrlQuery* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
