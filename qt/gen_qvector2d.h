#ifndef GEN_QVECTOR2D_H
#define GEN_QVECTOR2D_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPoint;
class QPointF;
class QVector2D;
class QVector3D;
class QVector4D;
#else
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QVector2D QVector2D;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
#endif

QVector2D* QVector2D_new();
QVector2D* QVector2D_new2(float xpos, float ypos);
QVector2D* QVector2D_new3(QPoint* point);
QVector2D* QVector2D_new4(QPointF* point);
QVector2D* QVector2D_new5(QVector3D* vector);
QVector2D* QVector2D_new6(QVector4D* vector);
QVector2D* QVector2D_new7(QVector2D* param1);
bool QVector2D_IsNull(QVector2D* self);
float QVector2D_X(QVector2D* self);
float QVector2D_Y(QVector2D* self);
void QVector2D_SetX(QVector2D* self, float x);
void QVector2D_SetY(QVector2D* self, float y);
float QVector2D_OperatorSubscript(QVector2D* self, int i);
float QVector2D_Length(QVector2D* self);
float QVector2D_LengthSquared(QVector2D* self);
QVector2D* QVector2D_Normalized(QVector2D* self);
void QVector2D_Normalize(QVector2D* self);
float QVector2D_DistanceToPoint(QVector2D* self, QVector2D* point);
float QVector2D_DistanceToLine(QVector2D* self, QVector2D* point, QVector2D* direction);
QVector2D* QVector2D_OperatorPlusAssign(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_OperatorMinusAssign(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_OperatorMultiplyAssign(QVector2D* self, float factor);
QVector2D* QVector2D_OperatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector);
QVector2D* QVector2D_OperatorDivideAssign(QVector2D* self, float divisor);
QVector2D* QVector2D_OperatorDivideAssignWithVector(QVector2D* self, QVector2D* vector);
float QVector2D_DotProduct(QVector2D* v1, QVector2D* v2);
QVector3D* QVector2D_ToVector3D(QVector2D* self);
QVector4D* QVector2D_ToVector4D(QVector2D* self);
QPoint* QVector2D_ToPoint(QVector2D* self);
QPointF* QVector2D_ToPointF(QVector2D* self);
void QVector2D_Delete(QVector2D* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
