#include <QAudioDevice>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSoundEffect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qsoundeffect.h>
#include "gen_qsoundeffect.h"
#include "_cgo_export.h"

class MiqtVirtualQSoundEffect : public virtual QSoundEffect {
public:

	MiqtVirtualQSoundEffect(): QSoundEffect() {};
	MiqtVirtualQSoundEffect(const QAudioDevice& audioDevice): QSoundEffect(audioDevice) {};
	MiqtVirtualQSoundEffect(QObject* parent): QSoundEffect(parent) {};
	MiqtVirtualQSoundEffect(const QAudioDevice& audioDevice, QObject* parent): QSoundEffect(audioDevice, parent) {};

	virtual ~MiqtVirtualQSoundEffect() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSoundEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSoundEffect_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSoundEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSoundEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSoundEffect_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSoundEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSoundEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSoundEffect_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSoundEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSoundEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSoundEffect_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSoundEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSoundEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSoundEffect_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSoundEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSoundEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSoundEffect_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSoundEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSoundEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSoundEffect_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSoundEffect::disconnectNotify(*signal);

	}

};

void QSoundEffect_new(QSoundEffect** outptr_QSoundEffect, QObject** outptr_QObject) {
	MiqtVirtualQSoundEffect* ret = new MiqtVirtualQSoundEffect();
	*outptr_QSoundEffect = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QSoundEffect_new2(QAudioDevice* audioDevice, QSoundEffect** outptr_QSoundEffect, QObject** outptr_QObject) {
	MiqtVirtualQSoundEffect* ret = new MiqtVirtualQSoundEffect(*audioDevice);
	*outptr_QSoundEffect = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QSoundEffect_new3(QObject* parent, QSoundEffect** outptr_QSoundEffect, QObject** outptr_QObject) {
	MiqtVirtualQSoundEffect* ret = new MiqtVirtualQSoundEffect(parent);
	*outptr_QSoundEffect = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QSoundEffect_new4(QAudioDevice* audioDevice, QObject* parent, QSoundEffect** outptr_QSoundEffect, QObject** outptr_QObject) {
	MiqtVirtualQSoundEffect* ret = new MiqtVirtualQSoundEffect(*audioDevice, parent);
	*outptr_QSoundEffect = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QSoundEffect_MetaObject(const QSoundEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSoundEffect_Metacast(QSoundEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSoundEffect_Tr(const char* s) {
	QString _ret = QSoundEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QSoundEffect_SupportedMimeTypes() {
	QStringList _ret = QSoundEffect::supportedMimeTypes();
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

QUrl* QSoundEffect_Source(const QSoundEffect* self) {
	return new QUrl(self->source());
}

void QSoundEffect_SetSource(QSoundEffect* self, QUrl* url) {
	self->setSource(*url);
}

int QSoundEffect_LoopCount(const QSoundEffect* self) {
	return self->loopCount();
}

int QSoundEffect_LoopsRemaining(const QSoundEffect* self) {
	return self->loopsRemaining();
}

void QSoundEffect_SetLoopCount(QSoundEffect* self, int loopCount) {
	self->setLoopCount(static_cast<int>(loopCount));
}

QAudioDevice* QSoundEffect_AudioDevice(QSoundEffect* self) {
	return new QAudioDevice(self->audioDevice());
}

void QSoundEffect_SetAudioDevice(QSoundEffect* self, QAudioDevice* device) {
	self->setAudioDevice(*device);
}

float QSoundEffect_Volume(const QSoundEffect* self) {
	return self->volume();
}

void QSoundEffect_SetVolume(QSoundEffect* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

bool QSoundEffect_IsMuted(const QSoundEffect* self) {
	return self->isMuted();
}

void QSoundEffect_SetMuted(QSoundEffect* self, bool muted) {
	self->setMuted(muted);
}

bool QSoundEffect_IsLoaded(const QSoundEffect* self) {
	return self->isLoaded();
}

bool QSoundEffect_IsPlaying(const QSoundEffect* self) {
	return self->isPlaying();
}

int QSoundEffect_Status(const QSoundEffect* self) {
	QSoundEffect::Status _ret = self->status();
	return static_cast<int>(_ret);
}

void QSoundEffect_SourceChanged(QSoundEffect* self) {
	self->sourceChanged();
}

void QSoundEffect_connect_SourceChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::sourceChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_SourceChanged(slot);
	});
}

void QSoundEffect_LoopCountChanged(QSoundEffect* self) {
	self->loopCountChanged();
}

void QSoundEffect_connect_LoopCountChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loopCountChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_LoopCountChanged(slot);
	});
}

void QSoundEffect_LoopsRemainingChanged(QSoundEffect* self) {
	self->loopsRemainingChanged();
}

void QSoundEffect_connect_LoopsRemainingChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loopsRemainingChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_LoopsRemainingChanged(slot);
	});
}

void QSoundEffect_VolumeChanged(QSoundEffect* self) {
	self->volumeChanged();
}

void QSoundEffect_connect_VolumeChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::volumeChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_VolumeChanged(slot);
	});
}

void QSoundEffect_MutedChanged(QSoundEffect* self) {
	self->mutedChanged();
}

void QSoundEffect_connect_MutedChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::mutedChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_MutedChanged(slot);
	});
}

void QSoundEffect_LoadedChanged(QSoundEffect* self) {
	self->loadedChanged();
}

void QSoundEffect_connect_LoadedChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loadedChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_LoadedChanged(slot);
	});
}

void QSoundEffect_PlayingChanged(QSoundEffect* self) {
	self->playingChanged();
}

void QSoundEffect_connect_PlayingChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::playingChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_PlayingChanged(slot);
	});
}

void QSoundEffect_StatusChanged(QSoundEffect* self) {
	self->statusChanged();
}

void QSoundEffect_connect_StatusChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::statusChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_StatusChanged(slot);
	});
}

void QSoundEffect_AudioDeviceChanged(QSoundEffect* self) {
	self->audioDeviceChanged();
}

void QSoundEffect_connect_AudioDeviceChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::audioDeviceChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_AudioDeviceChanged(slot);
	});
}

void QSoundEffect_Play(QSoundEffect* self) {
	self->play();
}

void QSoundEffect_Stop(QSoundEffect* self) {
	self->stop();
}

struct miqt_string QSoundEffect_Tr2(const char* s, const char* c) {
	QString _ret = QSoundEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSoundEffect_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSoundEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSoundEffect_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) )->handle__Event = slot;
}

bool QSoundEffect_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_Event(event);
}

void QSoundEffect_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) )->handle__EventFilter = slot;
}

bool QSoundEffect_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_EventFilter(watched, event);
}

void QSoundEffect_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) )->handle__TimerEvent = slot;
}

void QSoundEffect_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_TimerEvent(event);
}

void QSoundEffect_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) )->handle__ChildEvent = slot;
}

void QSoundEffect_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_ChildEvent(event);
}

void QSoundEffect_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) )->handle__CustomEvent = slot;
}

void QSoundEffect_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_CustomEvent(event);
}

void QSoundEffect_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) )->handle__ConnectNotify = slot;
}

void QSoundEffect_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_ConnectNotify(signal);
}

void QSoundEffect_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) )->handle__DisconnectNotify = slot;
}

void QSoundEffect_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSoundEffect_Delete(QSoundEffect* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSoundEffect*>( self );
	} else {
		delete self;
	}
}

