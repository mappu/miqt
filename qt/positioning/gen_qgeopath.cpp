#include <QGeoCoordinate>
#include <QGeoPath>
#include <QGeoShape>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeopath.h>
#include "gen_qgeopath.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoPath* QGeoPath_new() {
	return new (std::nothrow) QGeoPath();
}

QGeoPath* QGeoPath_new2(struct miqt_array /* of QGeoCoordinate* */  path) {
	QList<QGeoCoordinate> path_QList;
	path_QList.reserve(path.len);
	QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
	for(size_t i = 0; i < path.len; ++i) {
		path_QList.push_back(*(path_arr[i]));
	}
	return new (std::nothrow) QGeoPath(path_QList);
}

QGeoPath* QGeoPath_new3(QGeoPath* other) {
	return new (std::nothrow) QGeoPath(*other);
}

QGeoPath* QGeoPath_new4(QGeoShape* other) {
	return new (std::nothrow) QGeoPath(*other);
}

QGeoPath* QGeoPath_new5(struct miqt_array /* of QGeoCoordinate* */  path, const double* width) {
	QList<QGeoCoordinate> path_QList;
	path_QList.reserve(path.len);
	QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
	for(size_t i = 0; i < path.len; ++i) {
		path_QList.push_back(*(path_arr[i]));
	}
	return new (std::nothrow) QGeoPath(path_QList, static_cast<const qreal&>(*width));
}

void QGeoPath_virtbase(QGeoPath* src, QGeoShape** outptr_QGeoShape) {
	*outptr_QGeoShape = static_cast<QGeoShape*>(src);
}

void QGeoPath_operatorAssign(QGeoPath* self, QGeoPath* other) {
	self->operator=(*other);
}

bool QGeoPath_operatorEqual(const QGeoPath* self, QGeoPath* other) {
	return (*self == *other);
}

bool QGeoPath_operatorNotEqual(const QGeoPath* self, QGeoPath* other) {
	return (*self != *other);
}

void QGeoPath_setPath(QGeoPath* self, struct miqt_array /* of QGeoCoordinate* */  path) {
	QList<QGeoCoordinate> path_QList;
	path_QList.reserve(path.len);
	QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
	for(size_t i = 0; i < path.len; ++i) {
		path_QList.push_back(*(path_arr[i]));
	}
	self->setPath(path_QList);
}

struct miqt_array /* of QGeoCoordinate* */  QGeoPath_path(const QGeoPath* self) {
	const QList<QGeoCoordinate>& _ret = self->path();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGeoCoordinate** _arr = static_cast<QGeoCoordinate**>(malloc(sizeof(QGeoCoordinate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGeoCoordinate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGeoPath_clearPath(QGeoPath* self) {
	self->clearPath();
}

void QGeoPath_setVariantPath(QGeoPath* self, struct miqt_array /* of QVariant* */  path) {
	QVariantList path_QList;
	path_QList.reserve(path.len);
	QVariant** path_arr = static_cast<QVariant**>(path.data);
	for(size_t i = 0; i < path.len; ++i) {
		path_QList.push_back(*(path_arr[i]));
	}
	self->setVariantPath(path_QList);
}

struct miqt_array /* of QVariant* */  QGeoPath_variantPath(const QGeoPath* self) {
	QVariantList _ret = self->variantPath();
	// Convert QList<> from C++ memory to manually-managed C memory
	QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QVariant(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGeoPath_setWidth(QGeoPath* self, const double* width) {
	self->setWidth(static_cast<const qreal&>(*width));
}

double QGeoPath_width(const QGeoPath* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

void QGeoPath_translate(QGeoPath* self, double degreesLatitude, double degreesLongitude) {
	self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoPath* QGeoPath_translated(const QGeoPath* self, double degreesLatitude, double degreesLongitude) {
	return new QGeoPath(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

double QGeoPath_length(const QGeoPath* self) {
	return self->length();
}

int QGeoPath_size(const QGeoPath* self) {
	return self->size();
}

void QGeoPath_addCoordinate(QGeoPath* self, QGeoCoordinate* coordinate) {
	self->addCoordinate(*coordinate);
}

void QGeoPath_insertCoordinate(QGeoPath* self, int index, QGeoCoordinate* coordinate) {
	self->insertCoordinate(static_cast<int>(index), *coordinate);
}

void QGeoPath_replaceCoordinate(QGeoPath* self, int index, QGeoCoordinate* coordinate) {
	self->replaceCoordinate(static_cast<int>(index), *coordinate);
}

QGeoCoordinate* QGeoPath_coordinateAt(const QGeoPath* self, int index) {
	return new QGeoCoordinate(self->coordinateAt(static_cast<int>(index)));
}

bool QGeoPath_containsCoordinate(const QGeoPath* self, QGeoCoordinate* coordinate) {
	return self->containsCoordinate(*coordinate);
}

void QGeoPath_removeCoordinate(QGeoPath* self, QGeoCoordinate* coordinate) {
	self->removeCoordinate(*coordinate);
}

void QGeoPath_removeCoordinateWithIndex(QGeoPath* self, int index) {
	self->removeCoordinate(static_cast<int>(index));
}

struct miqt_string QGeoPath_toString(const QGeoPath* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QGeoPath_lengthWithIndexFrom(const QGeoPath* self, int indexFrom) {
	return self->length(static_cast<int>(indexFrom));
}

double QGeoPath_length2(const QGeoPath* self, int indexFrom, int indexTo) {
	return self->length(static_cast<int>(indexFrom), static_cast<int>(indexTo));
}

void QGeoPath_delete(QGeoPath* self) {
	delete self;
}

