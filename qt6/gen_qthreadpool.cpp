#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRunnable>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QThreadPool>
#include <QTimerEvent>
#include <qthreadpool.h>
#include "gen_qthreadpool.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQThreadPool : public virtual QThreadPool {
public:

	MiqtVirtualQThreadPool(): QThreadPool() {};
	MiqtVirtualQThreadPool(QObject* parent): QThreadPool(parent) {};

	virtual ~MiqtVirtualQThreadPool() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QThreadPool::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QThreadPool_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QThreadPool::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QThreadPool::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QThreadPool_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QThreadPool::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QThreadPool::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QThreadPool_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QThreadPool::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QThreadPool::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QThreadPool_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QThreadPool::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QThreadPool::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QThreadPool_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QThreadPool::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QThreadPool::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThreadPool_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QThreadPool::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QThreadPool::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThreadPool_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QThreadPool::disconnectNotify(*signal);

	}

};

QThreadPool* QThreadPool_new() {
	return new MiqtVirtualQThreadPool();
}

QThreadPool* QThreadPool_new2(QObject* parent) {
	return new MiqtVirtualQThreadPool(parent);
}

void QThreadPool_virtbase(QThreadPool* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QThreadPool_MetaObject(const QThreadPool* self) {
	return (QMetaObject*) self->metaObject();
}

void* QThreadPool_Metacast(QThreadPool* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QThreadPool_Tr(const char* s) {
	QString _ret = QThreadPool::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QThreadPool* QThreadPool_GlobalInstance() {
	return QThreadPool::globalInstance();
}

void QThreadPool_Start(QThreadPool* self, QRunnable* runnable) {
	self->start(runnable);
}

bool QThreadPool_TryStart(QThreadPool* self, QRunnable* runnable) {
	return self->tryStart(runnable);
}

void QThreadPool_StartOnReservedThread(QThreadPool* self, QRunnable* runnable) {
	self->startOnReservedThread(runnable);
}

int QThreadPool_ExpiryTimeout(const QThreadPool* self) {
	return self->expiryTimeout();
}

void QThreadPool_SetExpiryTimeout(QThreadPool* self, int expiryTimeout) {
	self->setExpiryTimeout(static_cast<int>(expiryTimeout));
}

int QThreadPool_MaxThreadCount(const QThreadPool* self) {
	return self->maxThreadCount();
}

void QThreadPool_SetMaxThreadCount(QThreadPool* self, int maxThreadCount) {
	self->setMaxThreadCount(static_cast<int>(maxThreadCount));
}

int QThreadPool_ActiveThreadCount(const QThreadPool* self) {
	return self->activeThreadCount();
}

void QThreadPool_SetStackSize(QThreadPool* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThreadPool_StackSize(const QThreadPool* self) {
	uint _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
}

void QThreadPool_SetThreadPriority(QThreadPool* self, int priority) {
	self->setThreadPriority(static_cast<QThread::Priority>(priority));
}

int QThreadPool_ThreadPriority(const QThreadPool* self) {
	QThread::Priority _ret = self->threadPriority();
	return static_cast<int>(_ret);
}

void QThreadPool_ReserveThread(QThreadPool* self) {
	self->reserveThread();
}

void QThreadPool_ReleaseThread(QThreadPool* self) {
	self->releaseThread();
}

bool QThreadPool_WaitForDone(QThreadPool* self) {
	return self->waitForDone();
}

void QThreadPool_Clear(QThreadPool* self) {
	self->clear();
}

bool QThreadPool_Contains(const QThreadPool* self, QThread* thread) {
	return self->contains(thread);
}

bool QThreadPool_TryTake(QThreadPool* self, QRunnable* runnable) {
	return self->tryTake(runnable);
}

struct miqt_string QThreadPool_Tr2(const char* s, const char* c) {
	QString _ret = QThreadPool::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThreadPool_Tr3(const char* s, const char* c, int n) {
	QString _ret = QThreadPool::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QThreadPool_Start2(QThreadPool* self, QRunnable* runnable, int priority) {
	self->start(runnable, static_cast<int>(priority));
}

bool QThreadPool_WaitForDone1(QThreadPool* self, int msecs) {
	return self->waitForDone(static_cast<int>(msecs));
}

void QThreadPool_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) )->handle__Event = slot;
}

bool QThreadPool_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQThreadPool*)(self) )->virtualbase_Event(event);
}

void QThreadPool_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) )->handle__EventFilter = slot;
}

bool QThreadPool_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQThreadPool*)(self) )->virtualbase_EventFilter(watched, event);
}

void QThreadPool_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) )->handle__TimerEvent = slot;
}

void QThreadPool_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_TimerEvent(event);
}

void QThreadPool_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) )->handle__ChildEvent = slot;
}

void QThreadPool_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_ChildEvent(event);
}

void QThreadPool_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) )->handle__CustomEvent = slot;
}

void QThreadPool_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_CustomEvent(event);
}

void QThreadPool_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) )->handle__ConnectNotify = slot;
}

void QThreadPool_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_ConnectNotify(signal);
}

void QThreadPool_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) )->handle__DisconnectNotify = slot;
}

void QThreadPool_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QThreadPool_Delete(QThreadPool* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQThreadPool*>( self );
	} else {
		delete self;
	}
}

