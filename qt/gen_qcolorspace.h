#ifndef GEN_QCOLORSPACE_H
#define GEN_QCOLORSPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QColorSpace;
class QColorTransform;
class QPointF;
#else
typedef struct QByteArray QByteArray;
typedef struct QColorSpace QColorSpace;
typedef struct QColorTransform QColorTransform;
typedef struct QPointF QPointF;
#endif

QColorSpace* QColorSpace_new();
QColorSpace* QColorSpace_new2(QColorSpace* colorSpace);
void QColorSpace_OperatorAssign(QColorSpace* self, QColorSpace* colorSpace);
void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace);
float QColorSpace_Gamma(QColorSpace* self);
void QColorSpace_SetPrimaries(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint);
bool QColorSpace_IsValid(QColorSpace* self);
QColorSpace* QColorSpace_FromIccProfile(QByteArray* iccProfile);
QByteArray* QColorSpace_IccProfile(QColorSpace* self);
QColorTransform* QColorSpace_TransformationToColorSpace(QColorSpace* self, QColorSpace* colorspace);
void QColorSpace_Delete(QColorSpace* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
