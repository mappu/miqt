#pragma once
#ifndef MIQT_QT6_GEN_QURL_H
#define MIQT_QT6_GEN_QURL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QUrlQuery;
#else
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
#endif

QUrl* QUrl_new();
QUrl* QUrl_new2(QUrl* copy);
QUrl* QUrl_new3(struct miqt_string url);
QUrl* QUrl_new4(struct miqt_string url, int mode);
void QUrl_operatorAssign(QUrl* self, QUrl* copy);
void QUrl_operatorAssignWithUrl(QUrl* self, struct miqt_string url);
void QUrl_swap(QUrl* self, QUrl* other);
void QUrl_setUrl(QUrl* self, struct miqt_string url);
struct miqt_string QUrl_url(const QUrl* self);
struct miqt_string QUrl_toString(const QUrl* self);
struct miqt_string QUrl_toDisplayString(const QUrl* self);
struct miqt_string QUrl_toEncoded(const QUrl* self);
QUrl* QUrl_fromEncoded(struct miqt_string url);
QUrl* QUrl_fromUserInput(struct miqt_string userInput);
bool QUrl_isValid(const QUrl* self);
struct miqt_string QUrl_errorString(const QUrl* self);
bool QUrl_isEmpty(const QUrl* self);
void QUrl_clear(QUrl* self);
void QUrl_setScheme(QUrl* self, struct miqt_string scheme);
struct miqt_string QUrl_scheme(const QUrl* self);
void QUrl_setAuthority(QUrl* self, struct miqt_string authority);
struct miqt_string QUrl_authority(const QUrl* self);
void QUrl_setUserInfo(QUrl* self, struct miqt_string userInfo);
struct miqt_string QUrl_userInfo(const QUrl* self);
void QUrl_setUserName(QUrl* self, struct miqt_string userName);
struct miqt_string QUrl_userName(const QUrl* self);
void QUrl_setPassword(QUrl* self, struct miqt_string password);
struct miqt_string QUrl_password(const QUrl* self);
void QUrl_setHost(QUrl* self, struct miqt_string host);
struct miqt_string QUrl_host(const QUrl* self);
void QUrl_setPort(QUrl* self, int port);
int QUrl_port(const QUrl* self);
void QUrl_setPath(QUrl* self, struct miqt_string path);
struct miqt_string QUrl_path(const QUrl* self);
struct miqt_string QUrl_fileName(const QUrl* self);
bool QUrl_hasQuery(const QUrl* self);
void QUrl_setQuery(QUrl* self, struct miqt_string query);
void QUrl_setQueryWithQuery(QUrl* self, QUrlQuery* query);
struct miqt_string QUrl_query(const QUrl* self);
bool QUrl_hasFragment(const QUrl* self);
struct miqt_string QUrl_fragment(const QUrl* self);
void QUrl_setFragment(QUrl* self, struct miqt_string fragment);
QUrl* QUrl_resolved(const QUrl* self, QUrl* relative);
bool QUrl_isRelative(const QUrl* self);
bool QUrl_isParentOf(const QUrl* self, QUrl* url);
bool QUrl_isLocalFile(const QUrl* self);
QUrl* QUrl_fromLocalFile(struct miqt_string localfile);
struct miqt_string QUrl_toLocalFile(const QUrl* self);
void QUrl_detach(QUrl* self);
bool QUrl_isDetached(const QUrl* self);
bool QUrl_operatorLesser(const QUrl* self, QUrl* url);
bool QUrl_operatorEqual(const QUrl* self, QUrl* url);
bool QUrl_operatorNotEqual(const QUrl* self, QUrl* url);
struct miqt_string QUrl_fromPercentEncoding(struct miqt_string param1);
struct miqt_string QUrl_toPercentEncoding(struct miqt_string param1);
struct miqt_string QUrl_fromAce(struct miqt_string domain);
struct miqt_string QUrl_toAce(struct miqt_string domain);
struct miqt_array /* of struct miqt_string */  QUrl_idnWhitelist();
struct miqt_array /* of struct miqt_string */  QUrl_toStringList(struct miqt_array /* of QUrl* */  uris);
struct miqt_array /* of QUrl* */  QUrl_fromStringList(struct miqt_array /* of struct miqt_string */  uris);
void QUrl_setIdnWhitelist(struct miqt_array /* of struct miqt_string */  idnWhitelist);
void QUrl_setUrl2(QUrl* self, struct miqt_string url, int mode);
QUrl* QUrl_fromEncoded2(struct miqt_string url, int mode);
QUrl* QUrl_fromUserInput2(struct miqt_string userInput, struct miqt_string workingDirectory);
QUrl* QUrl_fromUserInput3(struct miqt_string userInput, struct miqt_string workingDirectory, int options);
void QUrl_setAuthority2(QUrl* self, struct miqt_string authority, int mode);
struct miqt_string QUrl_authorityWithOptions(const QUrl* self, unsigned int options);
void QUrl_setUserInfo2(QUrl* self, struct miqt_string userInfo, int mode);
struct miqt_string QUrl_userInfoWithOptions(const QUrl* self, unsigned int options);
void QUrl_setUserName2(QUrl* self, struct miqt_string userName, int mode);
struct miqt_string QUrl_userNameWithOptions(const QUrl* self, unsigned int options);
void QUrl_setPassword2(QUrl* self, struct miqt_string password, int mode);
struct miqt_string QUrl_passwordWithQUrlComponentFormattingOptions(const QUrl* self, unsigned int param1);
void QUrl_setHost2(QUrl* self, struct miqt_string host, int mode);
struct miqt_string QUrl_hostWithQUrlComponentFormattingOptions(const QUrl* self, unsigned int param1);
int QUrl_portWithDefaultPort(const QUrl* self, int defaultPort);
void QUrl_setPath2(QUrl* self, struct miqt_string path, int mode);
struct miqt_string QUrl_pathWithOptions(const QUrl* self, unsigned int options);
struct miqt_string QUrl_fileNameWithOptions(const QUrl* self, unsigned int options);
void QUrl_setQuery2(QUrl* self, struct miqt_string query, int mode);
struct miqt_string QUrl_queryWithQUrlComponentFormattingOptions(const QUrl* self, unsigned int param1);
struct miqt_string QUrl_fragmentWithOptions(const QUrl* self, unsigned int options);
void QUrl_setFragment2(QUrl* self, struct miqt_string fragment, int mode);
struct miqt_string QUrl_toPercentEncoding2(struct miqt_string param1, struct miqt_string exclude);
struct miqt_string QUrl_toPercentEncoding3(struct miqt_string param1, struct miqt_string exclude, struct miqt_string include);
struct miqt_string QUrl_fromAce2(struct miqt_string domain, unsigned int options);
struct miqt_string QUrl_toAce2(struct miqt_string domain, unsigned int options);
struct miqt_array /* of QUrl* */  QUrl_fromStringList2(struct miqt_array /* of struct miqt_string */  uris, int mode);
void QUrl_delete(QUrl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
