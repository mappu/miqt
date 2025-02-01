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
