#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBFULLSCREENREQUEST_H
#define MIQT_QT_WEBKIT_GEN_QWEBFULLSCREENREQUEST_H

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
class QWebElement;
class QWebFullScreenRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebElement QWebElement;
typedef struct QWebFullScreenRequest QWebFullScreenRequest;
#endif

QWebFullScreenRequest* QWebFullScreenRequest_new();
QWebFullScreenRequest* QWebFullScreenRequest_new2(QWebFullScreenRequest* param1);
void QWebFullScreenRequest_accept(QWebFullScreenRequest* self);
void QWebFullScreenRequest_reject(QWebFullScreenRequest* self);
bool QWebFullScreenRequest_toggleOn(const QWebFullScreenRequest* self);
QUrl* QWebFullScreenRequest_origin(const QWebFullScreenRequest* self);
QWebElement* QWebFullScreenRequest_element(const QWebFullScreenRequest* self);
void QWebFullScreenRequest_delete(QWebFullScreenRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
