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

void QWebEngineSettings_SetFontFamily(QWebEngineSettings* self, int which, struct miqt_string family);
struct miqt_string QWebEngineSettings_FontFamily(const QWebEngineSettings* self, int which);
void QWebEngineSettings_ResetFontFamily(QWebEngineSettings* self, int which);
void QWebEngineSettings_SetFontSize(QWebEngineSettings* self, int typeVal, int size);
int QWebEngineSettings_FontSize(const QWebEngineSettings* self, int typeVal);
void QWebEngineSettings_ResetFontSize(QWebEngineSettings* self, int typeVal);
void QWebEngineSettings_SetAttribute(QWebEngineSettings* self, int attr, bool on);
bool QWebEngineSettings_TestAttribute(const QWebEngineSettings* self, int attr);
void QWebEngineSettings_ResetAttribute(QWebEngineSettings* self, int attr);
void QWebEngineSettings_SetDefaultTextEncoding(QWebEngineSettings* self, struct miqt_string encoding);
struct miqt_string QWebEngineSettings_DefaultTextEncoding(const QWebEngineSettings* self);
int QWebEngineSettings_UnknownUrlSchemePolicy(const QWebEngineSettings* self);
void QWebEngineSettings_SetUnknownUrlSchemePolicy(QWebEngineSettings* self, int policy);
void QWebEngineSettings_ResetUnknownUrlSchemePolicy(QWebEngineSettings* self);
void QWebEngineSettings_Delete(QWebEngineSettings* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
