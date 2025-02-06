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

struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAudioSystemPlugin_availableDevices(const QAudioSystemPlugin*, intptr_t, int);
QAbstractAudioInput* miqt_exec_callback_QAudioSystemPlugin_createInput(QAudioSystemPlugin*, intptr_t, struct miqt_string);
QAbstractAudioOutput* miqt_exec_callback_QAudioSystemPlugin_createOutput(QAudioSystemPlugin*, intptr_t, struct miqt_string);
QAbstractAudioDeviceInfo* miqt_exec_callback_QAudioSystemPlugin_createDeviceInfo(QAudioSystemPlugin*, intptr_t, struct miqt_string, int);
bool miqt_exec_callback_QAudioSystemPlugin_event(QAudioSystemPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioSystemPlugin_eventFilter(QAudioSystemPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioSystemPlugin_timerEvent(QAudioSystemPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioSystemPlugin_childEvent(QAudioSystemPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioSystemPlugin_customEvent(QAudioSystemPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioSystemPlugin_connectNotify(QAudioSystemPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioSystemPlugin_disconnectNotify(QAudioSystemPlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_array /* of struct miqt_string */  QAudioSystemFactoryInterface_availableDevices(const QAudioSystemFactoryInterface* self, int param1) {
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

QAbstractAudioInput* QAudioSystemFactoryInterface_createInput(QAudioSystemFactoryInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createInput(device_QByteArray);
}

QAbstractAudioOutput* QAudioSystemFactoryInterface_createOutput(QAudioSystemFactoryInterface* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createOutput(device_QByteArray);
}

QAbstractAudioDeviceInfo* QAudioSystemFactoryInterface_createDeviceInfo(QAudioSystemFactoryInterface* self, struct miqt_string device, int mode) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createDeviceInfo(device_QByteArray, static_cast<QAudio::Mode>(mode));
}

void QAudioSystemFactoryInterface_operatorAssign(QAudioSystemFactoryInterface* self, QAudioSystemFactoryInterface* param1) {
	self->operator=(*param1);
}

void QAudioSystemFactoryInterface_delete(QAudioSystemFactoryInterface* self) {
	delete self;
}

class MiqtVirtualQAudioSystemPlugin final : public QAudioSystemPlugin {
public:

	MiqtVirtualQAudioSystemPlugin(): QAudioSystemPlugin() {};
	MiqtVirtualQAudioSystemPlugin(QObject* parent): QAudioSystemPlugin(parent) {};

	virtual ~MiqtVirtualQAudioSystemPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__availableDevices = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QByteArray> availableDevices(QAudio::Mode param1) const override {
		if (handle__availableDevices == 0) {
			return QList<QByteArray>(); // Pure virtual, there is no base we can call
		}
		
		QAudio::Mode param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAudioSystemPlugin_availableDevices(this, handle__availableDevices, sigval1);
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
	intptr_t handle__createInput = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAudioInput* createInput(const QByteArray& device) override {
		if (handle__createInput == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QByteArray device_qb = device;
		struct miqt_string device_ms;
		device_ms.len = device_qb.length();
		device_ms.data = static_cast<char*>(malloc(device_ms.len));
		memcpy(device_ms.data, device_qb.data(), device_ms.len);
		struct miqt_string sigval1 = device_ms;

		QAbstractAudioInput* callback_return_value = miqt_exec_callback_QAudioSystemPlugin_createInput(this, handle__createInput, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createOutput = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAudioOutput* createOutput(const QByteArray& device) override {
		if (handle__createOutput == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QByteArray device_qb = device;
		struct miqt_string device_ms;
		device_ms.len = device_qb.length();
		device_ms.data = static_cast<char*>(malloc(device_ms.len));
		memcpy(device_ms.data, device_qb.data(), device_ms.len);
		struct miqt_string sigval1 = device_ms;

		QAbstractAudioOutput* callback_return_value = miqt_exec_callback_QAudioSystemPlugin_createOutput(this, handle__createOutput, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createDeviceInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAudioDeviceInfo* createDeviceInfo(const QByteArray& device, QAudio::Mode mode) override {
		if (handle__createDeviceInfo == 0) {
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

		QAbstractAudioDeviceInfo* callback_return_value = miqt_exec_callback_QAudioSystemPlugin_createDeviceInfo(this, handle__createDeviceInfo, sigval1, sigval2);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioSystemPlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSystemPlugin_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioSystemPlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioSystemPlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioSystemPlugin_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioSystemPlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioSystemPlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioSystemPlugin_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioSystemPlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioSystemPlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioSystemPlugin_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioSystemPlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioSystemPlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioSystemPlugin_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioSystemPlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioSystemPlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSystemPlugin_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioSystemPlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioSystemPlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioSystemPlugin_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioSystemPlugin::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioSystemPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioSystemPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioSystemPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioSystemPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAudioSystemPlugin_metaObject(const QAudioSystemPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioSystemPlugin_metacast(QAudioSystemPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioSystemPlugin_tr(const char* s) {
	QString _ret = QAudioSystemPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_trUtf8(const char* s) {
	QString _ret = QAudioSystemPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioSystemPlugin_availableDevices(const QAudioSystemPlugin* self, int param1) {
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

QAbstractAudioInput* QAudioSystemPlugin_createInput(QAudioSystemPlugin* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createInput(device_QByteArray);
}

QAbstractAudioOutput* QAudioSystemPlugin_createOutput(QAudioSystemPlugin* self, struct miqt_string device) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createOutput(device_QByteArray);
}

QAbstractAudioDeviceInfo* QAudioSystemPlugin_createDeviceInfo(QAudioSystemPlugin* self, struct miqt_string device, int mode) {
	QByteArray device_QByteArray(device.data, device.len);
	return self->createDeviceInfo(device_QByteArray, static_cast<QAudio::Mode>(mode));
}

struct miqt_string QAudioSystemPlugin_tr2(const char* s, const char* c) {
	QString _ret = QAudioSystemPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioSystemPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioSystemPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioSystemPlugin_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioSystemPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioSystemPlugin_override_virtual_availableDevices(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__availableDevices = slot;
	return true;
}

bool QAudioSystemPlugin_override_virtual_createInput(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createInput = slot;
	return true;
}

bool QAudioSystemPlugin_override_virtual_createOutput(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createOutput = slot;
	return true;
}

bool QAudioSystemPlugin_override_virtual_createDeviceInfo(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createDeviceInfo = slot;
	return true;
}

bool QAudioSystemPlugin_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioSystemPlugin_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_event(event);
}

bool QAudioSystemPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioSystemPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioSystemPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioSystemPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioSystemPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioSystemPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_childEvent(event);
}

bool QAudioSystemPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioSystemPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_customEvent(event);
}

bool QAudioSystemPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioSystemPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioSystemPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioSystemPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioSystemPlugin*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioSystemPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioSystemPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioSystemPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioSystemPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioSystemPlugin* self_cast = dynamic_cast<MiqtVirtualQAudioSystemPlugin*>( (QAudioSystemPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioSystemPlugin_delete(QAudioSystemPlugin* self) {
	delete self;
}

