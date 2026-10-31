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

struct miqt_qvector3d QVector3D_new();
struct miqt_qvector3d QVector3D_new2(int param1);
struct miqt_qvector3d QVector3D_new3(float xpos, float ypos, float zpos);
struct miqt_qvector3d QVector3D_new4(struct miqt_qpoint point);
struct miqt_qvector3d QVector3D_new5(struct miqt_qpointf point);
struct miqt_qvector3d QVector3D_new6(QVector2D* vector);
struct miqt_qvector3d QVector3D_new7(QVector2D* vector, float zpos);
struct miqt_qvector3d QVector3D_new8(QVector4D* vector);
struct miqt_qvector3d QVector3D_new9(struct miqt_qvector3d param1);
bool QVector3D_isNull(struct miqt_qvector3d self_cabi);
float QVector3D_x(struct miqt_qvector3d self_cabi);
float QVector3D_y(struct miqt_qvector3d self_cabi);
float QVector3D_z(struct miqt_qvector3d self_cabi);
void QVector3D_setX(QVector3D* self, float x);
void QVector3D_setY(QVector3D* self, float y);
void QVector3D_setZ(QVector3D* self, float z);
float QVector3D_operatorSubscript(struct miqt_qvector3d self_cabi, int i);
float QVector3D_length(struct miqt_qvector3d self_cabi);
float QVector3D_lengthSquared(struct miqt_qvector3d self_cabi);
struct miqt_qvector3d QVector3D_normalized(struct miqt_qvector3d self_cabi);
void QVector3D_normalize(QVector3D* self);
QVector3D* QVector3D_operatorPlusAssign(QVector3D* self, struct miqt_qvector3d vector);
QVector3D* QVector3D_operatorMinusAssign(QVector3D* self, struct miqt_qvector3d vector);
QVector3D* QVector3D_operatorMultiplyAssign(QVector3D* self, float factor);
QVector3D* QVector3D_operatorMultiplyAssignWithVector(QVector3D* self, struct miqt_qvector3d vector);
QVector3D* QVector3D_operatorDivideAssign(QVector3D* self, float divisor);
QVector3D* QVector3D_operatorDivideAssignWithVector(QVector3D* self, struct miqt_qvector3d vector);
float QVector3D_dotProduct(struct miqt_qvector3d v1, struct miqt_qvector3d v2);
struct miqt_qvector3d QVector3D_crossProduct(struct miqt_qvector3d v1, struct miqt_qvector3d v2);
struct miqt_qvector3d QVector3D_normal(struct miqt_qvector3d v1, struct miqt_qvector3d v2);
struct miqt_qvector3d QVector3D_normal2(struct miqt_qvector3d v1, struct miqt_qvector3d v2, struct miqt_qvector3d v3);
struct miqt_qvector3d QVector3D_project(struct miqt_qvector3d self_cabi, QMatrix4x4* modelView, QMatrix4x4* projection, struct miqt_qrect viewport);
struct miqt_qvector3d QVector3D_unproject(struct miqt_qvector3d self_cabi, QMatrix4x4* modelView, QMatrix4x4* projection, struct miqt_qrect viewport);
float QVector3D_distanceToPoint(struct miqt_qvector3d self_cabi, struct miqt_qvector3d point);
float QVector3D_distanceToPlane(struct miqt_qvector3d self_cabi, struct miqt_qvector3d plane, struct miqt_qvector3d normal);
float QVector3D_distanceToPlane2(struct miqt_qvector3d self_cabi, struct miqt_qvector3d plane1, struct miqt_qvector3d plane2, struct miqt_qvector3d plane3);
float QVector3D_distanceToLine(struct miqt_qvector3d self_cabi, struct miqt_qvector3d point, struct miqt_qvector3d direction);
QVector2D* QVector3D_toVector2D(struct miqt_qvector3d self_cabi);
QVector4D* QVector3D_toVector4D(struct miqt_qvector3d self_cabi);
struct miqt_qpoint QVector3D_toPoint(struct miqt_qvector3d self_cabi);
struct miqt_qpointf QVector3D_toPointF(struct miqt_qvector3d self_cabi);
QVariant* QVector3D_ToQVariant(struct miqt_qvector3d self_cabi);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
