#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_MAP_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_MAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtScaleMap;
class QwtTransform;
#else
typedef struct QwtScaleMap QwtScaleMap;
typedef struct QwtTransform QwtTransform;
#endif

QwtScaleMap* QwtScaleMap_new();
void QwtScaleMap_setTransformation(QwtScaleMap* self, QwtTransform* transformation);
QwtTransform* QwtScaleMap_transformation(const QwtScaleMap* self);
void QwtScaleMap_setPaintInterval(QwtScaleMap* self, double p1, double p2);
void QwtScaleMap_setScaleInterval(QwtScaleMap* self, double s1, double s2);
double QwtScaleMap_transform(const QwtScaleMap* self, double s);
double QwtScaleMap_invTransform(const QwtScaleMap* self, double p);
double QwtScaleMap_p1(const QwtScaleMap* self);
double QwtScaleMap_p2(const QwtScaleMap* self);
double QwtScaleMap_s1(const QwtScaleMap* self);
double QwtScaleMap_s2(const QwtScaleMap* self);
double QwtScaleMap_pDist(const QwtScaleMap* self);
double QwtScaleMap_sDist(const QwtScaleMap* self);
bool QwtScaleMap_isInverting(const QwtScaleMap* self);

void QwtScaleMap_delete(QwtScaleMap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
