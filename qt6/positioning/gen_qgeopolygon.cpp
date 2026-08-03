#include <QGeoCoordinate>
#include <QGeoPolygon>
#include <QGeoShape>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeopolygon.h>
#include "gen_qgeopolygon.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoPolygon* QGeoPolygon_new() {
	return new (std::nothrow) QGeoPolygon();
}

QGeoPolygon* QGeoPolygon_new2(struct miqt_array /* of QGeoCoordinate* */  path) {
	QList<QGeoCoordinate> path_QList;
	path_QList.reserve(path.len);
	QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
	for(size_t i = 0; i < path.len; ++i) {
		path_QList.push_back(*(path_arr[i]));
	}
	return new (std::nothrow) QGeoPolygon(path_QList);
}

QGeoPolygon* QGeoPolygon_new3(QGeoPolygon* other) {
	return new (std::nothrow) QGeoPolygon(*other);
}

QGeoPolygon* QGeoPolygon_new4(QGeoShape* other) {
	return new (std::nothrow) QGeoPolygon(*other);
}

void QGeoPolygon_virtbase(QGeoPolygon* src, QGeoShape** outptr_QGeoShape) {
	*outptr_QGeoShape = static_cast<QGeoShape*>(src);
}

void QGeoPolygon_operatorAssign(QGeoPolygon* self, QGeoPolygon* other) {
	self->operator=(*other);
}

void QGeoPolygon_setPerimeter(QGeoPolygon* self, struct miqt_array /* of QGeoCoordinate* */  path) {
	QList<QGeoCoordinate> path_QList;
	path_QList.reserve(path.len);
	QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
	for(size_t i = 0; i < path.len; ++i) {
		path_QList.push_back(*(path_arr[i]));
	}
	self->setPerimeter(path_QList);
}

struct miqt_array /* of QGeoCoordinate* */  QGeoPolygon_perimeter(const QGeoPolygon* self) {
	const QList<QGeoCoordinate>& _ret = self->perimeter();
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

void QGeoPolygon_addHole(QGeoPolygon* self, QVariant* holePath) {
	self->addHole(*holePath);
}

void QGeoPolygon_addHoleWithHolePath(QGeoPolygon* self, struct miqt_array /* of QGeoCoordinate* */  holePath) {
	QList<QGeoCoordinate> holePath_QList;
	holePath_QList.reserve(holePath.len);
	QGeoCoordinate** holePath_arr = static_cast<QGeoCoordinate**>(holePath.data);
	for(size_t i = 0; i < holePath.len; ++i) {
		holePath_QList.push_back(*(holePath_arr[i]));
	}
	self->addHole(holePath_QList);
}

struct miqt_array /* of QVariant* */  QGeoPolygon_hole(const QGeoPolygon* self, ptrdiff_t index) {
	const QVariantList _ret = self->hole((qsizetype)(index));
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

struct miqt_array /* of QGeoCoordinate* */  QGeoPolygon_holePath(const QGeoPolygon* self, ptrdiff_t index) {
	const QList<QGeoCoordinate> _ret = self->holePath((qsizetype)(index));
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

void QGeoPolygon_removeHole(QGeoPolygon* self, ptrdiff_t index) {
	self->removeHole((qsizetype)(index));
}

ptrdiff_t QGeoPolygon_holesCount(const QGeoPolygon* self) {
	qsizetype _ret = self->holesCount();
	return static_cast<ptrdiff_t>(_ret);
}

void QGeoPolygon_translate(QGeoPolygon* self, double degreesLatitude, double degreesLongitude) {
	self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoPolygon* QGeoPolygon_translated(const QGeoPolygon* self, double degreesLatitude, double degreesLongitude) {
	return new QGeoPolygon(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

double QGeoPolygon_length(const QGeoPolygon* self) {
	return self->length();
}

ptrdiff_t QGeoPolygon_size(const QGeoPolygon* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

void QGeoPolygon_addCoordinate(QGeoPolygon* self, QGeoCoordinate* coordinate) {
	self->addCoordinate(*coordinate);
}

void QGeoPolygon_insertCoordinate(QGeoPolygon* self, ptrdiff_t index, QGeoCoordinate* coordinate) {
	self->insertCoordinate((qsizetype)(index), *coordinate);
}

void QGeoPolygon_replaceCoordinate(QGeoPolygon* self, ptrdiff_t index, QGeoCoordinate* coordinate) {
	self->replaceCoordinate((qsizetype)(index), *coordinate);
}

QGeoCoordinate* QGeoPolygon_coordinateAt(const QGeoPolygon* self, ptrdiff_t index) {
	return new QGeoCoordinate(self->coordinateAt((qsizetype)(index)));
}

bool QGeoPolygon_containsCoordinate(const QGeoPolygon* self, QGeoCoordinate* coordinate) {
	return self->containsCoordinate(*coordinate);
}

void QGeoPolygon_removeCoordinate(QGeoPolygon* self, QGeoCoordinate* coordinate) {
	self->removeCoordinate(*coordinate);
}

void QGeoPolygon_removeCoordinateWithIndex(QGeoPolygon* self, ptrdiff_t index) {
	self->removeCoordinate((qsizetype)(index));
}

struct miqt_string QGeoPolygon_toString(const QGeoPolygon* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QGeoPolygon_lengthWithIndexFrom(const QGeoPolygon* self, ptrdiff_t indexFrom) {
	return self->length((qsizetype)(indexFrom));
}

double QGeoPolygon_length2(const QGeoPolygon* self, ptrdiff_t indexFrom, ptrdiff_t indexTo) {
	return self->length((qsizetype)(indexFrom), (qsizetype)(indexTo));
}

void QGeoPolygon_delete(QGeoPolygon* self) {
	delete self;
}

