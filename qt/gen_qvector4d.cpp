#include "gen_qvector4d.h"
#include "qvector4d.h"

#include <QPoint>
#include <QPointF>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QVector4D* QVector4D_new() {
	return new QVector4D();
}

QVector4D* QVector4D_new2(float xpos, float ypos, float zpos, float wpos) {
	return new QVector4D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new3(QPoint* point) {
	return new QVector4D(*point);
}

QVector4D* QVector4D_new4(QPointF* point) {
	return new QVector4D(*point);
}

QVector4D* QVector4D_new5(QVector2D* vector) {
	return new QVector4D(*vector);
}

QVector4D* QVector4D_new6(QVector2D* vector, float zpos, float wpos) {
	return new QVector4D(*vector, static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new7(QVector3D* vector) {
	return new QVector4D(*vector);
}

QVector4D* QVector4D_new8(QVector3D* vector, float wpos) {
	return new QVector4D(*vector, static_cast<float>(wpos));
}

QVector4D* QVector4D_new9(QVector4D* param1) {
	return new QVector4D(*param1);
}

bool QVector4D_IsNull(QVector4D* self) {
	return self->isNull();
}

float QVector4D_X(QVector4D* self) {
	return self->x();
}

float QVector4D_Y(QVector4D* self) {
	return self->y();
}

float QVector4D_Z(QVector4D* self) {
	return self->z();
}

float QVector4D_W(QVector4D* self) {
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

float QVector4D_OperatorSubscript(QVector4D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector4D_Length(QVector4D* self) {
	return self->length();
}

float QVector4D_LengthSquared(QVector4D* self) {
	return self->lengthSquared();
}

QVector4D* QVector4D_Normalized(QVector4D* self) {
	QVector4D ret = self->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector4D*>(new QVector4D(ret));
}

void QVector4D_Normalize(QVector4D* self) {
	self->normalize();
}

QVector4D* QVector4D_OperatorPlusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector4D* QVector4D_OperatorMinusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector4D* QVector4D_OperatorMultiplyAssign(QVector4D* self, float factor) {
	QVector4D& ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &ret;
}

QVector4D* QVector4D_OperatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector4D* QVector4D_OperatorDivideAssign(QVector4D* self, float divisor) {
	QVector4D& ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &ret;
}

QVector4D* QVector4D_OperatorDivideAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

float QVector4D_DotProduct(QVector4D* v1, QVector4D* v2) {
	return QVector4D::dotProduct(*v1, *v2);
}

QVector2D* QVector4D_ToVector2D(QVector4D* self) {
	QVector2D ret = self->toVector2D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector2D*>(new QVector2D(ret));
}

QVector2D* QVector4D_ToVector2DAffine(QVector4D* self) {
	QVector2D ret = self->toVector2DAffine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector2D*>(new QVector2D(ret));
}

QVector3D* QVector4D_ToVector3D(QVector4D* self) {
	QVector3D ret = self->toVector3D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QVector3D* QVector4D_ToVector3DAffine(QVector4D* self) {
	QVector3D ret = self->toVector3DAffine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QPoint* QVector4D_ToPoint(QVector4D* self) {
	QPoint ret = self->toPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QVector4D_ToPointF(QVector4D* self) {
	QPointF ret = self->toPointF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QVector4D_Delete(QVector4D* self) {
	delete self;
}

