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
void QWebEngineHttpRequest_OperatorAssign(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
QWebEngineHttpRequest* QWebEngineHttpRequest_PostRequest(QUrl* url, struct miqt_map /* of struct miqt_string to struct miqt_string */  postData);
void QWebEngineHttpRequest_Swap(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
bool QWebEngineHttpRequest_OperatorEqual(const QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
bool QWebEngineHttpRequest_OperatorNotEqual(const QWebEngineHttpRequest* self, QWebEngineHttpRequest* other);
int QWebEngineHttpRequest_Method(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_SetMethod(QWebEngineHttpRequest* self, int method);
QUrl* QWebEngineHttpRequest_Url(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_SetUrl(QWebEngineHttpRequest* self, QUrl* url);
struct miqt_string QWebEngineHttpRequest_PostData(const QWebEngineHttpRequest* self);
void QWebEngineHttpRequest_SetPostData(QWebEngineHttpRequest* self, struct miqt_string postData);
bool QWebEngineHttpRequest_HasHeader(const QWebEngineHttpRequest* self, struct miqt_string headerName);
struct miqt_array /* of struct miqt_string */  QWebEngineHttpRequest_Headers(const QWebEngineHttpRequest* self);
struct miqt_string QWebEngineHttpRequest_Header(const QWebEngineHttpRequest* self, struct miqt_string headerName);
void QWebEngineHttpRequest_SetHeader(QWebEngineHttpRequest* self, struct miqt_string headerName, struct miqt_string value);
void QWebEngineHttpRequest_UnsetHeader(QWebEngineHttpRequest* self, struct miqt_string headerName);
void QWebEngineHttpRequest_Delete(QWebEngineHttpRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
