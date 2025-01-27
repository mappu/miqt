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

void miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged(intptr_t, QAbstractAnimation*);
int miqt_exec_callback_QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup*, intptr_t);
bool miqt_exec_callback_QSequentialAnimationGroup_Event(QSequentialAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup*, intptr_t, int);
void miqt_exec_callback_QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup*, intptr_t, int, int);
void miqt_exec_callback_QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup*, intptr_t, int);
bool miqt_exec_callback_QSequentialAnimationGroup_EventFilter(QSequentialAnimationGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_TimerEvent(QSequentialAnimationGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_ChildEvent(QSequentialAnimationGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_CustomEvent(QSequentialAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QSequentialAnimationGroup_ConnectNotify(QSequentialAnimationGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSequentialAnimationGroup_DisconnectNotify(QSequentialAnimationGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSequentialAnimationGroup final : public QSequentialAnimationGroup {
public:

	MiqtVirtualQSequentialAnimationGroup(): QSequentialAnimationGroup() {};
	MiqtVirtualQSequentialAnimationGroup(QObject* parent): QSequentialAnimationGroup(parent) {};

	virtual ~MiqtVirtualQSequentialAnimationGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return QSequentialAnimationGroup::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QSequentialAnimationGroup_Duration(this, handle__Duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Duration() const {

		return QSequentialAnimationGroup::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSequentialAnimationGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSequentialAnimationGroup_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSequentialAnimationGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (handle__UpdateCurrentTime == 0) {
			QSequentialAnimationGroup::updateCurrentTime(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QSequentialAnimationGroup_UpdateCurrentTime(this, handle__UpdateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateCurrentTime(int param1) {

		QSequentialAnimationGroup::updateCurrentTime(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__UpdateState == 0) {
			QSequentialAnimationGroup::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QSequentialAnimationGroup_UpdateState(this, handle__UpdateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateState(int newState, int oldState) {

		QSequentialAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__UpdateDirection == 0) {
			QSequentialAnimationGroup::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QSequentialAnimationGroup_UpdateDirection(this, handle__UpdateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateDirection(int direction) {

		QSequentialAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSequentialAnimationGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSequentialAnimationGroup_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSequentialAnimationGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSequentialAnimationGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSequentialAnimationGroup_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSequentialAnimationGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSequentialAnimationGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSequentialAnimationGroup_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSequentialAnimationGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSequentialAnimationGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSequentialAnimationGroup_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSequentialAnimationGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSequentialAnimationGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSequentialAnimationGroup_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSequentialAnimationGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSequentialAnimationGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSequentialAnimationGroup_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSequentialAnimationGroup::disconnectNotify(*signal);

	}

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

QMetaObject* QSequentialAnimationGroup_MetaObject(const QSequentialAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSequentialAnimationGroup_Metacast(QSequentialAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSequentialAnimationGroup_Tr(const char* s) {
	QString _ret = QSequentialAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSequentialAnimationGroup_TrUtf8(const char* s) {
	QString _ret = QSequentialAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs) {
	return self->addPause(static_cast<int>(msecs));
}

QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs) {
	return self->insertPause(static_cast<int>(index), static_cast<int>(msecs));
}

QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self) {
	return self->currentAnimation();
}

int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self) {
	return self->duration();
}

void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
	self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup::connect(self, static_cast<void (QSequentialAnimationGroup::*)(QAbstractAnimation*)>(&QSequentialAnimationGroup::currentAnimationChanged), self, [=](QAbstractAnimation* current) {
		QAbstractAnimation* sigval1 = current;
		miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged(slot, sigval1);
	});
}

struct miqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QSequentialAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSequentialAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSequentialAnimationGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QSequentialAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSequentialAnimationGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSequentialAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSequentialAnimationGroup_override_virtual_Duration(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Duration = slot;
	return true;
}

int QSequentialAnimationGroup_virtualbase_Duration(const void* self) {
	return ( (const MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_Duration();
}

bool QSequentialAnimationGroup_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSequentialAnimationGroup_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_Event(event);
}

bool QSequentialAnimationGroup_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateCurrentTime = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_UpdateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_UpdateCurrentTime(param1);
}

bool QSequentialAnimationGroup_override_virtual_UpdateState(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateState = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_UpdateState(newState, oldState);
}

bool QSequentialAnimationGroup_override_virtual_UpdateDirection(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateDirection = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_UpdateDirection(void* self, int direction) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_UpdateDirection(direction);
}

bool QSequentialAnimationGroup_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSequentialAnimationGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSequentialAnimationGroup_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_TimerEvent(event);
}

bool QSequentialAnimationGroup_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_ChildEvent(event);
}

bool QSequentialAnimationGroup_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_CustomEvent(event);
}

bool QSequentialAnimationGroup_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSequentialAnimationGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSequentialAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSequentialAnimationGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self) {
	delete self;
}

