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
class QMetaMethod;
class QMetaObject;
class QObject;
class QUrl;
class QWebEngineUrlRequestJob;
#else
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineUrlRequestJob QWebEngineUrlRequestJob;
#endif

void QWebEngineUrlRequestJob_virtbase(QWebEngineUrlRequestJob* src, QObject** outptr_QObject);
QMetaObject* QWebEngineUrlRequestJob_metaObject(const QWebEngineUrlRequestJob* self);
void* QWebEngineUrlRequestJob_metacast(QWebEngineUrlRequestJob* self, const char* param1);
struct miqt_string QWebEngineUrlRequestJob_tr(const char* s);
struct miqt_string QWebEngineUrlRequestJob_trUtf8(const char* s);
QUrl* QWebEngineUrlRequestJob_requestUrl(const QWebEngineUrlRequestJob* self);
struct miqt_string QWebEngineUrlRequestJob_requestMethod(const QWebEngineUrlRequestJob* self);
QUrl* QWebEngineUrlRequestJob_initiator(const QWebEngineUrlRequestJob* self);
void QWebEngineUrlRequestJob_reply(QWebEngineUrlRequestJob* self, struct miqt_string contentType, QIODevice* device);
void QWebEngineUrlRequestJob_fail(QWebEngineUrlRequestJob* self, int error);
void QWebEngineUrlRequestJob_redirect(QWebEngineUrlRequestJob* self, QUrl* url);
struct miqt_string QWebEngineUrlRequestJob_tr2(const char* s, const char* c);
struct miqt_string QWebEngineUrlRequestJob_tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineUrlRequestJob_trUtf82(const char* s, const char* c);
struct miqt_string QWebEngineUrlRequestJob_trUtf83(const char* s, const char* c, int n);
void QWebEngineUrlRequestJob_delete(QWebEngineUrlRequestJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
