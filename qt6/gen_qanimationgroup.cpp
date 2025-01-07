#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QEvent>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qanimationgroup.h>
#include "gen_qanimationgroup.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QAnimationGroup_Event(void*, intptr_t, QEvent*);
int miqt_exec_callback_QAnimationGroup_Duration(void*, intptr_t);
void miqt_exec_callback_QAnimationGroup_UpdateCurrentTime(void*, intptr_t, int);
void miqt_exec_callback_QAnimationGroup_UpdateState(void*, intptr_t, int, int);
void miqt_exec_callback_QAnimationGroup_UpdateDirection(void*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAnimationGroup : public virtual QAnimationGroup {
public:

	MiqtVirtualQAnimationGroup(): QAnimationGroup() {};
	MiqtVirtualQAnimationGroup(QObject* parent): QAnimationGroup(parent) {};

	virtual ~MiqtVirtualQAnimationGroup() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAnimationGroup::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAnimationGroup_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAnimationGroup::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__Duration == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QAnimationGroup_Duration(const_cast<MiqtVirtualQAnimationGroup*>(this), handle__Duration);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int currentTime) override {
		if (handle__UpdateCurrentTime == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = currentTime;

		miqt_exec_callback_QAnimationGroup_UpdateCurrentTime(this, handle__UpdateCurrentTime, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__UpdateState == 0) {
			QAnimationGroup::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QAnimationGroup_UpdateState(this, handle__UpdateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateState(int newState, int oldState) {

		QAnimationGroup::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__UpdateDirection == 0) {
			QAnimationGroup::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QAnimationGroup_UpdateDirection(this, handle__UpdateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateDirection(int direction) {

		QAnimationGroup::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

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

QMetaObject* QAnimationGroup_MetaObject(const QAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAnimationGroup_Metacast(QAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAnimationGroup_Tr(const char* s) {
	QString _ret = QAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index) {
	return self->animationAt(static_cast<int>(index));
}

int QAnimationGroup_AnimationCount(const QAnimationGroup* self) {
	return self->animationCount();
}

int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation) {
	return self->indexOfAnimation(animation);
}

void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation) {
	self->insertAnimation(static_cast<int>(index), animation);
}

void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index) {
	return self->takeAnimation(static_cast<int>(index));
}

void QAnimationGroup_Clear(QAnimationGroup* self) {
	self->clear();
}

struct miqt_string QAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAnimationGroup_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) )->handle__Event = slot;
}

bool QAnimationGroup_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_Event(event);
}

void QAnimationGroup_override_virtual_Duration(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) )->handle__Duration = slot;
}

void QAnimationGroup_override_virtual_UpdateCurrentTime(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) )->handle__UpdateCurrentTime = slot;
}

void QAnimationGroup_override_virtual_UpdateState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) )->handle__UpdateState = slot;
}

void QAnimationGroup_virtualbase_UpdateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_UpdateState(newState, oldState);
}

void QAnimationGroup_override_virtual_UpdateDirection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) )->handle__UpdateDirection = slot;
}

void QAnimationGroup_virtualbase_UpdateDirection(void* self, int direction) {
	( (MiqtVirtualQAnimationGroup*)(self) )->virtualbase_UpdateDirection(direction);
}

void QAnimationGroup_Delete(QAnimationGroup* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAnimationGroup*>( self );
	} else {
		delete self;
	}
}

