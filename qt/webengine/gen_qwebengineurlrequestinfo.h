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

int QWebEngineUrlRequestInfo_ResourceType(const QWebEngineUrlRequestInfo* self);
int QWebEngineUrlRequestInfo_NavigationType(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_RequestUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_FirstPartyUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_Initiator(const QWebEngineUrlRequestInfo* self);
struct miqt_string QWebEngineUrlRequestInfo_RequestMethod(const QWebEngineUrlRequestInfo* self);
bool QWebEngineUrlRequestInfo_Changed(const QWebEngineUrlRequestInfo* self);
void QWebEngineUrlRequestInfo_Block(QWebEngineUrlRequestInfo* self, bool shouldBlock);
void QWebEngineUrlRequestInfo_Redirect(QWebEngineUrlRequestInfo* self, QUrl* url);
void QWebEngineUrlRequestInfo_SetHttpHeader(QWebEngineUrlRequestInfo* self, struct miqt_string name, struct miqt_string value);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
