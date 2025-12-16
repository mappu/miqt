#include <QGeoCoordinate>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeocoordinate.h>
#include "gen_qgeocoordinate.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoCoordinate* QGeoCoordinate_new() {
	return new (std::nothrow) QGeoCoordinate();
}

QGeoCoordinate* QGeoCoordinate_new2(double latitude, double longitude) {
	return new (std::nothrow) QGeoCoordinate(static_cast<double>(latitude), static_cast<double>(longitude));
}

QGeoCoordinate* QGeoCoordinate_new3(double latitude, double longitude, double altitude) {
	return new (std::nothrow) QGeoCoordinate(static_cast<double>(latitude), static_cast<double>(longitude), static_cast<double>(altitude));
}

QGeoCoordinate* QGeoCoordinate_new4(QGeoCoordinate* other) {
	return new (std::nothrow) QGeoCoordinate(*other);
}

void QGeoCoordinate_operatorAssign(QGeoCoordinate* self, QGeoCoordinate* other) {
	self->operator=(*other);
}

bool QGeoCoordinate_operatorEqual(const QGeoCoordinate* self, QGeoCoordinate* other) {
	return (*self == *other);
}

bool QGeoCoordinate_operatorNotEqual(const QGeoCoordinate* self, QGeoCoordinate* other) {
	return (*self != *other);
}

bool QGeoCoordinate_isValid(const QGeoCoordinate* self) {
	return self->isValid();
}

int QGeoCoordinate_type(const QGeoCoordinate* self) {
	QGeoCoordinate::CoordinateType _ret = self->type();
	return static_cast<int>(_ret);
}

void QGeoCoordinate_setLatitude(QGeoCoordinate* self, double latitude) {
	self->setLatitude(static_cast<double>(latitude));
}

double QGeoCoordinate_latitude(const QGeoCoordinate* self) {
	return self->latitude();
}

void QGeoCoordinate_setLongitude(QGeoCoordinate* self, double longitude) {
	self->setLongitude(static_cast<double>(longitude));
}

double QGeoCoordinate_longitude(const QGeoCoordinate* self) {
	return self->longitude();
}

void QGeoCoordinate_setAltitude(QGeoCoordinate* self, double altitude) {
	self->setAltitude(static_cast<double>(altitude));
}

double QGeoCoordinate_altitude(const QGeoCoordinate* self) {
	return self->altitude();
}

double QGeoCoordinate_distanceTo(const QGeoCoordinate* self, QGeoCoordinate* other) {
	qreal _ret = self->distanceTo(*other);
	return static_cast<double>(_ret);
}

double QGeoCoordinate_azimuthTo(const QGeoCoordinate* self, QGeoCoordinate* other) {
	qreal _ret = self->azimuthTo(*other);
	return static_cast<double>(_ret);
}

QGeoCoordinate* QGeoCoordinate_atDistanceAndAzimuth(const QGeoCoordinate* self, double distance, double azimuth) {
	return new QGeoCoordinate(self->atDistanceAndAzimuth(static_cast<qreal>(distance), static_cast<qreal>(azimuth)));
}

struct miqt_string QGeoCoordinate_toString(const QGeoCoordinate* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGeoCoordinate* QGeoCoordinate_atDistanceAndAzimuth2(const QGeoCoordinate* self, double distance, double azimuth, double distanceUp) {
	return new QGeoCoordinate(self->atDistanceAndAzimuth(static_cast<qreal>(distance), static_cast<qreal>(azimuth), static_cast<qreal>(distanceUp)));
}

struct miqt_string QGeoCoordinate_toStringWithFormat(const QGeoCoordinate* self, int format) {
	QString _ret = self->toString(static_cast<QGeoCoordinate::CoordinateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGeoCoordinate_delete(QGeoCoordinate* self) {
	delete self;
}

