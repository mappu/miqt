#include <QAbstractAnimation>
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
#include <qanimationgroup.h>
#include "gen_qanimationgroup.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QAnimationGroup_event(QAnimationGroup*, intptr_t, QEvent*);
int miqt_exec_callback_QAnimationGroup_duration(const QAnimationGroup*, intptr_t);
void miqt_exec_callback_QAnimationGroup_updateCurrentTime(QAnimationGroup*, intptr_t, int);
void miqt_exec_callback_QAnimationGroup_updateState(QAnimationGroup*, intptr_t, int, int);
void miqt_exec_callback_QAnimationGroup_updateDirection(QAnimationGroup*, intptr_t, int);
bool miqt_exec_callback_QAnimationGroup_eventFilter(QAnimationGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAnimationGroup_timerEvent(QAnimationGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAnimationGroup_childEvent(QAnimationGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAnimationGroup_customEvent(QAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QAnimationGroup_connectNotify(QAnimationGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAnimationGroup_disconnectNotify(QAnimationGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAnimationGroup final : public QAnimationGroup {
public:

	MiqtVirtualQAnimationGroup(): QAnimationGroup() {};
	MiqtVirtualQAnimationGroup(QObject* parent): QAnimationGroup(parent) {};

	virtual ~MiqtVirtualQAnimationGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAnimationGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAnimationGroup_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAnimationGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__duration == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAnimationGroup_duration(this, handle__duration);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int currentTime) override {
		if (handle__updateCurrentTime == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = currentTime;

		miqt_exec_callback_QAnimationGroup_updateCurrentTime(this, handle__updateCurrentTime, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__updateState == 0) {
			QAnimationGroup::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QAnimationGroup_updateState(this, handle__updateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateState(int newState, int oldState) {

		QAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__updateDirection == 0) {
			QAnimationGroup::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QAnimationGroup_updateDirection(this, handle__updateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateDirection(int direction) {

		QAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAnimationGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAnimationGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAnimationGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAnimationGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAnimationGroup_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAnimationGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAnimationGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAnimationGroup_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAnimationGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAnimationGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAnimationGroup_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAnimationGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAnimationGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAnimationGroup_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAnimationGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAnimationGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAnimationGroup_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAnimationGroup::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAnimationGroup* QAnimationGroup_new() {
	return new MiqtVirtualQAnimationGroup();
}

QAnimationGroup* QAnimationGroup_new2(QObject* parent) {
	return new MiqtVirtualQAnimationGroup(parent);
}

void QAnimationGroup_virtbase(QAnimationGroup* src, QAbstractAnimation** outptr_QAbstractAnimation) {
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(src);
}

QMetaObject* QAnimationGroup_metaObject(const QAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAnimationGroup_metacast(QAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAnimationGroup_tr(const char* s) {
	QString _ret = QAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractAnimation* QAnimationGroup_animationAt(const QAnimationGroup* self, int index) {
	return self->animationAt(static_cast<int>(index));
}

int QAnimationGroup_animationCount(const QAnimationGroup* self) {
	return self->animationCount();
}

int QAnimationGroup_indexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation) {
	return self->indexOfAnimation(animation);
}

void QAnimationGroup_addAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAnimationGroup_insertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation) {
	self->insertAnimation(static_cast<int>(index), animation);
}

void QAnimationGroup_removeAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

QAbstractAnimation* QAnimationGroup_takeAnimation(QAnimationGroup* self, int index) {
	return self->takeAnimation(static_cast<int>(index));
}

void QAnimationGroup_clear(QAnimationGroup* self) {
	self->clear();
}

struct miqt_string QAnimationGroup_tr2(const char* s, const char* c) {
	QString _ret = QAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAnimationGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAnimationGroup_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_event(event);
}

bool QAnimationGroup_override_virtual_duration(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__duration = slot;
	return true;
}

bool QAnimationGroup_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateCurrentTime = slot;
	return true;
}

bool QAnimationGroup_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateState = slot;
	return true;
}

void QAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_updateState(newState, oldState);
}

bool QAnimationGroup_override_virtual_updateDirection(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateDirection = slot;
	return true;
}

void QAnimationGroup_virtualbase_updateDirection(void* self, int direction) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_updateDirection(direction);
}

bool QAnimationGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAnimationGroup_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_timerEvent(event);
}

bool QAnimationGroup_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_childEvent(event);
}

bool QAnimationGroup_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAnimationGroup_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_customEvent(event);
}

bool QAnimationGroup_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_connectNotify(signal);
}

bool QAnimationGroup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAnimationGroup_delete(QAnimationGroup* self) {
	delete self;
}

