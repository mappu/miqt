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

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QThreadPool_event(QThreadPool*, intptr_t, QEvent*);
bool miqt_exec_callback_QThreadPool_eventFilter(QThreadPool*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QThreadPool_timerEvent(QThreadPool*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QThreadPool_childEvent(QThreadPool*, intptr_t, QChildEvent*);
void miqt_exec_callback_QThreadPool_customEvent(QThreadPool*, intptr_t, QEvent*);
void miqt_exec_callback_QThreadPool_connectNotify(QThreadPool*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QThreadPool_disconnectNotify(QThreadPool*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQThreadPool final : public QThreadPool {
public:

	MiqtVirtualQThreadPool(): QThreadPool() {};
	MiqtVirtualQThreadPool(QObject* parent): QThreadPool(parent) {};

	virtual ~MiqtVirtualQThreadPool() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QThreadPool::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QThreadPool_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QThreadPool::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QThreadPool::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QThreadPool_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QThreadPool::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QThreadPool::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QThreadPool_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QThreadPool::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QThreadPool::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QThreadPool_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QThreadPool::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QThreadPool::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QThreadPool_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QThreadPool::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QThreadPool::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThreadPool_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QThreadPool::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QThreadPool::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QThreadPool_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QThreadPool::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QThreadPool_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QThreadPool_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QThreadPool_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QThreadPool_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QThreadPool_metaObject(const QThreadPool* self) {
	return (QMetaObject*) self->metaObject();
}

void* QThreadPool_metacast(QThreadPool* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QThreadPool_tr(const char* s) {
	QString _ret = QThreadPool::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThreadPool_trUtf8(const char* s) {
	QString _ret = QThreadPool::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QThreadPool* QThreadPool_globalInstance() {
	return QThreadPool::globalInstance();
}

void QThreadPool_start(QThreadPool* self, QRunnable* runnable) {
	self->start(runnable);
}

bool QThreadPool_tryStart(QThreadPool* self, QRunnable* runnable) {
	return self->tryStart(runnable);
}

int QThreadPool_expiryTimeout(const QThreadPool* self) {
	return self->expiryTimeout();
}

void QThreadPool_setExpiryTimeout(QThreadPool* self, int expiryTimeout) {
	self->setExpiryTimeout(static_cast<int>(expiryTimeout));
}

int QThreadPool_maxThreadCount(const QThreadPool* self) {
	return self->maxThreadCount();
}

void QThreadPool_setMaxThreadCount(QThreadPool* self, int maxThreadCount) {
	self->setMaxThreadCount(static_cast<int>(maxThreadCount));
}

int QThreadPool_activeThreadCount(const QThreadPool* self) {
	return self->activeThreadCount();
}

void QThreadPool_setStackSize(QThreadPool* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThreadPool_stackSize(const QThreadPool* self) {
	uint _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
}

void QThreadPool_reserveThread(QThreadPool* self) {
	self->reserveThread();
}

void QThreadPool_releaseThread(QThreadPool* self) {
	self->releaseThread();
}

bool QThreadPool_waitForDone(QThreadPool* self) {
	return self->waitForDone();
}

void QThreadPool_clear(QThreadPool* self) {
	self->clear();
}

bool QThreadPool_contains(const QThreadPool* self, QThread* thread) {
	return self->contains(thread);
}

void QThreadPool_cancel(QThreadPool* self, QRunnable* runnable) {
	self->cancel(runnable);
}

bool QThreadPool_tryTake(QThreadPool* self, QRunnable* runnable) {
	return self->tryTake(runnable);
}

struct miqt_string QThreadPool_tr2(const char* s, const char* c) {
	QString _ret = QThreadPool::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThreadPool_tr3(const char* s, const char* c, int n) {
	QString _ret = QThreadPool::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThreadPool_trUtf82(const char* s, const char* c) {
	QString _ret = QThreadPool::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThreadPool_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QThreadPool::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QThreadPool_start2(QThreadPool* self, QRunnable* runnable, int priority) {
	self->start(runnable, static_cast<int>(priority));
}

bool QThreadPool_waitForDone1(QThreadPool* self, int msecs) {
	return self->waitForDone(static_cast<int>(msecs));
}

bool QThreadPool_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QThreadPool_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQThreadPool*)(self) )->virtualbase_event(event);
}

bool QThreadPool_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QThreadPool_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQThreadPool*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QThreadPool_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QThreadPool_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_timerEvent(event);
}

bool QThreadPool_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QThreadPool_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_childEvent(event);
}

bool QThreadPool_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QThreadPool_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_customEvent(event);
}

bool QThreadPool_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QThreadPool_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_connectNotify(signal);
}

bool QThreadPool_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QThreadPool_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQThreadPool*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QThreadPool_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QThreadPool_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QThreadPool_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QThreadPool_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQThreadPool* self_cast = dynamic_cast<MiqtVirtualQThreadPool*>( (QThreadPool*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QThreadPool_delete(QThreadPool* self) {
	delete self;
}

