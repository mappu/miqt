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

bool QDesktopServices_OpenUrl(QUrl* url);
void QDesktopServices_SetUrlHandler(struct miqt_string scheme, QObject* receiver, const char* method);
void QDesktopServices_UnsetUrlHandler(struct miqt_string scheme);
void QDesktopServices_Delete(QDesktopServices* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
