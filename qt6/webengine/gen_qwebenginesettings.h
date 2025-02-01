#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINESETTINGS_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINESETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWebEngineSettings;
#else
typedef struct QWebEngineSettings QWebEngineSettings;
#endif

void QWebEngineSettings_setFontFamily(QWebEngineSettings* self, int which, struct miqt_string family);
struct miqt_string QWebEngineSettings_fontFamily(const QWebEngineSettings* self, int which);
void QWebEngineSettings_resetFontFamily(QWebEngineSettings* self, int which);
void QWebEngineSettings_setFontSize(QWebEngineSettings* self, int type, int size);
int QWebEngineSettings_fontSize(const QWebEngineSettings* self, int type);
void QWebEngineSettings_resetFontSize(QWebEngineSettings* self, int type);
void QWebEngineSettings_setAttribute(QWebEngineSettings* self, int attr, bool on);
bool QWebEngineSettings_testAttribute(const QWebEngineSettings* self, int attr);
void QWebEngineSettings_resetAttribute(QWebEngineSettings* self, int attr);
void QWebEngineSettings_setDefaultTextEncoding(QWebEngineSettings* self, struct miqt_string encoding);
struct miqt_string QWebEngineSettings_defaultTextEncoding(const QWebEngineSettings* self);
int QWebEngineSettings_unknownUrlSchemePolicy(const QWebEngineSettings* self);
void QWebEngineSettings_setUnknownUrlSchemePolicy(QWebEngineSettings* self, int policy);
void QWebEngineSettings_resetUnknownUrlSchemePolicy(QWebEngineSettings* self);
void QWebEngineSettings_delete(QWebEngineSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
