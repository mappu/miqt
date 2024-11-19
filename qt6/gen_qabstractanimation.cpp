#include <QAbstractAnimation>
#include <QAnimationDriver>
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
#include <qabstractanimation.h>
#include "gen_qabstractanimation.h"
#include "_cgo_export.h"

QMetaObject* QAbstractAnimation_MetaObject(const QAbstractAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAnimation_Metacast(QAbstractAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAnimation_Tr(const char* s) {
	QString _ret = QAbstractAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractAnimation_State(const QAbstractAnimation* self) {
	QAbstractAnimation::State _ret = self->state();
	return static_cast<int>(_ret);
}

QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self) {
	return self->group();
}

int QAbstractAnimation_Direction(const QAbstractAnimation* self) {
	QAbstractAnimation::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction) {
	self->setDirection(static_cast<QAbstractAnimation::Direction>(direction));
}

int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self) {
	return self->currentTime();
}

int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self) {
	return self->currentLoopTime();
}

int QAbstractAnimation_LoopCount(const QAbstractAnimation* self) {
	return self->loopCount();
}

void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount) {
	self->setLoopCount(static_cast<int>(loopCount));
}

int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self) {
	return self->currentLoop();
}

int QAbstractAnimation_Duration(const QAbstractAnimation* self) {
	return self->duration();
}

int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self) {
	return self->totalDuration();
}

void QAbstractAnimation_Finished(QAbstractAnimation* self) {
	self->finished();
}

void QAbstractAnimation_connect_Finished(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)()>(&QAbstractAnimation::finished), self, [=]() {
		miqt_exec_callback_QAbstractAnimation_Finished(slot);
	});
}

void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState) {
	self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_connect_StateChanged(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::State, QAbstractAnimation::State)>(&QAbstractAnimation::stateChanged), self, [=](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);
		miqt_exec_callback_QAbstractAnimation_StateChanged(slot, sigval1, sigval2);
	});
}

void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop) {
	self->currentLoopChanged(static_cast<int>(currentLoop));
}

void QAbstractAnimation_connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(int)>(&QAbstractAnimation::currentLoopChanged), self, [=](int currentLoop) {
		int sigval1 = currentLoop;
		miqt_exec_callback_QAbstractAnimation_CurrentLoopChanged(slot, sigval1);
	});
}

void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1) {
	self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::Direction)>(&QAbstractAnimation::directionChanged), self, [=](QAbstractAnimation::Direction param1) {
		QAbstractAnimation::Direction param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractAnimation_DirectionChanged(slot, sigval1);
	});
}

void QAbstractAnimation_Start(QAbstractAnimation* self) {
	self->start();
}

void QAbstractAnimation_Pause(QAbstractAnimation* self) {
	self->pause();
}

void QAbstractAnimation_Resume(QAbstractAnimation* self) {
	self->resume();
}

void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused) {
	self->setPaused(paused);
}

void QAbstractAnimation_Stop(QAbstractAnimation* self) {
	self->stop();
}

void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs) {
	self->setCurrentTime(static_cast<int>(msecs));
}

struct miqt_string QAbstractAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy) {
	self->start(static_cast<QAbstractAnimation::DeletionPolicy>(policy));
}

