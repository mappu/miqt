#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEHTTPREQUEST_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEHTTPREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebEngineHttpRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineHttpRequest QWebEngineHttpRequest;
#endif

QWebEngineHttpRequest* QWebEngineHttpRequest_new();
QWebEngineHttpRequest* QWebEngineHttpRequest_new2(QWebEngineHttpRequest* other);
QWebEngineHttpRequest* QWebEngineHttpRequest_new3(QUrl* url);
QWebEngineHttpRequest* QWebEngineHttpRequest_new4(QUrl* url, int* method);
void QWebEngineHttpRequest_operatorAssign(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
QWebEngineHttpRequest* QWebEngineHttpRequest_postRequest(QUrl* url, struct miqt_map /* of struct miqt_string to struct miqt_string */  postData);
void QWebEngineHttpRequest_swap(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
bool QWebEngineHttpRequest_operatorEqual(const QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
bool QWebEngineHttpRequest_operatorNotEqual(const QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
int QWebEngineHttpRequest_method(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_setMethod(QWebEngineHttpRequest* self, int method);
QUrl* QWebEngineHttpRequest_url(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_setUrl(QWebEngineHttpRequest* self, QUrl* url);
struct miqt_string QWebEngineHttpRequest_postData(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_setPostData(QWebEngineHttpRequest* self, struct miqt_string postData);
bool QWebEngineHttpRequest_hasHeader(const QWebEngineHttpRequest* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_string */  QWebEngineHttpRequest_headers(const QWebEngineHttpRequest* self);
struct miqt_string QWebEngineHttpRequest_header(const QWebEngineHttpRequest* self, struct miqt_string headerName);
void QWebEngineHttpRequest_setHeader(QWebEngineHttpRequest* self, struct miqt_string headerName, struct miqt_string value);
void QWebEngineHttpRequest_unsetHeader(QWebEngineHttpRequest* self, struct miqt_string headerName);

void QWebEngineHttpRequest_delete(QWebEngineHttpRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
