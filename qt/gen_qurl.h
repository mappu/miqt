#ifndef GEN_QURL_H
#define GEN_QURL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QUrl* QUrl_new3(struct miqt_string* url);
QUrl* QUrl_new4(struct miqt_string* url, uintptr_t mode);
void QUrl_OperatorAssign(QUrl* self, QUrl* copyVal);
void QUrl_OperatorAssignWithUrl(QUrl* self, struct miqt_string* url);
void QUrl_Swap(QUrl* self, QUrl* other);
void QUrl_SetUrl(QUrl* self, struct miqt_string* url);
struct miqt_string* QUrl_Url(const QUrl* self);
struct miqt_string* QUrl_ToString(const QUrl* self);
struct miqt_string* QUrl_ToDisplayString(const QUrl* self);
QByteArray* QUrl_ToEncoded(const QUrl* self);
QUrl* QUrl_FromEncoded(QByteArray* url);
QUrl* QUrl_FromUserInput(struct miqt_string* userInput);
QUrl* QUrl_FromUserInput2(struct miqt_string* userInput, struct miqt_string* workingDirectory);
bool QUrl_IsValid(const QUrl* self);
struct miqt_string* QUrl_ErrorString(const QUrl* self);
bool QUrl_IsEmpty(const QUrl* self);
void QUrl_Clear(QUrl* self);
void QUrl_SetScheme(QUrl* self, struct miqt_string* scheme);
struct miqt_string* QUrl_Scheme(const QUrl* self);
void QUrl_SetAuthority(QUrl* self, struct miqt_string* authority);
struct miqt_string* QUrl_Authority(const QUrl* self);
void QUrl_SetUserInfo(QUrl* self, struct miqt_string* userInfo);
struct miqt_string* QUrl_UserInfo(const QUrl* self);
void QUrl_SetUserName(QUrl* self, struct miqt_string* userName);
struct miqt_string* QUrl_UserName(const QUrl* self);
void QUrl_SetPassword(QUrl* self, struct miqt_string* password);
struct miqt_string* QUrl_Password(const QUrl* self);
void QUrl_SetHost(QUrl* self, struct miqt_string* host);
struct miqt_string* QUrl_Host(const QUrl* self);
struct miqt_string* QUrl_TopLevelDomain(const QUrl* self);
void QUrl_SetPort(QUrl* self, int port);
int QUrl_Port(const QUrl* self);
void QUrl_SetPath(QUrl* self, struct miqt_string* path);
struct miqt_string* QUrl_Path(const QUrl* self);
struct miqt_string* QUrl_FileName(const QUrl* self);
bool QUrl_HasQuery(const QUrl* self);
void QUrl_SetQuery(QUrl* self, struct miqt_string* query);
void QUrl_SetQueryWithQuery(QUrl* self, QUrlQuery* query);
struct miqt_string* QUrl_Query(const QUrl* self);
bool QUrl_HasFragment(const QUrl* self);
struct miqt_string* QUrl_Fragment(const QUrl* self);
void QUrl_SetFragment(QUrl* self, struct miqt_string* fragment);
QUrl* QUrl_Resolved(const QUrl* self, QUrl* relative);
bool QUrl_IsRelative(const QUrl* self);
bool QUrl_IsParentOf(const QUrl* self, QUrl* url);
bool QUrl_IsLocalFile(const QUrl* self);
QUrl* QUrl_FromLocalFile(struct miqt_string* localfile);
struct miqt_string* QUrl_ToLocalFile(const QUrl* self);
void QUrl_Detach(QUrl* self);
bool QUrl_IsDetached(const QUrl* self);
bool QUrl_OperatorLesser(const QUrl* self, QUrl* url);
bool QUrl_OperatorEqual(const QUrl* self, QUrl* url);
bool QUrl_OperatorNotEqual(const QUrl* self, QUrl* url);
struct miqt_string* QUrl_FromPercentEncoding(QByteArray* param1);
QByteArray* QUrl_ToPercentEncoding(struct miqt_string* param1);
struct miqt_string* QUrl_FromAce(QByteArray* param1);
QByteArray* QUrl_ToAce(struct miqt_string* param1);
struct miqt_array* QUrl_IdnWhitelist();
struct miqt_array* QUrl_ToStringList(struct miqt_array* /* of QUrl */ uris);
struct miqt_array* QUrl_FromStringList(struct miqt_array* /* of QString */ uris);
void QUrl_SetIdnWhitelist(struct miqt_array* /* of QString */ idnWhitelist);
void QUrl_SetUrl2(QUrl* self, struct miqt_string* url, uintptr_t mode);
QUrl* QUrl_FromEncoded2(QByteArray* url, uintptr_t mode);
QUrl* QUrl_FromUserInput3(struct miqt_string* userInput, struct miqt_string* workingDirectory, int options);
void QUrl_SetAuthority2(QUrl* self, struct miqt_string* authority, uintptr_t mode);
struct miqt_string* QUrl_Authority1(const QUrl* self, int options);
void QUrl_SetUserInfo2(QUrl* self, struct miqt_string* userInfo, uintptr_t mode);
struct miqt_string* QUrl_UserInfo1(const QUrl* self, int options);
void QUrl_SetUserName2(QUrl* self, struct miqt_string* userName, uintptr_t mode);
struct miqt_string* QUrl_UserName1(const QUrl* self, int options);
void QUrl_SetPassword2(QUrl* self, struct miqt_string* password, uintptr_t mode);
struct miqt_string* QUrl_Password1(const QUrl* self, int param1);
void QUrl_SetHost2(QUrl* self, struct miqt_string* host, uintptr_t mode);
struct miqt_string* QUrl_Host1(const QUrl* self, int param1);
struct miqt_string* QUrl_TopLevelDomain1(const QUrl* self, int options);
int QUrl_Port1(const QUrl* self, int defaultPort);
void QUrl_SetPath2(QUrl* self, struct miqt_string* path, uintptr_t mode);
struct miqt_string* QUrl_Path1(const QUrl* self, int options);
struct miqt_string* QUrl_FileName1(const QUrl* self, int options);
void QUrl_SetQuery2(QUrl* self, struct miqt_string* query, uintptr_t mode);
struct miqt_string* QUrl_Query1(const QUrl* self, int param1);
struct miqt_string* QUrl_Fragment1(const QUrl* self, int options);
void QUrl_SetFragment2(QUrl* self, struct miqt_string* fragment, uintptr_t mode);
QByteArray* QUrl_ToPercentEncoding2(struct miqt_string* param1, QByteArray* exclude);
QByteArray* QUrl_ToPercentEncoding3(struct miqt_string* param1, QByteArray* exclude, QByteArray* include);
struct miqt_array* QUrl_FromStringList2(struct miqt_array* /* of QString */ uris, uintptr_t mode);
void QUrl_Delete(QUrl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
