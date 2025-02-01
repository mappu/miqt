#include <QPoint>
#include <QPointF>
#include <QVariant>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <qvector2d.h>
#include "gen_qvector2d.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QVector2D* QVector2D_new() {
	return new QVector2D();
}

QVector2D* QVector2D_new2(int param1) {
	return new QVector2D(static_cast<Qt::Initialization>(param1));
}

QVector2D* QVector2D_new3(float xpos, float ypos) {
	return new QVector2D(static_cast<float>(xpos), static_cast<float>(ypos));
}

QVector2D* QVector2D_new4(QPoint* point) {
	return new QVector2D(*point);
}

QVector2D* QVector2D_new5(QPointF* point) {
	return new QVector2D(*point);
}

QVector2D* QVector2D_new6(QVector3D* vector) {
	return new QVector2D(*vector);
}

QVector2D* QVector2D_new7(QVector4D* vector) {
	return new QVector2D(*vector);
}

QVector2D* QVector2D_new8(QVector2D* param1) {
	return new QVector2D(*param1);
}

bool QVector2D_isNull(const QVector2D* self) {
	return self->isNull();
}

float QVector2D_x(const QVector2D* self) {
	return self->x();
}

float QVector2D_y(const QVector2D* self) {
	return self->y();
}

void QVector2D_setX(QVector2D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector2D_setY(QVector2D* self, float y) {
	self->setY(static_cast<float>(y));
}

float QVector2D_operatorSubscript(const QVector2D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector2D_length(const QVector2D* self) {
	return self->length();
}

float QVector2D_lengthSquared(const QVector2D* self) {
	return self->lengthSquared();
}

QVector2D* QVector2D_normalized(const QVector2D* self) {
	return new QVector2D(self->normalized());
}

void QVector2D_normalize(QVector2D* self) {
	self->normalize();
}

float QVector2D_distanceToPoint(const QVector2D* self, QVector2D* point) {
	return self->distanceToPoint(*point);
}

float QVector2D_distanceToLine(const QVector2D* self, QVector2D* point, QVector2D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector2D_operatorPlusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMinusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMultiplyAssign(QVector2D* self, float factor) {
	QVector2D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorDivideAssign(QVector2D* self, float divisor) {
	QVector2D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorDivideAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector2D_dotProduct(QVector2D* v1, QVector2D* v2) {
	return QVector2D::dotProduct(*v1, *v2);
}

QVector3D* QVector2D_toVector3D(const QVector2D* self) {
	return new QVector3D(self->toVector3D());
}

QVector4D* QVector2D_toVector4D(const QVector2D* self) {
	return new QVector4D(self->toVector4D());
}

QPoint* QVector2D_toPoint(const QVector2D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector2D_toPointF(const QVector2D* self) {
	return new QPointF(self->toPointF());
}

QVariant* QVector2D_ToQVariant(const QVector2D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector2D_delete(QVector2D* self) {
	delete self;
}

