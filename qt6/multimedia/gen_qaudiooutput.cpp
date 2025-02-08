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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioOutput_deviceChanged(intptr_t);
void miqt_exec_callback_QAudioOutput_volumeChanged(intptr_t, float);
void miqt_exec_callback_QAudioOutput_mutedChanged(intptr_t, bool);
bool miqt_exec_callback_QAudioOutput_event(QAudioOutput*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioOutput_eventFilter(QAudioOutput*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioOutput_timerEvent(QAudioOutput*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioOutput_childEvent(QAudioOutput*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioOutput_customEvent(QAudioOutput*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioOutput_connectNotify(QAudioOutput*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioOutput_disconnectNotify(QAudioOutput*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioOutput final : public QAudioOutput {
public:

	MiqtVirtualQAudioOutput(): QAudioOutput() {};
	MiqtVirtualQAudioOutput(const QAudioDevice& device): QAudioOutput(device) {};
	MiqtVirtualQAudioOutput(QObject* parent): QAudioOutput(parent) {};
	MiqtVirtualQAudioOutput(const QAudioDevice& device, QObject* parent): QAudioOutput(device, parent) {};

	virtual ~MiqtVirtualQAudioOutput() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioOutput::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAudioOutput::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioOutput::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioOutput_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAudioOutput::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioOutput::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAudioOutput::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioOutput::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAudioOutput::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioOutput::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioOutput_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAudioOutput::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioOutput::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAudioOutput::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioOutput::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioOutput_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAudioOutput::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioOutput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioOutput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioOutput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioOutput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioOutput* QAudioOutput_new() {
	return new MiqtVirtualQAudioOutput();
}

QAudioOutput* QAudioOutput_new2(QAudioDevice* device) {
	return new MiqtVirtualQAudioOutput(*device);
}

QAudioOutput* QAudioOutput_new3(QObject* parent) {
	return new MiqtVirtualQAudioOutput(parent);
}

QAudioOutput* QAudioOutput_new4(QAudioDevice* device, QObject* parent) {
	return new MiqtVirtualQAudioOutput(*device, parent);
}

void QAudioOutput_virtbase(QAudioOutput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioOutput_metaObject(const QAudioOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioOutput_metacast(QAudioOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioOutput_tr(const char* s) {
	QString _ret = QAudioOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioDevice* QAudioOutput_device(const QAudioOutput* self) {
	return new QAudioDevice(self->device());
}

float QAudioOutput_volume(const QAudioOutput* self) {
	return self->volume();
}

bool QAudioOutput_isMuted(const QAudioOutput* self) {
	return self->isMuted();
}

void QAudioOutput_setDevice(QAudioOutput* self, QAudioDevice* device) {
	self->setDevice(*device);
}

void QAudioOutput_setVolume(QAudioOutput* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

void QAudioOutput_setMuted(QAudioOutput* self, bool muted) {
	self->setMuted(muted);
}

void QAudioOutput_deviceChanged(QAudioOutput* self) {
	self->deviceChanged();
}

void QAudioOutput_connect_deviceChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)()>(&QAudioOutput::deviceChanged), self, [=]() {
		miqt_exec_callback_QAudioOutput_deviceChanged(slot);
	});
}

void QAudioOutput_volumeChanged(QAudioOutput* self, float volume) {
	self->volumeChanged(static_cast<float>(volume));
}

void QAudioOutput_connect_volumeChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(float)>(&QAudioOutput::volumeChanged), self, [=](float volume) {
		float sigval1 = volume;
		miqt_exec_callback_QAudioOutput_volumeChanged(slot, sigval1);
	});
}

void QAudioOutput_mutedChanged(QAudioOutput* self, bool muted) {
	self->mutedChanged(muted);
}

void QAudioOutput_connect_mutedChanged(QAudioOutput* self, intptr_t slot) {
	MiqtVirtualQAudioOutput::connect(self, static_cast<void (QAudioOutput::*)(bool)>(&QAudioOutput::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QAudioOutput_mutedChanged(slot, sigval1);
	});
}

struct miqt_string QAudioOutput_tr2(const char* s, const char* c) {
	QString _ret = QAudioOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioOutput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioOutput_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioOutput_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_event(event);
}

bool QAudioOutput_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioOutput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAudioOutput_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioOutput_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_timerEvent(event);
}

bool QAudioOutput_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioOutput_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_childEvent(event);
}

bool QAudioOutput_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioOutput_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_customEvent(event);
}

bool QAudioOutput_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioOutput_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_connectNotify(signal);
}

bool QAudioOutput_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioOutput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioOutput*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAudioOutput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioOutput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioOutput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioOutput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioOutput* self_cast = dynamic_cast<MiqtVirtualQAudioOutput*>( (QAudioOutput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioOutput_delete(QAudioOutput* self) {
	delete self;
}

