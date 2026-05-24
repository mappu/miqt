#include <QPointF>
#include <qwt_point_3d.h>
#include "gen_qwt_point_3d.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPoint3D* QwtPoint3D_new() {
	return new (std::nothrow) QwtPoint3D();
}

QwtPoint3D* QwtPoint3D_new2(double x, double y, double z) {
	return new (std::nothrow) QwtPoint3D(static_cast<double>(x), static_cast<double>(y), static_cast<double>(z));
}

QwtPoint3D* QwtPoint3D_new3(QwtPoint3D* param1) {
	return new (std::nothrow) QwtPoint3D(*param1);
}

QwtPoint3D* QwtPoint3D_new4(QPointF* param1) {
	return new (std::nothrow) QwtPoint3D(*param1);
}

bool QwtPoint3D_isNull(const QwtPoint3D* self) {
	return self->isNull();
}

double QwtPoint3D_x(const QwtPoint3D* self) {
	return self->x();
}

double QwtPoint3D_y(const QwtPoint3D* self) {
	return self->y();
}

double QwtPoint3D_z(const QwtPoint3D* self) {
	return self->z();
}

void QwtPoint3D_setX(QwtPoint3D* self, double x) {
	self->setX(static_cast<double>(x));
}

void QwtPoint3D_setY(QwtPoint3D* self, double y) {
	self->setY(static_cast<double>(y));
}

void QwtPoint3D_setZ(QwtPoint3D* self, double y) {
	self->setZ(static_cast<double>(y));
}

QPointF* QwtPoint3D_toPoint(const QwtPoint3D* self) {
	return new QPointF(self->toPoint());
}

bool QwtPoint3D_operatorEqual(const QwtPoint3D* self, QwtPoint3D* param1) {
	return (*self == *param1);
}

bool QwtPoint3D_operatorNotEqual(const QwtPoint3D* self, QwtPoint3D* param1) {
	return (*self != *param1);
}

void QwtPoint3D_delete(QwtPoint3D* self) {
	delete self;
}

