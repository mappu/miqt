#include <QGeoCoordinate>
#include <QGeoRectangle>
#include <QGeoShape>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeorectangle.h>
#include "gen_qgeorectangle.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoRectangle* QGeoRectangle_new() {
	return new (std::nothrow) QGeoRectangle();
}

QGeoRectangle* QGeoRectangle_new2(QGeoCoordinate* center, double degreesWidth, double degreesHeight) {
	return new (std::nothrow) QGeoRectangle(*center, static_cast<double>(degreesWidth), static_cast<double>(degreesHeight));
}

QGeoRectangle* QGeoRectangle_new3(QGeoCoordinate* topLeft, QGeoCoordinate* bottomRight) {
	return new (std::nothrow) QGeoRectangle(*topLeft, *bottomRight);
}

QGeoRectangle* QGeoRectangle_new4(struct miqt_array /* of QGeoCoordinate* */  coordinates) {
	QList<QGeoCoordinate> coordinates_QList;
	coordinates_QList.reserve(coordinates.len);
	QGeoCoordinate** coordinates_arr = static_cast<QGeoCoordinate**>(coordinates.data);
	for(size_t i = 0; i < coordinates.len; ++i) {
		coordinates_QList.push_back(*(coordinates_arr[i]));
	}
	return new (std::nothrow) QGeoRectangle(coordinates_QList);
}

QGeoRectangle* QGeoRectangle_new5(QGeoRectangle* other) {
	return new (std::nothrow) QGeoRectangle(*other);
}

QGeoRectangle* QGeoRectangle_new6(QGeoShape* other) {
	return new (std::nothrow) QGeoRectangle(*other);
}

void QGeoRectangle_virtbase(QGeoRectangle* src, QGeoShape** outptr_QGeoShape) {
	*outptr_QGeoShape = static_cast<QGeoShape*>(src);
}

void QGeoRectangle_operatorAssign(QGeoRectangle* self, QGeoRectangle* other) {
	self->operator=(*other);
}

void QGeoRectangle_setTopLeft(QGeoRectangle* self, QGeoCoordinate* topLeft) {
	self->setTopLeft(*topLeft);
}

QGeoCoordinate* QGeoRectangle_topLeft(const QGeoRectangle* self) {
	return new QGeoCoordinate(self->topLeft());
}

void QGeoRectangle_setTopRight(QGeoRectangle* self, QGeoCoordinate* topRight) {
	self->setTopRight(*topRight);
}

QGeoCoordinate* QGeoRectangle_topRight(const QGeoRectangle* self) {
	return new QGeoCoordinate(self->topRight());
}

void QGeoRectangle_setBottomLeft(QGeoRectangle* self, QGeoCoordinate* bottomLeft) {
	self->setBottomLeft(*bottomLeft);
}

QGeoCoordinate* QGeoRectangle_bottomLeft(const QGeoRectangle* self) {
	return new QGeoCoordinate(self->bottomLeft());
}

void QGeoRectangle_setBottomRight(QGeoRectangle* self, QGeoCoordinate* bottomRight) {
	self->setBottomRight(*bottomRight);
}

QGeoCoordinate* QGeoRectangle_bottomRight(const QGeoRectangle* self) {
	return new QGeoCoordinate(self->bottomRight());
}

void QGeoRectangle_setCenter(QGeoRectangle* self, QGeoCoordinate* center) {
	self->setCenter(*center);
}

QGeoCoordinate* QGeoRectangle_center(const QGeoRectangle* self) {
	return new QGeoCoordinate(self->center());
}

void QGeoRectangle_setWidth(QGeoRectangle* self, double degreesWidth) {
	self->setWidth(static_cast<double>(degreesWidth));
}

double QGeoRectangle_width(const QGeoRectangle* self) {
	return self->width();
}

void QGeoRectangle_setHeight(QGeoRectangle* self, double degreesHeight) {
	self->setHeight(static_cast<double>(degreesHeight));
}

double QGeoRectangle_height(const QGeoRectangle* self) {
	return self->height();
}

bool QGeoRectangle_contains(const QGeoRectangle* self, QGeoRectangle* rectangle) {
	return self->contains(*rectangle);
}

bool QGeoRectangle_intersects(const QGeoRectangle* self, QGeoRectangle* rectangle) {
	return self->intersects(*rectangle);
}

void QGeoRectangle_translate(QGeoRectangle* self, double degreesLatitude, double degreesLongitude) {
	self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoRectangle* QGeoRectangle_translated(const QGeoRectangle* self, double degreesLatitude, double degreesLongitude) {
	return new QGeoRectangle(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

void QGeoRectangle_extendRectangle(QGeoRectangle* self, QGeoCoordinate* coordinate) {
	self->extendRectangle(*coordinate);
}

QGeoRectangle* QGeoRectangle_united(const QGeoRectangle* self, QGeoRectangle* rectangle) {
	return new QGeoRectangle(self->united(*rectangle));
}

QGeoRectangle* QGeoRectangle_operatorBitwiseOr(const QGeoRectangle* self, QGeoRectangle* rectangle) {
	return new QGeoRectangle(self->operator|(*rectangle));
}

void QGeoRectangle_operatorBitwiseOrAssign(QGeoRectangle* self, QGeoRectangle* rectangle) {
	self->operator|=(*rectangle);
}

struct miqt_string QGeoRectangle_toString(const QGeoRectangle* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGeoRectangle_delete(QGeoRectangle* self) {
	delete self;
}

