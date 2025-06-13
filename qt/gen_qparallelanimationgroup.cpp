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

int miqt_exec_callback_QParallelAnimationGroup_duration(const QParallelAnimationGroup*, intptr_t);
bool miqt_exec_callback_QParallelAnimationGroup_event(QParallelAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QParallelAnimationGroup_updateCurrentTime(QParallelAnimationGroup*, intptr_t, int);
void miqt_exec_callback_QParallelAnimationGroup_updateState(QParallelAnimationGroup*, intptr_t, int, int);
void miqt_exec_callback_QParallelAnimationGroup_updateDirection(QParallelAnimationGroup*, intptr_t, int);
bool miqt_exec_callback_QParallelAnimationGroup_eventFilter(QParallelAnimationGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QParallelAnimationGroup_timerEvent(QParallelAnimationGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QParallelAnimationGroup_childEvent(QParallelAnimationGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QParallelAnimationGroup_customEvent(QParallelAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QParallelAnimationGroup_connectNotify(QParallelAnimationGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QParallelAnimationGroup_disconnectNotify(QParallelAnimationGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQParallelAnimationGroup final : public QParallelAnimationGroup {
public:

	MiqtVirtualQParallelAnimationGroup(): QParallelAnimationGroup() {}
	MiqtVirtualQParallelAnimationGroup(QObject* parent): QParallelAnimationGroup(parent) {}

	virtual ~MiqtVirtualQParallelAnimationGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__duration == 0) {
			return QParallelAnimationGroup::duration();
		}

		int callback_return_value = miqt_exec_callback_QParallelAnimationGroup_duration(this, handle__duration);
		return static_cast<int>(callback_return_value);
	}

	friend int QParallelAnimationGroup_virtualbase_duration(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QParallelAnimationGroup::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QParallelAnimationGroup_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QParallelAnimationGroup_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int currentTime) override {
		if (handle__updateCurrentTime == 0) {
			QParallelAnimationGroup::updateCurrentTime(currentTime);
			return;
		}

		int sigval1 = currentTime;
		miqt_exec_callback_QParallelAnimationGroup_updateCurrentTime(this, handle__updateCurrentTime, sigval1);

	}

	friend void QParallelAnimationGroup_virtualbase_updateCurrentTime(void* self, int currentTime);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__updateState == 0) {
			QParallelAnimationGroup::updateState(newState, oldState);
			return;
		}

		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);
		miqt_exec_callback_QParallelAnimationGroup_updateState(this, handle__updateState, sigval1, sigval2);

	}

	friend void QParallelAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__updateDirection == 0) {
			QParallelAnimationGroup::updateDirection(direction);
			return;
		}

		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);
		miqt_exec_callback_QParallelAnimationGroup_updateDirection(this, handle__updateDirection, sigval1);

	}

	friend void QParallelAnimationGroup_virtualbase_updateDirection(void* self, int direction);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QParallelAnimationGroup::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QParallelAnimationGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QParallelAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QParallelAnimationGroup::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QParallelAnimationGroup_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QParallelAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QParallelAnimationGroup::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QParallelAnimationGroup_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QParallelAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QParallelAnimationGroup::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QParallelAnimationGroup_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QParallelAnimationGroup_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QParallelAnimationGroup::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QParallelAnimationGroup_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QParallelAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QParallelAnimationGroup::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QParallelAnimationGroup_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QParallelAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QParallelAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QParallelAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QParallelAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QParallelAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QParallelAnimationGroup* QParallelAnimationGroup_new() {
	return new (std::nothrow) MiqtVirtualQParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQParallelAnimationGroup(parent);
}

void QParallelAnimationGroup_virtbase(QParallelAnimationGroup* src, QAnimationGroup** outptr_QAnimationGroup) {
	*outptr_QAnimationGroup = static_cast<QAnimationGroup*>(src);
}

QMetaObject* QParallelAnimationGroup_metaObject(const QParallelAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QParallelAnimationGroup_metacast(QParallelAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QParallelAnimationGroup_tr(const char* s) {
	QString _ret = QParallelAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_trUtf8(const char* s) {
	QString _ret = QParallelAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QParallelAnimationGroup_duration(const QParallelAnimationGroup* self) {
	return self->duration();
}

struct miqt_string QParallelAnimationGroup_tr2(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_trUtf82(const char* s, const char* c) {
	QString _ret = QParallelAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QParallelAnimationGroup_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QParallelAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QParallelAnimationGroup_override_virtual_duration(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__duration = slot;
	return true;
}

int QParallelAnimationGroup_virtualbase_duration(const void* self) {
	return static_cast<const MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::duration();
}

bool QParallelAnimationGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QParallelAnimationGroup_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::event(event);
}

bool QParallelAnimationGroup_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCurrentTime = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_updateCurrentTime(void* self, int currentTime) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::updateCurrentTime(static_cast<int>(currentTime));
}

bool QParallelAnimationGroup_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateState = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::updateState(static_cast<MiqtVirtualQParallelAnimationGroup::State>(newState), static_cast<MiqtVirtualQParallelAnimationGroup::State>(oldState));
}

bool QParallelAnimationGroup_override_virtual_updateDirection(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateDirection = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_updateDirection(void* self, int direction) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::updateDirection(static_cast<MiqtVirtualQParallelAnimationGroup::Direction>(direction));
}

bool QParallelAnimationGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QParallelAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::eventFilter(watched, event);
}

bool QParallelAnimationGroup_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::timerEvent(event);
}

bool QParallelAnimationGroup_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::childEvent(event);
}

bool QParallelAnimationGroup_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::customEvent(event);
}

bool QParallelAnimationGroup_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::connectNotify(*signal);
}

bool QParallelAnimationGroup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QParallelAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQParallelAnimationGroup*>(self)->QParallelAnimationGroup::disconnectNotify(*signal);
}

QObject* QParallelAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QParallelAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QParallelAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QParallelAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQParallelAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQParallelAnimationGroup*>( (QParallelAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QParallelAnimationGroup_delete(QParallelAnimationGroup* self) {
	delete self;
}

