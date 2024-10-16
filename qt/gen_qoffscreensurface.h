#ifndef GEN_QOFFSCREENSURFACE_H
#define GEN_QOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QOffscreenSurface;
class QScreen;
class QSize;
class QSurfaceFormat;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QOffscreenSurface QOffscreenSurface;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

QOffscreenSurface* QOffscreenSurface_new(QScreen* screen, QObject* parent);
QOffscreenSurface* QOffscreenSurface_new2();
QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen);
QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self);
void* QOffscreenSurface_Metacast(QOffscreenSurface* self, const char* param1);
struct miqt_string* QOffscreenSurface_Tr(const char* s);
struct miqt_string* QOffscreenSurface_TrUtf8(const char* s);
int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self);
void QOffscreenSurface_Create(QOffscreenSurface* self);
void QOffscreenSurface_Destroy(QOffscreenSurface* self);
bool QOffscreenSurface_IsValid(const QOffscreenSurface* self);
void QOffscreenSurface_SetFormat(QOffscreenSurface* self, QSurfaceFormat* format);
QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self);
QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self);
QSize* QOffscreenSurface_Size(const QOffscreenSurface* self);
QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self);
void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen);
void* QOffscreenSurface_NativeHandle(const QOffscreenSurface* self);
void QOffscreenSurface_SetNativeHandle(QOffscreenSurface* self, void* handle);
void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot);
struct miqt_string* QOffscreenSurface_Tr2(const char* s, const char* c);
struct miqt_string* QOffscreenSurface_Tr3(const char* s, const char* c, int n);
struct miqt_string* QOffscreenSurface_TrUtf82(const char* s, const char* c);
struct miqt_string* QOffscreenSurface_TrUtf83(const char* s, const char* c, int n);
void QOffscreenSurface_Delete(QOffscreenSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
