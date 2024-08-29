#ifndef GEN_QCOLORMAP_H
#define GEN_QCOLORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
uintptr_t QColormap_Mode(QColormap* self);
int QColormap_Depth(QColormap* self);
int QColormap_Size(QColormap* self);
unsigned int QColormap_Pixel(QColormap* self, QColor* color);
QColor* QColormap_ColorAt(QColormap* self, unsigned int pixel);
void QColormap_Colormap(QColormap* self, QColor*** _out, size_t* _out_len);
QColormap* QColormap_Instance1(int screen);
void QColormap_Delete(QColormap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
