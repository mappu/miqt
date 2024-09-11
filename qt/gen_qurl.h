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
QUrl* QUrl_new3(const char* url, size_t url_Strlen);
QUrl* QUrl_new4(const char* url, size_t url_Strlen, uintptr_t mode);
void QUrl_OperatorAssign(QUrl* self, QUrl* copyVal);
void QUrl_OperatorAssignWithUrl(QUrl* self, const char* url, size_t url_Strlen);
void QUrl_Swap(QUrl* self, QUrl* other);
void QUrl_SetUrl(QUrl* self, const char* url, size_t url_Strlen);
void QUrl_Url(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_ToString(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_ToDisplayString(const QUrl* self, char** _out, int* _out_Strlen);
QByteArray* QUrl_ToEncoded(const QUrl* self);
QUrl* QUrl_FromEncoded(QByteArray* url);
QUrl* QUrl_FromUserInput(const char* userInput, size_t userInput_Strlen);
QUrl* QUrl_FromUserInput2(const char* userInput, size_t userInput_Strlen, const char* workingDirectory, size_t workingDirectory_Strlen);
bool QUrl_IsValid(const QUrl* self);
void QUrl_ErrorString(const QUrl* self, char** _out, int* _out_Strlen);
bool QUrl_IsEmpty(const QUrl* self);
void QUrl_Clear(QUrl* self);
void QUrl_SetScheme(QUrl* self, const char* scheme, size_t scheme_Strlen);
void QUrl_Scheme(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetAuthority(QUrl* self, const char* authority, size_t authority_Strlen);
void QUrl_Authority(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetUserInfo(QUrl* self, const char* userInfo, size_t userInfo_Strlen);
void QUrl_UserInfo(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetUserName(QUrl* self, const char* userName, size_t userName_Strlen);
void QUrl_UserName(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetPassword(QUrl* self, const char* password, size_t password_Strlen);
void QUrl_Password(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetHost(QUrl* self, const char* host, size_t host_Strlen);
void QUrl_Host(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_TopLevelDomain(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetPort(QUrl* self, int port);
int QUrl_Port(const QUrl* self);
void QUrl_SetPath(QUrl* self, const char* path, size_t path_Strlen);
void QUrl_Path(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_FileName(const QUrl* self, char** _out, int* _out_Strlen);
bool QUrl_HasQuery(const QUrl* self);
void QUrl_SetQuery(QUrl* self, const char* query, size_t query_Strlen);
void QUrl_SetQueryWithQuery(QUrl* self, QUrlQuery* query);
void QUrl_Query(const QUrl* self, char** _out, int* _out_Strlen);
bool QUrl_HasFragment(const QUrl* self);
void QUrl_Fragment(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_SetFragment(QUrl* self, const char* fragment, size_t fragment_Strlen);
QUrl* QUrl_Resolved(const QUrl* self, QUrl* relative);
bool QUrl_IsRelative(const QUrl* self);
bool QUrl_IsParentOf(const QUrl* self, QUrl* url);
bool QUrl_IsLocalFile(const QUrl* self);
QUrl* QUrl_FromLocalFile(const char* localfile, size_t localfile_Strlen);
void QUrl_ToLocalFile(const QUrl* self, char** _out, int* _out_Strlen);
void QUrl_Detach(QUrl* self);
bool QUrl_IsDetached(const QUrl* self);
bool QUrl_OperatorLesser(const QUrl* self, QUrl* url);
bool QUrl_OperatorEqual(const QUrl* self, QUrl* url);
bool QUrl_OperatorNotEqual(const QUrl* self, QUrl* url);
void QUrl_FromPercentEncoding(QByteArray* param1, char** _out, int* _out_Strlen);
QByteArray* QUrl_ToPercentEncoding(const char* param1, size_t param1_Strlen);
void QUrl_FromAce(QByteArray* param1, char** _out, int* _out_Strlen);
QByteArray* QUrl_ToAce(const char* param1, size_t param1_Strlen);
void QUrl_IdnWhitelist(char*** _out, int** _out_Lengths, size_t* _out_len);
void QUrl_ToStringList(QUrl** uris, size_t uris_len, char*** _out, int** _out_Lengths, size_t* _out_len);
void QUrl_FromStringList(char** uris, uint64_t* uris_Lengths, size_t uris_len, QUrl*** _out, size_t* _out_len);
void QUrl_SetIdnWhitelist(char** idnWhitelist, uint64_t* idnWhitelist_Lengths, size_t idnWhitelist_len);
void QUrl_SetUrl2(QUrl* self, const char* url, size_t url_Strlen, uintptr_t mode);
QUrl* QUrl_FromEncoded2(QByteArray* url, uintptr_t mode);
QUrl* QUrl_FromUserInput3(const char* userInput, size_t userInput_Strlen, const char* workingDirectory, size_t workingDirectory_Strlen, int options);
void QUrl_SetAuthority2(QUrl* self, const char* authority, size_t authority_Strlen, uintptr_t mode);
void QUrl_Authority1(const QUrl* self, int options, char** _out, int* _out_Strlen);
void QUrl_SetUserInfo2(QUrl* self, const char* userInfo, size_t userInfo_Strlen, uintptr_t mode);
void QUrl_UserInfo1(const QUrl* self, int options, char** _out, int* _out_Strlen);
void QUrl_SetUserName2(QUrl* self, const char* userName, size_t userName_Strlen, uintptr_t mode);
void QUrl_UserName1(const QUrl* self, int options, char** _out, int* _out_Strlen);
void QUrl_SetPassword2(QUrl* self, const char* password, size_t password_Strlen, uintptr_t mode);
void QUrl_Password1(const QUrl* self, int param1, char** _out, int* _out_Strlen);
void QUrl_SetHost2(QUrl* self, const char* host, size_t host_Strlen, uintptr_t mode);
void QUrl_Host1(const QUrl* self, int param1, char** _out, int* _out_Strlen);
void QUrl_TopLevelDomain1(const QUrl* self, int options, char** _out, int* _out_Strlen);
int QUrl_Port1(const QUrl* self, int defaultPort);
void QUrl_SetPath2(QUrl* self, const char* path, size_t path_Strlen, uintptr_t mode);
void QUrl_Path1(const QUrl* self, int options, char** _out, int* _out_Strlen);
void QUrl_FileName1(const QUrl* self, int options, char** _out, int* _out_Strlen);
void QUrl_SetQuery2(QUrl* self, const char* query, size_t query_Strlen, uintptr_t mode);
void QUrl_Query1(const QUrl* self, int param1, char** _out, int* _out_Strlen);
void QUrl_Fragment1(const QUrl* self, int options, char** _out, int* _out_Strlen);
void QUrl_SetFragment2(QUrl* self, const char* fragment, size_t fragment_Strlen, uintptr_t mode);
QByteArray* QUrl_ToPercentEncoding2(const char* param1, size_t param1_Strlen, QByteArray* exclude);
QByteArray* QUrl_ToPercentEncoding3(const char* param1, size_t param1_Strlen, QByteArray* exclude, QByteArray* include);
void QUrl_FromStringList2(char** uris, uint64_t* uris_Lengths, size_t uris_len, uintptr_t mode, QUrl*** _out, size_t* _out_len);
void QUrl_Delete(QUrl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
