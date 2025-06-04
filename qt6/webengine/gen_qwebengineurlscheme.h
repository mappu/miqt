#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEURLSCHEME_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEURLSCHEME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebEngineUrlScheme;
#else
typedef struct QWebEngineUrlScheme QWebEngineUrlScheme;
#endif

QWebEngineUrlScheme* QWebEngineUrlScheme_new();
QWebEngineUrlScheme* QWebEngineUrlScheme_new2(struct miqt_string name);
QWebEngineUrlScheme* QWebEngineUrlScheme_new3(QWebEngineUrlScheme* that);
void QWebEngineUrlScheme_operatorAssign(QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
bool QWebEngineUrlScheme_operatorEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
bool QWebEngineUrlScheme_operatorNotEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that);
struct miqt_string QWebEngineUrlScheme_name(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_setName(QWebEngineUrlScheme* self, struct miqt_string newValue);
int QWebEngineUrlScheme_syntax(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_setSyntax(QWebEngineUrlScheme* self, int newValue);
int QWebEngineUrlScheme_defaultPort(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_setDefaultPort(QWebEngineUrlScheme* self, int newValue);
int QWebEngineUrlScheme_flags(const QWebEngineUrlScheme* self);
void QWebEngineUrlScheme_setFlags(QWebEngineUrlScheme* self, int newValue);
void QWebEngineUrlScheme_registerScheme(QWebEngineUrlScheme* scheme);
QWebEngineUrlScheme* QWebEngineUrlScheme_schemeByName(struct miqt_string name);

void QWebEngineUrlScheme_delete(QWebEngineUrlScheme* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
