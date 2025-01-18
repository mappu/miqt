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
void QTransform_OperatorAssign(QTransform* self, QTransform* param1);
bool QTransform_IsAffine(const QTransform* self);
bool QTransform_IsIdentity(const QTransform* self);
bool QTransform_IsInvertible(const QTransform* self);
bool QTransform_IsScaling(const QTransform* self);
bool QTransform_IsRotating(const QTransform* self);
bool QTransform_IsTranslating(const QTransform* self);
int QTransform_Type(const QTransform* self);
double QTransform_Determinant(const QTransform* self);
double QTransform_Det(const QTransform* self);
double QTransform_M11(const QTransform* self);
double QTransform_M12(const QTransform* self);
double QTransform_M13(const QTransform* self);
double QTransform_M21(const QTransform* self);
double QTransform_M22(const QTransform* self);
double QTransform_M23(const QTransform* self);
double QTransform_M31(const QTransform* self);
double QTransform_M32(const QTransform* self);
double QTransform_M33(const QTransform* self);
double QTransform_Dx(const QTransform* self);
double QTransform_Dy(const QTransform* self);
void QTransform_SetMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33);
QTransform* QTransform_Inverted(const QTransform* self);
QTransform* QTransform_Adjoint(const QTransform* self);
QTransform* QTransform_Transposed(const QTransform* self);
QTransform* QTransform_Translate(QTransform* self, double dx, double dy);
QTransform* QTransform_Scale(QTransform* self, double sx, double sy);
QTransform* QTransform_Shear(QTransform* self, double sh, double sv);
QTransform* QTransform_Rotate(QTransform* self, double a);
QTransform* QTransform_RotateRadians(QTransform* self, double a);
bool QTransform_OperatorEqual(const QTransform* self, QTransform* param1);
bool QTransform_OperatorNotEqual(const QTransform* self, QTransform* param1);
QTransform* QTransform_OperatorMultiplyAssign(QTransform* self, QTransform* param1);
QTransform* QTransform_OperatorMultiply(const QTransform* self, QTransform* o);
QVariant* QTransform_ToQVariant(const QTransform* self);
void QTransform_Reset(QTransform* self);
QPoint* QTransform_Map(const QTransform* self, QPoint* p);
QPointF* QTransform_MapWithQPointF(const QTransform* self, QPointF* p);
QLine* QTransform_MapWithQLine(const QTransform* self, QLine* l);
QLineF* QTransform_MapWithQLineF(const QTransform* self, QLineF* l);
QRegion* QTransform_MapWithQRegion(const QTransform* self, QRegion* r);
QPainterPath* QTransform_MapWithQPainterPath(const QTransform* self, QPainterPath* p);
QRect* QTransform_MapRect(const QTransform* self, QRect* param1);
QRectF* QTransform_MapRectWithQRectF(const QTransform* self, QRectF* param1);
void QTransform_Map2(const QTransform* self, int x, int y, int* tx, int* ty);
void QTransform_Map3(const QTransform* self, double x, double y, double* tx, double* ty);
QMatrix* QTransform_ToAffine(const QTransform* self);
QTransform* QTransform_OperatorMultiplyAssignWithDiv(QTransform* self, double div);
QTransform* QTransform_OperatorDivideAssign(QTransform* self, double div);
QTransform* QTransform_OperatorPlusAssign(QTransform* self, double div);
QTransform* QTransform_OperatorMinusAssign(QTransform* self, double div);
QTransform* QTransform_FromTranslate(double dx, double dy);
QTransform* QTransform_FromScale(double dx, double dy);
QTransform* QTransform_Inverted1(const QTransform* self, bool* invertible);
QTransform* QTransform_Rotate2(QTransform* self, double a, int axis);
QTransform* QTransform_RotateRadians2(QTransform* self, double a, int axis);
void QTransform_Delete(QTransform* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
