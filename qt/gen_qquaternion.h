#ifndef GEN_QQUATERNION_H
#define GEN_QQUATERNION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QQuaternion* QQuaternion_new2(float scalar, float xpos, float ypos, float zpos);
QQuaternion* QQuaternion_new3(float scalar, QVector3D* vector);
QQuaternion* QQuaternion_new4(QVector4D* vector);
QQuaternion* QQuaternion_new5(QQuaternion* param1);
bool QQuaternion_IsNull(QQuaternion* self);
bool QQuaternion_IsIdentity(QQuaternion* self);
QVector3D* QQuaternion_Vector(QQuaternion* self);
void QQuaternion_SetVector(QQuaternion* self, QVector3D* vector);
void QQuaternion_SetVector2(QQuaternion* self, float x, float y, float z);
float QQuaternion_X(QQuaternion* self);
float QQuaternion_Y(QQuaternion* self);
float QQuaternion_Z(QQuaternion* self);
float QQuaternion_Scalar(QQuaternion* self);
void QQuaternion_SetX(QQuaternion* self, float x);
void QQuaternion_SetY(QQuaternion* self, float y);
void QQuaternion_SetZ(QQuaternion* self, float z);
void QQuaternion_SetScalar(QQuaternion* self, float scalar);
float QQuaternion_DotProduct(QQuaternion* q1, QQuaternion* q2);
float QQuaternion_Length(QQuaternion* self);
float QQuaternion_LengthSquared(QQuaternion* self);
QQuaternion* QQuaternion_Normalized(QQuaternion* self);
void QQuaternion_Normalize(QQuaternion* self);
QQuaternion* QQuaternion_Inverted(QQuaternion* self);
QQuaternion* QQuaternion_Conjugated(QQuaternion* self);
QQuaternion* QQuaternion_Conjugate(QQuaternion* self);
QVector3D* QQuaternion_RotatedVector(QQuaternion* self, QVector3D* vector);
QQuaternion* QQuaternion_OperatorPlusAssign(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorMinusAssign(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorMultiplyAssign(QQuaternion* self, float factor);
QQuaternion* QQuaternion_OperatorMultiplyAssignWithQuaternion(QQuaternion* self, QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorDivideAssign(QQuaternion* self, float divisor);
QVector4D* QQuaternion_ToVector4D(QQuaternion* self);
void QQuaternion_GetAxisAndAngle(QQuaternion* self, QVector3D* axis, float* angle);
QQuaternion* QQuaternion_FromAxisAndAngle(QVector3D* axis, float angle);
void QQuaternion_GetAxisAndAngle2(QQuaternion* self, float* x, float* y, float* z, float* angle);
QQuaternion* QQuaternion_FromAxisAndAngle2(float x, float y, float z, float angle);
QVector3D* QQuaternion_ToEulerAngles(QQuaternion* self);
QQuaternion* QQuaternion_FromEulerAngles(QVector3D* eulerAngles);
void QQuaternion_GetEulerAngles(QQuaternion* self, float* pitch, float* yaw, float* roll);
QQuaternion* QQuaternion_FromEulerAngles2(float pitch, float yaw, float roll);
void QQuaternion_GetAxes(QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis);
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
