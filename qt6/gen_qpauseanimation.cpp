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

int miqt_exec_callback_QPauseAnimation_Duration(const QPauseAnimation*, intptr_t);
bool miqt_exec_callback_QPauseAnimation_Event(QPauseAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPauseAnimation_UpdateCurrentTime(QPauseAnimation*, intptr_t, int);
void miqt_exec_callback_QPauseAnimation_UpdateState(QPauseAnimation*, intptr_t, int, int);
void miqt_exec_callback_QPauseAnimation_UpdateDirection(QPauseAnimation*, intptr_t, int);
bool miqt_exec_callback_QPauseAnimation_EventFilter(QPauseAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPauseAnimation_TimerEvent(QPauseAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPauseAnimation_ChildEvent(QPauseAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPauseAnimation_CustomEvent(QPauseAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPauseAnimation_ConnectNotify(QPauseAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPauseAnimation_DisconnectNotify(QPauseAnimation*, intptr_t, QMetaMethod*);
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
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return QPauseAnimation::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QPauseAnimation_Duration(this, handle__Duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Duration() const {

		return QPauseAnimation::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QPauseAnimation::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QPauseAnimation_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QPauseAnimation::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (handle__UpdateCurrentTime == 0) {
			QPauseAnimation::updateCurrentTime(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QPauseAnimation_UpdateCurrentTime(this, handle__UpdateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateCurrentTime(int param1) {

		QPauseAnimation::updateCurrentTime(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__UpdateState == 0) {
			QPauseAnimation::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QPauseAnimation_UpdateState(this, handle__UpdateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateState(int newState, int oldState) {

		QPauseAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__UpdateDirection == 0) {
			QPauseAnimation::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QPauseAnimation_UpdateDirection(this, handle__UpdateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateDirection(int direction) {

		QPauseAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QPauseAnimation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPauseAnimation_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QPauseAnimation::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPauseAnimation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPauseAnimation_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPauseAnimation::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPauseAnimation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPauseAnimation_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPauseAnimation::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPauseAnimation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPauseAnimation_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPauseAnimation::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPauseAnimation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPauseAnimation_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPauseAnimation::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPauseAnimation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPauseAnimation_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPauseAnimation::disconnectNotify(*signal);

	}

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

QMetaObject* QPauseAnimation_MetaObject(const QPauseAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPauseAnimation_Metacast(QPauseAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPauseAnimation_Tr(const char* s) {
	QString _ret = QPauseAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPauseAnimation_Duration(const QPauseAnimation* self) {
	return self->duration();
}

void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

struct miqt_string QPauseAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QPauseAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPauseAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPauseAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPauseAnimation_override_virtual_Duration(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Duration = slot;
	return true;
}

int QPauseAnimation_virtualbase_Duration(const void* self) {
	return ( (const MiqtVirtualQPauseAnimation*)(self) )->virtualbase_Duration();
}

bool QPauseAnimation_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPauseAnimation_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_Event(e);
}

bool QPauseAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateCurrentTime = slot;
	return true;
}

void QPauseAnimation_virtualbase_UpdateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_UpdateCurrentTime(param1);
}

bool QPauseAnimation_override_virtual_UpdateState(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateState = slot;
	return true;
}

void QPauseAnimation_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_UpdateState(newState, oldState);
}

bool QPauseAnimation_override_virtual_UpdateDirection(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateDirection = slot;
	return true;
}

void QPauseAnimation_virtualbase_UpdateDirection(void* self, int direction) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_UpdateDirection(direction);
}

bool QPauseAnimation_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPauseAnimation_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QPauseAnimation_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPauseAnimation_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_TimerEvent(event);
}

bool QPauseAnimation_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPauseAnimation_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_ChildEvent(event);
}

bool QPauseAnimation_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPauseAnimation_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_CustomEvent(event);
}

bool QPauseAnimation_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPauseAnimation_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPauseAnimation_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPauseAnimation* self_cast = dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPauseAnimation_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPauseAnimation_Delete(QPauseAnimation* self) {
	delete self;
}

