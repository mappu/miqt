#include <QQuaternion>
#include <QVariant>
#include <QVector3D>
#include <QVector4D>
#include <qquaternion.h>
#include "gen_qquaternion.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQuaternion* QQuaternion_new() {
	return new (std::nothrow) QQuaternion();
}

QQuaternion* QQuaternion_new2(int param1) {
	return new (std::nothrow) QQuaternion(static_cast<Qt::Initialization>(param1));
}

QQuaternion* QQuaternion_new3(float scalar, float xpos, float ypos, float zpos) {
	return new (std::nothrow) QQuaternion(static_cast<float>(scalar), static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos));
}

QQuaternion* QQuaternion_new4(float scalar, struct miqt_qvector3d vector) {
	return new (std::nothrow) QQuaternion(static_cast<float>(scalar), miqt_from_cabi<QVector3D>(vector));
}

QQuaternion* QQuaternion_new5(QVector4D* vector) {
	return new (std::nothrow) QQuaternion(*vector);
}

QQuaternion* QQuaternion_new6(QQuaternion* param1) {
	return new (std::nothrow) QQuaternion(*param1);
}

bool QQuaternion_isNull(const QQuaternion* self) {
	return self->isNull();
}

bool QQuaternion_isIdentity(const QQuaternion* self) {
	return self->isIdentity();
}

struct miqt_qvector3d QQuaternion_vector(const QQuaternion* self) {
	return miqt_to_cabi<struct miqt_qvector3d>(self->vector());
}

void QQuaternion_setVector(QQuaternion* self, struct miqt_qvector3d vector) {
	self->setVector(miqt_from_cabi<QVector3D>(vector));
}

