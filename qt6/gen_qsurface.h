#pragma once
#ifndef MIQT_QT6_GEN_QSURFACE_H
#define MIQT_QT6_GEN_QSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

int QSurface_surfaceClass(const QSurface* self);
QSurfaceFormat* QSurface_format(const QSurface* self);
int QSurface_surfaceType(const QSurface* self);
bool QSurface_supportsOpenGL(const QSurface* self);
QSize* QSurface_size(const QSurface* self);
void QSurface_delete(QSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
