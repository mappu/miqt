#include <QPoint>
#include <QPointF>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include "qvector4d.h"
#include "gen_qvector4d.h"
#include "_cgo_export.h"

QVector4D* QVector4D_new() {
	return new QVector4D();
}

QVector4D* QVector4D_new2(uintptr_t param1) {
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

bool QVector4D_IsNull(const QVector4D* self) {
	return self->isNull();
}

float QVector4D_X(const QVector4D* self) {
	return self->x();
}

float QVector4D_Y(const QVector4D* self) {
	return self->y();
}

float QVector4D_Z(const QVector4D* self) {
	return self->z();
}

float QVector4D_W(const QVector4D* self) {
	return self->w();
}

void QVector4D_SetX(QVector4D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector4D_SetY(QVector4D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector4D_SetZ(QVector4D* self, float z) {
	self->setZ(static_cast<float>(z));
}

void QVector4D_SetW(QVector4D* self, float w) {
	self->setW(static_cast<float>(w));
}

float QVector4D_OperatorSubscript(const QVector4D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector4D_Length(const QVector4D* self) {
	return self->length();
}

float QVector4D_LengthSquared(const QVector4D* self) {
	return self->lengthSquared();
}

QVector4D* QVector4D_Normalized(const QVector4D* self) {
	QVector4D _ret = self->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector4D*>(new QVector4D(_ret));
}

void QVector4D_Normalize(QVector4D* self) {
	self->normalize();
}

QVector4D* QVector4D_OperatorPlusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_OperatorMinusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_OperatorMultiplyAssign(QVector4D* self, float factor) {
	QVector4D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_OperatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_OperatorDivideAssign(QVector4D* self, float divisor) {
	QVector4D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_OperatorDivideAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector4D_DotProduct(QVector4D* v1, QVector4D* v2) {
	return QVector4D::dotProduct(*v1, *v2);
}

QVector2D* QVector4D_ToVector2D(const QVector4D* self) {
	QVector2D _ret = self->toVector2D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector2D*>(new QVector2D(_ret));
}

QVector2D* QVector4D_ToVector2DAffine(const QVector4D* self) {
	QVector2D _ret = self->toVector2DAffine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector2D*>(new QVector2D(_ret));
}

QVector3D* QVector4D_ToVector3D(const QVector4D* self) {
	QVector3D _ret = self->toVector3D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(_ret));
}

QVector3D* QVector4D_ToVector3DAffine(const QVector4D* self) {
	QVector3D _ret = self->toVector3DAffine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(_ret));
}

QPoint* QVector4D_ToPoint(const QVector4D* self) {
	QPoint _ret = self->toPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(_ret));
}

QPointF* QVector4D_ToPointF(const QVector4D* self) {
	QPointF _ret = self->toPointF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

void QVector4D_Delete(QVector4D* self) {
	delete self;
}

