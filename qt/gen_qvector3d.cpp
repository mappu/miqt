#include "gen_qvector3d.h"
#include "qvector3d.h"

#include <QMatrix4x4>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QVector3D* QVector3D_new() {
	return new QVector3D();
}

QVector3D* QVector3D_new2(float xpos, float ypos, float zpos) {
	return new QVector3D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos));
}

QVector3D* QVector3D_new3(QPoint* point) {
	return new QVector3D(*point);
}

QVector3D* QVector3D_new4(QPointF* point) {
	return new QVector3D(*point);
}

QVector3D* QVector3D_new5(QVector2D* vector) {
	return new QVector3D(*vector);
}

QVector3D* QVector3D_new6(QVector2D* vector, float zpos) {
	return new QVector3D(*vector, static_cast<float>(zpos));
}

QVector3D* QVector3D_new7(QVector4D* vector) {
	return new QVector3D(*vector);
}

QVector3D* QVector3D_new8(QVector3D* param1) {
	return new QVector3D(*param1);
}

bool QVector3D_IsNull(QVector3D* self) {
	return self->isNull();
}

float QVector3D_X(QVector3D* self) {
	return self->x();
}

float QVector3D_Y(QVector3D* self) {
	return self->y();
}

float QVector3D_Z(QVector3D* self) {
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

float QVector3D_OperatorSubscript(QVector3D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector3D_Length(QVector3D* self) {
	return self->length();
}

float QVector3D_LengthSquared(QVector3D* self) {
	return self->lengthSquared();
}

QVector3D* QVector3D_Normalized(QVector3D* self) {
	QVector3D ret = self->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

void QVector3D_Normalize(QVector3D* self) {
	self->normalize();
}

QVector3D* QVector3D_OperatorPlusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector3D* QVector3D_OperatorMinusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector3D* QVector3D_OperatorMultiplyAssign(QVector3D* self, float factor) {
	QVector3D& ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &ret;
}

QVector3D* QVector3D_OperatorMultiplyAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

QVector3D* QVector3D_OperatorDivideAssign(QVector3D* self, float divisor) {
	QVector3D& ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &ret;
}

QVector3D* QVector3D_OperatorDivideAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &ret;
}

float QVector3D_DotProduct(QVector3D* v1, QVector3D* v2) {
	return QVector3D::dotProduct(*v1, *v2);
}

QVector3D* QVector3D_CrossProduct(QVector3D* v1, QVector3D* v2) {
	QVector3D ret = QVector3D::crossProduct(*v1, *v2);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QVector3D* QVector3D_Normal(QVector3D* v1, QVector3D* v2) {
	QVector3D ret = QVector3D::normal(*v1, *v2);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QVector3D* QVector3D_Normal2(QVector3D* v1, QVector3D* v2, QVector3D* v3) {
	QVector3D ret = QVector3D::normal(*v1, *v2, *v3);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QVector3D* QVector3D_Project(QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	QVector3D ret = self->project(*modelView, *projection, *viewport);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

QVector3D* QVector3D_Unproject(QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	QVector3D ret = self->unproject(*modelView, *projection, *viewport);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector3D*>(new QVector3D(ret));
}

float QVector3D_DistanceToPoint(QVector3D* self, QVector3D* point) {
	return self->distanceToPoint(*point);
}

float QVector3D_DistanceToPlane(QVector3D* self, QVector3D* plane, QVector3D* normal) {
	return self->distanceToPlane(*plane, *normal);
}

float QVector3D_DistanceToPlane2(QVector3D* self, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3) {
	return self->distanceToPlane(*plane1, *plane2, *plane3);
}

float QVector3D_DistanceToLine(QVector3D* self, QVector3D* point, QVector3D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector3D_ToVector2D(QVector3D* self) {
	QVector2D ret = self->toVector2D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector2D*>(new QVector2D(ret));
}

QVector4D* QVector3D_ToVector4D(QVector3D* self) {
	QVector4D ret = self->toVector4D();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector4D*>(new QVector4D(ret));
}

QPoint* QVector3D_ToPoint(QVector3D* self) {
	QPoint ret = self->toPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QVector3D_ToPointF(QVector3D* self) {
	QPointF ret = self->toPointF();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QVector3D_Delete(QVector3D* self) {
	delete self;
}

