#pragma once
#ifndef MIQT_QT_GEN_QCOLORTRANSFORM_H
#define MIQT_QT_GEN_QCOLORTRANSFORM_H

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
class QColorTransform;
class QRgba64;
#else
typedef struct QColor QColor;
typedef struct QColorTransform QColorTransform;
typedef struct QRgba64 QRgba64;
#endif

QColorTransform* QColorTransform_new();
QColorTransform* QColorTransform_new2(QColorTransform* colorTransform);
void QColorTransform_operatorAssign(QColorTransform* self, QColorTransform* other);
void QColorTransform_swap(QColorTransform* self, QColorTransform* other);
unsigned int QColorTransform_map(const QColorTransform* self, unsigned int argb);
QRgba64* QColorTransform_mapWithRgba64(const QColorTransform* self, QRgba64* rgba64);
QColor* QColorTransform_mapWithColor(const QColorTransform* self, QColor* color);

void QColorTransform_delete(QColorTransform* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
