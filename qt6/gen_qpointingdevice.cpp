#include <QChildEvent>
#include <QEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointerEvent>
#include <QPointingDevice>
#include <QPointingDeviceUniqueId>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpointingdevice.h>
#include "gen_qpointingdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPointingDevice_GrabChanged(intptr_t, QObject*, int, QPointerEvent*, QEventPoint*);
bool miqt_exec_callback_QPointingDevice_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QPointingDevice_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPointingDevice_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPointingDevice_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPointingDevice_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPointingDevice_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPointingDevice_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new() {
	return new QPointingDeviceUniqueId();
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1) {
	return new QPointingDeviceUniqueId(*param1);
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

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self) {
	delete self;
}

class MiqtVirtualQPointingDevice final : public QPointingDevice {
public:

	MiqtVirtualQPointingDevice(): QPointingDevice() {};
	MiqtVirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QInputDevice::Capabilities caps, int maxPoints, int buttonCount): QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount) {};
	MiqtVirtualQPointingDevice(QObject* parent): QPointingDevice(parent) {};
	MiqtVirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QInputDevice::Capabilities caps, int maxPoints, int buttonCount, const QString& seatName): QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName) {};
	MiqtVirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QInputDevice::Capabilities caps, int maxPoints, int buttonCount, const QString& seatName, QPointingDeviceUniqueId uniqueId): QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId) {};
	MiqtVirtualQPointingDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QInputDevice::Capabilities caps, int maxPoints, int buttonCount, const QString& seatName, QPointingDeviceUniqueId uniqueId, QObject* parent): QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId, parent) {};

	virtual ~MiqtVirtualQPointingDevice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPointingDevice::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPointingDevice_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPointingDevice::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QPointingDevice::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPointingDevice_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QPointingDevice::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPointingDevice::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPointingDevice_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPointingDevice::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPointingDevice::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPointingDevice_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPointingDevice::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPointingDevice::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPointingDevice_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPointingDevice::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPointingDevice::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPointingDevice_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPointingDevice::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPointingDevice::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPointingDevice_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPointingDevice::disconnectNotify(*signal);

	}

};

QPointingDevice* QPointingDevice_new() {
	return new MiqtVirtualQPointingDevice();
}

QPointingDevice* QPointingDevice_new2(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount));
}

QPointingDevice* QPointingDevice_new3(QObject* parent) {
	return new MiqtVirtualQPointingDevice(parent);
}

QPointingDevice* QPointingDevice_new4(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new MiqtVirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString);
}

QPointingDevice* QPointingDevice_new5(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new MiqtVirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId);
}

QPointingDevice* QPointingDevice_new6(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new MiqtVirtualQPointingDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId, parent);
}

void QPointingDevice_virtbase(QPointingDevice* src, QInputDevice** outptr_QInputDevice) {
	*outptr_QInputDevice = static_cast<QInputDevice*>(src);
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
	MiqtVirtualQPointingDevice::connect(self, static_cast<void (QPointingDevice::*)(QObject*, QPointingDevice::GrabTransition, const QPointerEvent*, const QEventPoint&) const>(&QPointingDevice::grabChanged), self, [=](QObject* grabber, QPointingDevice::GrabTransition transition, const QPointerEvent* event, const QEventPoint& point) {
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

bool QPointingDevice_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPointingDevice_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_Event(event);
}

bool QPointingDevice_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPointingDevice_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QPointingDevice_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPointingDevice_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_TimerEvent(event);
}

bool QPointingDevice_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPointingDevice_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_ChildEvent(event);
}

bool QPointingDevice_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPointingDevice_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_CustomEvent(event);
}

bool QPointingDevice_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPointingDevice_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPointingDevice_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPointingDevice_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPointingDevice_Delete(QPointingDevice* self) {
	delete self;
}

