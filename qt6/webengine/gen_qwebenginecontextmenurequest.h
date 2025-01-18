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
class QMetaObject;
class QObject;
class QPoint;
class QUrl;
class QWebEngineContextMenuRequest;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QUrl QUrl;
typedef struct QWebEngineContextMenuRequest QWebEngineContextMenuRequest;
#endif

void QWebEngineContextMenuRequest_virtbase(QWebEngineContextMenuRequest* src, QObject** outptr_QObject);
QMetaObject* QWebEngineContextMenuRequest_MetaObject(const QWebEngineContextMenuRequest* self);
void* QWebEngineContextMenuRequest_Metacast(QWebEngineContextMenuRequest* self, const char* param1);
struct miqt_string QWebEngineContextMenuRequest_Tr(const char* s);
QPoint* QWebEngineContextMenuRequest_Position(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_SelectedText(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_LinkText(const QWebEngineContextMenuRequest* self);
QUrl* QWebEngineContextMenuRequest_LinkUrl(const QWebEngineContextMenuRequest* self);
QUrl* QWebEngineContextMenuRequest_MediaUrl(const QWebEngineContextMenuRequest* self);
int QWebEngineContextMenuRequest_MediaType(const QWebEngineContextMenuRequest* self);
bool QWebEngineContextMenuRequest_IsContentEditable(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_MisspelledWord(const QWebEngineContextMenuRequest* self);
struct miqt_array /* of struct miqt_string */  QWebEngineContextMenuRequest_SpellCheckerSuggestions(const QWebEngineContextMenuRequest* self);
bool QWebEngineContextMenuRequest_IsAccepted(const QWebEngineContextMenuRequest* self);
void QWebEngineContextMenuRequest_SetAccepted(QWebEngineContextMenuRequest* self, bool accepted);
int QWebEngineContextMenuRequest_MediaFlags(const QWebEngineContextMenuRequest* self);
int QWebEngineContextMenuRequest_EditFlags(const QWebEngineContextMenuRequest* self);
struct miqt_string QWebEngineContextMenuRequest_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineContextMenuRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineContextMenuRequest_Delete(QWebEngineContextMenuRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
