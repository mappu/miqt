#include <QAbstractAudioDeviceInfo>
#include <QAbstractAudioInput>
#include <QAbstractAudioOutput>
#include <QAudioSystemFactoryInterface>
#include <QAudioSystemPlugin>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudiosystemplugin.h>
#include "gen_qaudiosystemplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAudioSystemPlugin_AvailableDevices(void*, intptr_t, int);
QAbstractAudioInput* miqt_exec_callback_QAudioSystemPlugin_CreateInput(void*, intptr_t, struct miqt_string);
QAbstractAudioOutput* miqt_exec_callback_QAudioSystemPlugin_CreateOutput(void*, intptr_t, struct miqt_string);
QAbstractAudioDeviceInfo* miqt_exec_callback_QAudioSystemPlugin_CreateDeviceInfo(void*, intptr_t, struct miqt_string, int);
bool miqt_exec_callback_QAudioSystemPlugin_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioSystemPlugin_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioSystemPlugin_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioSystemPlugin_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioSystemPlugin_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioSystemPlugin_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioSystemPlugin_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_array /* of struct miqt_string */  QAudioSystemFactoryInterface_AvailableDevices(const QAudioSystemFactoryInterface* self, int param1) {
	QList<QByteArray> _ret = self->availableDevices(static_cast<QAudio::Mode>(param1));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAbstractAudioInput* QAudioSystemFactoryInterface_CreateInput(QAudioSystemFactoryInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createInput(device_QByteArray);
}

QAbstractAudioOutput* QAudioSystemFactoryInterface_CreateOutput(QAudioSystemFactoryInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createOutput(device_QByteArray);
}

QAbstractAudioDeviceInfo* QAudioSystemFactoryInterface_CreateDeviceInfo(QAudioSystemFactoryInterface* self, struct miqt_string device, int mode) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createDeviceInfo(device_QByteArray, static_cast<QAudio::Mode>(mode));
}

void QAudioSystemFactoryInterface_OperatorAssign(QAudioSystemFactoryInterface* self, QAudioSystemFactoryInterface* param1) {
	self->operator=(*param1);
}

