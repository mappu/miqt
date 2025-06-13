#pragma once
#ifndef MIQT_QT_GEN_QCOLORSPACE_H
#define MIQT_QT_GEN_QCOLORSPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColorSpace;
class QColorTransform;
class QPointF;
class QVariant;
#else
typedef struct QColorSpace QColorSpace;
typedef struct QColorTransform QColorTransform;
typedef struct QPointF QPointF;
typedef struct QVariant QVariant;
#endif

QColorSpace* QColorSpace_new();
QColorSpace* QColorSpace_new2(int namedColorSpace);
QColorSpace* QColorSpace_new3(int primaries, int transferFunction);
QColorSpace* QColorSpace_new4(int primaries, float gamma);
QColorSpace* QColorSpace_new5(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction);
QColorSpace* QColorSpace_new6(QColorSpace* colorSpace);
QColorSpace* QColorSpace_new7(int primaries, int transferFunction, float gamma);
QColorSpace* QColorSpace_new8(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction, float gamma);
void QColorSpace_operatorAssign(QColorSpace* self, QColorSpace* colorSpace);
void QColorSpace_swap(QColorSpace* self, QColorSpace* colorSpace);
int QColorSpace_primaries(const QColorSpace* self);
int QColorSpace_transferFunction(const QColorSpace* self);
float QColorSpace_gamma(const QColorSpace* self);
void QColorSpace_setTransferFunction(QColorSpace* self, int transferFunction);
QColorSpace* QColorSpace_withTransferFunction(const QColorSpace* self, int transferFunction);
void QColorSpace_setPrimaries(QColorSpace* self, int primariesId);
void QColorSpace_setPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint);
bool QColorSpace_isValid(const QColorSpace* self);
QColorSpace* QColorSpace_fromIccProfile(struct miqt_string iccProfile);
struct miqt_string QColorSpace_iccProfile(const QColorSpace* self);
QColorTransform* QColorSpace_transformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace);
QVariant* QColorSpace_ToQVariant(const QColorSpace* self);
void QColorSpace_setTransferFunction2(QColorSpace* self, int transferFunction, float gamma);
QColorSpace* QColorSpace_withTransferFunction2(const QColorSpace* self, int transferFunction, float gamma);

void QColorSpace_delete(QColorSpace* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
