#include <QPointF>
#include <qwt_point_polar.h>
#include "gen_qwt_point_polar.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPointPolar* QwtPointPolar_new() {
	return new (std::nothrow) QwtPointPolar();
}

QwtPointPolar* QwtPointPolar_new2(double azimuth, double radius) {
	return new (std::nothrow) QwtPointPolar(static_cast<double>(azimuth), static_cast<double>(radius));
}

QwtPointPolar* QwtPointPolar_new3(QwtPointPolar* param1) {
	return new (std::nothrow) QwtPointPolar(*param1);
}

QwtPointPolar* QwtPointPolar_new4(struct miqt_qpointf param1) {
	return new (std::nothrow) QwtPointPolar(miqt_from_cabi<QPointF>(param1));
}

void QwtPointPolar_setPoint(QwtPointPolar* self, struct miqt_qpointf point) {
	self->setPoint(miqt_from_cabi<QPointF>(point));
}

struct miqt_qpointf QwtPointPolar_toPoint(const QwtPointPolar* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->toPoint());
}

bool QwtPointPolar_isValid(const QwtPointPolar* self) {
	return self->isValid();
}

bool QwtPointPolar_isNull(const QwtPointPolar* self) {
	return self->isNull();
}

double QwtPointPolar_radius(const QwtPointPolar* self) {
	return self->radius();
}

double QwtPointPolar_azimuth(const QwtPointPolar* self) {
	return self->azimuth();
}

void QwtPointPolar_setRadius(QwtPointPolar* self, double radius) {
	self->setRadius(static_cast<double>(radius));
}

void QwtPointPolar_setAzimuth(QwtPointPolar* self, double azimuth) {
	self->setAzimuth(static_cast<double>(azimuth));
}

bool QwtPointPolar_operatorEqual(const QwtPointPolar* self, QwtPointPolar* param1) {
	return (*self == *param1);
}

bool QwtPointPolar_operatorNotEqual(const QwtPointPolar* self, QwtPointPolar* param1) {
	return (*self != *param1);
}

QwtPointPolar* QwtPointPolar_normalized(const QwtPointPolar* self) {
	return new QwtPointPolar(self->normalized());
}

void QwtPointPolar_delete(QwtPointPolar* self) {
	delete self;
}

