#include <QEventPoint>
#include <QInputDevice>
#include <QMetaObject>
#include <QObject>
#include <QPointerEvent>
#include <QPointingDevice>
#include <QPointingDeviceUniqueId>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpointingdevice.h>
#include "gen_qpointingdevice.h"
#include "_cgo_export.h"

void QPointingDeviceUniqueId_new(QPointingDeviceUniqueId** outptr_QPointingDeviceUniqueId) {
	QPointingDeviceUniqueId* ret = new QPointingDeviceUniqueId();
	*outptr_QPointingDeviceUniqueId = ret;
}

void QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1, QPointingDeviceUniqueId** outptr_QPointingDeviceUniqueId) {
	QPointingDeviceUniqueId* ret = new QPointingDeviceUniqueId(*param1);
	*outptr_QPointingDeviceUniqueId = ret;
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id) {
	return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(static_cast<qint64>(id)));
}

bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self) {
	return self->isValid();
}

long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self) {
	qint64 _ret = self->numericId();
	return static_cast<long long>(_ret);
}

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPointingDeviceUniqueId*>( self );
	} else {
		delete self;
	}
}

void QPointingDevice_new(QPointingDevice** outptr_QPointingDevice, QInputDevice** outptr_QInputDevice, QObject** outptr_QObject) {
	QPointingDevice* ret = new QPointingDevice();
	*outptr_QPointingDevice = ret;
	*outptr_QInputDevice = static_cast<QInputDevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QPointingDevice_new2(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, QPointingDevice** outptr_QPointingDevice, QInputDevice** outptr_QInputDevice, QObject** outptr_QObject) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QPointingDevice* ret = new QPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount));
	*outptr_QPointingDevice = ret;
	*outptr_QInputDevice = static_cast<QInputDevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QPointingDevice_new3(QObject* parent, QPointingDevice** outptr_QPointingDevice, QInputDevice** outptr_QInputDevice, QObject** outptr_QObject) {
	QPointingDevice* ret = new QPointingDevice(parent);
	*outptr_QPointingDevice = ret;
	*outptr_QInputDevice = static_cast<QInputDevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QPointingDevice_new4(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDevice** outptr_QPointingDevice, QInputDevice** outptr_QInputDevice, QObject** outptr_QObject) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	QPointingDevice* ret = new QPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString);
	*outptr_QPointingDevice = ret;
	*outptr_QInputDevice = static_cast<QInputDevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QPointingDevice_new5(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId, QPointingDevice** outptr_QPointingDevice, QInputDevice** outptr_QInputDevice, QObject** outptr_QObject) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	QPointingDevice* ret = new QPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId);
	*outptr_QPointingDevice = ret;
	*outptr_QInputDevice = static_cast<QInputDevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QPointingDevice_new6(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent, QPointingDevice** outptr_QPointingDevice, QInputDevice** outptr_QInputDevice, QObject** outptr_QObject) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	QPointingDevice* ret = new QPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId, parent);
	*outptr_QPointingDevice = ret;
	*outptr_QInputDevice = static_cast<QInputDevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QPointingDevice_MetaObject(const QPointingDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPointingDevice_Metacast(QPointingDevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPointingDevice_Tr(const char* s) {
	QString _ret = QPointingDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPointingDevice_SetType(QPointingDevice* self, int devType) {
	self->setType(static_cast<QInputDevice::DeviceType>(devType));
}

void QPointingDevice_SetCapabilities(QPointingDevice* self, int caps) {
	self->setCapabilities(static_cast<QInputDevice::Capabilities>(caps));
}

void QPointingDevice_SetMaximumTouchPoints(QPointingDevice* self, int c) {
	self->setMaximumTouchPoints(static_cast<int>(c));
}

int QPointingDevice_PointerType(const QPointingDevice* self) {
	QPointingDevice::PointerType _ret = self->pointerType();
	return static_cast<int>(_ret);
}

int QPointingDevice_MaximumPoints(const QPointingDevice* self) {
	return self->maximumPoints();
}

int QPointingDevice_ButtonCount(const QPointingDevice* self) {
	return self->buttonCount();
}

QPointingDeviceUniqueId* QPointingDevice_UniqueId(const QPointingDevice* self) {
	return new QPointingDeviceUniqueId(self->uniqueId());
}

QPointingDevice* QPointingDevice_PrimaryPointingDevice() {
	return (QPointingDevice*) QPointingDevice::primaryPointingDevice();
}

bool QPointingDevice_OperatorEqual(const QPointingDevice* self, QPointingDevice* other) {
	return (*self == *other);
}

void QPointingDevice_GrabChanged(const QPointingDevice* self, QObject* grabber, int transition, QPointerEvent* event, QEventPoint* point) {
	self->grabChanged(grabber, static_cast<QPointingDevice::GrabTransition>(transition), event, *point);
}

void QPointingDevice_connect_GrabChanged(QPointingDevice* self, intptr_t slot) {
	QPointingDevice::connect(self, static_cast<void (QPointingDevice::*)(QObject*, QPointingDevice::GrabTransition, const QPointerEvent*, const QEventPoint&) const>(&QPointingDevice::grabChanged), self, [=](QObject* grabber, QPointingDevice::GrabTransition transition, const QPointerEvent* event, const QEventPoint& point) {
		QObject* sigval1 = grabber;
		QPointingDevice::GrabTransition transition_ret = transition;
		int sigval2 = static_cast<int>(transition_ret);
		QPointerEvent* sigval3 = (QPointerEvent*) event;
		const QEventPoint& point_ret = point;
		// Cast returned reference into pointer
		QEventPoint* sigval4 = const_cast<QEventPoint*>(&point_ret);
		miqt_exec_callback_QPointingDevice_GrabChanged(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

struct miqt_string QPointingDevice_Tr2(const char* s, const char* c) {
	QString _ret = QPointingDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPointingDevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPointingDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointingDevice* QPointingDevice_PrimaryPointingDevice1(struct miqt_string seatName) {
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return (QPointingDevice*) QPointingDevice::primaryPointingDevice(seatName_QString);
}

void QPointingDevice_Delete(QPointingDevice* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPointingDevice*>( self );
	} else {
		delete self;
	}
}

