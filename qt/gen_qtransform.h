#ifndef GEN_QTRANSFORM_H
#define GEN_QTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
#endif

QTransform* QTransform_new();
QTransform* QTransform_new2(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32);
QTransform* QTransform_new3(double h11, double h12, double h21, double h22, double dx, double dy);
QTransform* QTransform_new4(QMatrix* mtx);
QTransform* QTransform_new5(QTransform* other);
QTransform* QTransform_new6(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33);
void QTransform_OperatorAssign(QTransform* self, QTransform* param1);
bool QTransform_IsAffine(QTransform* self);
bool QTransform_IsIdentity(QTransform* self);
bool QTransform_IsInvertible(QTransform* self);
bool QTransform_IsScaling(QTransform* self);
bool QTransform_IsRotating(QTransform* self);
bool QTransform_IsTranslating(QTransform* self);
double QTransform_Determinant(QTransform* self);
double QTransform_Det(QTransform* self);
double QTransform_M11(QTransform* self);
double QTransform_M12(QTransform* self);
double QTransform_M13(QTransform* self);
double QTransform_M21(QTransform* self);
double QTransform_M22(QTransform* self);
double QTransform_M23(QTransform* self);
double QTransform_M31(QTransform* self);
double QTransform_M32(QTransform* self);
double QTransform_M33(QTransform* self);
double QTransform_Dx(QTransform* self);
double QTransform_Dy(QTransform* self);
void QTransform_SetMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33);
QTransform* QTransform_Inverted(QTransform* self);
QTransform* QTransform_Adjoint(QTransform* self);
QTransform* QTransform_Transposed(QTransform* self);
QTransform* QTransform_Translate(QTransform* self, double dx, double dy);
QTransform* QTransform_Scale(QTransform* self, double sx, double sy);
QTransform* QTransform_Shear(QTransform* self, double sh, double sv);
bool QTransform_OperatorEqual(QTransform* self, QTransform* param1);
bool QTransform_OperatorNotEqual(QTransform* self, QTransform* param1);
QTransform* QTransform_OperatorMultiplyAssign(QTransform* self, QTransform* param1);
QTransform* QTransform_OperatorMultiply(QTransform* self, QTransform* o);
void QTransform_Reset(QTransform* self);
QPoint* QTransform_Map(QTransform* self, QPoint* p);
QPointF* QTransform_MapWithQPointF(QTransform* self, QPointF* p);
QLine* QTransform_MapWithQLine(QTransform* self, QLine* l);
QLineF* QTransform_MapWithQLineF(QTransform* self, QLineF* l);
QRegion* QTransform_MapWithQRegion(QTransform* self, QRegion* r);
QPainterPath* QTransform_MapWithQPainterPath(QTransform* self, QPainterPath* p);
QRect* QTransform_MapRect(QTransform* self, QRect* param1);
QRectF* QTransform_MapRectWithQRectF(QTransform* self, QRectF* param1);
void QTransform_Map2(QTransform* self, int x, int y, int* tx, int* ty);
void QTransform_Map3(QTransform* self, double x, double y, double* tx, double* ty);
QMatrix* QTransform_ToAffine(QTransform* self);
QTransform* QTransform_OperatorMultiplyAssignWithDiv(QTransform* self, double div);
QTransform* QTransform_OperatorDivideAssign(QTransform* self, double div);
QTransform* QTransform_OperatorPlusAssign(QTransform* self, double div);
QTransform* QTransform_OperatorMinusAssign(QTransform* self, double div);
QTransform* QTransform_FromTranslate(double dx, double dy);
QTransform* QTransform_FromScale(double dx, double dy);
QTransform* QTransform_Inverted1(QTransform* self, bool* invertible);
void QTransform_Delete(QTransform* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
