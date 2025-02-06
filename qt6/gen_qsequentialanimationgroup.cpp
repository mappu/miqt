#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QSequentialAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsequentialanimationgroup.h>
#include "gen_qsequentialanimationgroup.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSequentialAnimationGroup_currentAnimationChanged(intptr_t, QAbstractAnimation*);
int miqt_exec_callback_QSequentialAnimationGroup_duration(const QSequentialAnimationGroup*, intptr_t);
bool miqt_exec_callback_QSequentialAnimationGroup_event(QSequentialAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_updateCurrentTime(QSequentialAnimationGroup*, intptr_t, int);
void miqt_exec_callback_QSequentialAnimationGroup_updateState(QSequentialAnimationGroup*, intptr_t, int, int);
void miqt_exec_callback_QSequentialAnimationGroup_updateDirection(QSequentialAnimationGroup*, intptr_t, int);
bool miqt_exec_callback_QSequentialAnimationGroup_eventFilter(QSequentialAnimationGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_timerEvent(QSequentialAnimationGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_childEvent(QSequentialAnimationGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_customEvent(QSequentialAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_connectNotify(QSequentialAnimationGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSequentialAnimationGroup_disconnectNotify(QSequentialAnimationGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSequentialAnimationGroup final : public QSequentialAnimationGroup {
public:

	MiqtVirtualQSequentialAnimationGroup(): QSequentialAnimationGroup() {};
	MiqtVirtualQSequentialAnimationGroup(QObject* parent): QSequentialAnimationGroup(parent) {};

	virtual ~MiqtVirtualQSequentialAnimationGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__duration == 0) {
			return QSequentialAnimationGroup::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QSequentialAnimationGroup_duration(this, handle__duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_duration() const {

		return QSequentialAnimationGroup::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSequentialAnimationGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSequentialAnimationGroup_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSequentialAnimationGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (handle__updateCurrentTime == 0) {
			QSequentialAnimationGroup::updateCurrentTime(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QSequentialAnimationGroup_updateCurrentTime(this, handle__updateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateCurrentTime(int param1) {

		QSequentialAnimationGroup::updateCurrentTime(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__updateState == 0) {
			QSequentialAnimationGroup::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QSequentialAnimationGroup_updateState(this, handle__updateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateState(int newState, int oldState) {

		QSequentialAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__updateDirection == 0) {
			QSequentialAnimationGroup::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QSequentialAnimationGroup_updateDirection(this, handle__updateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateDirection(int direction) {

		QSequentialAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSequentialAnimationGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSequentialAnimationGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSequentialAnimationGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSequentialAnimationGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSequentialAnimationGroup_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSequentialAnimationGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSequentialAnimationGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSequentialAnimationGroup_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSequentialAnimationGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSequentialAnimationGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSequentialAnimationGroup_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSequentialAnimationGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSequentialAnimationGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSequentialAnimationGroup_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSequentialAnimationGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSequentialAnimationGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSequentialAnimationGroup_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSequentialAnimationGroup::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSequentialAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSequentialAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSequentialAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSequentialAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSequentialAnimationGroup* QSequentialAnimationGroup_new() {
	return new MiqtVirtualQSequentialAnimationGroup();
}

QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent) {
	return new MiqtVirtualQSequentialAnimationGroup(parent);
}

void QSequentialAnimationGroup_virtbase(QSequentialAnimationGroup* src, QAnimationGroup** outptr_QAnimationGroup) {
	*outptr_QAnimationGroup = static_cast<QAnimationGroup*>(src);
}

QMetaObject* QSequentialAnimationGroup_metaObject(const QSequentialAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSequentialAnimationGroup_metacast(QSequentialAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSequentialAnimationGroup_tr(const char* s) {
	QString _ret = QSequentialAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPauseAnimation* QSequentialAnimationGroup_addPause(QSequentialAnimationGroup* self, int msecs) {
	return self->addPause(static_cast<int>(msecs));
}

QPauseAnimation* QSequentialAnimationGroup_insertPause(QSequentialAnimationGroup* self, int index, int msecs) {
	return self->insertPause(static_cast<int>(index), static_cast<int>(msecs));
}

QAbstractAnimation* QSequentialAnimationGroup_currentAnimation(const QSequentialAnimationGroup* self) {
	return self->currentAnimation();
}

int QSequentialAnimationGroup_duration(const QSequentialAnimationGroup* self) {
	return self->duration();
}

void QSequentialAnimationGroup_currentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
	self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_connect_currentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup::connect(self, static_cast<void (QSequentialAnimationGroup::*)(QAbstractAnimation*)>(&QSequentialAnimationGroup::currentAnimationChanged), self, [=](QAbstractAnimation* current) {
		QAbstractAnimation* sigval1 = current;
		miqt_exec_callback_QSequentialAnimationGroup_currentAnimationChanged(slot, sigval1);
	});
}

struct miqt_string QSequentialAnimationGroup_tr2(const char* s, const char* c) {
	QString _ret = QSequentialAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSequentialAnimationGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QSequentialAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSequentialAnimationGroup_override_virtual_duration(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__duration = slot;
	return true;
}

int QSequentialAnimationGroup_virtualbase_duration(const void* self) {
	return ( (const MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_duration();
}

bool QSequentialAnimationGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSequentialAnimationGroup_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_event(event);
}

bool QSequentialAnimationGroup_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateCurrentTime = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_updateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_updateCurrentTime(param1);
}

bool QSequentialAnimationGroup_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateState = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_updateState(newState, oldState);
}

bool QSequentialAnimationGroup_override_virtual_updateDirection(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateDirection = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_updateDirection(void* self, int direction) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_updateDirection(direction);
}

bool QSequentialAnimationGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSequentialAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSequentialAnimationGroup_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_timerEvent(event);
}

bool QSequentialAnimationGroup_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_childEvent(event);
}

bool QSequentialAnimationGroup_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_customEvent(event);
}

bool QSequentialAnimationGroup_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_connectNotify(signal);
}

bool QSequentialAnimationGroup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSequentialAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSequentialAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSequentialAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSequentialAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSequentialAnimationGroup_delete(QSequentialAnimationGroup* self) {
	delete self;
}

