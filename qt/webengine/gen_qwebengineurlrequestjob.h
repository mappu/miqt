#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLREQUESTJOB_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLREQUESTJOB_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QMetaObject;
class QObject;
class QUrl;
class QWebEngineUrlRequestJob;
#else
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineUrlRequestJob QWebEngineUrlRequestJob;
#endif

QMetaObject* QWebEngineUrlRequestJob_MetaObject(const QWebEngineUrlRequestJob* self);
void* QWebEngineUrlRequestJob_Metacast(QWebEngineUrlRequestJob* self, const char* param1);
struct miqt_string QWebEngineUrlRequestJob_Tr(const char* s);
struct miqt_string QWebEngineUrlRequestJob_TrUtf8(const char* s);
QUrl* QWebEngineUrlRequestJob_RequestUrl(const QWebEngineUrlRequestJob* self);
struct miqt_string QWebEngineUrlRequestJob_RequestMethod(const QWebEngineUrlRequestJob* self);
QUrl* QWebEngineUrlRequestJob_Initiator(const QWebEngineUrlRequestJob* self);
void QWebEngineUrlRequestJob_Reply(QWebEngineUrlRequestJob* self, struct miqt_string contentType, QIODevice* device);
void QWebEngineUrlRequestJob_Fail(QWebEngineUrlRequestJob* self, int error);
void QWebEngineUrlRequestJob_Redirect(QWebEngineUrlRequestJob* self, QUrl* url);
struct miqt_string QWebEngineUrlRequestJob_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineUrlRequestJob_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineUrlRequestJob_TrUtf82(const char* s, const char* c);
struct miqt_string QWebEngineUrlRequestJob_TrUtf83(const char* s, const char* c, int n);
void QWebEngineUrlRequestJob_Delete(QWebEngineUrlRequestJob* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
