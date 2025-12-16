#include <QDateTime>
#include <QGeoAreaMonitorInfo>
#include <QGeoShape>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeoareamonitorinfo.h>
#include "gen_qgeoareamonitorinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new() {
	return new (std::nothrow) QGeoAreaMonitorInfo();
}

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new2(QGeoAreaMonitorInfo* other) {
	return new (std::nothrow) QGeoAreaMonitorInfo(*other);
}

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new3(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QGeoAreaMonitorInfo(name_QString);
}

void QGeoAreaMonitorInfo_operatorAssign(QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other) {
	self->operator=(*other);
}

bool QGeoAreaMonitorInfo_operatorEqual(const QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other) {
	return (*self == *other);
}

bool QGeoAreaMonitorInfo_operatorNotEqual(const QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other) {
	return (*self != *other);
}

struct miqt_string QGeoAreaMonitorInfo_name(const QGeoAreaMonitorInfo* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGeoAreaMonitorInfo_setName(QGeoAreaMonitorInfo* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QGeoAreaMonitorInfo_identifier(const QGeoAreaMonitorInfo* self) {
	QString _ret = self->identifier();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGeoAreaMonitorInfo_isValid(const QGeoAreaMonitorInfo* self) {
	return self->isValid();
}

QGeoShape* QGeoAreaMonitorInfo_area(const QGeoAreaMonitorInfo* self) {
	return new QGeoShape(self->area());
}

void QGeoAreaMonitorInfo_setArea(QGeoAreaMonitorInfo* self, QGeoShape* newShape) {
	self->setArea(*newShape);
}

QDateTime* QGeoAreaMonitorInfo_expiration(const QGeoAreaMonitorInfo* self) {
	return new QDateTime(self->expiration());
}

void QGeoAreaMonitorInfo_setExpiration(QGeoAreaMonitorInfo* self, QDateTime* expiry) {
	self->setExpiration(*expiry);
}

bool QGeoAreaMonitorInfo_isPersistent(const QGeoAreaMonitorInfo* self) {
	return self->isPersistent();
}

void QGeoAreaMonitorInfo_setPersistent(QGeoAreaMonitorInfo* self, bool isPersistent) {
	self->setPersistent(isPersistent);
}

struct miqt_map /* of struct miqt_string to QVariant* */  QGeoAreaMonitorInfo_notificationParameters(const QGeoAreaMonitorInfo* self) {
	QVariantMap _ret = self->notificationParameters();
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

void QGeoAreaMonitorInfo_setNotificationParameters(QGeoAreaMonitorInfo* self, struct miqt_map /* of struct miqt_string to QVariant* */  parameters) {
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	self->setNotificationParameters(parameters_QMap);
}

void QGeoAreaMonitorInfo_delete(QGeoAreaMonitorInfo* self) {
	delete self;
}

