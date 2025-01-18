#pragma once
#ifndef MIQT_QT_GEN_QMATRIX_H
#define MIQT_QT_GEN_QMATRIX_H

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
typedef struct QVariant QVariant;
#endif

QMatrix* QMatrix_new(int param1);
QMatrix* QMatrix_new2();
QMatrix* QMatrix_new3(double m11, double m12, double m21, double m22, double dx, double dy);
QMatrix* QMatrix_new4(QMatrix* other);
void QMatrix_OperatorAssign(QMatrix* self, QMatrix* param1);
void QMatrix_SetMatrix(QMatrix* self, double m11, double m12, double m21, double m22, double dx, double dy);
double QMatrix_M11(const QMatrix* self);
double QMatrix_M12(const QMatrix* self);
double QMatrix_M21(const QMatrix* self);
double QMatrix_M22(const QMatrix* self);
double QMatrix_Dx(const QMatrix* self);
double QMatrix_Dy(const QMatrix* self);
void QMatrix_Map(const QMatrix* self, int x, int y, int* tx, int* ty);
void QMatrix_Map2(const QMatrix* self, double x, double y, double* tx, double* ty);
QRect* QMatrix_MapRect(const QMatrix* self, QRect* param1);
QRectF* QMatrix_MapRectWithQRectF(const QMatrix* self, QRectF* param1);
QPoint* QMatrix_MapWithQPoint(const QMatrix* self, QPoint* p);
QPointF* QMatrix_MapWithQPointF(const QMatrix* self, QPointF* p);
QLine* QMatrix_MapWithQLine(const QMatrix* self, QLine* l);
QLineF* QMatrix_MapWithQLineF(const QMatrix* self, QLineF* l);
QRegion* QMatrix_MapWithQRegion(const QMatrix* self, QRegion* r);
QPainterPath* QMatrix_MapWithQPainterPath(const QMatrix* self, QPainterPath* p);
void QMatrix_Reset(QMatrix* self);
bool QMatrix_IsIdentity(const QMatrix* self);
QMatrix* QMatrix_Translate(QMatrix* self, double dx, double dy);
QMatrix* QMatrix_Scale(QMatrix* self, double sx, double sy);
QMatrix* QMatrix_Shear(QMatrix* self, double sh, double sv);
QMatrix* QMatrix_Rotate(QMatrix* self, double a);
bool QMatrix_IsInvertible(const QMatrix* self);
double QMatrix_Determinant(const QMatrix* self);
QMatrix* QMatrix_Inverted(const QMatrix* self);
bool QMatrix_OperatorEqual(const QMatrix* self, QMatrix* param1);
bool QMatrix_OperatorNotEqual(const QMatrix* self, QMatrix* param1);
QMatrix* QMatrix_OperatorMultiplyAssign(QMatrix* self, QMatrix* param1);
QMatrix* QMatrix_OperatorMultiply(const QMatrix* self, QMatrix* o);
QVariant* QMatrix_ToQVariant(const QMatrix* self);
QMatrix* QMatrix_Inverted1(const QMatrix* self, bool* invertible);
void QMatrix_Delete(QMatrix* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
