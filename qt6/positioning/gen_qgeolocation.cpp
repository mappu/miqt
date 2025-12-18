#include <QGeoAddress>
#include <QGeoCoordinate>
#include <QGeoLocation>
#include <QGeoShape>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeolocation.h>
#include "gen_qgeolocation.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoLocation* QGeoLocation_new() {
	return new (std::nothrow) QGeoLocation();
}

QGeoLocation* QGeoLocation_new2(QGeoLocation* other) {
	return new (std::nothrow) QGeoLocation(*other);
}

void QGeoLocation_operatorAssign(QGeoLocation* self, QGeoLocation* other) {
	self->operator=(*other);
}

void QGeoLocation_swap(QGeoLocation* self, QGeoLocation* other) {
	self->swap(*other);
}

QGeoAddress* QGeoLocation_address(const QGeoLocation* self) {
	return new QGeoAddress(self->address());
}

void QGeoLocation_setAddress(QGeoLocation* self, QGeoAddress* address) {
	self->setAddress(*address);
}

QGeoCoordinate* QGeoLocation_coordinate(const QGeoLocation* self) {
	return new QGeoCoordinate(self->coordinate());
}

void QGeoLocation_setCoordinate(QGeoLocation* self, QGeoCoordinate* position) {
	self->setCoordinate(*position);
}

QGeoShape* QGeoLocation_boundingShape(const QGeoLocation* self) {
	return new QGeoShape(self->boundingShape());
}

void QGeoLocation_setBoundingShape(QGeoLocation* self, QGeoShape* shape) {
	self->setBoundingShape(*shape);
}

struct miqt_map /* of struct miqt_string to QVariant* */  QGeoLocation_extendedAttributes(const QGeoLocation* self) {
	QVariantMap _ret = self->extendedAttributes();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QGeoLocation_setExtendedAttributes(QGeoLocation* self, struct miqt_map /* of struct miqt_string to QVariant* */  data) {
	QVariantMap data_QMap;
	struct miqt_string* data_karr = static_cast<struct miqt_string*>(data.keys);
	QVariant** data_varr = static_cast<QVariant**>(data.values);
	for(size_t i = 0; i < data.len; ++i) {
		QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
		data_QMap[data_karr_i_QString] = *(data_varr[i]);
	}
	self->setExtendedAttributes(data_QMap);
}

bool QGeoLocation_isEmpty(const QGeoLocation* self) {
	return self->isEmpty();
}

void QGeoLocation_delete(QGeoLocation* self) {
	delete self;
}

