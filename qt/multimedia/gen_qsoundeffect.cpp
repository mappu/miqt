#include <QAudioDeviceInfo>
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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSoundEffect_sourceChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_loopCountChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_loopsRemainingChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_volumeChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_mutedChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_loadedChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_playingChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_statusChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_categoryChanged(intptr_t);
bool miqt_exec_callback_QSoundEffect_event(QSoundEffect*, intptr_t, QEvent*);
bool miqt_exec_callback_QSoundEffect_eventFilter(QSoundEffect*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSoundEffect_timerEvent(QSoundEffect*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSoundEffect_childEvent(QSoundEffect*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSoundEffect_customEvent(QSoundEffect*, intptr_t, QEvent*);
void miqt_exec_callback_QSoundEffect_connectNotify(QSoundEffect*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSoundEffect_disconnectNotify(QSoundEffect*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSoundEffect final : public QSoundEffect {
public:

	MiqtVirtualQSoundEffect(): QSoundEffect() {};
	MiqtVirtualQSoundEffect(const QAudioDeviceInfo& audioDevice): QSoundEffect(audioDevice) {};
	MiqtVirtualQSoundEffect(QObject* parent): QSoundEffect(parent) {};
	MiqtVirtualQSoundEffect(const QAudioDeviceInfo& audioDevice, QObject* parent): QSoundEffect(audioDevice, parent) {};

	virtual ~MiqtVirtualQSoundEffect() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSoundEffect::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSoundEffect_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSoundEffect::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSoundEffect::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSoundEffect_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSoundEffect::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSoundEffect::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSoundEffect_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSoundEffect::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSoundEffect::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSoundEffect_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSoundEffect::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSoundEffect::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSoundEffect_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSoundEffect::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSoundEffect::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSoundEffect_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSoundEffect::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSoundEffect::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSoundEffect_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSoundEffect::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSoundEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSoundEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSoundEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSoundEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSoundEffect* QSoundEffect_new() {
	return new MiqtVirtualQSoundEffect();
}

QSoundEffect* QSoundEffect_new2(QAudioDeviceInfo* audioDevice) {
	return new MiqtVirtualQSoundEffect(*audioDevice);
}

QSoundEffect* QSoundEffect_new3(QObject* parent) {
	return new MiqtVirtualQSoundEffect(parent);
}

QSoundEffect* QSoundEffect_new4(QAudioDeviceInfo* audioDevice, QObject* parent) {
	return new MiqtVirtualQSoundEffect(*audioDevice, parent);
}

void QSoundEffect_virtbase(QSoundEffect* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSoundEffect_metaObject(const QSoundEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSoundEffect_metacast(QSoundEffect* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSoundEffect_tr(const char* s) {
	QString _ret = QSoundEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSoundEffect_trUtf8(const char* s) {
	QString _ret = QSoundEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QSoundEffect_supportedMimeTypes() {
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

QUrl* QSoundEffect_source(const QSoundEffect* self) {
	return new QUrl(self->source());
}

void QSoundEffect_setSource(QSoundEffect* self, QUrl* url) {
	self->setSource(*url);
}

int QSoundEffect_loopCount(const QSoundEffect* self) {
	return self->loopCount();
}

int QSoundEffect_loopsRemaining(const QSoundEffect* self) {
	return self->loopsRemaining();
}

void QSoundEffect_setLoopCount(QSoundEffect* self, int loopCount) {
	self->setLoopCount(static_cast<int>(loopCount));
}

double QSoundEffect_volume(const QSoundEffect* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QSoundEffect_setVolume(QSoundEffect* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

bool QSoundEffect_isMuted(const QSoundEffect* self) {
	return self->isMuted();
}

void QSoundEffect_setMuted(QSoundEffect* self, bool muted) {
	self->setMuted(muted);
}

bool QSoundEffect_isLoaded(const QSoundEffect* self) {
	return self->isLoaded();
}

bool QSoundEffect_isPlaying(const QSoundEffect* self) {
	return self->isPlaying();
}

int QSoundEffect_status(const QSoundEffect* self) {
	QSoundEffect::Status _ret = self->status();
	return static_cast<int>(_ret);
}

struct miqt_string QSoundEffect_category(const QSoundEffect* self) {
	QString _ret = self->category();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSoundEffect_setCategory(QSoundEffect* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->setCategory(category_QString);
}

void QSoundEffect_sourceChanged(QSoundEffect* self) {
	self->sourceChanged();
}

void QSoundEffect_connect_sourceChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::sourceChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_sourceChanged(slot);
	});
}

void QSoundEffect_loopCountChanged(QSoundEffect* self) {
	self->loopCountChanged();
}

void QSoundEffect_connect_loopCountChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loopCountChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_loopCountChanged(slot);
	});
}

void QSoundEffect_loopsRemainingChanged(QSoundEffect* self) {
	self->loopsRemainingChanged();
}

void QSoundEffect_connect_loopsRemainingChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loopsRemainingChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_loopsRemainingChanged(slot);
	});
}

void QSoundEffect_volumeChanged(QSoundEffect* self) {
	self->volumeChanged();
}

void QSoundEffect_connect_volumeChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::volumeChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_volumeChanged(slot);
	});
}

void QSoundEffect_mutedChanged(QSoundEffect* self) {
	self->mutedChanged();
}

void QSoundEffect_connect_mutedChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::mutedChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_mutedChanged(slot);
	});
}

void QSoundEffect_loadedChanged(QSoundEffect* self) {
	self->loadedChanged();
}

void QSoundEffect_connect_loadedChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::loadedChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_loadedChanged(slot);
	});
}

void QSoundEffect_playingChanged(QSoundEffect* self) {
	self->playingChanged();
}

void QSoundEffect_connect_playingChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::playingChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_playingChanged(slot);
	});
}

void QSoundEffect_statusChanged(QSoundEffect* self) {
	self->statusChanged();
}

void QSoundEffect_connect_statusChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::statusChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_statusChanged(slot);
	});
}

void QSoundEffect_categoryChanged(QSoundEffect* self) {
	self->categoryChanged();
}

void QSoundEffect_connect_categoryChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::categoryChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_categoryChanged(slot);
	});
}

void QSoundEffect_play(QSoundEffect* self) {
	self->play();
}

void QSoundEffect_stop(QSoundEffect* self) {
	self->stop();
}

struct miqt_string QSoundEffect_tr2(const char* s, const char* c) {
	QString _ret = QSoundEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSoundEffect_tr3(const char* s, const char* c, int n) {
	QString _ret = QSoundEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSoundEffect_trUtf82(const char* s, const char* c) {
	QString _ret = QSoundEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSoundEffect_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSoundEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSoundEffect_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSoundEffect_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_event(event);
}

bool QSoundEffect_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSoundEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSoundEffect_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSoundEffect_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_timerEvent(event);
}

bool QSoundEffect_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSoundEffect_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_childEvent(event);
}

bool QSoundEffect_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSoundEffect_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_customEvent(event);
}

bool QSoundEffect_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSoundEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_connectNotify(signal);
}

bool QSoundEffect_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSoundEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSoundEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSoundEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSoundEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSoundEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSoundEffect_delete(QSoundEffect* self) {
	delete self;
}

