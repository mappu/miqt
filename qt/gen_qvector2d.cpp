#include "gen_qvector2d.h"
#include "qvector2d.h"

#include <QPoint>
#include <QPointF>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QVector2D* QVector2D_new() {
	return new QVector2D();
}

QVector2D* QVector2D_new2(float xpos, float ypos) {
	return new QVector2D(static_cast<float>(xpos), static_cast<float>(ypos));
}

QVector2D* QVector2D_new3(QPoint* point) {
	return new QVector2D(*point);
}

QVector2D* QVector2D_new4(QPointF* point) {
	return new QVector2D(*point);
}

QVector2D* QVector2D_new5(QVector3D* vector) {
	return new QVector2D(*vector);
}

QVector2D* QVector2D_new6(QVector4D* vector) {
	return new QVector2D(*vector);
}

QVector2D* QVector2D_new7(QVector2D* param1) {
	return new QVector2D(*param1);
}

bool QVector2D_IsNull(QVector2D* self) {
	return self->isNull();
}

float QVector2D_X(QVector2D* self) {
	return self->x();
}

float QVector2D_Y(QVector2D* self) {
	return self->y();
}

void QVector2D_SetX(QVector2D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector2D_SetY(QVector2D* self, float y) {
	self->setY(static_cast<float>(y));
}

float QVector2D_OperatorSubscript(QVector2D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector2D_Length(QVector2D* self) {
	return self->length();
}

float QVector2D_LengthSquared(QVector2D* self) {
	return self->lengthSquared();
}

QVector2D* QVector2D_Normalized(QVector2D* self) {
	QVector2D ret = self->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector2D*>(new QVector2D(ret));
}

void QVector2D_Normalize(QVector2D* self) {
	self->normalize();
}

float QVector2D_DistanceToPoint(QVector2D* self, QVector2D* point) {
	return self->distanceToPoint(*point);
}

float QVector2D_DistanceToLine(QVector2D* self, QVector2D* point, QVector2D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector2D_OperatorPlusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector2D* QVector2D_OperatorMinusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector2D* QVector2D_OperatorMultiplyAssign(QVector2D* self, float factor) {
	QVector2D& ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &ret;
}

QVector2D* QVector2D_OperatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector2D* QVector2D_OperatorDivideAssign(QVector2D* self, float divisor) {
	QVector2D& ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &ret;
}

QVector2D* QVector2D_OperatorDivideAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

float QVector2D_DotProduct(QVector2D* v1, QVector2D* v2) {
	return QVector2D::dotProduct(*v1, *v2);
}

QVector3D* QVector2D_ToVector3D(QVector2D* self) {
	QVector3D ret = self->toVector3D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QVector4D* QVector2D_ToVector4D(QVector2D* self) {
	QVector4D ret = self->toVector4D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector4D*>(new QVector4D(ret));
}

QPoint* QVector2D_ToPoint(QVector2D* self) {
	QPoint ret = self->toPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QVector2D_ToPointF(QVector2D* self) {
	QPointF ret = self->toPointF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QVector2D_Delete(QVector2D* self) {
	delete self;
}

