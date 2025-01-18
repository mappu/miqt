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
QMetaObject* QWebEngineNotification_MetaObject(const QWebEngineNotification* self);
void* QWebEngineNotification_Metacast(QWebEngineNotification* self, const char* param1);
struct miqt_string QWebEngineNotification_Tr(const char* s);
struct miqt_string QWebEngineNotification_TrUtf8(const char* s);
bool QWebEngineNotification_Matches(const QWebEngineNotification* self, QWebEngineNotification* other);
QUrl* QWebEngineNotification_Origin(const QWebEngineNotification* self);
QImage* QWebEngineNotification_Icon(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_Title(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_Message(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_Tag(const QWebEngineNotification* self);
struct miqt_string QWebEngineNotification_Language(const QWebEngineNotification* self);
int QWebEngineNotification_Direction(const QWebEngineNotification* self);
void QWebEngineNotification_Show(const QWebEngineNotification* self);
void QWebEngineNotification_Click(const QWebEngineNotification* self);
void QWebEngineNotification_Close(const QWebEngineNotification* self);
void QWebEngineNotification_Closed(QWebEngineNotification* self);
void QWebEngineNotification_connect_Closed(QWebEngineNotification* self, intptr_t slot);
struct miqt_string QWebEngineNotification_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineNotification_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineNotification_TrUtf82(const char* s, const char* c);
struct miqt_string QWebEngineNotification_TrUtf83(const char* s, const char* c, int n);
void QWebEngineNotification_Delete(QWebEngineNotification* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
