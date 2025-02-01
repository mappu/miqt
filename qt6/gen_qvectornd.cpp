#include <QMatrix4x4>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QVariant>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <qvectornd.h>
#include "gen_qvectornd.h"

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

QVector3D* QVector3D_new() {
	return new QVector3D();
}

QVector3D* QVector3D_new2(int param1) {
	return new QVector3D(static_cast<Qt::Initialization>(param1));
}

QVector3D* QVector3D_new3(float xpos, float ypos, float zpos) {
	return new QVector3D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos));
}

QVector3D* QVector3D_new4(QPoint* point) {
	return new QVector3D(*point);
}

QVector3D* QVector3D_new5(QPointF* point) {
	return new QVector3D(*point);
}

QVector3D* QVector3D_new6(QVector2D* vector) {
	return new QVector3D(*vector);
}

QVector3D* QVector3D_new7(QVector2D* vector, float zpos) {
	return new QVector3D(*vector, static_cast<float>(zpos));
}

QVector3D* QVector3D_new8(QVector4D* vector) {
	return new QVector3D(*vector);
}

QVector3D* QVector3D_new9(QVector3D* param1) {
	return new QVector3D(*param1);
}

bool QVector3D_isNull(const QVector3D* self) {
	return self->isNull();
}

float QVector3D_x(const QVector3D* self) {
	return self->x();
}

float QVector3D_y(const QVector3D* self) {
	return self->y();
}

float QVector3D_z(const QVector3D* self) {
	return self->z();
}

void QVector3D_setX(QVector3D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector3D_setY(QVector3D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector3D_setZ(QVector3D* self, float z) {
	self->setZ(static_cast<float>(z));
}

float QVector3D_operatorSubscript(const QVector3D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector3D_length(const QVector3D* self) {
	return self->length();
}

float QVector3D_lengthSquared(const QVector3D* self) {
	return self->lengthSquared();
}

QVector3D* QVector3D_normalized(const QVector3D* self) {
	return new QVector3D(self->normalized());
}

void QVector3D_normalize(QVector3D* self) {
	self->normalize();
}

QVector3D* QVector3D_operatorPlusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMinusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMultiplyAssign(QVector3D* self, float factor) {
	QVector3D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMultiplyAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorDivideAssign(QVector3D* self, float divisor) {
	QVector3D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorDivideAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector3D_dotProduct(QVector3D* v1, QVector3D* v2) {
	return QVector3D::dotProduct(*v1, *v2);
}

QVector3D* QVector3D_crossProduct(QVector3D* v1, QVector3D* v2) {
	return new QVector3D(QVector3D::crossProduct(*v1, *v2));
}

QVector3D* QVector3D_normal(QVector3D* v1, QVector3D* v2) {
	return new QVector3D(QVector3D::normal(*v1, *v2));
}

QVector3D* QVector3D_normal2(QVector3D* v1, QVector3D* v2, QVector3D* v3) {
	return new QVector3D(QVector3D::normal(*v1, *v2, *v3));
}

QVector3D* QVector3D_project(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	return new QVector3D(self->project(*modelView, *projection, *viewport));
}

QVector3D* QVector3D_unproject(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	return new QVector3D(self->unproject(*modelView, *projection, *viewport));
}

float QVector3D_distanceToPoint(const QVector3D* self, QVector3D* point) {
	return self->distanceToPoint(*point);
}

float QVector3D_distanceToPlane(const QVector3D* self, QVector3D* plane, QVector3D* normal) {
	return self->distanceToPlane(*plane, *normal);
}

float QVector3D_distanceToPlane2(const QVector3D* self, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3) {
	return self->distanceToPlane(*plane1, *plane2, *plane3);
}

float QVector3D_distanceToLine(const QVector3D* self, QVector3D* point, QVector3D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector3D_toVector2D(const QVector3D* self) {
	return new QVector2D(self->toVector2D());
}

QVector4D* QVector3D_toVector4D(const QVector3D* self) {
	return new QVector4D(self->toVector4D());
}

QPoint* QVector3D_toPoint(const QVector3D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector3D_toPointF(const QVector3D* self) {
	return new QPointF(self->toPointF());
}

QVariant* QVector3D_ToQVariant(const QVector3D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector3D_delete(QVector3D* self) {
	delete self;
}

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

