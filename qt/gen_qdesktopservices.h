#pragma once
#ifndef MIQT_QT_GEN_QDESKTOPSERVICES_H
#define MIQT_QT_GEN_QDESKTOPSERVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesktopServices;
class QObject;
class QUrl;
#else
typedef struct QDesktopServices QDesktopServices;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

bool QDesktopServices_openUrl(QUrl* url);
void QDesktopServices_setUrlHandler(struct miqt_string scheme, QObject* receiver, const char* method);
void QDesktopServices_unsetUrlHandler(struct miqt_string scheme);
void QDesktopServices_delete(QDesktopServices* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
