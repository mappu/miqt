#include <QQuaternion>
#include <QVector3D>
#include <QVector4D>
#include "qquaternion.h"

#include "gen_qquaternion.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QQuaternion* QQuaternion_new() {
	return new QQuaternion();
}

QQuaternion* QQuaternion_new2(uintptr_t param1) {
	return new QQuaternion(static_cast<Qt::Initialization>(param1));
}

QQuaternion* QQuaternion_new3(float scalar, float xpos, float ypos, float zpos) {
	return new QQuaternion(static_cast<float>(scalar), static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos));
}

QQuaternion* QQuaternion_new4(float scalar, QVector3D* vector) {
	return new QQuaternion(static_cast<float>(scalar), *vector);
}

QQuaternion* QQuaternion_new5(QVector4D* vector) {
	return new QQuaternion(*vector);
}

QQuaternion* QQuaternion_new6(QQuaternion* param1) {
	return new QQuaternion(*param1);
}

bool QQuaternion_IsNull(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->isNull();
}

bool QQuaternion_IsIdentity(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->isIdentity();
}

QVector3D* QQuaternion_Vector(QQuaternion* self) {
	QVector3D ret = const_cast<const QQuaternion*>(self)->vector();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

void QQuaternion_SetVector(QQuaternion* self, QVector3D* vector) {
	self->setVector(*vector);
}

void QQuaternion_SetVector2(QQuaternion* self, float x, float y, float z) {
	self->setVector(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

float QQuaternion_X(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->x();
}

float QQuaternion_Y(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->y();
}

float QQuaternion_Z(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->z();
}

float QQuaternion_Scalar(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->scalar();
}

void QQuaternion_SetX(QQuaternion* self, float x) {
	self->setX(static_cast<float>(x));
}

void QQuaternion_SetY(QQuaternion* self, float y) {
	self->setY(static_cast<float>(y));
}

void QQuaternion_SetZ(QQuaternion* self, float z) {
	self->setZ(static_cast<float>(z));
}

void QQuaternion_SetScalar(QQuaternion* self, float scalar) {
	self->setScalar(static_cast<float>(scalar));
}

float QQuaternion_DotProduct(QQuaternion* q1, QQuaternion* q2) {
	return QQuaternion::dotProduct(*q1, *q2);
}

float QQuaternion_Length(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->length();
}

float QQuaternion_LengthSquared(QQuaternion* self) {
	return const_cast<const QQuaternion*>(self)->lengthSquared();
}

QQuaternion* QQuaternion_Normalized(QQuaternion* self) {
	QQuaternion ret = const_cast<const QQuaternion*>(self)->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

void QQuaternion_Normalize(QQuaternion* self) {
	self->normalize();
}

QQuaternion* QQuaternion_Inverted(QQuaternion* self) {
	QQuaternion ret = const_cast<const QQuaternion*>(self)->inverted();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QQuaternion* QQuaternion_Conjugated(QQuaternion* self) {
	QQuaternion ret = const_cast<const QQuaternion*>(self)->conjugated();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QQuaternion* QQuaternion_Conjugate(QQuaternion* self) {
	QQuaternion ret = const_cast<const QQuaternion*>(self)->conjugate();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QVector3D* QQuaternion_RotatedVector(QQuaternion* self, QVector3D* vector) {
	QVector3D ret = const_cast<const QQuaternion*>(self)->rotatedVector(*vector);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QQuaternion* QQuaternion_OperatorPlusAssign(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& ret = self->operator+=(*quaternion);
	// Cast returned reference into pointer
	return &ret;
}

QQuaternion* QQuaternion_OperatorMinusAssign(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& ret = self->operator-=(*quaternion);
	// Cast returned reference into pointer
	return &ret;
}

QQuaternion* QQuaternion_OperatorMultiplyAssign(QQuaternion* self, float factor) {
	QQuaternion& ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &ret;
}

QQuaternion* QQuaternion_OperatorMultiplyAssignWithQuaternion(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& ret = self->operator*=(*quaternion);
	// Cast returned reference into pointer
	return &ret;
}

QQuaternion* QQuaternion_OperatorDivideAssign(QQuaternion* self, float divisor) {
	QQuaternion& ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &ret;
}

QVector4D* QQuaternion_ToVector4D(QQuaternion* self) {
	QVector4D ret = const_cast<const QQuaternion*>(self)->toVector4D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector4D*>(new QVector4D(ret));
}

void QQuaternion_GetAxisAndAngle(QQuaternion* self, QVector3D* axis, float* angle) {
	const_cast<const QQuaternion*>(self)->getAxisAndAngle(axis, static_cast<float*>(angle));
}

QQuaternion* QQuaternion_FromAxisAndAngle(QVector3D* axis, float angle) {
	QQuaternion ret = QQuaternion::fromAxisAndAngle(*axis, static_cast<float>(angle));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

void QQuaternion_GetAxisAndAngle2(QQuaternion* self, float* x, float* y, float* z, float* angle) {
	const_cast<const QQuaternion*>(self)->getAxisAndAngle(static_cast<float*>(x), static_cast<float*>(y), static_cast<float*>(z), static_cast<float*>(angle));
}

QQuaternion* QQuaternion_FromAxisAndAngle2(float x, float y, float z, float angle) {
	QQuaternion ret = QQuaternion::fromAxisAndAngle(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(angle));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QVector3D* QQuaternion_ToEulerAngles(QQuaternion* self) {
	QVector3D ret = const_cast<const QQuaternion*>(self)->toEulerAngles();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QQuaternion* QQuaternion_FromEulerAngles(QVector3D* eulerAngles) {
	QQuaternion ret = QQuaternion::fromEulerAngles(*eulerAngles);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

void QQuaternion_GetEulerAngles(QQuaternion* self, float* pitch, float* yaw, float* roll) {
	const_cast<const QQuaternion*>(self)->getEulerAngles(static_cast<float*>(pitch), static_cast<float*>(yaw), static_cast<float*>(roll));
}

QQuaternion* QQuaternion_FromEulerAngles2(float pitch, float yaw, float roll) {
	QQuaternion ret = QQuaternion::fromEulerAngles(static_cast<float>(pitch), static_cast<float>(yaw), static_cast<float>(roll));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

void QQuaternion_GetAxes(QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis) {
	const_cast<const QQuaternion*>(self)->getAxes(xAxis, yAxis, zAxis);
}

QQuaternion* QQuaternion_FromAxes(QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis) {
	QQuaternion ret = QQuaternion::fromAxes(*xAxis, *yAxis, *zAxis);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QQuaternion* QQuaternion_FromDirection(QVector3D* direction, QVector3D* up) {
	QQuaternion ret = QQuaternion::fromDirection(*direction, *up);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QQuaternion* QQuaternion_RotationTo(QVector3D* from, QVector3D* to) {
	QQuaternion ret = QQuaternion::rotationTo(*from, *to);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QQuaternion* QQuaternion_Slerp(QQuaternion* q1, QQuaternion* q2, float t) {
	QQuaternion ret = QQuaternion::slerp(*q1, *q2, static_cast<float>(t));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

QQuaternion* QQuaternion_Nlerp(QQuaternion* q1, QQuaternion* q2, float t) {
	QQuaternion ret = QQuaternion::nlerp(*q1, *q2, static_cast<float>(t));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QQuaternion*>(new QQuaternion(ret));
}

void QQuaternion_Delete(QQuaternion* self) {
	delete self;
}

