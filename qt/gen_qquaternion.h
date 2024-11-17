#pragma once
#ifndef MIQT_QT_GEN_QQUATERNION_H
#define MIQT_QT_GEN_QQUATERNION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QQuaternion;
class QVector3D;
class QVector4D;
#else
typedef struct QQuaternion QQuaternion;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
#endif

QQuaternion* QQuaternion_new();
QQuaternion* QQuaternion_new2(int param1);
QQuaternion* QQuaternion_new3(float scalar, float xpos, float ypos, float zpos);
QQuaternion* QQuaternion_new4(float scalar, QVector3D* vector);
QQuaternion* QQuaternion_new5(QVector4D* vector);
QQuaternion* QQuaternion_new6(QQuaternion* param1);
bool QQuaternion_IsNull(const QQuaternion* self);
bool QQuaternion_IsIdentity(const QQuaternion* self);
QVector3D* QQuaternion_Vector(const QQuaternion* self);
void QQuaternion_SetVector(QQuaternion* self, QVector3D* vector);
void QQuaternion_SetVector2(QQuaternion* self, float x, float y, float z);
float QQuaternion_X(const QQuaternion* self);
float QQuaternion_Y(const QQuaternion* self);
float QQuaternion_Z(const QQuaternion* self);
float QQuaternion_Scalar(const QQuaternion* self);
void QQuaternion_SetX(QQuaternion* self, float x);
void QQuaternion_SetY(QQuaternion* self, float y);
void QQuaternion_SetZ(QQuaternion* self, float z);
void QQuaternion_SetScalar(QQuaternion* self, float scalar);
float QQuaternion_DotProduct(QQuaternion* q1, QQuaternion* q2);
float QQuaternion_Length(const QQuaternion* self);
float QQuaternion_LengthSquared(const QQuaternion* self);
QQuaternion* QQuaternion_Normalized(const QQuaternion* self);
void QQuaternion_Normalize(QQuaternion* self);
QQuaternion* QQuaternion_Inverted(const QQuaternion* self);
QQuaternion* QQuaternion_Conjugated(const QQuaternion* self);
QQuaternion* QQuaternion_Conjugate(const QQuaternion* self);
QVector3D* QQuaternion_RotatedVector(const QQuaternion* self, QVector3D* vector);
QQuaternion* QQuaternion_OperatorPlusAssign(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorMinusAssign(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorMultiplyAssign(QQuaternion* self, float factor);
QQuaternion* QQuaternion_OperatorMultiplyAssignWithQuaternion(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorDivideAssign(QQuaternion* self, float divisor);
QVector4D* QQuaternion_ToVector4D(const QQuaternion* self);
void QQuaternion_GetAxisAndAngle(const QQuaternion* self, QVector3D* axis, float* angle);
QQuaternion* QQuaternion_FromAxisAndAngle(QVector3D* axis, float angle);
void QQuaternion_GetAxisAndAngle2(const QQuaternion* self, float* x, float* y, float* z, float* angle);
QQuaternion* QQuaternion_FromAxisAndAngle2(float x, float y, float z, float angle);
QVector3D* QQuaternion_ToEulerAngles(const QQuaternion* self);
QQuaternion* QQuaternion_FromEulerAngles(QVector3D* eulerAngles);
void QQuaternion_GetEulerAngles(const QQuaternion* self, float* pitch, float* yaw, float* roll);
QQuaternion* QQuaternion_FromEulerAngles2(float pitch, float yaw, float roll);
void QQuaternion_GetAxes(const QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis);
QQuaternion* QQuaternion_FromAxes(QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis);
QQuaternion* QQuaternion_FromDirection(QVector3D* direction, QVector3D* up);
QQuaternion* QQuaternion_RotationTo(QVector3D* from, QVector3D* to);
QQuaternion* QQuaternion_Slerp(QQuaternion* q1, QQuaternion* q2, float t);
QQuaternion* QQuaternion_Nlerp(QQuaternion* q1, QQuaternion* q2, float t);
void QQuaternion_Delete(QQuaternion* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
