#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINECONTEXTMENUDATA_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINECONTEXTMENUDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPoint;
class QUrl;
class QWebEngineContextMenuData;
#else
typedef struct QPoint QPoint;
typedef struct QUrl QUrl;
typedef struct QWebEngineContextMenuData QWebEngineContextMenuData;
#endif

QWebEngineContextMenuData* QWebEngineContextMenuData_new();
QWebEngineContextMenuData* QWebEngineContextMenuData_new2(QWebEngineContextMenuData* other);
void QWebEngineContextMenuData_OperatorAssign(QWebEngineContextMenuData* self, QWebEngineContextMenuData* other);
bool QWebEngineContextMenuData_IsValid(const QWebEngineContextMenuData* self);
QPoint* QWebEngineContextMenuData_Position(const QWebEngineContextMenuData* self);
struct miqt_string QWebEngineContextMenuData_SelectedText(const QWebEngineContextMenuData* self);
struct miqt_string QWebEngineContextMenuData_LinkText(const QWebEngineContextMenuData* self);
QUrl* QWebEngineContextMenuData_LinkUrl(const QWebEngineContextMenuData* self);
QUrl* QWebEngineContextMenuData_MediaUrl(const QWebEngineContextMenuData* self);
int QWebEngineContextMenuData_MediaType(const QWebEngineContextMenuData* self);
bool QWebEngineContextMenuData_IsContentEditable(const QWebEngineContextMenuData* self);
struct miqt_string QWebEngineContextMenuData_MisspelledWord(const QWebEngineContextMenuData* self);
struct miqt_array /* of struct miqt_string */  QWebEngineContextMenuData_SpellCheckerSuggestions(const QWebEngineContextMenuData* self);
int QWebEngineContextMenuData_MediaFlags(const QWebEngineContextMenuData* self);
int QWebEngineContextMenuData_EditFlags(const QWebEngineContextMenuData* self);
void QWebEngineContextMenuData_Delete(QWebEngineContextMenuData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
