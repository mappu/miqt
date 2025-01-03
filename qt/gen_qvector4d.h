#pragma once
#ifndef MIQT_QT_GEN_QVECTOR4D_H
#define MIQT_QT_GEN_QVECTOR4D_H

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

QVector4D* QVector4D_new();
QVector4D* QVector4D_new2(int param1);
QVector4D* QVector4D_new3(float xpos, float ypos, float zpos, float wpos);
QVector4D* QVector4D_new4(QPoint* point);
QVector4D* QVector4D_new5(QPointF* point);
QVector4D* QVector4D_new6(QVector2D* vector);
QVector4D* QVector4D_new7(QVector2D* vector, float zpos, float wpos);
QVector4D* QVector4D_new8(QVector3D* vector);
QVector4D* QVector4D_new9(QVector3D* vector, float wpos);
QVector4D* QVector4D_new10(QVector4D* param1);
bool QVector4D_IsNull(const QVector4D* self);
float QVector4D_X(const QVector4D* self);
float QVector4D_Y(const QVector4D* self);
float QVector4D_Z(const QVector4D* self);
float QVector4D_W(const QVector4D* self);
void QVector4D_SetX(QVector4D* self, float x);
void QVector4D_SetY(QVector4D* self, float y);
void QVector4D_SetZ(QVector4D* self, float z);
void QVector4D_SetW(QVector4D* self, float w);
float QVector4D_OperatorSubscript(const QVector4D* self, int i);
float QVector4D_Length(const QVector4D* self);
float QVector4D_LengthSquared(const QVector4D* self);
QVector4D* QVector4D_Normalized(const QVector4D* self);
void QVector4D_Normalize(QVector4D* self);
QVector4D* QVector4D_OperatorPlusAssign(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_OperatorMinusAssign(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_OperatorMultiplyAssign(QVector4D* self, float factor);
QVector4D* QVector4D_OperatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_OperatorDivideAssign(QVector4D* self, float divisor);
QVector4D* QVector4D_OperatorDivideAssignWithVector(QVector4D* self, QVector4D* vector);
float QVector4D_DotProduct(QVector4D* v1, QVector4D* v2);
QVector2D* QVector4D_ToVector2D(const QVector4D* self);
QVector2D* QVector4D_ToVector2DAffine(const QVector4D* self);
QVector3D* QVector4D_ToVector3D(const QVector4D* self);
QVector3D* QVector4D_ToVector3DAffine(const QVector4D* self);
QPoint* QVector4D_ToPoint(const QVector4D* self);
QPointF* QVector4D_ToPointF(const QVector4D* self);
QVariant* QVector4D_ToQVariant(const QVector4D* self);
void QVector4D_Delete(QVector4D* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