void QQuaternion_setVector2(QQuaternion* self, float x, float y, float z) {
	self->setVector(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

float QQuaternion_x(const QQuaternion* self) {
	return self->x();
}

float QQuaternion_y(const QQuaternion* self) {
	return self->y();
}

float QQuaternion_z(const QQuaternion* self) {
	return self->z();
}

float QQuaternion_scalar(const QQuaternion* self) {
	return self->scalar();
}

void QQuaternion_setX(QQuaternion* self, float x) {
	self->setX(static_cast<float>(x));
}

void QQuaternion_setY(QQuaternion* self, float y) {
	self->setY(static_cast<float>(y));
}

void QQuaternion_setZ(QQuaternion* self, float z) {
	self->setZ(static_cast<float>(z));
}

void QQuaternion_setScalar(QQuaternion* self, float scalar) {
	self->setScalar(static_cast<float>(scalar));
}

float QQuaternion_dotProduct(QQuaternion* q1, QQuaternion* q2) {
	return QQuaternion::dotProduct(*q1, *q2);
}

float QQuaternion_length(const QQuaternion* self) {
	return self->length();
}

float QQuaternion_lengthSquared(const QQuaternion* self) {
	return self->lengthSquared();
}

QQuaternion* QQuaternion_normalized(const QQuaternion* self) {
	return new QQuaternion(self->normalized());
}

void QQuaternion_normalize(QQuaternion* self) {
	self->normalize();
}

QQuaternion* QQuaternion_inverted(const QQuaternion* self) {
	return new QQuaternion(self->inverted());
}

QQuaternion* QQuaternion_conjugated(const QQuaternion* self) {
	return new QQuaternion(self->conjugated());
}

QQuaternion* QQuaternion_conjugate(const QQuaternion* self) {
	return new QQuaternion(self->conjugate());
}

struct miqt_qvector3d QQuaternion_rotatedVector(const QQuaternion* self, struct miqt_qvector3d vector) {
	return miqt_to_cabi<struct miqt_qvector3d>(self->rotatedVector(miqt_from_cabi<QVector3D>(vector)));
}

QQuaternion* QQuaternion_operatorPlusAssign(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& _ret = self->operator+=(*quaternion);
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorMinusAssign(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& _ret = self->operator-=(*quaternion);
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorMultiplyAssign(QQuaternion* self, float factor) {
	QQuaternion& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorMultiplyAssignWithQuaternion(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& _ret = self->operator*=(*quaternion);
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorDivideAssign(QQuaternion* self, float divisor) {
	QQuaternion& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QQuaternion_toVector4D(const QQuaternion* self) {
	return new QVector4D(self->toVector4D());
}

QVariant* QQuaternion_ToQVariant(const QQuaternion* self) {
	return new QVariant(self->operator QVariant());
}

void QQuaternion_getAxisAndAngle(const QQuaternion* self, QVector3D* axis, float* angle) {
	self->getAxisAndAngle(axis, static_cast<float*>(angle));
}

QQuaternion* QQuaternion_fromAxisAndAngle(struct miqt_qvector3d axis, float angle) {
	return new QQuaternion(QQuaternion::fromAxisAndAngle(miqt_from_cabi<QVector3D>(axis), static_cast<float>(angle)));
}

void QQuaternion_getAxisAndAngle2(const QQuaternion* self, float* x, float* y, float* z, float* angle) {
	self->getAxisAndAngle(static_cast<float*>(x), static_cast<float*>(y), static_cast<float*>(z), static_cast<float*>(angle));
}

QQuaternion* QQuaternion_fromAxisAndAngle2(float x, float y, float z, float angle) {
	return new QQuaternion(QQuaternion::fromAxisAndAngle(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(angle)));
}

struct miqt_qvector3d QQuaternion_toEulerAngles(const QQuaternion* self) {
	return miqt_to_cabi<struct miqt_qvector3d>(self->toEulerAngles());
}

QQuaternion* QQuaternion_fromEulerAngles(struct miqt_qvector3d eulerAngles) {
	return new QQuaternion(QQuaternion::fromEulerAngles(miqt_from_cabi<QVector3D>(eulerAngles)));
}

void QQuaternion_getEulerAngles(const QQuaternion* self, float* pitch, float* yaw, float* roll) {
	self->getEulerAngles(static_cast<float*>(pitch), static_cast<float*>(yaw), static_cast<float*>(roll));
}

QQuaternion* QQuaternion_fromEulerAngles2(float pitch, float yaw, float roll) {
	return new QQuaternion(QQuaternion::fromEulerAngles(static_cast<float>(pitch), static_cast<float>(yaw), static_cast<float>(roll)));
}

void QQuaternion_getAxes(const QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis) {
	self->getAxes(xAxis, yAxis, zAxis);
}

QQuaternion* QQuaternion_fromAxes(struct miqt_qvector3d xAxis, struct miqt_qvector3d yAxis, struct miqt_qvector3d zAxis) {
	return new QQuaternion(QQuaternion::fromAxes(miqt_from_cabi<QVector3D>(xAxis), miqt_from_cabi<QVector3D>(yAxis), miqt_from_cabi<QVector3D>(zAxis)));
}

QQuaternion* QQuaternion_fromDirection(struct miqt_qvector3d direction, struct miqt_qvector3d up) {
	return new QQuaternion(QQuaternion::fromDirection(miqt_from_cabi<QVector3D>(direction), miqt_from_cabi<QVector3D>(up)));
}

QQuaternion* QQuaternion_rotationTo(struct miqt_qvector3d from, struct miqt_qvector3d to) {
	return new QQuaternion(QQuaternion::rotationTo(miqt_from_cabi<QVector3D>(from), miqt_from_cabi<QVector3D>(to)));
}

QQuaternion* QQuaternion_slerp(QQuaternion* q1, QQuaternion* q2, float t) {
	return new QQuaternion(QQuaternion::slerp(*q1, *q2, static_cast<float>(t)));
}

QQuaternion* QQuaternion_nlerp(QQuaternion* q1, QQuaternion* q2, float t) {
	return new QQuaternion(QQuaternion::nlerp(*q1, *q2, static_cast<float>(t)));
}

void QQuaternion_operatorAssign(QQuaternion* self, QQuaternion* param1) {
	self->operator=(*param1);
}

void QQuaternion_delete(QQuaternion* self) {
	delete self;
}

