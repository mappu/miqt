#pragma once
#ifndef MIQT_QT6_GEN_QQUATERNION_H
#define MIQT_QT6_GEN_QQUATERNION_H

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
class QVariant;
class QVector3D;
class QVector4D;
#else
typedef struct QQuaternion QQuaternion;
typedef struct QVariant QVariant;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
#endif

QQuaternion* QQuaternion_new();
QQuaternion* QQuaternion_new2(int param1);
QQuaternion* QQuaternion_new3(float scalar, float xpos, float ypos, float zpos);
QQuaternion* QQuaternion_new4(float scalar, QVector3D* vector);
QQuaternion* QQuaternion_new5(QVector4D* vector);
QQuaternion* QQuaternion_new6(QQuaternion* param1);
bool QQuaternion_isNull(const QQuaternion* self);
bool QQuaternion_isIdentity(const QQuaternion* self);
QVector3D* QQuaternion_vector(const QQuaternion* self);
void QQuaternion_setVector(QQuaternion* self, QVector3D* vector);
void QQuaternion_setVector2(QQuaternion* self, float x, float y, float z);
float QQuaternion_x(const QQuaternion* self);
float QQuaternion_y(const QQuaternion* self);
float QQuaternion_z(const QQuaternion* self);
float QQuaternion_scalar(const QQuaternion* self);
void QQuaternion_setX(QQuaternion* self, float x);
void QQuaternion_setY(QQuaternion* self, float y);
void QQuaternion_setZ(QQuaternion* self, float z);
void QQuaternion_setScalar(QQuaternion* self, float scalar);
float QQuaternion_dotProduct(QQuaternion* q1, QQuaternion* q2);
float QQuaternion_length(const QQuaternion* self);
float QQuaternion_lengthSquared(const QQuaternion* self);
QQuaternion* QQuaternion_normalized(const QQuaternion* self);
void QQuaternion_normalize(QQuaternion* self);
QQuaternion* QQuaternion_inverted(const QQuaternion* self);
QQuaternion* QQuaternion_conjugated(const QQuaternion* self);
QVector3D* QQuaternion_rotatedVector(const QQuaternion* self, QVector3D* vector);
QQuaternion* QQuaternion_operatorPlusAssign(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_operatorMinusAssign(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_operatorMultiplyAssign(QQuaternion* self, float factor);
QQuaternion* QQuaternion_operatorMultiplyAssignWithQuaternion(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_operatorDivideAssign(QQuaternion* self, float divisor);
QVector4D* QQuaternion_toVector4D(const QQuaternion* self);
QVariant* QQuaternion_ToQVariant(const QQuaternion* self);
void QQuaternion_getAxisAndAngle(const QQuaternion* self, QVector3D* axis, float* angle);
QQuaternion* QQuaternion_fromAxisAndAngle(QVector3D* axis, float angle);
void QQuaternion_getAxisAndAngle2(const QQuaternion* self, float* x, float* y, float* z, float* angle);
QQuaternion* QQuaternion_fromAxisAndAngle2(float x, float y, float z, float angle);
QVector3D* QQuaternion_toEulerAngles(const QQuaternion* self);
QQuaternion* QQuaternion_fromEulerAngles(QVector3D* eulerAngles);
void QQuaternion_getEulerAngles(const QQuaternion* self, float* pitch, float* yaw, float* roll);
QQuaternion* QQuaternion_fromEulerAngles2(float pitch, float yaw, float roll);
void QQuaternion_getAxes(const QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis);
QQuaternion* QQuaternion_fromAxes(QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis);
QQuaternion* QQuaternion_fromDirection(QVector3D* direction, QVector3D* up);
QQuaternion* QQuaternion_rotationTo(QVector3D* from, QVector3D* to);
QQuaternion* QQuaternion_slerp(QQuaternion* q1, QQuaternion* q2, float t);
QQuaternion* QQuaternion_nlerp(QQuaternion* q1, QQuaternion* q2, float t);

void QQuaternion_delete(QQuaternion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
