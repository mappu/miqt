#pragma once
#ifndef MIQT_QT_GEN_QVECTOR2D_H
#define MIQT_QT_GEN_QVECTOR2D_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPoint;
class QPointF;
class QVariant;
class QVector2D;
class QVector3D;
class QVector4D;
#else
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QVariant QVariant;
typedef struct QVector2D QVector2D;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
#endif

QVector2D* QVector2D_new();
QVector2D* QVector2D_new2(int param1);
QVector2D* QVector2D_new3(float xpos, float ypos);
QVector2D* QVector2D_new4(QPoint* point);
QVector2D* QVector2D_new5(QPointF* point);
QVector2D* QVector2D_new6(QVector3D* vector);
QVector2D* QVector2D_new7(QVector4D* vector);
QVector2D* QVector2D_new8(QVector2D* param1);
bool QVector2D_IsNull(const QVector2D* self);
float QVector2D_X(const QVector2D* self);
float QVector2D_Y(const QVector2D* self);
void QVector2D_SetX(QVector2D* self, float x);
void QVector2D_SetY(QVector2D* self, float y);
float QVector2D_OperatorSubscript(const QVector2D* self, int i);
float QVector2D_Length(const QVector2D* self);
float QVector2D_LengthSquared(const QVector2D* self);
QVector2D* QVector2D_Normalized(const QVector2D* self);
void QVector2D_Normalize(QVector2D* self);
float QVector2D_DistanceToPoint(const QVector2D* self, QVector2D* point);
float QVector2D_DistanceToLine(const QVector2D* self, QVector2D* point, QVector2D* direction);
QVector2D* QVector2D_OperatorPlusAssign(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_OperatorMinusAssign(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_OperatorMultiplyAssign(QVector2D* self, float factor);
QVector2D* QVector2D_OperatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_OperatorDivideAssign(QVector2D* self, float divisor);
QVector2D* QVector2D_OperatorDivideAssignWithVector(QVector2D* self, QVector2D* vector);
float QVector2D_DotProduct(QVector2D* v1, QVector2D* v2);
QVector3D* QVector2D_ToVector3D(const QVector2D* self);
QVector4D* QVector2D_ToVector4D(const QVector2D* self);
QPoint* QVector2D_ToPoint(const QVector2D* self);
QPointF* QVector2D_ToPointF(const QVector2D* self);
QVariant* QVector2D_ToQVariant(const QVector2D* self);
void QVector2D_Delete(QVector2D* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
