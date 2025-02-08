#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINECONTEXTMENUREQUEST_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINECONTEXTMENUREQUEST_H

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
class QPoint;
class QUrl;
class QWebEngineContextMenuRequest;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QUrl QUrl;
typedef struct QWebEngineContextMenuRequest QWebEngineContextMenuRequest;
#endif

void QWebEngineContextMenuRequest_virtbase(QWebEngineContextMenuRequest* src, QObject** outptr_QObject);
QMetaObject* QWebEngineContextMenuRequest_metaObject(const QWebEngineContextMenuRequest* self);
void* QWebEngineContextMenuRequest_metacast(QWebEngineContextMenuRequest* self, const char* param1);
struct miqt_string QWebEngineContextMenuRequest_tr(const char* s);
QPoint* QWebEngineContextMenuRequest_position(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_selectedText(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_linkText(const QWebEngineContextMenuRequest* self);
QUrl* QWebEngineContextMenuRequest_linkUrl(const QWebEngineContextMenuRequest* self);
QUrl* QWebEngineContextMenuRequest_mediaUrl(const QWebEngineContextMenuRequest* self);
int QWebEngineContextMenuRequest_mediaType(const QWebEngineContextMenuRequest* self);
bool QWebEngineContextMenuRequest_isContentEditable(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_misspelledWord(const QWebEngineContextMenuRequest* self);
struct miqt_array /* of struct miqt_string */  QWebEngineContextMenuRequest_spellCheckerSuggestions(const QWebEngineContextMenuRequest* self);
bool QWebEngineContextMenuRequest_isAccepted(const QWebEngineContextMenuRequest* self);
void QWebEngineContextMenuRequest_setAccepted(QWebEngineContextMenuRequest* self, bool accepted);
int QWebEngineContextMenuRequest_mediaFlags(const QWebEngineContextMenuRequest* self);
int QWebEngineContextMenuRequest_editFlags(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_tr2(const char* s, const char* c);
struct miqt_string QWebEngineContextMenuRequest_tr3(const char* s, const char* c, int n);
void QWebEngineContextMenuRequest_delete(QWebEngineContextMenuRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
