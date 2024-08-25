#ifndef GEN_QVECTOR4D_H
#define GEN_QVECTOR4D_H

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

QVector4D* QVector4D_new();
QVector4D* QVector4D_new2(float xpos, float ypos, float zpos, float wpos);
QVector4D* QVector4D_new3(QPoint* point);
QVector4D* QVector4D_new4(QPointF* point);
QVector4D* QVector4D_new5(QVector2D* vector);
QVector4D* QVector4D_new6(QVector2D* vector, float zpos, float wpos);
QVector4D* QVector4D_new7(QVector3D* vector);
QVector4D* QVector4D_new8(QVector3D* vector, float wpos);
QVector4D* QVector4D_new9(QVector4D* param1);
bool QVector4D_IsNull(QVector4D* self);
float QVector4D_X(QVector4D* self);
float QVector4D_Y(QVector4D* self);
float QVector4D_Z(QVector4D* self);
float QVector4D_W(QVector4D* self);
void QVector4D_SetX(QVector4D* self, float x);
void QVector4D_SetY(QVector4D* self, float y);
void QVector4D_SetZ(QVector4D* self, float z);
void QVector4D_SetW(QVector4D* self, float w);
float QVector4D_OperatorSubscript(QVector4D* self, int i);
float QVector4D_Length(QVector4D* self);
float QVector4D_LengthSquared(QVector4D* self);
QVector4D* QVector4D_Normalized(QVector4D* self);
void QVector4D_Normalize(QVector4D* self);
QVector4D* QVector4D_OperatorPlusAssign(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_OperatorMinusAssign(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_OperatorMultiplyAssign(QVector4D* self, float factor);
QVector4D* QVector4D_OperatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector);
QVector4D* QVector4D_OperatorDivideAssign(QVector4D* self, float divisor);
QVector4D* QVector4D_OperatorDivideAssignWithVector(QVector4D* self, QVector4D* vector);
float QVector4D_DotProduct(QVector4D* v1, QVector4D* v2);
QVector2D* QVector4D_ToVector2D(QVector4D* self);
QVector2D* QVector4D_ToVector2DAffine(QVector4D* self);
QVector3D* QVector4D_ToVector3D(QVector4D* self);
QVector3D* QVector4D_ToVector3DAffine(QVector4D* self);
QPoint* QVector4D_ToPoint(QVector4D* self);
QPointF* QVector4D_ToPointF(QVector4D* self);
void QVector4D_Delete(QVector4D* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
