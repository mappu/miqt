#include <QAbstractAnimation>
#include <QEvent>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpauseanimation.h>
#include "gen_qpauseanimation.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQPauseAnimation : public virtual QPauseAnimation {
public:

	MiqtVirtualQPauseAnimation(): QPauseAnimation() {};
	MiqtVirtualQPauseAnimation(int msecs): QPauseAnimation(msecs) {};
	MiqtVirtualQPauseAnimation(QObject* parent): QPauseAnimation(parent) {};
	MiqtVirtualQPauseAnimation(int msecs, QObject* parent): QPauseAnimation(msecs, parent) {};

	virtual ~MiqtVirtualQPauseAnimation() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return QPauseAnimation::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QPauseAnimation_Duration(const_cast<MiqtVirtualQPauseAnimation*>(this), handle__Duration);

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

struct miqt_string QPauseAnimation_TrUtf8(const char* s) {
	QString _ret = QPauseAnimation::trUtf8(s);
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

struct miqt_string QPauseAnimation_TrUtf82(const char* s, const char* c) {
	QString _ret = QPauseAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPauseAnimation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPauseAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPauseAnimation_override_virtual_Duration(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) )->handle__Duration = slot;
}

int QPauseAnimation_virtualbase_Duration(const void* self) {
	return ( (const MiqtVirtualQPauseAnimation*)(self) )->virtualbase_Duration();
}

void QPauseAnimation_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) )->handle__Event = slot;
}

bool QPauseAnimation_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_Event(e);
}

void QPauseAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) )->handle__UpdateCurrentTime = slot;
}

void QPauseAnimation_virtualbase_UpdateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_UpdateCurrentTime(param1);
}

void QPauseAnimation_override_virtual_UpdateState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) )->handle__UpdateState = slot;
}

void QPauseAnimation_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_UpdateState(newState, oldState);
}

void QPauseAnimation_override_virtual_UpdateDirection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPauseAnimation*>( (QPauseAnimation*)(self) )->handle__UpdateDirection = slot;
}

void QPauseAnimation_virtualbase_UpdateDirection(void* self, int direction) {
	( (MiqtVirtualQPauseAnimation*)(self) )->virtualbase_UpdateDirection(direction);
}

void QPauseAnimation_Delete(QPauseAnimation* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPauseAnimation*>( self );
	} else {
		delete self;
	}
}

