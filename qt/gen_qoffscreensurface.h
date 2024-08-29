#ifndef GEN_QOFFSCREENSURFACE_H
#define GEN_QOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QOffscreenSurface_MetaObject(QOffscreenSurface* self);
void QOffscreenSurface_Tr(const char* s, char** _out, int* _out_Strlen);
void QOffscreenSurface_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QOffscreenSurface_SurfaceType(QOffscreenSurface* self);
void QOffscreenSurface_Create(QOffscreenSurface* self);
void QOffscreenSurface_Destroy(QOffscreenSurface* self);
bool QOffscreenSurface_IsValid(QOffscreenSurface* self);
void QOffscreenSurface_SetFormat(QOffscreenSurface* self, QSurfaceFormat* format);
QSurfaceFormat* QOffscreenSurface_Format(QOffscreenSurface* self);
QSurfaceFormat* QOffscreenSurface_RequestedFormat(QOffscreenSurface* self);
QSize* QOffscreenSurface_Size(QOffscreenSurface* self);
QScreen* QOffscreenSurface_Screen(QOffscreenSurface* self);
void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen);
void QOffscreenSurface_connect_ScreenChanged(QOffscreenSurface* self, void* slot);
void QOffscreenSurface_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QOffscreenSurface_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QOffscreenSurface_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QOffscreenSurface_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QOffscreenSurface_Delete(QOffscreenSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
