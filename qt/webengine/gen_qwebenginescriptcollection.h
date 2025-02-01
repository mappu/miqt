#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINESCRIPTCOLLECTION_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINESCRIPTCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebEngineScript;
class QWebEngineScriptCollection;
#else
typedef struct QWebEngineScript QWebEngineScript;
typedef struct QWebEngineScriptCollection QWebEngineScriptCollection;
#endif

bool QWebEngineScriptCollection_isEmpty(const QWebEngineScriptCollection* self);
int QWebEngineScriptCollection_count(const QWebEngineScriptCollection* self);
int QWebEngineScriptCollection_size(const QWebEngineScriptCollection* self);
bool QWebEngineScriptCollection_contains(const QWebEngineScriptCollection* self, QWebEngineScript* value);
QWebEngineScript* QWebEngineScriptCollection_findScript(const QWebEngineScriptCollection* self, struct miqt_string name);
struct miqt_array /* of QWebEngineScript* */  QWebEngineScriptCollection_findScripts(const QWebEngineScriptCollection* self, struct miqt_string name);
void QWebEngineScriptCollection_insert(QWebEngineScriptCollection* self, QWebEngineScript* param1);
void QWebEngineScriptCollection_insertWithList(QWebEngineScriptCollection* self, struct miqt_array /* of QWebEngineScript* */  list);
bool QWebEngineScriptCollection_remove(QWebEngineScriptCollection* self, QWebEngineScript* param1);
void QWebEngineScriptCollection_clear(QWebEngineScriptCollection* self);
struct miqt_array /* of QWebEngineScript* */  QWebEngineScriptCollection_toList(const QWebEngineScriptCollection* self);
void QWebEngineScriptCollection_delete(QWebEngineScriptCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
