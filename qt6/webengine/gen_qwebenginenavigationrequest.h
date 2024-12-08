#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINENAVIGATIONREQUEST_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINENAVIGATIONREQUEST_H

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
class QUrl;
class QWebEngineNavigationRequest;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineNavigationRequest QWebEngineNavigationRequest;
#endif

void QWebEngineNavigationRequest_virtbase(QWebEngineNavigationRequest* src, QObject** outptr_QObject);
QMetaObject* QWebEngineNavigationRequest_MetaObject(const QWebEngineNavigationRequest* self);
void* QWebEngineNavigationRequest_Metacast(QWebEngineNavigationRequest* self, const char* param1);
struct miqt_string QWebEngineNavigationRequest_Tr(const char* s);
QUrl* QWebEngineNavigationRequest_Url(const QWebEngineNavigationRequest* self);
bool QWebEngineNavigationRequest_IsMainFrame(const QWebEngineNavigationRequest* self);
int QWebEngineNavigationRequest_NavigationType(const QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Accept(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_Reject(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_ActionChanged(QWebEngineNavigationRequest* self);
void QWebEngineNavigationRequest_connect_ActionChanged(QWebEngineNavigationRequest* self, intptr_t slot);
struct miqt_string QWebEngineNavigationRequest_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineNavigationRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineNavigationRequest_Delete(QWebEngineNavigationRequest* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
