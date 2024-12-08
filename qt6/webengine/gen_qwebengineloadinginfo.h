#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINELOADINGINFO_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINELOADINGINFO_H

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
class QWebEngineLoadingInfo;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineLoadingInfo QWebEngineLoadingInfo;
#endif

QWebEngineLoadingInfo* QWebEngineLoadingInfo_new(QWebEngineLoadingInfo* other);
void QWebEngineLoadingInfo_OperatorAssign(QWebEngineLoadingInfo* self, QWebEngineLoadingInfo* other);
QUrl* QWebEngineLoadingInfo_Url(const QWebEngineLoadingInfo* self);
bool QWebEngineLoadingInfo_IsErrorPage(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_Status(const QWebEngineLoadingInfo* self);
struct miqt_string QWebEngineLoadingInfo_ErrorString(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_ErrorDomain(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_ErrorCode(const QWebEngineLoadingInfo* self);
void QWebEngineLoadingInfo_Delete(QWebEngineLoadingInfo* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
