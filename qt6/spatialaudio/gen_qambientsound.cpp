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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAmbientSound_sourceChanged(intptr_t);
void miqt_exec_callback_QAmbientSound_loopsChanged(intptr_t);
void miqt_exec_callback_QAmbientSound_autoPlayChanged(intptr_t);
void miqt_exec_callback_QAmbientSound_volumeChanged(intptr_t);
bool miqt_exec_callback_QAmbientSound_event(QAmbientSound*, intptr_t, QEvent*);
bool miqt_exec_callback_QAmbientSound_eventFilter(QAmbientSound*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAmbientSound_timerEvent(QAmbientSound*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAmbientSound_childEvent(QAmbientSound*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAmbientSound_customEvent(QAmbientSound*, intptr_t, QEvent*);
void miqt_exec_callback_QAmbientSound_connectNotify(QAmbientSound*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAmbientSound_disconnectNotify(QAmbientSound*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAmbientSound final : public QAmbientSound {
public:

	MiqtVirtualQAmbientSound(QAudioEngine* engine): QAmbientSound(engine) {};

	virtual ~MiqtVirtualQAmbientSound() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAmbientSound::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAmbientSound_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAmbientSound::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAmbientSound::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAmbientSound_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAmbientSound::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAmbientSound::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAmbientSound_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAmbientSound::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAmbientSound::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAmbientSound_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAmbientSound::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAmbientSound::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAmbientSound_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAmbientSound::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAmbientSound::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAmbientSound_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAmbientSound::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAmbientSound::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAmbientSound_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAmbientSound::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAmbientSound_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAmbientSound_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAmbientSound_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAmbientSound_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAmbientSound* QAmbientSound_new(QAudioEngine* engine) {
	return new MiqtVirtualQAmbientSound(engine);
}

void QAmbientSound_virtbase(QAmbientSound* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAmbientSound_metaObject(const QAmbientSound* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAmbientSound_metacast(QAmbientSound* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAmbientSound_tr(const char* s) {
	QString _ret = QAmbientSound::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAmbientSound_setSource(QAmbientSound* self, QUrl* url) {
	self->setSource(*url);
}

QUrl* QAmbientSound_source(const QAmbientSound* self) {
	return new QUrl(self->source());
}

int QAmbientSound_loops(const QAmbientSound* self) {
	return self->loops();
}

void QAmbientSound_setLoops(QAmbientSound* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

bool QAmbientSound_autoPlay(const QAmbientSound* self) {
	return self->autoPlay();
}

void QAmbientSound_setAutoPlay(QAmbientSound* self, bool autoPlay) {
	self->setAutoPlay(autoPlay);
}

void QAmbientSound_setVolume(QAmbientSound* self, float volume) {
	self->setVolume(static_cast<float>(volume));
}

float QAmbientSound_volume(const QAmbientSound* self) {
	return self->volume();
}

QAudioEngine* QAmbientSound_engine(const QAmbientSound* self) {
	return self->engine();
}

void QAmbientSound_sourceChanged(QAmbientSound* self) {
	self->sourceChanged();
}

void QAmbientSound_connect_sourceChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::sourceChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_sourceChanged(slot);
	});
}

void QAmbientSound_loopsChanged(QAmbientSound* self) {
	self->loopsChanged();
}

void QAmbientSound_connect_loopsChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::loopsChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_loopsChanged(slot);
	});
}

void QAmbientSound_autoPlayChanged(QAmbientSound* self) {
	self->autoPlayChanged();
}

void QAmbientSound_connect_autoPlayChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::autoPlayChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_autoPlayChanged(slot);
	});
}

void QAmbientSound_volumeChanged(QAmbientSound* self) {
	self->volumeChanged();
}

void QAmbientSound_connect_volumeChanged(QAmbientSound* self, intptr_t slot) {
	MiqtVirtualQAmbientSound::connect(self, static_cast<void (QAmbientSound::*)()>(&QAmbientSound::volumeChanged), self, [=]() {
		miqt_exec_callback_QAmbientSound_volumeChanged(slot);
	});
}

void QAmbientSound_play(QAmbientSound* self) {
	self->play();
}

void QAmbientSound_pause(QAmbientSound* self) {
	self->pause();
}

void QAmbientSound_stop(QAmbientSound* self) {
	self->stop();
}

struct miqt_string QAmbientSound_tr2(const char* s, const char* c) {
	QString _ret = QAmbientSound::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAmbientSound_tr3(const char* s, const char* c, int n) {
	QString _ret = QAmbientSound::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAmbientSound_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAmbientSound_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_event(event);
}

bool QAmbientSound_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAmbientSound_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAmbientSound_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAmbientSound_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_timerEvent(event);
}

bool QAmbientSound_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAmbientSound_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_childEvent(event);
}

bool QAmbientSound_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAmbientSound_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_customEvent(event);
}

bool QAmbientSound_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAmbientSound_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_connectNotify(signal);
}

bool QAmbientSound_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAmbientSound_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAmbientSound*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAmbientSound_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAmbientSound_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAmbientSound_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAmbientSound_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAmbientSound* self_cast = dynamic_cast<MiqtVirtualQAmbientSound*>( (QAmbientSound*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAmbientSound_delete(QAmbientSound* self) {
	delete self;
}

