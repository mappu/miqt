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
class QMetaObject;
class QObject;
class QRect;
class QUrl;
class QWebEngineNewWindowRequest;
class QWebEnginePage;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QUrl QUrl;
typedef struct QWebEngineNewWindowRequest QWebEngineNewWindowRequest;
typedef struct QWebEnginePage QWebEnginePage;
#endif

void QWebEngineNewWindowRequest_virtbase(QWebEngineNewWindowRequest* src, QObject** outptr_QObject);
QMetaObject* QWebEngineNewWindowRequest_MetaObject(const QWebEngineNewWindowRequest* self);
void* QWebEngineNewWindowRequest_Metacast(QWebEngineNewWindowRequest* self, const char* param1);
struct miqt_string QWebEngineNewWindowRequest_Tr(const char* s);
int QWebEngineNewWindowRequest_Destination(const QWebEngineNewWindowRequest* self);
QUrl* QWebEngineNewWindowRequest_RequestedUrl(const QWebEngineNewWindowRequest* self);
QRect* QWebEngineNewWindowRequest_RequestedGeometry(const QWebEngineNewWindowRequest* self);
bool QWebEngineNewWindowRequest_IsUserInitiated(const QWebEngineNewWindowRequest* self);
void QWebEngineNewWindowRequest_OpenIn(QWebEngineNewWindowRequest* self, QWebEnginePage* param1);
struct miqt_string QWebEngineNewWindowRequest_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineNewWindowRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineNewWindowRequest_Delete(QWebEngineNewWindowRequest* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
