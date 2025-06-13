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

void miqt_exec_callback_QAudioEngine_outputModeChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_outputDeviceChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_masterVolumeChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_pausedChanged(intptr_t);
void miqt_exec_callback_QAudioEngine_distanceScaleChanged(intptr_t);
bool miqt_exec_callback_QAudioEngine_event(QAudioEngine*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioEngine_eventFilter(QAudioEngine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioEngine_timerEvent(QAudioEngine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioEngine_childEvent(QAudioEngine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioEngine_customEvent(QAudioEngine*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioEngine_connectNotify(QAudioEngine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioEngine_disconnectNotify(QAudioEngine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioEngine final : public QAudioEngine {
public:

	MiqtVirtualQAudioEngine(): QAudioEngine() {}
	MiqtVirtualQAudioEngine(QObject* parent): QAudioEngine(parent) {}
	MiqtVirtualQAudioEngine(int sampleRate): QAudioEngine(sampleRate) {}
	MiqtVirtualQAudioEngine(int sampleRate, QObject* parent): QAudioEngine(sampleRate, parent) {}

	virtual ~MiqtVirtualQAudioEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioEngine::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAudioEngine_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAudioEngine_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioEngine::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAudioEngine_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAudioEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioEngine::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAudioEngine_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QAudioEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioEngine::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAudioEngine_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QAudioEngine_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioEngine::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAudioEngine_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QAudioEngine_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioEngine::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioEngine_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QAudioEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioEngine::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioEngine_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QAudioEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioEngine* QAudioEngine_new() {
	return new (std::nothrow) MiqtVirtualQAudioEngine();
}

QAudioEngine* QAudioEngine_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioEngine(parent);
}

QAudioEngine* QAudioEngine_new3(int sampleRate) {
	return new (std::nothrow) MiqtVirtualQAudioEngine(static_cast<int>(sampleRate));
}

QAudioEngine* QAudioEngine_new4(int sampleRate, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioEngine(static_cast<int>(sampleRate), parent);
}

void QAudioEngine_virtbase(QAudioEngine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioEngine_metaObject(const QAudioEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioEngine_metacast(QAudioEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioEngine_tr(const char* s) {
	QString _ret = QAudioEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioEngine_setOutputMode(QAudioEngine* self, int mode) {
	self->setOutputMode(static_cast<QAudioEngine::OutputMode>(mode));
}

int QAudioEngine_outputMode(const QAudioEngine* self) {
	QAudioEngine::OutputMode _ret = self->outputMode();
	return static_cast<int>(_ret);
}

int QAudioEngine_sampleRate(const QAudioEngine* self) {
	return self->sampleRate();
}

void QAudioEngine_setOutputDevice(QAudioEngine* self, QAudioDevice* device) {
	self->setOutputDevice(*device);
}

QAudioDevice* QAudioEngine_outputDevice(const QAudioEngine* self) {
	return new QAudioDevice(self->outputDevice());
}

void QAudioEngine_setMasterVolume(QAudioEngine* self, float volume) {
	self->setMasterVolume(static_cast<float>(volume));
}

float QAudioEngine_masterVolume(const QAudioEngine* self) {
	return self->masterVolume();
}

void QAudioEngine_setPaused(QAudioEngine* self, bool paused) {
	self->setPaused(paused);
}

bool QAudioEngine_paused(const QAudioEngine* self) {
	return self->paused();
}

void QAudioEngine_setRoomEffectsEnabled(QAudioEngine* self, bool enabled) {
	self->setRoomEffectsEnabled(enabled);
}

bool QAudioEngine_roomEffectsEnabled(const QAudioEngine* self) {
	return self->roomEffectsEnabled();
}

void QAudioEngine_setDistanceScale(QAudioEngine* self, float scale) {
	self->setDistanceScale(static_cast<float>(scale));
}

float QAudioEngine_distanceScale(const QAudioEngine* self) {
	return self->distanceScale();
}

void QAudioEngine_outputModeChanged(QAudioEngine* self) {
	self->outputModeChanged();
}

void QAudioEngine_connect_outputModeChanged(QAudioEngine* self, intptr_t slot) {
	QAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::outputModeChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_outputModeChanged(slot);
	});
}

void QAudioEngine_outputDeviceChanged(QAudioEngine* self) {
	self->outputDeviceChanged();
}

void QAudioEngine_connect_outputDeviceChanged(QAudioEngine* self, intptr_t slot) {
	QAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::outputDeviceChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_outputDeviceChanged(slot);
	});
}

void QAudioEngine_masterVolumeChanged(QAudioEngine* self) {
	self->masterVolumeChanged();
}

void QAudioEngine_connect_masterVolumeChanged(QAudioEngine* self, intptr_t slot) {
	QAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::masterVolumeChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_masterVolumeChanged(slot);
	});
}

void QAudioEngine_pausedChanged(QAudioEngine* self) {
	self->pausedChanged();
}

void QAudioEngine_connect_pausedChanged(QAudioEngine* self, intptr_t slot) {
	QAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::pausedChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_pausedChanged(slot);
	});
}

void QAudioEngine_distanceScaleChanged(QAudioEngine* self) {
	self->distanceScaleChanged();
}

void QAudioEngine_connect_distanceScaleChanged(QAudioEngine* self, intptr_t slot) {
	QAudioEngine::connect(self, static_cast<void (QAudioEngine::*)()>(&QAudioEngine::distanceScaleChanged), self, [=]() {
		miqt_exec_callback_QAudioEngine_distanceScaleChanged(slot);
	});
}

void QAudioEngine_start(QAudioEngine* self) {
	self->start();
}

void QAudioEngine_stop(QAudioEngine* self) {
	self->stop();
}

void QAudioEngine_pause(QAudioEngine* self) {
	self->pause();
}

void QAudioEngine_resume(QAudioEngine* self) {
	self->resume();
}

struct miqt_string QAudioEngine_tr2(const char* s, const char* c) {
	QString _ret = QAudioEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioEngine_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioEngine_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAudioEngine_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAudioEngine*>(self)->QAudioEngine::event(event);
}

bool QAudioEngine_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAudioEngine*>(self)->QAudioEngine::eventFilter(watched, event);
}

bool QAudioEngine_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioEngine_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAudioEngine*>(self)->QAudioEngine::timerEvent(event);
}

bool QAudioEngine_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioEngine_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAudioEngine*>(self)->QAudioEngine::childEvent(event);
}

bool QAudioEngine_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioEngine_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAudioEngine*>(self)->QAudioEngine::customEvent(event);
}

bool QAudioEngine_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioEngine*>(self)->QAudioEngine::connectNotify(*signal);
}

bool QAudioEngine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioEngine*>(self)->QAudioEngine::disconnectNotify(*signal);
}

QObject* QAudioEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAudioEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAudioEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAudioEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioEngine* self_cast = dynamic_cast<MiqtVirtualQAudioEngine*>( (QAudioEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAudioEngine_delete(QAudioEngine* self) {
	delete self;
}

