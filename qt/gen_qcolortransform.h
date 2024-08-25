#ifndef GEN_QCOLORTRANSFORM_H
#define GEN_QCOLORTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QColorTransform;
class QRgba64;
#else
typedef struct QColor QColor;
typedef struct QColorTransform QColorTransform;
typedef struct QRgba64 QRgba64;
#endif

QColorTransform* QColorTransform_new();
QColorTransform* QColorTransform_new2(QColorTransform* colorTransform);
void QColorTransform_OperatorAssign(QColorTransform* self, QColorTransform* other);
void QColorTransform_Swap(QColorTransform* self, QColorTransform* other);
unsigned int QColorTransform_Map(QColorTransform* self, unsigned int argb);
QRgba64* QColorTransform_MapWithRgba64(QColorTransform* self, QRgba64* rgba64);
QColor* QColorTransform_MapWithColor(QColorTransform* self, QColor* color);
void QColorTransform_Delete(QColorTransform* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
