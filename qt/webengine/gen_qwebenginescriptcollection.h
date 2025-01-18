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

bool QWebEngineScriptCollection_IsEmpty(const QWebEngineScriptCollection* self);
int QWebEngineScriptCollection_Count(const QWebEngineScriptCollection* self);
int QWebEngineScriptCollection_Size(const QWebEngineScriptCollection* self);
bool QWebEngineScriptCollection_Contains(const QWebEngineScriptCollection* self, QWebEngineScript* value);
QWebEngineScript* QWebEngineScriptCollection_FindScript(const QWebEngineScriptCollection* self, struct miqt_string name);
struct miqt_array /* of QWebEngineScript* */  QWebEngineScriptCollection_FindScripts(const QWebEngineScriptCollection* self, struct miqt_string name);
void QWebEngineScriptCollection_Insert(QWebEngineScriptCollection* self, QWebEngineScript* param1);
void QWebEngineScriptCollection_InsertWithList(QWebEngineScriptCollection* self, struct miqt_array /* of QWebEngineScript* */  list);
bool QWebEngineScriptCollection_Remove(QWebEngineScriptCollection* self, QWebEngineScript* param1);
void QWebEngineScriptCollection_Clear(QWebEngineScriptCollection* self);
struct miqt_array /* of QWebEngineScript* */  QWebEngineScriptCollection_ToList(const QWebEngineScriptCollection* self);
void QWebEngineScriptCollection_Delete(QWebEngineScriptCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
