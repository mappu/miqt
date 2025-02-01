#include <QPoint>
#include <QPointF>
#include <QVariant>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <qvector4d.h>
#include "gen_qvector4d.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVector4D* QVector4D_new() {
	return new QVector4D();
}

QVector4D* QVector4D_new2(int param1) {
	return new QVector4D(static_cast<Qt::Initialization>(param1));
}

QVector4D* QVector4D_new3(float xpos, float ypos, float zpos, float wpos) {
	return new QVector4D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new4(QPoint* point) {
	return new QVector4D(*point);
}

QVector4D* QVector4D_new5(QPointF* point) {
	return new QVector4D(*point);
}

QVector4D* QVector4D_new6(QVector2D* vector) {
	return new QVector4D(*vector);
}

QVector4D* QVector4D_new7(QVector2D* vector, float zpos, float wpos) {
	return new QVector4D(*vector, static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new8(QVector3D* vector) {
	return new QVector4D(*vector);
}

QVector4D* QVector4D_new9(QVector3D* vector, float wpos) {
	return new QVector4D(*vector, static_cast<float>(wpos));
}

QVector4D* QVector4D_new10(QVector4D* param1) {
	return new QVector4D(*param1);
}

bool QVector4D_isNull(const QVector4D* self) {
	return self->isNull();
}

float QVector4D_x(const QVector4D* self) {
	return self->x();
}

float QVector4D_y(const QVector4D* self) {
	return self->y();
}

float QVector4D_z(const QVector4D* self) {
	return self->z();
}

float QVector4D_w(const QVector4D* self) {
	return self->w();
}

void QVector4D_setX(QVector4D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector4D_setY(QVector4D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector4D_setZ(QVector4D* self, float z) {
	self->setZ(static_cast<float>(z));
}

void QVector4D_setW(QVector4D* self, float w) {
	self->setW(static_cast<float>(w));
}

float QVector4D_operatorSubscript(const QVector4D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector4D_length(const QVector4D* self) {
	return self->length();
}

float QVector4D_lengthSquared(const QVector4D* self) {
	return self->lengthSquared();
}

QVector4D* QVector4D_normalized(const QVector4D* self) {
	return new QVector4D(self->normalized());
}

void QVector4D_normalize(QVector4D* self) {
	self->normalize();
}

QVector4D* QVector4D_operatorPlusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMinusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMultiplyAssign(QVector4D* self, float factor) {
	QVector4D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorDivideAssign(QVector4D* self, float divisor) {
	QVector4D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorDivideAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector4D_dotProduct(QVector4D* v1, QVector4D* v2) {
	return QVector4D::dotProduct(*v1, *v2);
}

QVector2D* QVector4D_toVector2D(const QVector4D* self) {
	return new QVector2D(self->toVector2D());
}

QVector2D* QVector4D_toVector2DAffine(const QVector4D* self) {
	return new QVector2D(self->toVector2DAffine());
}

QVector3D* QVector4D_toVector3D(const QVector4D* self) {
	return new QVector3D(self->toVector3D());
}

QVector3D* QVector4D_toVector3DAffine(const QVector4D* self) {
	return new QVector3D(self->toVector3DAffine());
}

QPoint* QVector4D_toPoint(const QVector4D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector4D_toPointF(const QVector4D* self) {
	return new QPointF(self->toPointF());
}

QVariant* QVector4D_ToQVariant(const QVector4D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector4D_delete(QVector4D* self) {
	delete self;
}

