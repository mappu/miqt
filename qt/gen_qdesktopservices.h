#ifndef GEN_QDESKTOPSERVICES_H
#define GEN_QDESKTOPSERVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QDesktopServices_SetUrlHandler(const char* scheme, size_t scheme_Strlen, QObject* receiver, const char* method);
void QDesktopServices_UnsetUrlHandler(const char* scheme, size_t scheme_Strlen);
void QDesktopServices_Delete(QDesktopServices* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
