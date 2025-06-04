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

#ifdef __cplusplus
} /* extern C */
#endif

#endif
