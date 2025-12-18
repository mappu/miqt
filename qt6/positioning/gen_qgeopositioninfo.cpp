#include <QDateTime>
#include <QGeoCoordinate>
#include <QGeoPositionInfo>
#include <qgeopositioninfo.h>
#include "gen_qgeopositioninfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoPositionInfo* QGeoPositionInfo_new() {
	return new (std::nothrow) QGeoPositionInfo();
}

QGeoPositionInfo* QGeoPositionInfo_new2(QGeoCoordinate* coordinate, QDateTime* updateTime) {
	return new (std::nothrow) QGeoPositionInfo(*coordinate, *updateTime);
}

QGeoPositionInfo* QGeoPositionInfo_new3(QGeoPositionInfo* other) {
	return new (std::nothrow) QGeoPositionInfo(*other);
}

void QGeoPositionInfo_operatorAssign(QGeoPositionInfo* self, QGeoPositionInfo* other) {
	self->operator=(*other);
}

void QGeoPositionInfo_swap(QGeoPositionInfo* self, QGeoPositionInfo* other) {
	self->swap(*other);
}

bool QGeoPositionInfo_isValid(const QGeoPositionInfo* self) {
	return self->isValid();
}

void QGeoPositionInfo_setTimestamp(QGeoPositionInfo* self, QDateTime* timestamp) {
	self->setTimestamp(*timestamp);
}

QDateTime* QGeoPositionInfo_timestamp(const QGeoPositionInfo* self) {
	return new QDateTime(self->timestamp());
}

void QGeoPositionInfo_setCoordinate(QGeoPositionInfo* self, QGeoCoordinate* coordinate) {
	self->setCoordinate(*coordinate);
}

QGeoCoordinate* QGeoPositionInfo_coordinate(const QGeoPositionInfo* self) {
	return new QGeoCoordinate(self->coordinate());
}

void QGeoPositionInfo_setAttribute(QGeoPositionInfo* self, int attribute, double value) {
	self->setAttribute(static_cast<QGeoPositionInfo::Attribute>(attribute), static_cast<qreal>(value));
}

double QGeoPositionInfo_attribute(const QGeoPositionInfo* self, int attribute) {
	qreal _ret = self->attribute(static_cast<QGeoPositionInfo::Attribute>(attribute));
	return static_cast<double>(_ret);
}

void QGeoPositionInfo_removeAttribute(QGeoPositionInfo* self, int attribute) {
	self->removeAttribute(static_cast<QGeoPositionInfo::Attribute>(attribute));
}

bool QGeoPositionInfo_hasAttribute(const QGeoPositionInfo* self, int attribute) {
	return self->hasAttribute(static_cast<QGeoPositionInfo::Attribute>(attribute));
}

void QGeoPositionInfo_detach(QGeoPositionInfo* self) {
	self->detach();
}

void QGeoPositionInfo_delete(QGeoPositionInfo* self) {
	delete self;
}

