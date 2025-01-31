#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QParallelAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qparallelanimationgroup.h>
#include "gen_qparallelanimationgroup.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QParallelAnimationGroup_Duration(const QParallelAnimationGroup*, intptr_t);
bool miqt_exec_callback_QParallelAnimationGroup_Event(QParallelAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup*, intptr_t, int);
void miqt_exec_callback_QParallelAnimationGroup_UpdateState(QParallelAnimationGroup*, intptr_t, int, int);
void miqt_exec_callback_QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup*, intptr_t, int);
bool miqt_exec_callback_QParallelAnimationGroup_EventFilter(QParallelAnimationGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QParallelAnimationGroup_TimerEvent(QParallelAnimationGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QParallelAnimationGroup_ChildEvent(QParallelAnimationGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QParallelAnimationGroup_CustomEvent(QParallelAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QParallelAnimationGroup_ConnectNotify(QParallelAnimationGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QParallelAnimationGroup_DisconnectNotify(QParallelAnimationGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQParallelAnimationGroup final : public QParallelAnimationGroup {
public:

	MiqtVirtualQParallelAnimationGroup(): QParallelAnimationGroup() {};
	MiqtVirtualQParallelAnimationGroup(QObject* parent): QParallelAnimationGroup(parent) {};

	virtual ~MiqtVirtualQParallelAnimationGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return QParallelAnimationGroup::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QParallelAnimationGroup_Duration(this, handle__Duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Duration() const {

		return QParallelAnimationGroup::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QParallelAnimationGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QParallelAnimationGroup_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QParallelAnimationGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int currentTime) override {
		if (handle__UpdateCurrentTime == 0) {
			QParallelAnimationGroup::updateCurrentTime(currentTime);
			return;
		}
		
		int sigval1 = currentTime;

		miqt_exec_callback_QParallelAnimationGroup_UpdateCurrentTime(this, handle__UpdateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateCurrentTime(int currentTime) {

		QParallelAnimationGroup::updateCurrentTime(static_cast<int>(currentTime));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__UpdateState == 0) {
			QParallelAnimationGroup::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QParallelAnimationGroup_UpdateState(this, handle__UpdateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateState(int newState, int oldState) {

		QParallelAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__UpdateDirection == 0) {
			QParallelAnimationGroup::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QParallelAnimationGroup_UpdateDirection(this, handle__UpdateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateDirection(int direction) {

		QParallelAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QParallelAnimationGroup::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QParallelAnimationGroup_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QParallelAnimationGroup::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QParallelAnimationGroup::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QParallelAnimationGroup_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QParallelAnimationGroup::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QParallelAnimationGroup::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QParallelAnimationGroup_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QParallelAnimationGroup::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QParallelAnimationGroup::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QParallelAnimationGroup_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QParallelAnimationGroup::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QParallelAnimationGroup::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QParallelAnimationGroup_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QParallelAnimationGroup::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QParallelAnimationGroup::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QParallelAnimationGroup_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QParallelAnimationGroup::disconnectNotify(*signal);

	}

};

QParallelAnimationGroup* QParallelAnimationGroup_new() {
	return new MiqtVirtualQParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
	return new MiqtVirtualQParallelAnimationGroup(parent);
}

void QParallelAnimationGroup_virtbase(QParallelAnimationGroup* src, QAnimationGroup** outptr_QAnimationGroup) {
	*outptr_QAnimationGroup = static_cast<QAnimationGroup*>(src);
}

QMetaObject* QParallelAnimationGroup_MetaObject(const QParallelAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QParallelAnimationGroup_Metacast(QParallelAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QParallelAnimationGroup_Tr(const char* s) {
	QString _ret = QParallelAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_TrUtf8(const char* s) {
	QString _ret = QParallelAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self) {
	return self->duration();
}

struct miqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QParallelAnimationGroup_override_virtual_Duration(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Duration = slot;
	return true;
}

int QParallelAnimationGroup_virtualbase_Duration(const void* self) {
	return ( (const MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_Duration();
}

bool QParallelAnimationGroup_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QParallelAnimationGroup_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_Event(event);
}

bool QParallelAnimationGroup_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateCurrentTime = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_UpdateCurrentTime(void* self, int currentTime) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_UpdateCurrentTime(currentTime);
}

bool QParallelAnimationGroup_override_virtual_UpdateState(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateState = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_UpdateState(newState, oldState);
}

bool QParallelAnimationGroup_override_virtual_UpdateDirection(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateDirection = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_UpdateDirection(void* self, int direction) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_UpdateDirection(direction);
}

bool QParallelAnimationGroup_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QParallelAnimationGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QParallelAnimationGroup_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_TimerEvent(event);
}

bool QParallelAnimationGroup_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_ChildEvent(event);
}

bool QParallelAnimationGroup_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_CustomEvent(event);
}

bool QParallelAnimationGroup_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QParallelAnimationGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQParallelAnimationGroup*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
	delete self;
}

