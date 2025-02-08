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

void miqt_exec_callback_QPointingDevice_grabChanged(intptr_t, QObject*, int, QPointerEvent*, QEventPoint*);
bool miqt_exec_callback_QPointingDevice_event(QPointingDevice*, intptr_t, QEvent*);
bool miqt_exec_callback_QPointingDevice_eventFilter(QPointingDevice*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPointingDevice_timerEvent(QPointingDevice*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPointingDevice_childEvent(QPointingDevice*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPointingDevice_customEvent(QPointingDevice*, intptr_t, QEvent*);
void miqt_exec_callback_QPointingDevice_connectNotify(QPointingDevice*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPointingDevice_disconnectNotify(QPointingDevice*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new() {
	return new QPointingDeviceUniqueId();
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1) {
	return new QPointingDeviceUniqueId(*param1);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_fromNumericId(long long id) {
	return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(static_cast<qint64>(id)));
}

bool QPointingDeviceUniqueId_isValid(const QPointingDeviceUniqueId* self) {
	return self->isValid();
}

long long QPointingDeviceUniqueId_numericId(const QPointingDeviceUniqueId* self) {
	qint64 _ret = self->numericId();
	return static_cast<long long>(_ret);
}

void QPointingDeviceUniqueId_delete(QPointingDeviceUniqueId* self) {
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
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPointingDevice::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPointingDevice_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPointingDevice::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPointingDevice::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPointingDevice_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPointingDevice::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPointingDevice::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPointingDevice_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPointingDevice::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPointingDevice::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPointingDevice_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPointingDevice::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPointingDevice::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPointingDevice_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPointingDevice::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPointingDevice::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPointingDevice_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPointingDevice::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPointingDevice::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPointingDevice_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPointingDevice::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QPointingDevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPointingDevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPointingDevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPointingDevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QPointingDevice_metaObject(const QPointingDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPointingDevice_metacast(QPointingDevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPointingDevice_tr(const char* s) {
	QString _ret = QPointingDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPointingDevice_setType(QPointingDevice* self, int devType) {
	self->setType(static_cast<QInputDevice::DeviceType>(devType));
}

void QPointingDevice_setCapabilities(QPointingDevice* self, int caps) {
	self->setCapabilities(static_cast<QInputDevice::Capabilities>(caps));
}

void QPointingDevice_setMaximumTouchPoints(QPointingDevice* self, int c) {
	self->setMaximumTouchPoints(static_cast<int>(c));
}

int QPointingDevice_pointerType(const QPointingDevice* self) {
	QPointingDevice::PointerType _ret = self->pointerType();
	return static_cast<int>(_ret);
}

int QPointingDevice_maximumPoints(const QPointingDevice* self) {
	return self->maximumPoints();
}

int QPointingDevice_buttonCount(const QPointingDevice* self) {
	return self->buttonCount();
}

QPointingDeviceUniqueId* QPointingDevice_uniqueId(const QPointingDevice* self) {
	return new QPointingDeviceUniqueId(self->uniqueId());
}

QPointingDevice* QPointingDevice_primaryPointingDevice() {
	return (QPointingDevice*) QPointingDevice::primaryPointingDevice();
}

bool QPointingDevice_operatorEqual(const QPointingDevice* self, QPointingDevice* other) {
	return (*self == *other);
}

void QPointingDevice_grabChanged(const QPointingDevice* self, QObject* grabber, int transition, QPointerEvent* event, QEventPoint* point) {
	self->grabChanged(grabber, static_cast<QPointingDevice::GrabTransition>(transition), event, *point);
}

void QPointingDevice_connect_grabChanged(QPointingDevice* self, intptr_t slot) {
	MiqtVirtualQPointingDevice::connect(self, static_cast<void (QPointingDevice::*)(QObject*, QPointingDevice::GrabTransition, const QPointerEvent*, const QEventPoint&) const>(&QPointingDevice::grabChanged), self, [=](QObject* grabber, QPointingDevice::GrabTransition transition, const QPointerEvent* event, const QEventPoint& point) {
		QObject* sigval1 = grabber;
		QPointingDevice::GrabTransition transition_ret = transition;
		int sigval2 = static_cast<int>(transition_ret);
		QPointerEvent* sigval3 = (QPointerEvent*) event;
		const QEventPoint& point_ret = point;
		// Cast returned reference into pointer
		QEventPoint* sigval4 = const_cast<QEventPoint*>(&point_ret);
		miqt_exec_callback_QPointingDevice_grabChanged(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

struct miqt_string QPointingDevice_tr2(const char* s, const char* c) {
	QString _ret = QPointingDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPointingDevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QPointingDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointingDevice* QPointingDevice_primaryPointingDevice1(struct miqt_string seatName) {
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return (QPointingDevice*) QPointingDevice::primaryPointingDevice(seatName_QString);
}

bool QPointingDevice_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPointingDevice_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_event(event);
}

bool QPointingDevice_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPointingDevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPointingDevice_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPointingDevice_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_timerEvent(event);
}

bool QPointingDevice_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPointingDevice_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_childEvent(event);
}

bool QPointingDevice_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPointingDevice_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_customEvent(event);
}

bool QPointingDevice_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPointingDevice_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_connectNotify(signal);
}

bool QPointingDevice_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPointingDevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPointingDevice*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QPointingDevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPointingDevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPointingDevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPointingDevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPointingDevice* self_cast = dynamic_cast<MiqtVirtualQPointingDevice*>( (QPointingDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPointingDevice_delete(QPointingDevice* self) {
	delete self;
}

