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
class QVariant;
class QVector2D;
class QVector3D;
class QVector4D;
#else
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QVariant QVariant;
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
bool QVector3D_isNull(const QVector3D* self);
float QVector3D_x(const QVector3D* self);
float QVector3D_y(const QVector3D* self);
float QVector3D_z(const QVector3D* self);
void QVector3D_setX(QVector3D* self, float x);
void QVector3D_setY(QVector3D* self, float y);
void QVector3D_setZ(QVector3D* self, float z);
float QVector3D_operatorSubscript(const QVector3D* self, int i);
float QVector3D_length(const QVector3D* self);
float QVector3D_lengthSquared(const QVector3D* self);
QVector3D* QVector3D_normalized(const QVector3D* self);
void QVector3D_normalize(QVector3D* self);
QVector3D* QVector3D_operatorPlusAssign(QVector3D* self, QVector3D* vector);
QVector3D* QVector3D_operatorMinusAssign(QVector3D* self, QVector3D* vector);
QVector3D* QVector3D_operatorMultiplyAssign(QVector3D* self, float factor);
QVector3D* QVector3D_operatorMultiplyAssignWithVector(QVector3D* self, QVector3D* vector);
QVector3D* QVector3D_operatorDivideAssign(QVector3D* self, float divisor);
QVector3D* QVector3D_operatorDivideAssignWithVector(QVector3D* self, QVector3D* vector);
float QVector3D_dotProduct(QVector3D* v1, QVector3D* v2);
QVector3D* QVector3D_crossProduct(QVector3D* v1, QVector3D* v2);
QVector3D* QVector3D_normal(QVector3D* v1, QVector3D* v2);
QVector3D* QVector3D_normal2(QVector3D* v1, QVector3D* v2, QVector3D* v3);
QVector3D* QVector3D_project(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport);
QVector3D* QVector3D_unproject(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport);
float QVector3D_distanceToPoint(const QVector3D* self, QVector3D* point);
float QVector3D_distanceToPlane(const QVector3D* self, QVector3D* plane, QVector3D* normal);
float QVector3D_distanceToPlane2(const QVector3D* self, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3);
float QVector3D_distanceToLine(const QVector3D* self, QVector3D* point, QVector3D* direction);
QVector2D* QVector3D_toVector2D(const QVector3D* self);
QVector4D* QVector3D_toVector4D(const QVector3D* self);
QPoint* QVector3D_toPoint(const QVector3D* self);
QPointF* QVector3D_toPointF(const QVector3D* self);
QVariant* QVector3D_ToQVariant(const QVector3D* self);
void QVector3D_delete(QVector3D* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