void QAudioSystemFactoryInterface_Delete(QAudioSystemFactoryInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioSystemFactoryInterface*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQAudioSystemPlugin : public virtual QAudioSystemPlugin {
public:

	MiqtVirtualQAudioSystemPlugin(): QAudioSystemPlugin() {};
	MiqtVirtualQAudioSystemPlugin(QObject* parent): QAudioSystemPlugin(parent) {};

	virtual ~MiqtVirtualQAudioSystemPlugin() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AvailableDevices = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QByteArray> availableDevices(QAudio::Mode param1) const override {
		if (handle__AvailableDevices == 0) {
			return QList<QByteArray>(); // Pure virtual, there is no base we can call
		}
		
		QAudio::Mode param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAudioSystemPlugin_AvailableDevices(const_cast<MiqtVirtualQAudioSystemPlugin*>(this), handle__AvailableDevices, sigval1);
		QList<QByteArray> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_arr_i_QByteArray(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QByteArray);
		}

		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateInput = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAudioInput* createInput(const QByteArray& device) override {
		if (handle__CreateInput == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QByteArray device_qb = device;
		struct miqt_string device_ms;
		device_ms.len = device_qb.length();
		device_ms.data = static_cast<char*>(malloc(device_ms.len));
		memcpy(device_ms.data, device_qb.data(), device_ms.len);
		struct miqt_string sigval1 = device_ms;

		QAbstractAudioInput* callback_return_value = miqt_exec_callback_QAudioSystemPlugin_CreateInput(this, handle__CreateInput, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateOutput = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAudioOutput* createOutput(const QByteArray& device) override {
		if (handle__CreateOutput == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QByteArray device_qb = device;
		struct miqt_string device_ms;
		device_ms.len = device_qb.length();
		device_ms.data = static_cast<char*>(malloc(device_ms.len));
		memcpy(device_ms.data, device_qb.data(), device_ms.len);
		struct miqt_string sigval1 = device_ms;

		QAbstractAudioOutput* callback_return_value = miqt_exec_callback_QAudioSystemPlugin_CreateOutput(this, handle__CreateOutput, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateDeviceInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAudioDeviceInfo* createDeviceInfo(const QByteArray& device, QAudio::Mode mode) override {
		if (handle__CreateDeviceInfo == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QByteArray device_qb = device;
		struct miqt_string device_ms;
		device_ms.len = device_qb.length();
		device_ms.data = static_cast<char*>(malloc(device_ms.len));
		memcpy(device_ms.data, device_qb.data(), device_ms.len);
		struct miqt_string sigval1 = device_ms;
		QAudio::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		QAbstractAudioDeviceInfo* callback_return_value = miqt_exec_callback_QAudioSystemPlugin_CreateDeviceInfo(this, handle__CreateDeviceInfo, sigval1, sigval2);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioSystemPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSystemPlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioSystemPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioSystemPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSystemPlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioSystemPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioSystemPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioSystemPlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioSystemPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioSystemPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioSystemPlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioSystemPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioSystemPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioSystemPlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioSystemPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioSystemPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSystemPlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioSystemPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioSystemPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSystemPlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioSystemPlugin::disconnectNotify(*signal);

	}

};

QAudioSystemPlugin* QAudioSystemPlugin_new() {
	return new MiqtVirtualQAudioSystemPlugin();
}

QAudioSystemPlugin* QAudioSystemPlugin_new2(QObject* parent) {
	return new MiqtVirtualQAudioSystemPlugin(parent);
}

void QAudioSystemPlugin_virtbase(QAudioSystemPlugin* src, QObject** outptr_QObject, QAudioSystemFactoryInterface** outptr_QAudioSystemFactoryInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QAudioSystemFactoryInterface = static_cast<QAudioSystemFactoryInterface*>(src);
}

QMetaObject* QAudioSystemPlugin_MetaObject(const QAudioSystemPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSystemPlugin_Metacast(QAudioSystemPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSystemPlugin_Tr(const char* s) {
	QString _ret = QAudioSystemPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_TrUtf8(const char* s) {
	QString _ret = QAudioSystemPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioSystemPlugin_AvailableDevices(const QAudioSystemPlugin* self, int param1) {
	QList<QByteArray> _ret = self->availableDevices(static_cast<QAudio::Mode>(param1));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAbstractAudioInput* QAudioSystemPlugin_CreateInput(QAudioSystemPlugin* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createInput(device_QByteArray);
}

QAbstractAudioOutput* QAudioSystemPlugin_CreateOutput(QAudioSystemPlugin* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createOutput(device_QByteArray);
}

QAbstractAudioDeviceInfo* QAudioSystemPlugin_CreateDeviceInfo(QAudioSystemPlugin* self, struct miqt_string device, int mode) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createDeviceInfo(device_QByteArray, static_cast<QAudio::Mode>(mode));
}

struct miqt_string QAudioSystemPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAudioSystemPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSystemPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioSystemPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioSystemPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioSystemPlugin_override_virtual_AvailableDevices(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__AvailableDevices = slot;
}

void QAudioSystemPlugin_override_virtual_CreateInput(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__CreateInput = slot;
}

void QAudioSystemPlugin_override_virtual_CreateOutput(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__CreateOutput = slot;
}

void QAudioSystemPlugin_override_virtual_CreateDeviceInfo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__CreateDeviceInfo = slot;
}

void QAudioSystemPlugin_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__Event = slot;
}

bool QAudioSystemPlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_Event(event);
}

void QAudioSystemPlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__EventFilter = slot;
}

bool QAudioSystemPlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAudioSystemPlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__TimerEvent = slot;
}

void QAudioSystemPlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_TimerEvent(event);
}

void QAudioSystemPlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__ChildEvent = slot;
}

void QAudioSystemPlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_ChildEvent(event);
}

void QAudioSystemPlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__CustomEvent = slot;
}

void QAudioSystemPlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_CustomEvent(event);
}

void QAudioSystemPlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__ConnectNotify = slot;
}

void QAudioSystemPlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAudioSystemPlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) )->handle__DisconnectNotify = slot;
}

void QAudioSystemPlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioSystemPlugin_Delete(QAudioSystemPlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( self );
	} else {
		delete self;
	}
}

