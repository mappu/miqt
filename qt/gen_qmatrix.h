#ifndef GEN_QMATRIX_H
#define GEN_QMATRIX_H

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
#endif

QMatrix* QMatrix_new();
QMatrix* QMatrix_new2(double m11, double m12, double m21, double m22, double dx, double dy);
QMatrix* QMatrix_new3(QMatrix* other);
void QMatrix_OperatorAssign(QMatrix* self, QMatrix* param1);
void QMatrix_SetMatrix(QMatrix* self, double m11, double m12, double m21, double m22, double dx, double dy);
double QMatrix_M11(QMatrix* self);
double QMatrix_M12(QMatrix* self);
double QMatrix_M21(QMatrix* self);
double QMatrix_M22(QMatrix* self);
double QMatrix_Dx(QMatrix* self);
double QMatrix_Dy(QMatrix* self);
void QMatrix_Map(QMatrix* self, int x, int y, int* tx, int* ty);
void QMatrix_Map2(QMatrix* self, double x, double y, double* tx, double* ty);
QRect* QMatrix_MapRect(QMatrix* self, QRect* param1);
QRectF* QMatrix_MapRectWithQRectF(QMatrix* self, QRectF* param1);
QPoint* QMatrix_MapWithQPoint(QMatrix* self, QPoint* p);
QPointF* QMatrix_MapWithQPointF(QMatrix* self, QPointF* p);
QLine* QMatrix_MapWithQLine(QMatrix* self, QLine* l);
QLineF* QMatrix_MapWithQLineF(QMatrix* self, QLineF* l);
QRegion* QMatrix_MapWithQRegion(QMatrix* self, QRegion* r);
QPainterPath* QMatrix_MapWithQPainterPath(QMatrix* self, QPainterPath* p);
void QMatrix_Reset(QMatrix* self);
bool QMatrix_IsIdentity(QMatrix* self);
QMatrix* QMatrix_Translate(QMatrix* self, double dx, double dy);
QMatrix* QMatrix_Scale(QMatrix* self, double sx, double sy);
QMatrix* QMatrix_Shear(QMatrix* self, double sh, double sv);
QMatrix* QMatrix_Rotate(QMatrix* self, double a);
bool QMatrix_IsInvertible(QMatrix* self);
double QMatrix_Determinant(QMatrix* self);
QMatrix* QMatrix_Inverted(QMatrix* self);
bool QMatrix_OperatorEqual(QMatrix* self, QMatrix* param1);
bool QMatrix_OperatorNotEqual(QMatrix* self, QMatrix* param1);
QMatrix* QMatrix_OperatorMultiplyAssign(QMatrix* self, QMatrix* param1);
QMatrix* QMatrix_OperatorMultiply(QMatrix* self, QMatrix* o);
QMatrix* QMatrix_Inverted1(QMatrix* self, bool* invertible);
void QMatrix_Delete(QMatrix* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
