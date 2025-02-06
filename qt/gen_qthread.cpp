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

bool miqt_exec_callback_QThread_event(QThread*, intptr_t, QEvent*);
void miqt_exec_callback_QThread_run(QThread*, intptr_t);
bool miqt_exec_callback_QThread_eventFilter(QThread*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QThread_timerEvent(QThread*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QThread_childEvent(QThread*, intptr_t, QChildEvent*);
void miqt_exec_callback_QThread_customEvent(QThread*, intptr_t, QEvent*);
void miqt_exec_callback_QThread_connectNotify(QThread*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QThread_disconnectNotify(QThread*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQThread final : public QThread {
public:

	MiqtVirtualQThread(): QThread() {};
	MiqtVirtualQThread(QObject* parent): QThread(parent) {};

	virtual ~MiqtVirtualQThread() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QThread::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QThread_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QThread::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__run = 0;

	// Subclass to allow providing a Go implementation
	virtual void run() override {
		if (handle__run == 0) {
			QThread::run();
			return;
		}
		

		miqt_exec_callback_QThread_run(this, handle__run);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_run() {

		QThread::run();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QThread::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QThread_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QThread::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QThread::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QThread_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QThread::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QThread::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QThread_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QThread::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QThread::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QThread_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QThread::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QThread::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThread_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QThread::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QThread::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThread_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QThread::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend int QThread_protectedbase_exec(bool* _dynamic_cast_ok, void* self);
	friend QObject* QThread_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QThread_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QThread_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QThread_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QThread_metaObject(const QThread* self) {
	return (QMetaObject*) self->metaObject();
}

void* QThread_metacast(QThread* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QThread_tr(const char* s) {
	QString _ret = QThread::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThread_trUtf8(const char* s) {
	QString _ret = QThread::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void* QThread_currentThreadId() {
	Qt::HANDLE _ret = QThread::currentThreadId();
	return static_cast<void*>(_ret);
}

QThread* QThread_currentThread() {
	return QThread::currentThread();
}

int QThread_idealThreadCount() {
	return QThread::idealThreadCount();
}

void QThread_yieldCurrentThread() {
	QThread::yieldCurrentThread();
}

void QThread_setPriority(QThread* self, int priority) {
	self->setPriority(static_cast<QThread::Priority>(priority));
}

int QThread_priority(const QThread* self) {
	QThread::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

bool QThread_isFinished(const QThread* self) {
	return self->isFinished();
}

bool QThread_isRunning(const QThread* self) {
	return self->isRunning();
}

void QThread_requestInterruption(QThread* self) {
	self->requestInterruption();
}

bool QThread_isInterruptionRequested(const QThread* self) {
	return self->isInterruptionRequested();
}

void QThread_setStackSize(QThread* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThread_stackSize(const QThread* self) {
	uint _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
}

void QThread_exit(QThread* self) {
	self->exit();
}

QAbstractEventDispatcher* QThread_eventDispatcher(const QThread* self) {
	return self->eventDispatcher();
}

void QThread_setEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
	self->setEventDispatcher(eventDispatcher);
}

bool QThread_event(QThread* self, QEvent* event) {
	return self->event(event);
}

int QThread_loopLevel(const QThread* self) {
	return self->loopLevel();
}

void QThread_start(QThread* self) {
	self->start();
}

void QThread_terminate(QThread* self) {
	self->terminate();
}

void QThread_quit(QThread* self) {
	self->quit();
}

bool QThread_wait(QThread* self) {
	return self->wait();
}

bool QThread_waitWithTime(QThread* self, unsigned long time) {
	return self->wait(static_cast<unsigned long>(time));
}

void QThread_sleep(unsigned long param1) {
	QThread::sleep(static_cast<unsigned long>(param1));
}

void QThread_msleep(unsigned long param1) {
	QThread::msleep(static_cast<unsigned long>(param1));
}

void QThread_usleep(unsigned long param1) {
	QThread::usleep(static_cast<unsigned long>(param1));
}

struct miqt_string QThread_tr2(const char* s, const char* c) {
	QString _ret = QThread::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThread_tr3(const char* s, const char* c, int n) {
	QString _ret = QThread::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThread_trUtf82(const char* s, const char* c) {
	QString _ret = QThread::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThread_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QThread::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QThread_exit1(QThread* self, int retcode) {
	self->exit(static_cast<int>(retcode));
}

void QThread_start1(QThread* self, int param1) {
	self->start(static_cast<QThread::Priority>(param1));
}

bool QThread_wait1(QThread* self, QDeadlineTimer* deadline) {
	return self->wait(*deadline);
}

bool QThread_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QThread_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQThread*)(self) )->virtualbase_event(event);
}

bool QThread_override_virtual_run(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__run = slot;
	return true;
}

void QThread_virtualbase_run(void* self) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_run();
}

bool QThread_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QThread_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQThread*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QThread_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QThread_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_timerEvent(event);
}

bool QThread_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QThread_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_childEvent(event);
}

bool QThread_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QThread_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_customEvent(event);
}

bool QThread_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QThread_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_connectNotify(signal);
}

bool QThread_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QThread_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThread*)(self) )->virtualbase_disconnectNotify(signal);
}

int QThread_protectedbase_exec(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->exec();

}

QObject* QThread_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QThread_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QThread_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QThread_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QThread_delete(QThread* self) {
	delete self;
}

