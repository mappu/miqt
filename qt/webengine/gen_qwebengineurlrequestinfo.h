#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLREQUESTINFO_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLREQUESTINFO_H

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
class QWebEngineUrlRequestInfo;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineUrlRequestInfo QWebEngineUrlRequestInfo;
#endif

int QWebEngineUrlRequestInfo_resourceType(const QWebEngineUrlRequestInfo* self);
int QWebEngineUrlRequestInfo_navigationType(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_requestUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_firstPartyUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_initiator(const QWebEngineUrlRequestInfo* self);
struct miqt_string QWebEngineUrlRequestInfo_requestMethod(const QWebEngineUrlRequestInfo* self);
bool QWebEngineUrlRequestInfo_changed(const QWebEngineUrlRequestInfo* self);
void QWebEngineUrlRequestInfo_block(QWebEngineUrlRequestInfo* self, bool shouldBlock);
void QWebEngineUrlRequestInfo_redirect(QWebEngineUrlRequestInfo* self, QUrl* url);
void QWebEngineUrlRequestInfo_setHttpHeader(QWebEngineUrlRequestInfo* self, struct miqt_string name, struct miqt_string value);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
