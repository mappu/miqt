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
void QWebEngineScript_operatorAssign(QWebEngineScript* self, QWebEngineScript* other);
struct miqt_string QWebEngineScript_name(const QWebEngineScript* self);
void QWebEngineScript_setName(QWebEngineScript* self, struct miqt_string name);
QUrl* QWebEngineScript_sourceUrl(const QWebEngineScript* self);
void QWebEngineScript_setSourceUrl(QWebEngineScript* self, QUrl* url);
struct miqt_string QWebEngineScript_sourceCode(const QWebEngineScript* self);
void QWebEngineScript_setSourceCode(QWebEngineScript* self, struct miqt_string sourceCode);
int QWebEngineScript_injectionPoint(const QWebEngineScript* self);
void QWebEngineScript_setInjectionPoint(QWebEngineScript* self, int injectionPoint);
unsigned int QWebEngineScript_worldId(const QWebEngineScript* self);
void QWebEngineScript_setWorldId(QWebEngineScript* self, unsigned int worldId);
bool QWebEngineScript_runsOnSubFrames(const QWebEngineScript* self);
void QWebEngineScript_setRunsOnSubFrames(QWebEngineScript* self, bool on);
bool QWebEngineScript_operatorEqual(const QWebEngineScript* self, QWebEngineScript* other);
bool QWebEngineScript_operatorNotEqual(const QWebEngineScript* self, QWebEngineScript* other);
void QWebEngineScript_swap(QWebEngineScript* self, QWebEngineScript* other);

void QWebEngineScript_delete(QWebEngineScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
