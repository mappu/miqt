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
void QMatrix_operatorAssign(QMatrix* self, QMatrix* param1);
void QMatrix_setMatrix(QMatrix* self, double m11, double m12, double m21, double m22, double dx, double dy);
double QMatrix_m11(const QMatrix* self);
double QMatrix_m12(const QMatrix* self);
double QMatrix_m21(const QMatrix* self);
double QMatrix_m22(const QMatrix* self);
double QMatrix_dx(const QMatrix* self);
double QMatrix_dy(const QMatrix* self);
void QMatrix_map(const QMatrix* self, int x, int y, int* tx, int* ty);
void QMatrix_map2(const QMatrix* self, double x, double y, double* tx, double* ty);
QRect* QMatrix_mapRect(const QMatrix* self, QRect* param1);
QRectF* QMatrix_mapRectWithQRectF(const QMatrix* self, QRectF* param1);
QPoint* QMatrix_mapWithQPoint(const QMatrix* self, QPoint* p);
QPointF* QMatrix_mapWithQPointF(const QMatrix* self, QPointF* p);
QLine* QMatrix_mapWithQLine(const QMatrix* self, QLine* l);
QLineF* QMatrix_mapWithQLineF(const QMatrix* self, QLineF* l);
QRegion* QMatrix_mapWithQRegion(const QMatrix* self, QRegion* r);
QPainterPath* QMatrix_mapWithQPainterPath(const QMatrix* self, QPainterPath* p);
void QMatrix_reset(QMatrix* self);
bool QMatrix_isIdentity(const QMatrix* self);
QMatrix* QMatrix_translate(QMatrix* self, double dx, double dy);
QMatrix* QMatrix_scale(QMatrix* self, double sx, double sy);
QMatrix* QMatrix_shear(QMatrix* self, double sh, double sv);
QMatrix* QMatrix_rotate(QMatrix* self, double a);
bool QMatrix_isInvertible(const QMatrix* self);
double QMatrix_determinant(const QMatrix* self);
QMatrix* QMatrix_inverted(const QMatrix* self);
bool QMatrix_operatorEqual(const QMatrix* self, QMatrix* param1);
bool QMatrix_operatorNotEqual(const QMatrix* self, QMatrix* param1);
QMatrix* QMatrix_operatorMultiplyAssign(QMatrix* self, QMatrix* param1);
QMatrix* QMatrix_operatorMultiply(const QMatrix* self, QMatrix* o);
QVariant* QMatrix_ToQVariant(const QMatrix* self);
QMatrix* QMatrix_inverted1(const QMatrix* self, bool* invertible);
void QMatrix_delete(QMatrix* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
