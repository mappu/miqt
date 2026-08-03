#include <QGeoSatelliteInfo>
#include <qgeosatelliteinfo.h>
#include "gen_qgeosatelliteinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoSatelliteInfo* QGeoSatelliteInfo_new() {
	return new (std::nothrow) QGeoSatelliteInfo();
}

QGeoSatelliteInfo* QGeoSatelliteInfo_new2(QGeoSatelliteInfo* other) {
	return new (std::nothrow) QGeoSatelliteInfo(*other);
}

void QGeoSatelliteInfo_operatorAssign(QGeoSatelliteInfo* self, QGeoSatelliteInfo* other) {
	self->operator=(*other);
}

bool QGeoSatelliteInfo_operatorEqual(const QGeoSatelliteInfo* self, QGeoSatelliteInfo* other) {
	return (*self == *other);
}

bool QGeoSatelliteInfo_operatorNotEqual(const QGeoSatelliteInfo* self, QGeoSatelliteInfo* other) {
	return (*self != *other);
}

void QGeoSatelliteInfo_setSatelliteSystem(QGeoSatelliteInfo* self, int system) {
	self->setSatelliteSystem(static_cast<QGeoSatelliteInfo::SatelliteSystem>(system));
}

int QGeoSatelliteInfo_satelliteSystem(const QGeoSatelliteInfo* self) {
	QGeoSatelliteInfo::SatelliteSystem _ret = self->satelliteSystem();
	return static_cast<int>(_ret);
}

void QGeoSatelliteInfo_setSatelliteIdentifier(QGeoSatelliteInfo* self, int satId) {
	self->setSatelliteIdentifier(static_cast<int>(satId));
}

int QGeoSatelliteInfo_satelliteIdentifier(const QGeoSatelliteInfo* self) {
	return self->satelliteIdentifier();
}

void QGeoSatelliteInfo_setSignalStrength(QGeoSatelliteInfo* self, int signalStrength) {
	self->setSignalStrength(static_cast<int>(signalStrength));
}

int QGeoSatelliteInfo_signalStrength(const QGeoSatelliteInfo* self) {
	return self->signalStrength();
}

void QGeoSatelliteInfo_setAttribute(QGeoSatelliteInfo* self, int attribute, double value) {
	self->setAttribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute), static_cast<qreal>(value));
}

double QGeoSatelliteInfo_attribute(const QGeoSatelliteInfo* self, int attribute) {
	qreal _ret = self->attribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute));
	return static_cast<double>(_ret);
}

void QGeoSatelliteInfo_removeAttribute(QGeoSatelliteInfo* self, int attribute) {
	self->removeAttribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute));
}

bool QGeoSatelliteInfo_hasAttribute(const QGeoSatelliteInfo* self, int attribute) {
	return self->hasAttribute(static_cast<QGeoSatelliteInfo::Attribute>(attribute));
}

void QGeoSatelliteInfo_delete(QGeoSatelliteInfo* self) {
	delete self;
}

