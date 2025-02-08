#include <QAbstractAnimation>
#include <QAnimationDriver>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qabstractanimation.h>
#include "gen_qabstractanimation.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractAnimation_finished(intptr_t);
void miqt_exec_callback_QAbstractAnimation_stateChanged(intptr_t, int, int);
void miqt_exec_callback_QAbstractAnimation_currentLoopChanged(intptr_t, int);
void miqt_exec_callback_QAbstractAnimation_directionChanged(intptr_t, int);
int miqt_exec_callback_QAbstractAnimation_duration(const QAbstractAnimation*, intptr_t);
bool miqt_exec_callback_QAbstractAnimation_event(QAbstractAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractAnimation_updateCurrentTime(QAbstractAnimation*, intptr_t, int);
void miqt_exec_callback_QAbstractAnimation_updateState(QAbstractAnimation*, intptr_t, int, int);
void miqt_exec_callback_QAbstractAnimation_updateDirection(QAbstractAnimation*, intptr_t, int);
bool miqt_exec_callback_QAbstractAnimation_eventFilter(QAbstractAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractAnimation_timerEvent(QAbstractAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractAnimation_childEvent(QAbstractAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractAnimation_customEvent(QAbstractAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractAnimation_connectNotify(QAbstractAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractAnimation_disconnectNotify(QAbstractAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAnimationDriver_started(intptr_t);
void miqt_exec_callback_QAnimationDriver_stopped(intptr_t);
void miqt_exec_callback_QAnimationDriver_advance(QAnimationDriver*, intptr_t);
long long miqt_exec_callback_QAnimationDriver_elapsed(const QAnimationDriver*, intptr_t);
void miqt_exec_callback_QAnimationDriver_start(QAnimationDriver*, intptr_t);
void miqt_exec_callback_QAnimationDriver_stop(QAnimationDriver*, intptr_t);
bool miqt_exec_callback_QAnimationDriver_event(QAnimationDriver*, intptr_t, QEvent*);
bool miqt_exec_callback_QAnimationDriver_eventFilter(QAnimationDriver*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAnimationDriver_timerEvent(QAnimationDriver*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAnimationDriver_childEvent(QAnimationDriver*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAnimationDriver_customEvent(QAnimationDriver*, intptr_t, QEvent*);
void miqt_exec_callback_QAnimationDriver_connectNotify(QAnimationDriver*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAnimationDriver_disconnectNotify(QAnimationDriver*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractAnimation final : public QAbstractAnimation {
public:

	MiqtVirtualQAbstractAnimation(): QAbstractAnimation() {};
	MiqtVirtualQAbstractAnimation(QObject* parent): QAbstractAnimation(parent) {};

	virtual ~MiqtVirtualQAbstractAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__duration == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractAnimation_duration(this, handle__duration);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractAnimation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractAnimation_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractAnimation::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int currentTime) override {
		if (handle__updateCurrentTime == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = currentTime;

		miqt_exec_callback_QAbstractAnimation_updateCurrentTime(this, handle__updateCurrentTime, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__updateState == 0) {
			QAbstractAnimation::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QAbstractAnimation_updateState(this, handle__updateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateState(int newState, int oldState) {

		QAbstractAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__updateDirection == 0) {
			QAbstractAnimation::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QAbstractAnimation_updateDirection(this, handle__updateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateDirection(int direction) {

		QAbstractAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractAnimation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractAnimation_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractAnimation::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractAnimation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractAnimation_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractAnimation::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractAnimation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractAnimation_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractAnimation::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractAnimation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractAnimation_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractAnimation::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractAnimation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractAnimation_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractAnimation::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractAnimation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractAnimation_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractAnimation::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAbstractAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractAnimation* QAbstractAnimation_new() {
	return new MiqtVirtualQAbstractAnimation();
}

QAbstractAnimation* QAbstractAnimation_new2(QObject* parent) {
	return new MiqtVirtualQAbstractAnimation(parent);
}

void QAbstractAnimation_virtbase(QAbstractAnimation* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAnimation_metaObject(const QAbstractAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAnimation_metacast(QAbstractAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAnimation_tr(const char* s) {
	QString _ret = QAbstractAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAnimation_trUtf8(const char* s) {
	QString _ret = QAbstractAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractAnimation_state(const QAbstractAnimation* self) {
	QAbstractAnimation::State _ret = self->state();
	return static_cast<int>(_ret);
}

QAnimationGroup* QAbstractAnimation_group(const QAbstractAnimation* self) {
	return self->group();
}

int QAbstractAnimation_direction(const QAbstractAnimation* self) {
	QAbstractAnimation::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QAbstractAnimation_setDirection(QAbstractAnimation* self, int direction) {
	self->setDirection(static_cast<QAbstractAnimation::Direction>(direction));
}

int QAbstractAnimation_currentTime(const QAbstractAnimation* self) {
	return self->currentTime();
}

int QAbstractAnimation_currentLoopTime(const QAbstractAnimation* self) {
	return self->currentLoopTime();
}

int QAbstractAnimation_loopCount(const QAbstractAnimation* self) {
	return self->loopCount();
}

void QAbstractAnimation_setLoopCount(QAbstractAnimation* self, int loopCount) {
	self->setLoopCount(static_cast<int>(loopCount));
}

int QAbstractAnimation_currentLoop(const QAbstractAnimation* self) {
	return self->currentLoop();
}

int QAbstractAnimation_duration(const QAbstractAnimation* self) {
	return self->duration();
}

int QAbstractAnimation_totalDuration(const QAbstractAnimation* self) {
	return self->totalDuration();
}

void QAbstractAnimation_finished(QAbstractAnimation* self) {
	self->finished();
}

void QAbstractAnimation_connect_finished(QAbstractAnimation* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)()>(&QAbstractAnimation::finished), self, [=]() {
		miqt_exec_callback_QAbstractAnimation_finished(slot);
	});
}

void QAbstractAnimation_stateChanged(QAbstractAnimation* self, int newState, int oldState) {
	self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_connect_stateChanged(QAbstractAnimation* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::State, QAbstractAnimation::State)>(&QAbstractAnimation::stateChanged), self, [=](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);
		miqt_exec_callback_QAbstractAnimation_stateChanged(slot, sigval1, sigval2);
	});
}

void QAbstractAnimation_currentLoopChanged(QAbstractAnimation* self, int currentLoop) {
	self->currentLoopChanged(static_cast<int>(currentLoop));
}

void QAbstractAnimation_connect_currentLoopChanged(QAbstractAnimation* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(int)>(&QAbstractAnimation::currentLoopChanged), self, [=](int currentLoop) {
		int sigval1 = currentLoop;
		miqt_exec_callback_QAbstractAnimation_currentLoopChanged(slot, sigval1);
	});
}

void QAbstractAnimation_directionChanged(QAbstractAnimation* self, int param1) {
	self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_connect_directionChanged(QAbstractAnimation* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::Direction)>(&QAbstractAnimation::directionChanged), self, [=](QAbstractAnimation::Direction param1) {
		QAbstractAnimation::Direction param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractAnimation_directionChanged(slot, sigval1);
	});
}

void QAbstractAnimation_start(QAbstractAnimation* self) {
	self->start();
}

void QAbstractAnimation_pause(QAbstractAnimation* self) {
	self->pause();
}

void QAbstractAnimation_resume(QAbstractAnimation* self) {
	self->resume();
}

void QAbstractAnimation_setPaused(QAbstractAnimation* self, bool paused) {
	self->setPaused(paused);
}

void QAbstractAnimation_stop(QAbstractAnimation* self) {
	self->stop();
}

void QAbstractAnimation_setCurrentTime(QAbstractAnimation* self, int msecs) {
	self->setCurrentTime(static_cast<int>(msecs));
}

struct miqt_string QAbstractAnimation_tr2(const char* s, const char* c) {
	QString _ret = QAbstractAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAnimation_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAnimation_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAnimation_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAnimation_start1(QAbstractAnimation* self, int policy) {
	self->start(static_cast<QAbstractAnimation::DeletionPolicy>(policy));
}

bool QAbstractAnimation_override_virtual_duration(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__duration = slot;
	return true;
}

bool QAbstractAnimation_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractAnimation_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_event(event);
}

bool QAbstractAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateCurrentTime = slot;
	return true;
}

bool QAbstractAnimation_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateState = slot;
	return true;
}

void QAbstractAnimation_virtualbase_updateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_updateState(newState, oldState);
}

bool QAbstractAnimation_override_virtual_updateDirection(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateDirection = slot;
	return true;
}

void QAbstractAnimation_virtualbase_updateDirection(void* self, int direction) {
	( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_updateDirection(direction);
}

bool QAbstractAnimation_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractAnimation_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractAnimation_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractAnimation_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractAnimation_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractAnimation_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractAnimation_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractAnimation*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAbstractAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractAnimation* self_cast = dynamic_cast<MiqtVirtualQAbstractAnimation*>( (QAbstractAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractAnimation_delete(QAbstractAnimation* self) {
	delete self;
}

class MiqtVirtualQAnimationDriver final : public QAnimationDriver {
public:

	MiqtVirtualQAnimationDriver(): QAnimationDriver() {};
	MiqtVirtualQAnimationDriver(QObject* parent): QAnimationDriver(parent) {};

	virtual ~MiqtVirtualQAnimationDriver() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance() override {
		if (handle__advance == 0) {
			QAnimationDriver::advance();
			return;
		}
		

		miqt_exec_callback_QAnimationDriver_advance(this, handle__advance);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance() {

		QAnimationDriver::advance();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__elapsed = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 elapsed() const override {
		if (handle__elapsed == 0) {
			return QAnimationDriver::elapsed();
		}
		

		long long callback_return_value = miqt_exec_callback_QAnimationDriver_elapsed(this, handle__elapsed);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_elapsed() const {

		qint64 _ret = QAnimationDriver::elapsed();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__start = 0;

	// Subclass to allow providing a Go implementation
	virtual void start() override {
		if (handle__start == 0) {
			QAnimationDriver::start();
			return;
		}
		

		miqt_exec_callback_QAnimationDriver_start(this, handle__start);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_start() {

		QAnimationDriver::start();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stop = 0;

	// Subclass to allow providing a Go implementation
	virtual void stop() override {
		if (handle__stop == 0) {
			QAnimationDriver::stop();
			return;
		}
		

		miqt_exec_callback_QAnimationDriver_stop(this, handle__stop);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_stop() {

		QAnimationDriver::stop();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAnimationDriver::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAnimationDriver_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAnimationDriver::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAnimationDriver::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAnimationDriver_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAnimationDriver::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAnimationDriver::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAnimationDriver_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAnimationDriver::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAnimationDriver::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAnimationDriver_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAnimationDriver::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAnimationDriver::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAnimationDriver_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAnimationDriver::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAnimationDriver::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAnimationDriver_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAnimationDriver::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAnimationDriver::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAnimationDriver_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAnimationDriver::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAnimationDriver_protectedbase_advanceAnimation(bool* _dynamic_cast_ok, void* self);
	friend void QAnimationDriver_protectedbase_advanceAnimation1(bool* _dynamic_cast_ok, void* self, long long timeStep);
	friend QObject* QAnimationDriver_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAnimationDriver_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAnimationDriver_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAnimationDriver_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAnimationDriver* QAnimationDriver_new() {
	return new MiqtVirtualQAnimationDriver();
}

QAnimationDriver* QAnimationDriver_new2(QObject* parent) {
	return new MiqtVirtualQAnimationDriver(parent);
}

void QAnimationDriver_virtbase(QAnimationDriver* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAnimationDriver_metaObject(const QAnimationDriver* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAnimationDriver_metacast(QAnimationDriver* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAnimationDriver_tr(const char* s) {
	QString _ret = QAnimationDriver::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationDriver_trUtf8(const char* s) {
	QString _ret = QAnimationDriver::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAnimationDriver_advance(QAnimationDriver* self) {
	self->advance();
}

void QAnimationDriver_install(QAnimationDriver* self) {
	self->install();
}

void QAnimationDriver_uninstall(QAnimationDriver* self) {
	self->uninstall();
}

bool QAnimationDriver_isRunning(const QAnimationDriver* self) {
	return self->isRunning();
}

long long QAnimationDriver_elapsed(const QAnimationDriver* self) {
	qint64 _ret = self->elapsed();
	return static_cast<long long>(_ret);
}

void QAnimationDriver_setStartTime(QAnimationDriver* self, long long startTime) {
	self->setStartTime(static_cast<qint64>(startTime));
}

long long QAnimationDriver_startTime(const QAnimationDriver* self) {
	qint64 _ret = self->startTime();
	return static_cast<long long>(_ret);
}

void QAnimationDriver_started(QAnimationDriver* self) {
	self->started();
}

void QAnimationDriver_connect_started(QAnimationDriver* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::started), self, [=]() {
		miqt_exec_callback_QAnimationDriver_started(slot);
	});
}

void QAnimationDriver_stopped(QAnimationDriver* self) {
	self->stopped();
}

void QAnimationDriver_connect_stopped(QAnimationDriver* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::stopped), self, [=]() {
		miqt_exec_callback_QAnimationDriver_stopped(slot);
	});
}

struct miqt_string QAnimationDriver_tr2(const char* s, const char* c) {
	QString _ret = QAnimationDriver::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationDriver_tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationDriver::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationDriver_trUtf82(const char* s, const char* c) {
	QString _ret = QAnimationDriver::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationDriver_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAnimationDriver::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAnimationDriver_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QAnimationDriver_virtualbase_advance(void* self) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_advance();
}

bool QAnimationDriver_override_virtual_elapsed(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__elapsed = slot;
	return true;
}

long long QAnimationDriver_virtualbase_elapsed(const void* self) {
	return ( (const MiqtVirtualQAnimationDriver*)(self) )->virtualbase_elapsed();
}

bool QAnimationDriver_override_virtual_start(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__start = slot;
	return true;
}

void QAnimationDriver_virtualbase_start(void* self) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_start();
}

bool QAnimationDriver_override_virtual_stop(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stop = slot;
	return true;
}

void QAnimationDriver_virtualbase_stop(void* self) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_stop();
}

bool QAnimationDriver_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAnimationDriver_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_event(event);
}

bool QAnimationDriver_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAnimationDriver_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAnimationDriver_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAnimationDriver_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_timerEvent(event);
}

bool QAnimationDriver_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAnimationDriver_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_childEvent(event);
}

bool QAnimationDriver_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAnimationDriver_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_customEvent(event);
}

bool QAnimationDriver_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAnimationDriver_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_connectNotify(signal);
}

bool QAnimationDriver_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAnimationDriver_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAnimationDriver_protectedbase_advanceAnimation(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->advanceAnimation();

}

void QAnimationDriver_protectedbase_advanceAnimation1(bool* _dynamic_cast_ok, void* self, long long timeStep) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->advanceAnimation(static_cast<qint64>(timeStep));

}

QObject* QAnimationDriver_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAnimationDriver_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAnimationDriver_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAnimationDriver_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAnimationDriver* self_cast = dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAnimationDriver_delete(QAnimationDriver* self) {
	delete self;
}

