#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QEvent>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QSequentialAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsequentialanimationgroup.h>
#include "gen_qsequentialanimationgroup.h"
#include "_cgo_export.h"

class MiqtVirtualQSequentialAnimationGroup : public virtual QSequentialAnimationGroup {
public:

	MiqtVirtualQSequentialAnimationGroup(): QSequentialAnimationGroup() {};
	MiqtVirtualQSequentialAnimationGroup(QObject* parent): QSequentialAnimationGroup(parent) {};

	virtual ~MiqtVirtualQSequentialAnimationGroup() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return QSequentialAnimationGroup::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QSequentialAnimationGroup_Duration(const_cast<MiqtVirtualQSequentialAnimationGroup*>(this), handle__Duration);

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

};

void QSequentialAnimationGroup_new(QSequentialAnimationGroup** outptr_QSequentialAnimationGroup, QAnimationGroup** outptr_QAnimationGroup, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject) {
	MiqtVirtualQSequentialAnimationGroup* ret = new MiqtVirtualQSequentialAnimationGroup();
	*outptr_QSequentialAnimationGroup = ret;
	*outptr_QAnimationGroup = static_cast<QAnimationGroup*>(ret);
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QSequentialAnimationGroup_new2(QObject* parent, QSequentialAnimationGroup** outptr_QSequentialAnimationGroup, QAnimationGroup** outptr_QAnimationGroup, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject) {
	MiqtVirtualQSequentialAnimationGroup* ret = new MiqtVirtualQSequentialAnimationGroup(parent);
	*outptr_QSequentialAnimationGroup = ret;
	*outptr_QAnimationGroup = static_cast<QAnimationGroup*>(ret);
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
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

void QSequentialAnimationGroup_override_virtual_Duration(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) )->handle__Duration = slot;
}

int QSequentialAnimationGroup_virtualbase_Duration(const void* self) {
	return ( (const MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_Duration();
}

void QSequentialAnimationGroup_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) )->handle__Event = slot;
}

bool QSequentialAnimationGroup_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_Event(event);
}

void QSequentialAnimationGroup_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) )->handle__UpdateCurrentTime = slot;
}

void QSequentialAnimationGroup_virtualbase_UpdateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_UpdateCurrentTime(param1);
}

void QSequentialAnimationGroup_override_virtual_UpdateState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) )->handle__UpdateState = slot;
}

void QSequentialAnimationGroup_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_UpdateState(newState, oldState);
}

void QSequentialAnimationGroup_override_virtual_UpdateDirection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( (QSequentialAnimationGroup*)(self) )->handle__UpdateDirection = slot;
}

void QSequentialAnimationGroup_virtualbase_UpdateDirection(void* self, int direction) {
	( (MiqtVirtualQSequentialAnimationGroup*)(self) )->virtualbase_UpdateDirection(direction);
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSequentialAnimationGroup*>( self );
	} else {
		delete self;
	}
}

