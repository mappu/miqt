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

void miqt_exec_callback_QSoundEffect_SourceChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_LoopCountChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_LoopsRemainingChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_VolumeChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_MutedChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_LoadedChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_PlayingChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_StatusChanged(intptr_t);
void miqt_exec_callback_QSoundEffect_CategoryChanged(intptr_t);
bool miqt_exec_callback_QSoundEffect_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSoundEffect_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSoundEffect_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSoundEffect_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSoundEffect_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSoundEffect_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSoundEffect_DisconnectNotify(void*, intptr_t, QMetaMethod*);
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

struct miqt_string QSoundEffect_TrUtf8(const char* s) {
	QString _ret = QSoundEffect::trUtf8(s);
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

double QSoundEffect_Volume(const QSoundEffect* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QSoundEffect_SetVolume(QSoundEffect* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
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

struct miqt_string QSoundEffect_Category(const QSoundEffect* self) {
	QString _ret = self->category();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSoundEffect_SetCategory(QSoundEffect* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->setCategory(category_QString);
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

void QSoundEffect_CategoryChanged(QSoundEffect* self) {
	self->categoryChanged();
}

void QSoundEffect_connect_CategoryChanged(QSoundEffect* self, intptr_t slot) {
	MiqtVirtualQSoundEffect::connect(self, static_cast<void (QSoundEffect::*)()>(&QSoundEffect::categoryChanged), self, [=]() {
		miqt_exec_callback_QSoundEffect_CategoryChanged(slot);
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

struct miqt_string QSoundEffect_TrUtf82(const char* s, const char* c) {
	QString _ret = QSoundEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSoundEffect_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSoundEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSoundEffect_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSoundEffect_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_Event(event);
}

bool QSoundEffect_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSoundEffect_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSoundEffect_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSoundEffect_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_TimerEvent(event);
}

bool QSoundEffect_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSoundEffect_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_ChildEvent(event);
}

bool QSoundEffect_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSoundEffect_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_CustomEvent(event);
}

bool QSoundEffect_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSoundEffect_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSoundEffect_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSoundEffect* self_cast = dynamic_cast<MiqtVirtualQSoundEffect*>( (QSoundEffect*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSoundEffect_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSoundEffect*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSoundEffect_Delete(QSoundEffect* self) {
	delete self;
}

