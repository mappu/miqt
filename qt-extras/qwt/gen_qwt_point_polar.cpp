#include <QPoint>
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

QwtPointPolar* QwtPointPolar_new4(QPointF* param1) {
	return new (std::nothrow) QwtPointPolar(*param1);
}

void QwtPointPolar_setPoint(QwtPointPolar* self, QPointF* point) {
	self->setPoint(*point);
}

QPointF* QwtPointPolar_toPoint(const QwtPointPolar* self) {
	return new QPointF(self->toPoint());
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

QPoint* miqt_QwtPolar2Pos2(QPoint* pole, double radius, double angle) {

	return new QPoint(qwtPolar2Pos(*pole, static_cast<double>(radius), static_cast<double>(angle)));
}

QPoint* miqt_QwtDegree2Pos2(QPoint* pole, double radius, double angle) {

	return new QPoint(qwtDegree2Pos(*pole, static_cast<double>(radius), static_cast<double>(angle)));
}

QPointF* miqt_QwtPolar2Pos3(QPointF* pole, double radius, double angle) {

	return new QPointF(qwtPolar2Pos(*pole, static_cast<double>(radius), static_cast<double>(angle)));
}

QPointF* miqt_QwtDegree2Pos3(QPointF* pole, double radius, double angle) {

	return new QPointF(qwtDegree2Pos(*pole, static_cast<double>(radius), static_cast<double>(angle)));
}

QPointF* miqt_QwtFastPolar2Pos2(QPointF* pole, double radius, double angle) {

	return new QPointF(qwtFastPolar2Pos(*pole, static_cast<double>(radius), static_cast<double>(angle)));
}

QPointF* miqt_QwtFastDegree2Pos2(QPointF* pole, double radius, double angle) {

	return new QPointF(qwtFastDegree2Pos(*pole, static_cast<double>(radius), static_cast<double>(angle)));
}

QwtPointPolar* miqt_QwtFastPos2PolarWithPos(QPointF* pos) {

	return new QwtPointPolar(qwtFastPos2Polar(*pos));
}