void QAbstractAnimation_Delete(QAbstractAnimation* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractAnimation*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQAnimationDriver : public virtual QAnimationDriver {
public:

	MiqtVirtualQAnimationDriver(): QAnimationDriver() {};
	MiqtVirtualQAnimationDriver(QObject* parent): QAnimationDriver(parent) {};

	virtual ~MiqtVirtualQAnimationDriver() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance() override {
		if (handle__Advance == 0) {
			QAnimationDriver::advance();
			return;
		}
		

		miqt_exec_callback_QAnimationDriver_Advance(this, handle__Advance);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance() {

		QAnimationDriver::advance();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Elapsed = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 elapsed() const override {
		if (handle__Elapsed == 0) {
			return QAnimationDriver::elapsed();
		}
		

		long long callback_return_value = miqt_exec_callback_QAnimationDriver_Elapsed(const_cast<MiqtVirtualQAnimationDriver*>(this), handle__Elapsed);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Elapsed() const {

		qint64 _ret = QAnimationDriver::elapsed();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Start = 0;

	// Subclass to allow providing a Go implementation
	virtual void start() override {
		if (handle__Start == 0) {
			QAnimationDriver::start();
			return;
		}
		

		miqt_exec_callback_QAnimationDriver_Start(this, handle__Start);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Start() {

		QAnimationDriver::start();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Stop = 0;

	// Subclass to allow providing a Go implementation
	virtual void stop() override {
		if (handle__Stop == 0) {
			QAnimationDriver::stop();
			return;
		}
		

		miqt_exec_callback_QAnimationDriver_Stop(this, handle__Stop);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Stop() {

		QAnimationDriver::stop();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAnimationDriver::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAnimationDriver_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAnimationDriver::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAnimationDriver::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAnimationDriver_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAnimationDriver::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAnimationDriver::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAnimationDriver_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAnimationDriver::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAnimationDriver::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAnimationDriver_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAnimationDriver::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAnimationDriver::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAnimationDriver_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAnimationDriver::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAnimationDriver::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAnimationDriver_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAnimationDriver::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAnimationDriver::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAnimationDriver_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAnimationDriver::disconnectNotify(*signal);

	}

};

void QAnimationDriver_new(QAnimationDriver** outptr_QAnimationDriver, QObject** outptr_QObject) {
	MiqtVirtualQAnimationDriver* ret = new MiqtVirtualQAnimationDriver();
	*outptr_QAnimationDriver = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QAnimationDriver_new2(QObject* parent, QAnimationDriver** outptr_QAnimationDriver, QObject** outptr_QObject) {
	MiqtVirtualQAnimationDriver* ret = new MiqtVirtualQAnimationDriver(parent);
	*outptr_QAnimationDriver = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QAnimationDriver_MetaObject(const QAnimationDriver* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAnimationDriver_Metacast(QAnimationDriver* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAnimationDriver_Tr(const char* s) {
	QString _ret = QAnimationDriver::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAnimationDriver_Advance(QAnimationDriver* self) {
	self->advance();
}

void QAnimationDriver_Install(QAnimationDriver* self) {
	self->install();
}

void QAnimationDriver_Uninstall(QAnimationDriver* self) {
	self->uninstall();
}

bool QAnimationDriver_IsRunning(const QAnimationDriver* self) {
	return self->isRunning();
}

long long QAnimationDriver_Elapsed(const QAnimationDriver* self) {
	qint64 _ret = self->elapsed();
	return static_cast<long long>(_ret);
}

void QAnimationDriver_Started(QAnimationDriver* self) {
	self->started();
}

void QAnimationDriver_connect_Started(QAnimationDriver* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::started), self, [=]() {
		miqt_exec_callback_QAnimationDriver_Started(slot);
	});
}

void QAnimationDriver_Stopped(QAnimationDriver* self) {
	self->stopped();
}

void QAnimationDriver_connect_Stopped(QAnimationDriver* self, intptr_t slot) {
	MiqtVirtualQAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::stopped), self, [=]() {
		miqt_exec_callback_QAnimationDriver_Stopped(slot);
	});
}

struct miqt_string QAnimationDriver_Tr2(const char* s, const char* c) {
	QString _ret = QAnimationDriver::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationDriver_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationDriver::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAnimationDriver_override_virtual_Advance(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__Advance = slot;
}

void QAnimationDriver_virtualbase_Advance(void* self) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_Advance();
}

void QAnimationDriver_override_virtual_Elapsed(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__Elapsed = slot;
}

long long QAnimationDriver_virtualbase_Elapsed(const void* self) {
	return ( (const MiqtVirtualQAnimationDriver*)(self) )->virtualbase_Elapsed();
}

void QAnimationDriver_override_virtual_Start(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__Start = slot;
}

void QAnimationDriver_virtualbase_Start(void* self) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_Start();
}

void QAnimationDriver_override_virtual_Stop(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__Stop = slot;
}

void QAnimationDriver_virtualbase_Stop(void* self) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_Stop();
}

void QAnimationDriver_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__Event = slot;
}

bool QAnimationDriver_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_Event(event);
}

void QAnimationDriver_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__EventFilter = slot;
}

bool QAnimationDriver_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_EventFilter(watched, event);
}

void QAnimationDriver_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__TimerEvent = slot;
}

void QAnimationDriver_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_TimerEvent(event);
}

void QAnimationDriver_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__ChildEvent = slot;
}

void QAnimationDriver_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_ChildEvent(event);
}

void QAnimationDriver_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__CustomEvent = slot;
}

void QAnimationDriver_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_CustomEvent(event);
}

void QAnimationDriver_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__ConnectNotify = slot;
}

void QAnimationDriver_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_ConnectNotify(signal);
}

void QAnimationDriver_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAnimationDriver*>( (QAnimationDriver*)(self) )->handle__DisconnectNotify = slot;
}

void QAnimationDriver_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAnimationDriver*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAnimationDriver_Delete(QAnimationDriver* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAnimationDriver*>( self );
	} else {
		delete self;
	}
}

