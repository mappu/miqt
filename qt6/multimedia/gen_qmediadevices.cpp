#include <QAudioDevice>
#include <QCameraDevice>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaDevices>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qmediadevices.h>
#include "gen_qmediadevices.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaDevices_AudioInputsChanged(intptr_t);
void miqt_exec_callback_QMediaDevices_AudioOutputsChanged(intptr_t);
void miqt_exec_callback_QMediaDevices_VideoInputsChanged(intptr_t);
bool miqt_exec_callback_QMediaDevices_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaDevices_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaDevices_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaDevices_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaDevices_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaDevices_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaDevices_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaDevices : public virtual QMediaDevices {
public:

	MiqtVirtualQMediaDevices(): QMediaDevices() {};
	MiqtVirtualQMediaDevices(QObject* parent): QMediaDevices(parent) {};

	virtual ~MiqtVirtualQMediaDevices() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMediaDevices::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaDevices_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMediaDevices::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMediaDevices::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaDevices_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMediaDevices::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMediaDevices::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaDevices_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMediaDevices::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMediaDevices::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaDevices_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMediaDevices::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMediaDevices::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaDevices_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMediaDevices::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMediaDevices::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaDevices_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMediaDevices::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMediaDevices::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaDevices_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMediaDevices::disconnectNotify(*signal);

	}

};

QMediaDevices* QMediaDevices_new() {
	return new MiqtVirtualQMediaDevices();
}

QMediaDevices* QMediaDevices_new2(QObject* parent) {
	return new MiqtVirtualQMediaDevices(parent);
}

void QMediaDevices_virtbase(QMediaDevices* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMediaDevices_MetaObject(const QMediaDevices* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaDevices_Metacast(QMediaDevices* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaDevices_Tr(const char* s) {
	QString _ret = QMediaDevices::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QAudioDevice* */  QMediaDevices_AudioInputs() {
	QList<QAudioDevice> _ret = QMediaDevices::audioInputs();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QAudioDevice(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QAudioDevice* */  QMediaDevices_AudioOutputs() {
	QList<QAudioDevice> _ret = QMediaDevices::audioOutputs();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QAudioDevice(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QCameraDevice* */  QMediaDevices_VideoInputs() {
	QList<QCameraDevice> _ret = QMediaDevices::videoInputs();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraDevice** _arr = static_cast<QCameraDevice**>(malloc(sizeof(QCameraDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraDevice(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAudioDevice* QMediaDevices_DefaultAudioInput() {
	return new QAudioDevice(QMediaDevices::defaultAudioInput());
}

QAudioDevice* QMediaDevices_DefaultAudioOutput() {
	return new QAudioDevice(QMediaDevices::defaultAudioOutput());
}

QCameraDevice* QMediaDevices_DefaultVideoInput() {
	return new QCameraDevice(QMediaDevices::defaultVideoInput());
}

void QMediaDevices_AudioInputsChanged(QMediaDevices* self) {
	self->audioInputsChanged();
}

void QMediaDevices_connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot) {
	MiqtVirtualQMediaDevices::connect(self, static_cast<void (QMediaDevices::*)()>(&QMediaDevices::audioInputsChanged), self, [=]() {
		miqt_exec_callback_QMediaDevices_AudioInputsChanged(slot);
	});
}

void QMediaDevices_AudioOutputsChanged(QMediaDevices* self) {
	self->audioOutputsChanged();
}

void QMediaDevices_connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot) {
	MiqtVirtualQMediaDevices::connect(self, static_cast<void (QMediaDevices::*)()>(&QMediaDevices::audioOutputsChanged), self, [=]() {
		miqt_exec_callback_QMediaDevices_AudioOutputsChanged(slot);
	});
}

void QMediaDevices_VideoInputsChanged(QMediaDevices* self) {
	self->videoInputsChanged();
}

void QMediaDevices_connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot) {
	MiqtVirtualQMediaDevices::connect(self, static_cast<void (QMediaDevices::*)()>(&QMediaDevices::videoInputsChanged), self, [=]() {
		miqt_exec_callback_QMediaDevices_VideoInputsChanged(slot);
	});
}

struct miqt_string QMediaDevices_Tr2(const char* s, const char* c) {
	QString _ret = QMediaDevices::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaDevices_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaDevices::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaDevices_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) )->handle__Event = slot;
}

bool QMediaDevices_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaDevices*)(self) )->virtualbase_Event(event);
}

void QMediaDevices_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) )->handle__EventFilter = slot;
}

bool QMediaDevices_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaDevices*)(self) )->virtualbase_EventFilter(watched, event);
}

void QMediaDevices_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) )->handle__TimerEvent = slot;
}

void QMediaDevices_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaDevices*)(self) )->virtualbase_TimerEvent(event);
}

void QMediaDevices_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) )->handle__ChildEvent = slot;
}

void QMediaDevices_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaDevices*)(self) )->virtualbase_ChildEvent(event);
}

void QMediaDevices_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) )->handle__CustomEvent = slot;
}

void QMediaDevices_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaDevices*)(self) )->virtualbase_CustomEvent(event);
}

void QMediaDevices_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) )->handle__ConnectNotify = slot;
}

void QMediaDevices_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaDevices*)(self) )->virtualbase_ConnectNotify(signal);
}

void QMediaDevices_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) )->handle__DisconnectNotify = slot;
}

void QMediaDevices_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaDevices*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMediaDevices_Delete(QMediaDevices* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMediaDevices*>( self );
	} else {
		delete self;
	}
}

