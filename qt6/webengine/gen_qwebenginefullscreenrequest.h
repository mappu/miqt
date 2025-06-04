#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEFULLSCREENREQUEST_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEFULLSCREENREQUEST_H

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

QWebEngineFullScreenRequest* QWebEngineFullScreenRequest_new(QWebEngineFullScreenRequest* other);
void QWebEngineFullScreenRequest_operatorAssign(QWebEngineFullScreenRequest* self, QWebEngineFullScreenRequest* other);
void QWebEngineFullScreenRequest_reject(QWebEngineFullScreenRequest* self);
void QWebEngineFullScreenRequest_accept(QWebEngineFullScreenRequest* self);
bool QWebEngineFullScreenRequest_toggleOn(const QWebEngineFullScreenRequest* self);
QUrl* QWebEngineFullScreenRequest_origin(const QWebEngineFullScreenRequest* self);

void QWebEngineFullScreenRequest_delete(QWebEngineFullScreenRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
