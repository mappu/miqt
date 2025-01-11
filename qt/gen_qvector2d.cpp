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

bool QVector2D_IsNull(const QVector2D* self) {
	return self->isNull();
}

float QVector2D_X(const QVector2D* self) {
	return self->x();
}

float QVector2D_Y(const QVector2D* self) {
	return self->y();
}

void QVector2D_SetX(QVector2D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector2D_SetY(QVector2D* self, float y) {
	self->setY(static_cast<float>(y));
}

float QVector2D_OperatorSubscript(const QVector2D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector2D_Length(const QVector2D* self) {
	return self->length();
}

float QVector2D_LengthSquared(const QVector2D* self) {
	return self->lengthSquared();
}

QVector2D* QVector2D_Normalized(const QVector2D* self) {
	return new QVector2D(self->normalized());
}

void QVector2D_Normalize(QVector2D* self) {
	self->normalize();
}

float QVector2D_DistanceToPoint(const QVector2D* self, QVector2D* point) {
	return self->distanceToPoint(*point);
}

float QVector2D_DistanceToLine(const QVector2D* self, QVector2D* point, QVector2D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector2D_OperatorPlusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_OperatorMinusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_OperatorMultiplyAssign(QVector2D* self, float factor) {
	QVector2D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_OperatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_OperatorDivideAssign(QVector2D* self, float divisor) {
	QVector2D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_OperatorDivideAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector2D_DotProduct(QVector2D* v1, QVector2D* v2) {
	return QVector2D::dotProduct(*v1, *v2);
}

QVector3D* QVector2D_ToVector3D(const QVector2D* self) {
	return new QVector3D(self->toVector3D());
}

QVector4D* QVector2D_ToVector4D(const QVector2D* self) {
	return new QVector4D(self->toVector4D());
}

QPoint* QVector2D_ToPoint(const QVector2D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector2D_ToPointF(const QVector2D* self) {
	return new QPointF(self->toPointF());
}

QVariant* QVector2D_ToQVariant(const QVector2D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector2D_Delete(QVector2D* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVector2D*>( self );
	} else {
		delete self;
	}
}

