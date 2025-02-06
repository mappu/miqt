#include <QAbstractAnimation>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpauseanimation.h>
#include "gen_qpauseanimation.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPauseAnimation_duration(const QPauseAnimation*, intptr_t);
bool miqt_exec_callback_QPauseAnimation_event(QPauseAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPauseAnimation_updateCurrentTime(QPauseAnimation*, intptr_t, int);
void miqt_exec_callback_QPauseAnimation_updateState(QPauseAnimation*, intptr_t, int, int);
void miqt_exec_callback_QPauseAnimation_updateDirection(QPauseAnimation*, intptr_t, int);
bool miqt_exec_callback_QPauseAnimation_eventFilter(QPauseAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPauseAnimation_timerEvent(QPauseAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPauseAnimation_childEvent(QPauseAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPauseAnimation_customEvent(QPauseAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPauseAnimation_connectNotify(QPauseAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPauseAnimation_disconnectNotify(QPauseAnimation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPauseAnimation final : public QPauseAnimation {
public:

	MiqtVirtualQPauseAnimation(): QPauseAnimation() {};
	MiqtVirtualQPauseAnimation(int msecs): QPauseAnimation(msecs) {};
	MiqtVirtualQPauseAnimation(QObject* parent): QPauseAnimation(parent) {};
	MiqtVirtualQPauseAnimation(int msecs, QObject* parent): QPauseAnimation(msecs, parent) {};

	virtual ~MiqtVirtualQPauseAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__duration == 0) {
			return QPauseAnimation::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QPauseAnimation_duration(this, handle__duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_duration() const {

		return QPauseAnimation::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QPauseAnimation::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QPauseAnimation_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QPauseAnimation::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (handle__updateCurrentTime == 0) {
			QPauseAnimation::updateCurrentTime(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QPauseAnimation_updateCurrentTime(this, handle__updateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateCurrentTime(int param1) {

		QPauseAnimation::updateCurrentTime(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__updateState == 0) {
			QPauseAnimation::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QPauseAnimation_updateState(this, handle__updateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateState(int newState, int oldState) {

		QPauseAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__updateDirection == 0) {
			QPauseAnimation::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QPauseAnimation_updateDirection(this, handle__updateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateDirection(int direction) {

		QPauseAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPauseAnimation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPauseAnimation_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPauseAnimation::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPauseAnimation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPauseAnimation_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPauseAnimation::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPauseAnimation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPauseAnimation_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPauseAnimation::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPauseAnimation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPauseAnimation_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPauseAnimation::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPauseAnimation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPauseAnimation_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPauseAnimation::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPauseAnimation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPauseAnimation_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPauseAnimation::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QPauseAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPauseAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPauseAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPauseAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPauseAnimation* QPauseAnimation_new() {
	return new MiqtVirtualQPauseAnimation();
}

QPauseAnimation* QPauseAnimation_new2(int msecs) {
	return new MiqtVirtualQPauseAnimation(static_cast<int>(msecs));
}

QPauseAnimation* QPauseAnimation_new3(QObject* parent) {
	return new MiqtVirtualQPauseAnimation(parent);
}

QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent) {
	return new MiqtVirtualQPauseAnimation(static_cast<int>(msecs), parent);
}

void QPauseAnimation_virtbase(QPauseAnimation* src, QAbstractAnimation** outptr_QAbstractAnimation) {
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(src);
}

QMetaObject* QPauseAnimation_metaObject(const QPauseAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPauseAnimation_metacast(QPauseAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPauseAnimation_tr(const char* s) {
	QString _ret = QPauseAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPauseAnimation_trUtf8(const char* s) {
	QString _ret = QPauseAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPauseAnimation_duration(const QPauseAnimation* self) {
	return self->duration();
}

void QPauseAnimation_setDuration(QPauseAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

struct miqt_string QPauseAnimation_tr2(const char* s, const char* c) {
	QString _ret = QPauseAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPauseAnimation_tr3(const char* s, const char* c, int n) {
	QString _ret = QPauseAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPauseAnimation_trUtf82(const char* s, const char* c) {
	QString _ret = QPauseAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPauseAnimation_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPauseAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPauseAnimation_override_virtual_duration(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__duration = slot;
	return true;
}

int QPauseAnimation_virtualbase_duration(const void* self) {
	return ( (const MiqtVirtualQPauseAnimation*)(self) )->virtualbase_duration();
}

bool QPauseAnimation_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPauseAnimation_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_event(e);
}

bool QPauseAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateCurrentTime = slot;
	return true;
}

void QPauseAnimation_virtualbase_updateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_updateCurrentTime(param1);
}

bool QPauseAnimation_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateState = slot;
	return true;
}

void QPauseAnimation_virtualbase_updateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_updateState(newState, oldState);
}

bool QPauseAnimation_override_virtual_updateDirection(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateDirection = slot;
	return true;
}

void QPauseAnimation_virtualbase_updateDirection(void* self, int direction) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_updateDirection(direction);
}

bool QPauseAnimation_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPauseAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPauseAnimation_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPauseAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_timerEvent(event);
}

bool QPauseAnimation_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPauseAnimation_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_childEvent(event);
}

bool QPauseAnimation_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPauseAnimation_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_customEvent(event);
}

bool QPauseAnimation_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPauseAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_connectNotify(signal);
}

bool QPauseAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPauseAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QPauseAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPauseAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPauseAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPauseAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPauseAnimation_delete(QPauseAnimation* self) {
	delete self;
}

