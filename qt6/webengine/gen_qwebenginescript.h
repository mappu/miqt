#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINESCRIPT_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINESCRIPT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebEngineScript;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineScript QWebEngineScript;
#endif

QWebEngineScript* QWebEngineScript_new();
QWebEngineScript* QWebEngineScript_new2(QWebEngineScript* other);
void QWebEngineScript_OperatorAssign(QWebEngineScript* self, QWebEngineScript* other);
struct miqt_string QWebEngineScript_Name(const QWebEngineScript* self);
void QWebEngineScript_SetName(QWebEngineScript* self, struct miqt_string name);
QUrl* QWebEngineScript_SourceUrl(const QWebEngineScript* self);
void QWebEngineScript_SetSourceUrl(QWebEngineScript* self, QUrl* url);
struct miqt_string QWebEngineScript_SourceCode(const QWebEngineScript* self);
void QWebEngineScript_SetSourceCode(QWebEngineScript* self, struct miqt_string sourceCode);
int QWebEngineScript_InjectionPoint(const QWebEngineScript* self);
void QWebEngineScript_SetInjectionPoint(QWebEngineScript* self, int injectionPoint);
unsigned int QWebEngineScript_WorldId(const QWebEngineScript* self);
void QWebEngineScript_SetWorldId(QWebEngineScript* self, unsigned int worldId);
bool QWebEngineScript_RunsOnSubFrames(const QWebEngineScript* self);
void QWebEngineScript_SetRunsOnSubFrames(QWebEngineScript* self, bool on);
bool QWebEngineScript_OperatorEqual(const QWebEngineScript* self, QWebEngineScript* other);
bool QWebEngineScript_OperatorNotEqual(const QWebEngineScript* self, QWebEngineScript* other);
void QWebEngineScript_Swap(QWebEngineScript* self, QWebEngineScript* other);
void QWebEngineScript_Delete(QWebEngineScript* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
