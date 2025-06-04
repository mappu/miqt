#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINENEWWINDOWREQUEST_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINENEWWINDOWREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QUrl;
class QWebEngineNewWindowRequest;
class QWebEnginePage;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QUrl QUrl;
typedef struct QWebEngineNewWindowRequest QWebEngineNewWindowRequest;
typedef struct QWebEnginePage QWebEnginePage;
#endif

void QWebEngineNewWindowRequest_virtbase(QWebEngineNewWindowRequest* src, QObject** outptr_QObject);
QMetaObject* QWebEngineNewWindowRequest_metaObject(const QWebEngineNewWindowRequest* self);
void* QWebEngineNewWindowRequest_metacast(QWebEngineNewWindowRequest* self, const char* param1);
struct miqt_string QWebEngineNewWindowRequest_tr(const char* s);
int QWebEngineNewWindowRequest_destination(const QWebEngineNewWindowRequest* self);
QUrl* QWebEngineNewWindowRequest_requestedUrl(const QWebEngineNewWindowRequest* self);
QRect* QWebEngineNewWindowRequest_requestedGeometry(const QWebEngineNewWindowRequest* self);
bool QWebEngineNewWindowRequest_isUserInitiated(const QWebEngineNewWindowRequest* self);
void QWebEngineNewWindowRequest_openIn(QWebEngineNewWindowRequest* self, QWebEnginePage* param1);
struct miqt_string QWebEngineNewWindowRequest_tr2(const char* s, const char* c);
struct miqt_string QWebEngineNewWindowRequest_tr3(const char* s, const char* c, int n);

void QWebEngineNewWindowRequest_delete(QWebEngineNewWindowRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
