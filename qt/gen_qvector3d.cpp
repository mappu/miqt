#include <QMatrix4x4>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <qvector3d.h>
#include "gen_qvector3d.h"
#include "_cgo_export.h"

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

bool QVector3D_IsNull(const QVector3D* self) {
	return self->isNull();
}

float QVector3D_X(const QVector3D* self) {
	return self->x();
}

float QVector3D_Y(const QVector3D* self) {
	return self->y();
}

float QVector3D_Z(const QVector3D* self) {
	return self->z();
}

void QVector3D_SetX(QVector3D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector3D_SetY(QVector3D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector3D_SetZ(QVector3D* self, float z) {
	self->setZ(static_cast<float>(z));
}

float QVector3D_OperatorSubscript(const QVector3D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector3D_Length(const QVector3D* self) {
	return self->length();
}

float QVector3D_LengthSquared(const QVector3D* self) {
	return self->lengthSquared();
}

QVector3D* QVector3D_Normalized(const QVector3D* self) {
	return new QVector3D(self->normalized());
}

void QVector3D_Normalize(QVector3D* self) {
	self->normalize();
}

QVector3D* QVector3D_OperatorPlusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_OperatorMinusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_OperatorMultiplyAssign(QVector3D* self, float factor) {
	QVector3D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_OperatorMultiplyAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_OperatorDivideAssign(QVector3D* self, float divisor) {
	QVector3D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_OperatorDivideAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector3D_DotProduct(QVector3D* v1, QVector3D* v2) {
	return QVector3D::dotProduct(*v1, *v2);
}

QVector3D* QVector3D_CrossProduct(QVector3D* v1, QVector3D* v2) {
	return new QVector3D(QVector3D::crossProduct(*v1, *v2));
}

QVector3D* QVector3D_Normal(QVector3D* v1, QVector3D* v2) {
	return new QVector3D(QVector3D::normal(*v1, *v2));
}

QVector3D* QVector3D_Normal2(QVector3D* v1, QVector3D* v2, QVector3D* v3) {
	return new QVector3D(QVector3D::normal(*v1, *v2, *v3));
}

QVector3D* QVector3D_Project(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	return new QVector3D(self->project(*modelView, *projection, *viewport));
}

QVector3D* QVector3D_Unproject(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	return new QVector3D(self->unproject(*modelView, *projection, *viewport));
}

float QVector3D_DistanceToPoint(const QVector3D* self, QVector3D* point) {
	return self->distanceToPoint(*point);
}

float QVector3D_DistanceToPlane(const QVector3D* self, QVector3D* plane, QVector3D* normal) {
	return self->distanceToPlane(*plane, *normal);
}

float QVector3D_DistanceToPlane2(const QVector3D* self, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3) {
	return self->distanceToPlane(*plane1, *plane2, *plane3);
}

float QVector3D_DistanceToLine(const QVector3D* self, QVector3D* point, QVector3D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector3D_ToVector2D(const QVector3D* self) {
	return new QVector2D(self->toVector2D());
}

QVector4D* QVector3D_ToVector4D(const QVector3D* self) {
	return new QVector4D(self->toVector4D());
}

QPoint* QVector3D_ToPoint(const QVector3D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector3D_ToPointF(const QVector3D* self) {
	return new QPointF(self->toPointF());
}

void QVector3D_Delete(QVector3D* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVector3D*>( self );
	} else {
		delete self;
	}
}

