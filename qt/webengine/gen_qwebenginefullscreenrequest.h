#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEFULLSCREENREQUEST_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEFULLSCREENREQUEST_H

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
class QWebEngineFullScreenRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineFullScreenRequest QWebEngineFullScreenRequest;
#endif

void QWebEngineFullScreenRequest_new(QWebEngineFullScreenRequest* param1, QWebEngineFullScreenRequest** outptr_QWebEngineFullScreenRequest);
void QWebEngineFullScreenRequest_Reject(QWebEngineFullScreenRequest* self);
void QWebEngineFullScreenRequest_Accept(QWebEngineFullScreenRequest* self);
bool QWebEngineFullScreenRequest_ToggleOn(const QWebEngineFullScreenRequest* self);
QUrl* QWebEngineFullScreenRequest_Origin(const QWebEngineFullScreenRequest* self);
void QWebEngineFullScreenRequest_Delete(QWebEngineFullScreenRequest* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
