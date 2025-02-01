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
void QWebEngineLoadingInfo_operatorAssign(QWebEngineLoadingInfo* self, QWebEngineLoadingInfo* other);
QUrl* QWebEngineLoadingInfo_url(const QWebEngineLoadingInfo* self);
bool QWebEngineLoadingInfo_isErrorPage(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_status(const QWebEngineLoadingInfo* self);
struct miqt_string QWebEngineLoadingInfo_errorString(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_errorDomain(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_errorCode(const QWebEngineLoadingInfo* self);
void QWebEngineLoadingInfo_delete(QWebEngineLoadingInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
