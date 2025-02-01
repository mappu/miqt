#pragma once
#ifndef MIQT_QT6_GEN_QVECTORND_H
#define MIQT_QT6_GEN_QVECTORND_H

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

QVector2D* QVector2D_new();
QVector2D* QVector2D_new2(int param1);
QVector2D* QVector2D_new3(float xpos, float ypos);
QVector2D* QVector2D_new4(QPoint* point);
QVector2D* QVector2D_new5(QPointF* point);
QVector2D* QVector2D_new6(QVector3D* vector);
QVector2D* QVector2D_new7(QVector4D* vector);
QVector2D* QVector2D_new8(QVector2D* param1);
bool QVector2D_isNull(const QVector2D* self);
float QVector2D_x(const QVector2D* self);
float QVector2D_y(const QVector2D* self);
void QVector2D_setX(QVector2D* self, float x);
void QVector2D_setY(QVector2D* self, float y);
float QVector2D_operatorSubscript(const QVector2D* self, int i);
float QVector2D_length(const QVector2D* self);
float QVector2D_lengthSquared(const QVector2D* self);
QVector2D* QVector2D_normalized(const QVector2D* self);
void QVector2D_normalize(QVector2D* self);
float QVector2D_distanceToPoint(const QVector2D* self, QVector2D* point);
float QVector2D_distanceToLine(const QVector2D* self, QVector2D* point, QVector2D* direction);
QVector2D* QVector2D_operatorPlusAssign(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_operatorMinusAssign(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_operatorMultiplyAssign(QVector2D* self, float factor);
QVector2D* QVector2D_operatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_operatorDivideAssign(QVector2D* self, float divisor);
QVector2D* QVector2D_operatorDivideAssignWithVector(QVector2D* self, QVector2D* vector);
float QVector2D_dotProduct(QVector2D* v1, QVector2D* v2);
QVector3D* QVector2D_toVector3D(const QVector2D* self);
QVector4D* QVector2D_toVector4D(const QVector2D* self);
QPoint* QVector2D_toPoint(const QVector2D* self);
QPointF* QVector2D_toPointF(const QVector2D* self);
QVariant* QVector2D_ToQVariant(const QVector2D* self);
void QVector2D_delete(QVector2D* self);

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
bool QVector4D_isNull(const QVector4D* self);
float QVector4D_x(const QVector4D* self);
float QVector4D_y(const QVector4D* self);
float QVector4D_z(const QVector4D* self);
float QVector4D_w(const QVector4D* self);
void QVector4D_setX(QVector4D* self, float x);
void QVector4D_setY(QVector4D* self, float y);
void QVector4D_setZ(QVector4D* self, float z);
void QVector4D_setW(QVector4D* self, float w);
float QVector4D_operatorSubscript(const QVector4D* self, int i);
float QVector4D_length(const QVector4D* self);
float QVector4D_lengthSquared(const QVector4D* self);
QVector4D* QVector4D_normalized(const QVector4D* self);
void QVector4D_normalize(QVector4D* self);
QVector4D* QVector4D_operatorPlusAssign(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_operatorMinusAssign(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_operatorMultiplyAssign(QVector4D* self, float factor);
QVector4D* QVector4D_operatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_operatorDivideAssign(QVector4D* self, float divisor);
QVector4D* QVector4D_operatorDivideAssignWithVector(QVector4D* self, QVector4D* vector);
float QVector4D_dotProduct(QVector4D* v1, QVector4D* v2);
QVector2D* QVector4D_toVector2D(const QVector4D* self);
QVector2D* QVector4D_toVector2DAffine(const QVector4D* self);
QVector3D* QVector4D_toVector3D(const QVector4D* self);
QVector3D* QVector4D_toVector3DAffine(const QVector4D* self);
QPoint* QVector4D_toPoint(const QVector4D* self);
QPointF* QVector4D_toPointF(const QVector4D* self);
QVariant* QVector4D_ToQVariant(const QVector4D* self);
void QVector4D_delete(QVector4D* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
