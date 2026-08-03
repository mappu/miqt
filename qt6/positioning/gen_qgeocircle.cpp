#include <QGeoCircle>
#include <QGeoCoordinate>
#include <QGeoShape>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeocircle.h>
#include "gen_qgeocircle.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoCircle* QGeoCircle_new() {
	return new (std::nothrow) QGeoCircle();
}

QGeoCircle* QGeoCircle_new2(QGeoCoordinate* center) {
	return new (std::nothrow) QGeoCircle(*center);
}

QGeoCircle* QGeoCircle_new3(QGeoCircle* other) {
	return new (std::nothrow) QGeoCircle(*other);
}

QGeoCircle* QGeoCircle_new4(QGeoShape* other) {
	return new (std::nothrow) QGeoCircle(*other);
}

QGeoCircle* QGeoCircle_new5(QGeoCoordinate* center, double radius) {
	return new (std::nothrow) QGeoCircle(*center, static_cast<qreal>(radius));
}

void QGeoCircle_virtbase(QGeoCircle* src, QGeoShape** outptr_QGeoShape) {
	*outptr_QGeoShape = static_cast<QGeoShape*>(src);
}

void QGeoCircle_operatorAssign(QGeoCircle* self, QGeoCircle* other) {
	self->operator=(*other);
}

void QGeoCircle_setCenter(QGeoCircle* self, QGeoCoordinate* center) {
	self->setCenter(*center);
}

QGeoCoordinate* QGeoCircle_center(const QGeoCircle* self) {
	return new QGeoCoordinate(self->center());
}

void QGeoCircle_setRadius(QGeoCircle* self, double radius) {
	self->setRadius(static_cast<qreal>(radius));
}

double QGeoCircle_radius(const QGeoCircle* self) {
	qreal _ret = self->radius();
	return static_cast<double>(_ret);
}

void QGeoCircle_translate(QGeoCircle* self, double degreesLatitude, double degreesLongitude) {
	self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoCircle* QGeoCircle_translated(const QGeoCircle* self, double degreesLatitude, double degreesLongitude) {
	return new QGeoCircle(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

void QGeoCircle_extendCircle(QGeoCircle* self, QGeoCoordinate* coordinate) {
	self->extendCircle(*coordinate);
}

struct miqt_string QGeoCircle_toString(const QGeoCircle* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGeoCircle_delete(QGeoCircle* self) {
	delete self;
}

