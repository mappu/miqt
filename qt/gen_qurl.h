#ifndef GEN_QURL_H
#define GEN_QURL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QUrl;
class QUrlQuery;
#else
typedef struct QByteArray QByteArray;
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
#endif

QUrl* QUrl_new();
QUrl* QUrl_new2(QUrl* copyVal);
void QUrl_OperatorAssign(QUrl* self, QUrl* copyVal);
void QUrl_OperatorAssignWithUrl(QUrl* self, const char* url, size_t url_Strlen);
void QUrl_Swap(QUrl* self, QUrl* other);
QUrl* QUrl_FromUserInput(const char* userInput, size_t userInput_Strlen);
bool QUrl_IsValid(QUrl* self);
void QUrl_ErrorString(QUrl* self, char** _out, int* _out_Strlen);
bool QUrl_IsEmpty(QUrl* self);
void QUrl_Clear(QUrl* self);
void QUrl_SetScheme(QUrl* self, const char* scheme, size_t scheme_Strlen);
void QUrl_Scheme(QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetPort(QUrl* self, int port);
int QUrl_Port(QUrl* self);
bool QUrl_HasQuery(QUrl* self);
void QUrl_SetQuery(QUrl* self, QUrlQuery* query);
bool QUrl_HasFragment(QUrl* self);
QUrl* QUrl_Resolved(QUrl* self, QUrl* relative);
bool QUrl_IsRelative(QUrl* self);
bool QUrl_IsParentOf(QUrl* self, QUrl* url);
bool QUrl_IsLocalFile(QUrl* self);
QUrl* QUrl_FromLocalFile(const char* localfile, size_t localfile_Strlen);
void QUrl_ToLocalFile(QUrl* self, char** _out, int* _out_Strlen);
void QUrl_Detach(QUrl* self);
bool QUrl_IsDetached(QUrl* self);
bool QUrl_OperatorLesser(QUrl* self, QUrl* url);
bool QUrl_OperatorEqual(QUrl* self, QUrl* url);
bool QUrl_OperatorNotEqual(QUrl* self, QUrl* url);
void QUrl_FromPercentEncoding(QByteArray* param1, char** _out, int* _out_Strlen);
QByteArray* QUrl_ToPercentEncoding(const char* param1, size_t param1_Strlen);
void QUrl_FromAce(QByteArray* param1, char** _out, int* _out_Strlen);
QByteArray* QUrl_ToAce(const char* param1, size_t param1_Strlen);
void QUrl_IdnWhitelist(char*** _out, int** _out_Lengths, size_t* _out_len);
void QUrl_SetIdnWhitelist(char** idnWhitelist, uint64_t* idnWhitelist_Lengths, size_t idnWhitelist_len);
int QUrl_Port1(QUrl* self, int defaultPort);
QByteArray* QUrl_ToPercentEncoding2(const char* param1, size_t param1_Strlen, QByteArray* exclude);
QByteArray* QUrl_ToPercentEncoding3(const char* param1, size_t param1_Strlen, QByteArray* exclude, QByteArray* include);
void QUrl_Delete(QUrl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
