#include <QAbstractEventDispatcher>
#include <QChildEvent>
#include <QDeadlineTimer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <qthread.h>
#include "gen_qthread.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QThread_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QThread_Run(void*, intptr_t);
bool miqt_exec_callback_QThread_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QThread_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QThread_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QThread_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QThread_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QThread_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQThread final : public QThread {
public:

	MiqtVirtualQThread(): QThread() {};
	MiqtVirtualQThread(QObject* parent): QThread(parent) {};

	virtual ~MiqtVirtualQThread() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QThread::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QThread_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QThread::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Run = 0;

	// Subclass to allow providing a Go implementation
	virtual void run() override {
		if (handle__Run == 0) {
			QThread::run();
			return;
		}
		

		miqt_exec_callback_QThread_Run(this, handle__Run);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Run() {

		QThread::run();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QThread::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QThread_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QThread::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QThread::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QThread_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QThread::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QThread::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QThread_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QThread::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QThread::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QThread_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QThread::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QThread::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThread_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QThread::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QThread::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThread_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QThread::disconnectNotify(*signal);

	}

};

QThread* QThread_new() {
	return new MiqtVirtualQThread();
}

QThread* QThread_new2(QObject* parent) {
	return new MiqtVirtualQThread(parent);
}

void QThread_virtbase(QThread* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QThread_MetaObject(const QThread* self) {
	return (QMetaObject*) self->metaObject();
}

void* QThread_Metacast(QThread* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QThread_Tr(const char* s) {
	QString _ret = QThread::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void* QThread_CurrentThreadId() {
	Qt::HANDLE _ret = QThread::currentThreadId();
	return static_cast<void*>(_ret);
}

QThread* QThread_CurrentThread() {
	return QThread::currentThread();
}

int QThread_IdealThreadCount() {
	return QThread::idealThreadCount();
}

void QThread_YieldCurrentThread() {
	QThread::yieldCurrentThread();
}

void QThread_SetPriority(QThread* self, int priority) {
	self->setPriority(static_cast<QThread::Priority>(priority));
}

int QThread_Priority(const QThread* self) {
	QThread::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

bool QThread_IsFinished(const QThread* self) {
	return self->isFinished();
}

bool QThread_IsRunning(const QThread* self) {
	return self->isRunning();
}

void QThread_RequestInterruption(QThread* self) {
	self->requestInterruption();
}

bool QThread_IsInterruptionRequested(const QThread* self) {
	return self->isInterruptionRequested();
}

void QThread_SetStackSize(QThread* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThread_StackSize(const QThread* self) {
	uint _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
}

QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self) {
	return self->eventDispatcher();
}

void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
	self->setEventDispatcher(eventDispatcher);
}

bool QThread_Event(QThread* self, QEvent* event) {
	return self->event(event);
}

int QThread_LoopLevel(const QThread* self) {
	return self->loopLevel();
}

void QThread_Start(QThread* self) {
	self->start();
}

void QThread_Terminate(QThread* self) {
	self->terminate();
}

void QThread_Exit(QThread* self) {
	self->exit();
}

void QThread_Quit(QThread* self) {
	self->quit();
}

bool QThread_Wait(QThread* self) {
	return self->wait();
}

bool QThread_WaitWithTime(QThread* self, unsigned long time) {
	return self->wait(static_cast<unsigned long>(time));
}

void QThread_Sleep(unsigned long param1) {
	QThread::sleep(static_cast<unsigned long>(param1));
}

void QThread_Msleep(unsigned long param1) {
	QThread::msleep(static_cast<unsigned long>(param1));
}

void QThread_Usleep(unsigned long param1) {
	QThread::usleep(static_cast<unsigned long>(param1));
}

struct miqt_string QThread_Tr2(const char* s, const char* c) {
	QString _ret = QThread::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThread_Tr3(const char* s, const char* c, int n) {
	QString _ret = QThread::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QThread_Start1(QThread* self, int param1) {
	self->start(static_cast<QThread::Priority>(param1));
}

void QThread_Exit1(QThread* self, int retcode) {
	self->exit(static_cast<int>(retcode));
}

bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline) {
	return self->wait(*deadline);
}

void QThread_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__Event = slot;
}

bool QThread_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQThread*)(self) )->virtualbase_Event(event);
}

void QThread_override_virtual_Run(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__Run = slot;
}

void QThread_virtualbase_Run(void* self) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_Run();
}

void QThread_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__EventFilter = slot;
}

bool QThread_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQThread*)(self) )->virtualbase_EventFilter(watched, event);
}

void QThread_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__TimerEvent = slot;
}

void QThread_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_TimerEvent(event);
}

void QThread_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__ChildEvent = slot;
}

void QThread_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_ChildEvent(event);
}

void QThread_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__CustomEvent = slot;
}

void QThread_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_CustomEvent(event);
}

void QThread_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__ConnectNotify = slot;
}

void QThread_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_ConnectNotify(signal);
}

void QThread_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) )->handle__DisconnectNotify = slot;
}

void QThread_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QThread_Delete(QThread* self) {
	delete self;
}

