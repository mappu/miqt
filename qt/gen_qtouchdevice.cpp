#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTouchDevice>
#include <qtouchdevice.h>
#include "gen_qtouchdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTouchDevice* QTouchDevice_new() {
	return new QTouchDevice();
}

struct miqt_array /* of QTouchDevice* */  QTouchDevice_devices() {
	QList<const QTouchDevice *> _ret = QTouchDevice::devices();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTouchDevice** _arr = static_cast<QTouchDevice**>(malloc(sizeof(QTouchDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = (QTouchDevice*) _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QTouchDevice_name(const QTouchDevice* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTouchDevice_type(const QTouchDevice* self) {
	QTouchDevice::DeviceType _ret = self->type();
	return static_cast<int>(_ret);
}

int QTouchDevice_capabilities(const QTouchDevice* self) {
	QTouchDevice::Capabilities _ret = self->capabilities();
	return static_cast<int>(_ret);
}

int QTouchDevice_maximumTouchPoints(const QTouchDevice* self) {
	return self->maximumTouchPoints();
}

void QTouchDevice_setName(QTouchDevice* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

void QTouchDevice_setType(QTouchDevice* self, int devType) {
	self->setType(static_cast<QTouchDevice::DeviceType>(devType));
}

void QTouchDevice_setCapabilities(QTouchDevice* self, int caps) {
	self->setCapabilities(static_cast<QTouchDevice::Capabilities>(caps));
}

void QTouchDevice_setMaximumTouchPoints(QTouchDevice* self, int max) {
	self->setMaximumTouchPoints(static_cast<int>(max));
}

void QTouchDevice_delete(QTouchDevice* self) {
	delete self;
}

