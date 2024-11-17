#include <QInputDevice>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qinputdevice.h>
#include "gen_qinputdevice.h"
#include "_cgo_export.h"

QInputDevice* QInputDevice_new() {
	return new QInputDevice();
}

QInputDevice* QInputDevice_new2(struct miqt_string name, long long systemId, int typeVal) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(typeVal));
}

QInputDevice* QInputDevice_new3(QObject* parent) {
	return new QInputDevice(parent);
}

QInputDevice* QInputDevice_new4(struct miqt_string name, long long systemId, int typeVal, struct miqt_string seatName) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new QInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(typeVal), seatName_QString);
}

QInputDevice* QInputDevice_new5(struct miqt_string name, long long systemId, int typeVal, struct miqt_string seatName, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new QInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(typeVal), seatName_QString, parent);
}

QMetaObject* QInputDevice_MetaObject(const QInputDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QInputDevice_Metacast(QInputDevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QInputDevice_Tr(const char* s) {
	QString _ret = QInputDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDevice_Name(const QInputDevice* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputDevice_Type(const QInputDevice* self) {
	QInputDevice::DeviceType _ret = self->type();
	return static_cast<int>(_ret);
}

int QInputDevice_Capabilities(const QInputDevice* self) {
	QInputDevice::Capabilities _ret = self->capabilities();
	return static_cast<int>(_ret);
}

bool QInputDevice_HasCapability(const QInputDevice* self, int cap) {
	return self->hasCapability(static_cast<QInputDevice::Capability>(cap));
}

long long QInputDevice_SystemId(const QInputDevice* self) {
	qint64 _ret = self->systemId();
	return static_cast<long long>(_ret);
}

struct miqt_string QInputDevice_SeatName(const QInputDevice* self) {
	QString _ret = self->seatName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRect* QInputDevice_AvailableVirtualGeometry(const QInputDevice* self) {
	return new QRect(self->availableVirtualGeometry());
}

struct miqt_array /* of struct miqt_string */  QInputDevice_SeatNames() {
	QStringList _ret = QInputDevice::seatNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QInputDevice* */  QInputDevice_Devices() {
	QList<const QInputDevice *> _ret = QInputDevice::devices();
	// Convert QList<> from C++ memory to manually-managed C memory
	QInputDevice** _arr = static_cast<QInputDevice**>(malloc(sizeof(QInputDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = (QInputDevice*) _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QInputDevice* QInputDevice_PrimaryKeyboard() {
	return (QInputDevice*) QInputDevice::primaryKeyboard();
}

bool QInputDevice_OperatorEqual(const QInputDevice* self, QInputDevice* other) {
	return self->operator==(*other);
}

void QInputDevice_AvailableVirtualGeometryChanged(QInputDevice* self, QRect* area) {
	self->availableVirtualGeometryChanged(*area);
}

void QInputDevice_connect_AvailableVirtualGeometryChanged(QInputDevice* self, intptr_t slot) {
	QInputDevice::connect(self, static_cast<void (QInputDevice::*)(QRect)>(&QInputDevice::availableVirtualGeometryChanged), self, [=](QRect area) {
		QRect* sigval1 = new QRect(area);
		miqt_exec_callback_QInputDevice_AvailableVirtualGeometryChanged(slot, sigval1);
	});
}

struct miqt_string QInputDevice_Tr2(const char* s, const char* c) {
	QString _ret = QInputDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QInputDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QInputDevice* QInputDevice_PrimaryKeyboard1(struct miqt_string seatName) {
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return (QInputDevice*) QInputDevice::primaryKeyboard(seatName_QString);
}

void QInputDevice_Delete(QInputDevice* self) {
	delete self;
}

