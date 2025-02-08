#include <QAbstractAnimation>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QVariantAnimation>
#include <qpropertyanimation.h>
#include "gen_qpropertyanimation.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPropertyAnimation_event(QPropertyAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPropertyAnimation_updateCurrentValue(QPropertyAnimation*, intptr_t, QVariant*);
void miqt_exec_callback_QPropertyAnimation_updateState(QPropertyAnimation*, intptr_t, int, int);
int miqt_exec_callback_QPropertyAnimation_duration(const QPropertyAnimation*, intptr_t);
void miqt_exec_callback_QPropertyAnimation_updateCurrentTime(QPropertyAnimation*, intptr_t, int);
QVariant* miqt_exec_callback_QPropertyAnimation_interpolated(const QPropertyAnimation*, intptr_t, QVariant*, QVariant*, double);
void miqt_exec_callback_QPropertyAnimation_updateDirection(QPropertyAnimation*, intptr_t, int);
bool miqt_exec_callback_QPropertyAnimation_eventFilter(QPropertyAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPropertyAnimation_timerEvent(QPropertyAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPropertyAnimation_childEvent(QPropertyAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPropertyAnimation_customEvent(QPropertyAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPropertyAnimation_connectNotify(QPropertyAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPropertyAnimation_disconnectNotify(QPropertyAnimation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPropertyAnimation final : public QPropertyAnimation {
public:

	MiqtVirtualQPropertyAnimation(): QPropertyAnimation() {};
	MiqtVirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName): QPropertyAnimation(target, propertyName) {};
	MiqtVirtualQPropertyAnimation(QObject* parent): QPropertyAnimation(parent) {};
	MiqtVirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent): QPropertyAnimation(target, propertyName, parent) {};

	virtual ~MiqtVirtualQPropertyAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPropertyAnimation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPropertyAnimation_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPropertyAnimation::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCurrentValue = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentValue(const QVariant& value) override {
		if (handle__updateCurrentValue == 0) {
			QPropertyAnimation::updateCurrentValue(value);
			return;
		}
		
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QPropertyAnimation_updateCurrentValue(this, handle__updateCurrentValue, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateCurrentValue(QVariant* value) {

		QPropertyAnimation::updateCurrentValue(*value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateState = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (handle__updateState == 0) {
			QPropertyAnimation::updateState(newState, oldState);
			return;
		}
		
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);

		miqt_exec_callback_QPropertyAnimation_updateState(this, handle__updateState, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateState(int newState, int oldState) {

		QPropertyAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__duration = 0;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (handle__duration == 0) {
			return QPropertyAnimation::duration();
		}
		

		int callback_return_value = miqt_exec_callback_QPropertyAnimation_duration(this, handle__duration);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_duration() const {

		return QPropertyAnimation::duration();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateCurrentTime = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (handle__updateCurrentTime == 0) {
			QPropertyAnimation::updateCurrentTime(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QPropertyAnimation_updateCurrentTime(this, handle__updateCurrentTime, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateCurrentTime(int param1) {

		QPropertyAnimation::updateCurrentTime(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__interpolated = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
		if (handle__interpolated == 0) {
			return QPropertyAnimation::interpolated(from, to, progress);
		}
		
		const QVariant& from_ret = from;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&from_ret);
		const QVariant& to_ret = to;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&to_ret);
		qreal progress_ret = progress;
		double sigval3 = static_cast<double>(progress_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPropertyAnimation_interpolated(this, handle__interpolated, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_interpolated(QVariant* from, QVariant* to, double progress) const {

		return new QVariant(QPropertyAnimation::interpolated(*from, *to, static_cast<qreal>(progress)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDirection = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (handle__updateDirection == 0) {
			QPropertyAnimation::updateDirection(direction);
			return;
		}
		
		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);

		miqt_exec_callback_QPropertyAnimation_updateDirection(this, handle__updateDirection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateDirection(int direction) {

		QPropertyAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPropertyAnimation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPropertyAnimation_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPropertyAnimation::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPropertyAnimation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPropertyAnimation_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPropertyAnimation::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPropertyAnimation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPropertyAnimation_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPropertyAnimation::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPropertyAnimation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPropertyAnimation_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPropertyAnimation::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPropertyAnimation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPropertyAnimation_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPropertyAnimation::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPropertyAnimation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPropertyAnimation_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPropertyAnimation::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QPropertyAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPropertyAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPropertyAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPropertyAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPropertyAnimation* QPropertyAnimation_new() {
	return new MiqtVirtualQPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	return new MiqtVirtualQPropertyAnimation(target, propertyName_QByteArray);
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
	return new MiqtVirtualQPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, struct miqt_string propertyName, QObject* parent) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	return new MiqtVirtualQPropertyAnimation(target, propertyName_QByteArray, parent);
}

void QPropertyAnimation_virtbase(QPropertyAnimation* src, QVariantAnimation** outptr_QVariantAnimation) {
	*outptr_QVariantAnimation = static_cast<QVariantAnimation*>(src);
}

QMetaObject* QPropertyAnimation_metaObject(const QPropertyAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPropertyAnimation_metacast(QPropertyAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPropertyAnimation_tr(const char* s) {
	QString _ret = QPropertyAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QPropertyAnimation_targetObject(const QPropertyAnimation* self) {
	return self->targetObject();
}

void QPropertyAnimation_setTargetObject(QPropertyAnimation* self, QObject* target) {
	self->setTargetObject(target);
}

struct miqt_string QPropertyAnimation_propertyName(const QPropertyAnimation* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QPropertyAnimation_setPropertyName(QPropertyAnimation* self, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	self->setPropertyName(propertyName_QByteArray);
}

struct miqt_string QPropertyAnimation_tr2(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_tr3(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPropertyAnimation_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPropertyAnimation_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_event(event);
}

bool QPropertyAnimation_override_virtual_updateCurrentValue(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateCurrentValue = slot;
	return true;
}

void QPropertyAnimation_virtualbase_updateCurrentValue(void* self, QVariant* value) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_updateCurrentValue(value);
}

bool QPropertyAnimation_override_virtual_updateState(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateState = slot;
	return true;
}

void QPropertyAnimation_virtualbase_updateState(void* self, int newState, int oldState) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_updateState(newState, oldState);
}

bool QPropertyAnimation_override_virtual_duration(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__duration = slot;
	return true;
}

int QPropertyAnimation_virtualbase_duration(const void* self) {
	return ( (const MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_duration();
}

bool QPropertyAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateCurrentTime = slot;
	return true;
}

void QPropertyAnimation_virtualbase_updateCurrentTime(void* self, int param1) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_updateCurrentTime(param1);
}

bool QPropertyAnimation_override_virtual_interpolated(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__interpolated = slot;
	return true;
}

QVariant* QPropertyAnimation_virtualbase_interpolated(const void* self, QVariant* from, QVariant* to, double progress) {
	return ( (const MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_interpolated(from, to, progress);
}

bool QPropertyAnimation_override_virtual_updateDirection(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateDirection = slot;
	return true;
}

void QPropertyAnimation_virtualbase_updateDirection(void* self, int direction) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_updateDirection(direction);
}

bool QPropertyAnimation_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPropertyAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPropertyAnimation_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPropertyAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_timerEvent(event);
}

bool QPropertyAnimation_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPropertyAnimation_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_childEvent(event);
}

bool QPropertyAnimation_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPropertyAnimation_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_customEvent(event);
}

bool QPropertyAnimation_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPropertyAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_connectNotify(signal);
}

bool QPropertyAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPropertyAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPropertyAnimation*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QPropertyAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPropertyAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPropertyAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPropertyAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPropertyAnimation_delete(QPropertyAnimation* self) {
	delete self;
}

