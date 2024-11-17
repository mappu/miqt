#pragma once
#ifndef MIQT_QT_GEN_QVECTOR3D_H
#define MIQT_QT_GEN_QVECTOR3D_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMatrix4x4;
class QPoint;
class QPointF;
class QRect;
class QVector2D;
class QVector3D;
class QVector4D;
#else
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QVector2D QVector2D;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
#endif

QVector3D* QVector3D_new();
QVector3D* QVector3D_new2(int param1);
QVector3D* QVector3D_new3(float xpos, float ypos, float zpos);
QVector3D* QVector3D_new4(QPoint* point);
QVector3D* QVector3D_new5(QPointF* point);
QVector3D* QVector3D_new6(QVector2D* vector);
QVector3D* QVector3D_new7(QVector2D* vector, float zpos);
QVector3D* QVector3D_new8(QVector4D* vector);
QVector3D* QVector3D_new9(QVector3D* param1);
bool QVector3D_IsNull(const QVector3D* self);
float QVector3D_X(const QVector3D* self);
float QVector3D_Y(const QVector3D* self);
float QVector3D_Z(const QVector3D* self);
void QVector3D_SetX(QVector3D* self, float x);
void QVector3D_SetY(QVector3D* self, float y);
void QVector3D_SetZ(QVector3D* self, float z);
float QVector3D_OperatorSubscript(const QVector3D* self, int i);
float QVector3D_Length(const QVector3D* self);
float QVector3D_LengthSquared(const QVector3D* self);
QVector3D* QVector3D_Normalized(const QVector3D* self);
void QVector3D_Normalize(QVector3D* self);
QVector3D* QVector3D_OperatorPlusAssign(QVector3D* self, QVector3D* vector);
QVector3D* QVector3D_OperatorMinusAssign(QVector3D* self, QVector3D* vector);
QVector3D* QVector3D_OperatorMultiplyAssign(QVector3D* self, float factor);
QVector3D* QVector3D_OperatorMultiplyAssignWithVector(QVector3D* self, QVector3D* vector);
QVector3D* QVector3D_OperatorDivideAssign(QVector3D* self, float divisor);
QVector3D* QVector3D_OperatorDivideAssignWithVector(QVector3D* self, QVector3D* vector);
float QVector3D_DotProduct(QVector3D* v1, QVector3D* v2);
QVector3D* QVector3D_CrossProduct(QVector3D* v1, QVector3D* v2);
QVector3D* QVector3D_Normal(QVector3D* v1, QVector3D* v2);
QVector3D* QVector3D_Normal2(QVector3D* v1, QVector3D* v2, QVector3D* v3);
QVector3D* QVector3D_Project(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport);
QVector3D* QVector3D_Unproject(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport);
float QVector3D_DistanceToPoint(const QVector3D* self, QVector3D* point);
float QVector3D_DistanceToPlane(const QVector3D* self, QVector3D* plane, QVector3D* normal);
float QVector3D_DistanceToPlane2(const QVector3D* self, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3);
float QVector3D_DistanceToLine(const QVector3D* self, QVector3D* point, QVector3D* direction);
QVector2D* QVector3D_ToVector2D(const QVector3D* self);
QVector4D* QVector3D_ToVector4D(const QVector3D* self);
QPoint* QVector3D_ToPoint(const QVector3D* self);
QPointF* QVector3D_ToPointF(const QVector3D* self);
void QVector3D_Delete(QVector3D* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
