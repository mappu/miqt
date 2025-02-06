#include <QChildEvent>
#include <QEvent>
#include <QInputDevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qinputdevice.h>
#include "gen_qinputdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QInputDevice_availableVirtualGeometryChanged(intptr_t, QRect*);
bool miqt_exec_callback_QInputDevice_event(QInputDevice*, intptr_t, QEvent*);
bool miqt_exec_callback_QInputDevice_eventFilter(QInputDevice*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QInputDevice_timerEvent(QInputDevice*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QInputDevice_childEvent(QInputDevice*, intptr_t, QChildEvent*);
void miqt_exec_callback_QInputDevice_customEvent(QInputDevice*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDevice_connectNotify(QInputDevice*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QInputDevice_disconnectNotify(QInputDevice*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQInputDevice final : public QInputDevice {
public:

	MiqtVirtualQInputDevice(): QInputDevice() {};
	MiqtVirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType type): QInputDevice(name, systemId, type) {};
	MiqtVirtualQInputDevice(QObject* parent): QInputDevice(parent) {};
	MiqtVirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType type, const QString& seatName): QInputDevice(name, systemId, type, seatName) {};
	MiqtVirtualQInputDevice(const QString& name, qint64 systemId, QInputDevice::DeviceType type, const QString& seatName, QObject* parent): QInputDevice(name, systemId, type, seatName, parent) {};

	virtual ~MiqtVirtualQInputDevice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QInputDevice::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QInputDevice_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QInputDevice::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QInputDevice::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QInputDevice_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QInputDevice::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QInputDevice::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QInputDevice_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QInputDevice::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QInputDevice::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QInputDevice_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QInputDevice::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QInputDevice::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QInputDevice_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QInputDevice::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QInputDevice::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QInputDevice_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QInputDevice::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QInputDevice::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QInputDevice_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QInputDevice::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QInputDevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QInputDevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QInputDevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QInputDevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QInputDevice* QInputDevice_new() {
	return new MiqtVirtualQInputDevice();
}

QInputDevice* QInputDevice_new2(struct miqt_string name, long long systemId, int type) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new MiqtVirtualQInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(type));
}

QInputDevice* QInputDevice_new3(QObject* parent) {
	return new MiqtVirtualQInputDevice(parent);
}

QInputDevice* QInputDevice_new4(struct miqt_string name, long long systemId, int type, struct miqt_string seatName) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new MiqtVirtualQInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(type), seatName_QString);
}

QInputDevice* QInputDevice_new5(struct miqt_string name, long long systemId, int type, struct miqt_string seatName, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new MiqtVirtualQInputDevice(name_QString, static_cast<qint64>(systemId), static_cast<QInputDevice::DeviceType>(type), seatName_QString, parent);
}

void QInputDevice_virtbase(QInputDevice* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QInputDevice_metaObject(const QInputDevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QInputDevice_metacast(QInputDevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QInputDevice_tr(const char* s) {
	QString _ret = QInputDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDevice_name(const QInputDevice* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputDevice_type(const QInputDevice* self) {
	QInputDevice::DeviceType _ret = self->type();
	return static_cast<int>(_ret);
}

int QInputDevice_capabilities(const QInputDevice* self) {
	QInputDevice::Capabilities _ret = self->capabilities();
	return static_cast<int>(_ret);
}

bool QInputDevice_hasCapability(const QInputDevice* self, int cap) {
	return self->hasCapability(static_cast<QInputDevice::Capability>(cap));
}

long long QInputDevice_systemId(const QInputDevice* self) {
	qint64 _ret = self->systemId();
	return static_cast<long long>(_ret);
}

struct miqt_string QInputDevice_seatName(const QInputDevice* self) {
	QString _ret = self->seatName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRect* QInputDevice_availableVirtualGeometry(const QInputDevice* self) {
	return new QRect(self->availableVirtualGeometry());
}

struct miqt_array /* of struct miqt_string */  QInputDevice_seatNames() {
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

struct miqt_array /* of QInputDevice* */  QInputDevice_devices() {
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

QInputDevice* QInputDevice_primaryKeyboard() {
	return (QInputDevice*) QInputDevice::primaryKeyboard();
}

bool QInputDevice_operatorEqual(const QInputDevice* self, QInputDevice* other) {
	return (*self == *other);
}

void QInputDevice_availableVirtualGeometryChanged(QInputDevice* self, QRect* area) {
	self->availableVirtualGeometryChanged(*area);
}

void QInputDevice_connect_availableVirtualGeometryChanged(QInputDevice* self, intptr_t slot) {
	MiqtVirtualQInputDevice::connect(self, static_cast<void (QInputDevice::*)(QRect)>(&QInputDevice::availableVirtualGeometryChanged), self, [=](QRect area) {
		QRect* sigval1 = new QRect(area);
		miqt_exec_callback_QInputDevice_availableVirtualGeometryChanged(slot, sigval1);
	});
}

struct miqt_string QInputDevice_tr2(const char* s, const char* c) {
	QString _ret = QInputDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QInputDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QInputDevice* QInputDevice_primaryKeyboard1(struct miqt_string seatName) {
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return (QInputDevice*) QInputDevice::primaryKeyboard(seatName_QString);
}

bool QInputDevice_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QInputDevice_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQInputDevice*)(self) )->virtualbase_event(event);
}

bool QInputDevice_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QInputDevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQInputDevice*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QInputDevice_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QInputDevice_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQInputDevice*)(self) )->virtualbase_timerEvent(event);
}

bool QInputDevice_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QInputDevice_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQInputDevice*)(self) )->virtualbase_childEvent(event);
}

bool QInputDevice_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QInputDevice_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQInputDevice*)(self) )->virtualbase_customEvent(event);
}

bool QInputDevice_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QInputDevice_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQInputDevice*)(self) )->virtualbase_connectNotify(signal);
}

bool QInputDevice_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QInputDevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQInputDevice*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QInputDevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QInputDevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QInputDevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QInputDevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQInputDevice* self_cast = dynamic_cast<MiqtVirtualQInputDevice*>( (QInputDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QInputDevice_delete(QInputDevice* self) {
	delete self;
}

