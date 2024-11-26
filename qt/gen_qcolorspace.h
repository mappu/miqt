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
#else
typedef struct QColorSpace QColorSpace;
typedef struct QColorTransform QColorTransform;
typedef struct QPointF QPointF;
#endif

void QColorSpace_new(QColorSpace** outptr_QColorSpace);
void QColorSpace_new2(int namedColorSpace, QColorSpace** outptr_QColorSpace);
void QColorSpace_new3(int primaries, int transferFunction, QColorSpace** outptr_QColorSpace);
void QColorSpace_new4(int primaries, float gamma, QColorSpace** outptr_QColorSpace);
void QColorSpace_new5(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction, QColorSpace** outptr_QColorSpace);
void QColorSpace_new6(QColorSpace* colorSpace, QColorSpace** outptr_QColorSpace);
void QColorSpace_new7(int primaries, int transferFunction, float gamma, QColorSpace** outptr_QColorSpace);
void QColorSpace_new8(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction, float gamma, QColorSpace** outptr_QColorSpace);
void QColorSpace_OperatorAssign(QColorSpace* self, QColorSpace* colorSpace);
void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace);
int QColorSpace_Primaries(const QColorSpace* self);
int QColorSpace_TransferFunction(const QColorSpace* self);
float QColorSpace_Gamma(const QColorSpace* self);
void QColorSpace_SetTransferFunction(QColorSpace* self, int transferFunction);
QColorSpace* QColorSpace_WithTransferFunction(const QColorSpace* self, int transferFunction);
void QColorSpace_SetPrimaries(QColorSpace* self, int primariesId);
void QColorSpace_SetPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint);
bool QColorSpace_IsValid(const QColorSpace* self);
QColorSpace* QColorSpace_FromIccProfile(struct miqt_string iccProfile);
struct miqt_string QColorSpace_IccProfile(const QColorSpace* self);
QColorTransform* QColorSpace_TransformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace);
void QColorSpace_SetTransferFunction2(QColorSpace* self, int transferFunction, float gamma);
QColorSpace* QColorSpace_WithTransferFunction2(const QColorSpace* self, int transferFunction, float gamma);
void QColorSpace_Delete(QColorSpace* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
