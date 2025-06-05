#pragma once
#ifndef MIQT_QT_GEN_QCOLORMAP_H
#define MIQT_QT_GEN_QCOLORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QColormap;
#else
typedef struct QColor QColor;
typedef struct QColormap QColormap;
#endif

QColormap* QColormap_new(QColormap* colormap);
void QColormap_initialize();
void QColormap_cleanup();
QColormap* QColormap_instance();
void QColormap_operatorAssign(QColormap* self, QColormap* colormap);
int QColormap_mode(const QColormap* self);
int QColormap_depth(const QColormap* self);
int QColormap_size(const QColormap* self);
unsigned int QColormap_pixel(const QColormap* self, QColor* color);
QColor* QColormap_colorAt(const QColormap* self, unsigned int pixel);
struct miqt_array /* of QColor* */  QColormap_colormap(const QColormap* self);
QColormap* QColormap_instanceWithScreen(int screen);

void QColormap_delete(QColormap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
