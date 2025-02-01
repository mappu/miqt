#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINENOTIFICATION_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINENOTIFICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QImage;
class QMetaObject;
class QObject;
class QUrl;
class QWebEngineNotification;
#else
typedef struct QImage QImage;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWebEngineNotification QWebEngineNotification;
#endif

void QWebEngineNotification_virtbase(QWebEngineNotification* src, QObject** outptr_QObject);
QMetaObject* QWebEngineNotification_metaObject(const QWebEngineNotification* self);
void* QWebEngineNotification_metacast(QWebEngineNotification* self, const char* param1);
struct miqt_string QWebEngineNotification_tr(const char* s);
struct miqt_string QWebEngineNotification_trUtf8(const char* s);
bool QWebEngineNotification_matches(const QWebEngineNotification* self, QWebEngineNotification* other);
QUrl* QWebEngineNotification_origin(const QWebEngineNotification* self);
QImage* QWebEngineNotification_icon(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_title(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_message(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_tag(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_language(const QWebEngineNotification* self);
int QWebEngineNotification_direction(const QWebEngineNotification* self);
void QWebEngineNotification_show(const QWebEngineNotification* self);
void QWebEngineNotification_click(const QWebEngineNotification* self);
void QWebEngineNotification_close(const QWebEngineNotification* self);
void QWebEngineNotification_closed(QWebEngineNotification* self);
void QWebEngineNotification_connect_closed(QWebEngineNotification* self, intptr_t slot);
struct miqt_string QWebEngineNotification_tr2(const char* s, const char* c);
struct miqt_string QWebEngineNotification_tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineNotification_trUtf82(const char* s, const char* c);
struct miqt_string QWebEngineNotification_trUtf83(const char* s, const char* c, int n);
void QWebEngineNotification_delete(QWebEngineNotification* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
