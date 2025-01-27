#include <QAudioDevice>
#include <QAudioEngine>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudioengine.h>
#include "gen_qaudioengine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioEngine_OutputModeChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_OutputDeviceChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_MasterVolumeChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_PausedChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_DistanceScaleChanged(intptr_t);
bool miqt_exec_callback_QAudioEngine_Event(QAudioEngine*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioEngine_EventFilter(QAudioEngine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioEngine_TimerEvent(QAudioEngine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioEngine_ChildEvent(QAudioEngine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioEngine_CustomEvent(QAudioEngine*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioEngine_ConnectNotify(QAudioEngine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioEngine_DisconnectNotify(QAudioEngine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioEngine final : public QAudioEngine {
public:

	MiqtVirtualQAudioEngine(): QAudioEngine() {};
	MiqtVirtualQAudioEngine(QObject* parent): QAudioEngine(parent) {};
	MiqtVirtualQAudioEngine(int sampleRate): QAudioEngine(sampleRate) {};
	MiqtVirtualQAudioEngine(int sampleRate, QObject* parent): QAudioEngine(sampleRate, parent) {};

	virtual ~MiqtVirtualQAudioEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioEngine::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioEngine_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioEngine::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioEngine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioEngine_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioEngine::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioEngine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioEngine_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioEngine::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioEngine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioEngine_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioEngine::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioEngine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioEngine_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioEngine::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioEngine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioEngine_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioEngine::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioEngine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioEngine_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioEngine::disconnectNotify(*signal);

	}

};

QAudioEngine* QAudioEngine_new() {
	return new MiqtVirtualQAudioEngine();
}

QAudioEngine* QAudioEngine_new2(QObject* parent) {
	return new MiqtVirtualQAudioEngine(parent);
}

QAudioEngine* QAudioEngine_new3(int sampleRate) {
	return new MiqtVirtualQAudioEngine(static_cast<int>(sampleRate));
}

QAudioEngine* QAudioEngine_new4(int sampleRate, QObject* parent) {
	return new MiqtVirtualQAudioEngine(static_cast<int>(sampleRate), parent);
}

void QAudioEngine_virtbase(QAudioEngine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioEngine_MetaObject(const QAudioEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioEngine_Metacast(QAudioEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioEngine_Tr(const char* s) {
	QString _ret = QAudioEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioEngine_SetOutputMode(QAudioEngine* self, int mode) {
	self->setOutputMode(static_cast<QAudioEngine::OutputMode>(mode));
}

int QAudioEngine_OutputMode(const QAudioEngine* self) {
	QAudioEngine::OutputMode _ret = self->outputMode();
	return static_cast<int>(_ret);
}

int QAudioEngine_SampleRate(const QAudioEngine* self) {
	return self->sampleRate();
}

void QAudioEngine_SetOutputDevice(QAudioEngine* self, QAudioDevice* device) {
	self->setOutputDevice(*device);
}

QAudioDevice* QAudioEngine_OutputDevice(const QAudioEngine* self) {
	return new QAudioDevice(self->outputDevice());
}

void QAudioEngine_SetMasterVolume(QAudioEngine* self, float volume) {
	self->setMasterVolume(static_cast<float>(volume));
}

float QAudioEngine_MasterVolume(const QAudioEngine* self) {
	return self->masterVolume();
}

void QAudioEngine_SetPaused(QAudioEngine* self, bool paused) {
	self->setPaused(paused);
}

bool QAudioEngine_Paused(const QAudioEngine* self) {
	return self->paused();
}

void QAudioEngine_SetRoomEffectsEnabled(QAudioEngine* self, bool enabled) {
	self->setRoomEffectsEnabled(enabled);
}

bool QAudioEngine_RoomEffectsEnabled(const QAudioEngine* self) {
	return self->roomEffectsEnabled();
}

void QAudioEngine_SetDistanceScale(QAudioEngine* self, float scale) {
	self->setDistanceScale(static_cast<float>(scale));
}

float QAudioEngine_DistanceScale(const QAudioEngine* self) {
	return self->distanceScale();
}

void QAudioEngine_OutputModeChanged(QAudioEngine* self) {
	self->outputModeChanged();
}

void QAudioEngine_connect_OutputModeChanged(QAudioEngine* self, intptr_t slot) {
	MiqtVirtualQAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::outputModeChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_OutputModeChanged(slot);
	});
}

void QAudioEngine_OutputDeviceChanged(QAudioEngine* self) {
	self->outputDeviceChanged();
}

void QAudioEngine_connect_OutputDeviceChanged(QAudioEngine* self, intptr_t slot) {
	MiqtVirtualQAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::outputDeviceChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_OutputDeviceChanged(slot);
	});
}

void QAudioEngine_MasterVolumeChanged(QAudioEngine* self) {
	self->masterVolumeChanged();
}

void QAudioEngine_connect_MasterVolumeChanged(QAudioEngine* self, intptr_t slot) {
	MiqtVirtualQAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::masterVolumeChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_MasterVolumeChanged(slot);
	});
}

void QAudioEngine_PausedChanged(QAudioEngine* self) {
	self->pausedChanged();
}

void QAudioEngine_connect_PausedChanged(QAudioEngine* self, intptr_t slot) {
	MiqtVirtualQAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::pausedChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_PausedChanged(slot);
	});
}

void QAudioEngine_DistanceScaleChanged(QAudioEngine* self) {
	self->distanceScaleChanged();
}

void QAudioEngine_connect_DistanceScaleChanged(QAudioEngine* self, intptr_t slot) {
	MiqtVirtualQAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::distanceScaleChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_DistanceScaleChanged(slot);
	});
}

void QAudioEngine_Start(QAudioEngine* self) {
	self->start();
}

void QAudioEngine_Stop(QAudioEngine* self) {
	self->stop();
}

void QAudioEngine_Pause(QAudioEngine* self) {
	self->pause();
}

void QAudioEngine_Resume(QAudioEngine* self) {
	self->resume();
}

struct miqt_string QAudioEngine_Tr2(const char* s, const char* c) {
	QString _ret = QAudioEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioEngine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioEngine_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAudioEngine_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioEngine*)(self) )->virtualbase_Event(event);
}

bool QAudioEngine_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAudioEngine_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioEngine*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAudioEngine_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAudioEngine_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioEngine*)(self) )->virtualbase_TimerEvent(event);
}

bool QAudioEngine_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAudioEngine_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioEngine*)(self) )->virtualbase_ChildEvent(event);
}

bool QAudioEngine_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAudioEngine_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioEngine*)(self) )->virtualbase_CustomEvent(event);
}

bool QAudioEngine_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAudioEngine_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioEngine*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAudioEngine_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAudioEngine_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioEngine*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioEngine_Delete(QAudioEngine* self) {
	delete self;
}

