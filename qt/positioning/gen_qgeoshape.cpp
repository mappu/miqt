#include <QGeoCoordinate>
#include <QGeoRectangle>
#include <QGeoShape>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeoshape.h>
#include "gen_qgeoshape.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoShape* QGeoShape_new() {
	return new (std::nothrow) QGeoShape();
}

QGeoShape* QGeoShape_new2(QGeoShape* other) {
	return new (std::nothrow) QGeoShape(*other);
}

int QGeoShape_type(const QGeoShape* self) {
	QGeoShape::ShapeType _ret = self->type();
	return static_cast<int>(_ret);
}

bool QGeoShape_isValid(const QGeoShape* self) {
	return self->isValid();
}

bool QGeoShape_isEmpty(const QGeoShape* self) {
	return self->isEmpty();
}

bool QGeoShape_contains(const QGeoShape* self, QGeoCoordinate* coordinate) {
	return self->contains(*coordinate);
}

QGeoRectangle* QGeoShape_boundingGeoRectangle(const QGeoShape* self) {
	return new QGeoRectangle(self->boundingGeoRectangle());
}

QGeoCoordinate* QGeoShape_center(const QGeoShape* self) {
	return new QGeoCoordinate(self->center());
}

void QGeoShape_extendShape(QGeoShape* self, QGeoCoordinate* coordinate) {
	self->extendShape(*coordinate);
}

bool QGeoShape_operatorEqual(const QGeoShape* self, QGeoShape* other) {
	return (*self == *other);
}

bool QGeoShape_operatorNotEqual(const QGeoShape* self, QGeoShape* other) {
	return (*self != *other);
}

void QGeoShape_operatorAssign(QGeoShape* self, QGeoShape* other) {
	self->operator=(*other);
}

struct miqt_string QGeoShape_toString(const QGeoShape* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGeoShape_delete(QGeoShape* self) {
	delete self;
}

