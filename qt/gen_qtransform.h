#pragma once
#ifndef MIQT_QT_GEN_QTRANSFORM_H
#define MIQT_QT_GEN_QTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLine;
class QLineF;
class QMatrix;
class QPainterPath;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegion;
class QTransform;
class QVariant;
#else
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QMatrix QMatrix;
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
#endif

QTransform* QTransform_new(int param1);
QTransform* QTransform_new2();
QTransform* QTransform_new3(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32);
QTransform* QTransform_new4(double h11, double h12, double h21, double h22, double dx, double dy);
QTransform* QTransform_new5(QMatrix* mtx);
QTransform* QTransform_new6(QTransform* other);
QTransform* QTransform_new7(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33);
void QTransform_operatorAssign(QTransform* self, QTransform* param1);
bool QTransform_isAffine(const QTransform* self);
bool QTransform_isIdentity(const QTransform* self);
bool QTransform_isInvertible(const QTransform* self);
bool QTransform_isScaling(const QTransform* self);
bool QTransform_isRotating(const QTransform* self);
bool QTransform_isTranslating(const QTransform* self);
int QTransform_type(const QTransform* self);
double QTransform_determinant(const QTransform* self);
double QTransform_det(const QTransform* self);
double QTransform_m11(const QTransform* self);
double QTransform_m12(const QTransform* self);
double QTransform_m13(const QTransform* self);
double QTransform_m21(const QTransform* self);
double QTransform_m22(const QTransform* self);
double QTransform_m23(const QTransform* self);
double QTransform_m31(const QTransform* self);
double QTransform_m32(const QTransform* self);
double QTransform_m33(const QTransform* self);
double QTransform_dx(const QTransform* self);
double QTransform_dy(const QTransform* self);
void QTransform_setMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33);
QTransform* QTransform_inverted(const QTransform* self);
QTransform* QTransform_adjoint(const QTransform* self);
QTransform* QTransform_transposed(const QTransform* self);
QTransform* QTransform_translate(QTransform* self, double dx, double dy);
QTransform* QTransform_scale(QTransform* self, double sx, double sy);
QTransform* QTransform_shear(QTransform* self, double sh, double sv);
QTransform* QTransform_rotate(QTransform* self, double a);
QTransform* QTransform_rotateRadians(QTransform* self, double a);
bool QTransform_operatorEqual(const QTransform* self, QTransform* param1);
bool QTransform_operatorNotEqual(const QTransform* self, QTransform* param1);
QTransform* QTransform_operatorMultiplyAssign(QTransform* self, QTransform* param1);
QTransform* QTransform_operatorMultiply(const QTransform* self, QTransform* o);
QVariant* QTransform_ToQVariant(const QTransform* self);
void QTransform_reset(QTransform* self);
QPoint* QTransform_map(const QTransform* self, QPoint* p);
QPointF* QTransform_mapWithQPointF(const QTransform* self, QPointF* p);
QLine* QTransform_mapWithQLine(const QTransform* self, QLine* l);
QLineF* QTransform_mapWithQLineF(const QTransform* self, QLineF* l);
QRegion* QTransform_mapWithQRegion(const QTransform* self, QRegion* r);
QPainterPath* QTransform_mapWithQPainterPath(const QTransform* self, QPainterPath* p);
QRect* QTransform_mapRect(const QTransform* self, QRect* param1);
QRectF* QTransform_mapRectWithQRectF(const QTransform* self, QRectF* param1);
void QTransform_map2(const QTransform* self, int x, int y, int* tx, int* ty);
void QTransform_map3(const QTransform* self, double x, double y, double* tx, double* ty);
QMatrix* QTransform_toAffine(const QTransform* self);
QTransform* QTransform_operatorMultiplyAssignWithDiv(QTransform* self, double div);
QTransform* QTransform_operatorDivideAssign(QTransform* self, double div);
QTransform* QTransform_operatorPlusAssign(QTransform* self, double div);
QTransform* QTransform_operatorMinusAssign(QTransform* self, double div);
QTransform* QTransform_fromTranslate(double dx, double dy);
QTransform* QTransform_fromScale(double dx, double dy);
QTransform* QTransform_invertedWithInvertible(const QTransform* self, bool* invertible);
QTransform* QTransform_rotate2(QTransform* self, double a, int axis);
QTransform* QTransform_rotateRadians2(QTransform* self, double a, int axis);
void QTransform_delete(QTransform* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
