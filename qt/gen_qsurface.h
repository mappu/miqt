#ifndef GEN_QSURFACE_H
#define GEN_QSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSize;
class QSurface;
class QSurfaceFormat;
#else
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

uintptr_t QSurface_SurfaceClass(const QSurface* self);
QSurfaceFormat* QSurface_Format(const QSurface* self);
uintptr_t QSurface_SurfaceType(const QSurface* self);
bool QSurface_SupportsOpenGL(const QSurface* self);
QSize* QSurface_Size(const QSurface* self);
void QSurface_Delete(QSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
