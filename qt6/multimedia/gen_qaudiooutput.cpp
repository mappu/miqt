#include <QAudioDevice>
#include <QAudioOutput>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudiooutput.h>
#include "gen_qaudiooutput.h"
#include "_cgo_export.h"

class MiqtVirtualQAudioOutput : public virtual QAudioOutput {
public:

	MiqtVirtualQAudioOutput(): QAudioOutput() {};
	MiqtVirtualQAudioOutput(const QAudioDevice& device): QAudioOutput(device) {};
	MiqtVirtualQAudioOutput(QObject* parent): QAudioOutput(parent) {};
	MiqtVirtualQAudioOutput(const QAudioDevice& device, QObject* parent): QAudioOutput(device, parent) {};

	virtual ~MiqtVirtualQAudioOutput() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioOutput::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioOutput::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioOutput::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioOutput::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioOutput::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioOutput::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioOutput::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioOutput::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioOutput::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioOutput::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioOutput::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioOutput::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioOutput::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioOutput::disconnectNotify(*signal);

	}

};

void QAudioOutput_new(QAudioOutput** outptr_QAudioOutput, QObject** outptr_QObject) {
	MiqtVirtualQAudioOutput* ret = new MiqtVirtualQAudioOutput();
	*outptr_QAudioOutput = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QAudioOutput_new2(QAudioDevice* device, QAudioOutput** outptr_QAudioOutput, QObject** outptr_QObject) {
	MiqtVirtualQAudioOutput* ret = new MiqtVirtualQAudioOutput(*device);
	*outptr_QAudioOutput = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QAudioOutput_new3(QObject* parent, QAudioOutput** outptr_QAudioOutput, QObject** outptr_QObject) {
	MiqtVirtualQAudioOutput* ret = new MiqtVirtualQAudioOutput(parent);
	*outptr_QAudioOutput = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QAudioOutput_new4(QAudioDevice* device, QObject* parent, QAudioOutput** outptr_QAudioOutput, QObject** outptr_QObject) {
	MiqtVirtualQAudioOutput* ret = new MiqtVirtualQAudioOutput(*device, parent);
	*outptr_QAudioOutput = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioOutput_Tr(const char* s) {
	QString _ret = QAudioOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioDevice* QAudioOutput_Device(const QAudioOutput* self) {
	return new QAudioDevice(self->device());
}

float QAudioOutput_Volume(const QAudioOutput* self) {
	return self->volume();
}

bool QAudioOutput_IsMuted(const QAudioOutput* self) {
	return self->isMuted();
}

void QAudioOutput_SetDevice(QAudioOutput* self, QAudioDevice* device) {
	self->setDevice(*device);
}

void QAudioOutput_SetVolume(QAudioOutput* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

void QAudioOutput_SetMuted(QAudioOutput* self, bool muted) {
	self->setMuted(muted);
}

void QAudioOutput_DeviceChanged(QAudioOutput* self) {
	self->deviceChanged();
}

void QAudioOutput_connect_DeviceChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)()>(&QAudioOutput::deviceChanged), self, [=]() {
		miqt_exec_callback_QAudioOutput_DeviceChanged(slot);
	});
}

void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume) {
	self->volumeChanged(static_cast<float>(volume));
}

void QAudioOutput_connect_VolumeChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(float)>(&QAudioOutput::volumeChanged), self, [=](float volume) {
		float sigval1 = volume;
		miqt_exec_callback_QAudioOutput_VolumeChanged(slot, sigval1);
	});
}

void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted) {
	self->mutedChanged(muted);
}

void QAudioOutput_connect_MutedChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(bool)>(&QAudioOutput::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QAudioOutput_MutedChanged(slot, sigval1);
	});
}

struct miqt_string QAudioOutput_Tr2(const char* s, const char* c) {
	QString _ret = QAudioOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioOutput_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__Event = slot;
}

bool QAudioOutput_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_Event(event);
}

void QAudioOutput_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__EventFilter = slot;
}

bool QAudioOutput_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAudioOutput_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__TimerEvent = slot;
}

void QAudioOutput_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_TimerEvent(event);
}

void QAudioOutput_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__ChildEvent = slot;
}

void QAudioOutput_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_ChildEvent(event);
}

void QAudioOutput_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__CustomEvent = slot;
}

void QAudioOutput_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_CustomEvent(event);
}

void QAudioOutput_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__ConnectNotify = slot;
}

void QAudioOutput_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAudioOutput_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) )->handle__DisconnectNotify = slot;
}

void QAudioOutput_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioOutput_Delete(QAudioOutput* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAudioOutput*>( self );
	} else {
		delete self;
	}
}

