#ifndef GEN_QCOLORMAP_H
#define GEN_QCOLORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
void QColormap_Initialize();
void QColormap_Cleanup();
QColormap* QColormap_Instance();
void QColormap_OperatorAssign(QColormap* self, QColormap* colormap);
int QColormap_Mode(const QColormap* self);
int QColormap_Depth(const QColormap* self);
int QColormap_Size(const QColormap* self);
unsigned int QColormap_Pixel(const QColormap* self, QColor* color);
QColor* QColormap_ColorAt(const QColormap* self, unsigned int pixel);
struct miqt_array* QColormap_Colormap(const QColormap* self);
QColormap* QColormap_Instance1(int screen);
void QColormap_Delete(QColormap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
