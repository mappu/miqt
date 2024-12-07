#include <QAmbientSound>
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
#include <QUrl>
#include <qambientsound.h>
#include "gen_qambientsound.h"
#include "_cgo_export.h"

class MiqtVirtualQAmbientSound : public virtual QAmbientSound {
public:

	MiqtVirtualQAmbientSound(QAudioEngine* engine): QAmbientSound(engine) {};

	virtual ~MiqtVirtualQAmbientSound() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAmbientSound::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAmbientSound_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAmbientSound::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAmbientSound::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAmbientSound_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAmbientSound::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAmbientSound::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAmbientSound_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAmbientSound::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAmbientSound::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAmbientSound_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAmbientSound::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAmbientSound::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAmbientSound_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAmbientSound::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAmbientSound::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAmbientSound_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAmbientSound::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAmbientSound::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAmbientSound_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAmbientSound::disconnectNotify(*signal);

	}

};

QAmbientSound* QAmbientSound_new(QAudioEngine* engine) {
	return new MiqtVirtualQAmbientSound(engine);
}

void QAmbientSound_virtbase(QAmbientSound* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAmbientSound_MetaObject(const QAmbientSound* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAmbientSound_Metacast(QAmbientSound* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAmbientSound_Tr(const char* s) {
	QString _ret = QAmbientSound::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAmbientSound_SetSource(QAmbientSound* self, QUrl* url) {
	self->setSource(*url);
}

QUrl* QAmbientSound_Source(const QAmbientSound* self) {
	return new QUrl(self->source());
}

int QAmbientSound_Loops(const QAmbientSound* self) {
	return self->loops();
}

void QAmbientSound_SetLoops(QAmbientSound* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

bool QAmbientSound_AutoPlay(const QAmbientSound* self) {
	return self->autoPlay();
}

void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay) {
	self->setAutoPlay(autoPlay);
}

void QAmbientSound_SetVolume(QAmbientSound* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

float QAmbientSound_Volume(const QAmbientSound* self) {
	return self->volume();
}

QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self) {
	return self->engine();
}

void QAmbientSound_SourceChanged(QAmbientSound* self) {
	self->sourceChanged();
}

void QAmbientSound_connect_SourceChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::sourceChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_SourceChanged(slot);
	});
}

void QAmbientSound_LoopsChanged(QAmbientSound* self) {
	self->loopsChanged();
}

void QAmbientSound_connect_LoopsChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::loopsChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_LoopsChanged(slot);
	});
}

void QAmbientSound_AutoPlayChanged(QAmbientSound* self) {
	self->autoPlayChanged();
}

void QAmbientSound_connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::autoPlayChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_AutoPlayChanged(slot);
	});
}

void QAmbientSound_VolumeChanged(QAmbientSound* self) {
	self->volumeChanged();
}

void QAmbientSound_connect_VolumeChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::volumeChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_VolumeChanged(slot);
	});
}

void QAmbientSound_Play(QAmbientSound* self) {
	self->play();
}

void QAmbientSound_Pause(QAmbientSound* self) {
	self->pause();
}

void QAmbientSound_Stop(QAmbientSound* self) {
	self->stop();
}

struct miqt_string QAmbientSound_Tr2(const char* s, const char* c) {
	QString _ret = QAmbientSound::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAmbientSound_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAmbientSound::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAmbientSound_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) )->handle__Event = slot;
}

bool QAmbientSound_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_Event(event);
}

void QAmbientSound_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) )->handle__EventFilter = slot;
}

bool QAmbientSound_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAmbientSound_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) )->handle__TimerEvent = slot;
}

void QAmbientSound_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_TimerEvent(event);
}

void QAmbientSound_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) )->handle__ChildEvent = slot;
}

void QAmbientSound_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_ChildEvent(event);
}

void QAmbientSound_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) )->handle__CustomEvent = slot;
}

void QAmbientSound_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_CustomEvent(event);
}

void QAmbientSound_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) )->handle__ConnectNotify = slot;
}

void QAmbientSound_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAmbientSound_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) )->handle__DisconnectNotify = slot;
}

void QAmbientSound_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAmbientSound_Delete(QAmbientSound* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAmbientSound*>( self );
	} else {
		delete self;
	}
}

