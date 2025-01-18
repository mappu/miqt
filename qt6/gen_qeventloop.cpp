#include <QChildEvent>
#include <QEvent>
#include <QEventLoop>
#include <QEventLoopLocker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <qeventloop.h>
#include "gen_qeventloop.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QEventLoop_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QEventLoop_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QEventLoop_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QEventLoop_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QEventLoop_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QEventLoop_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QEventLoop_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQEventLoop final : public QEventLoop {
public:

	MiqtVirtualQEventLoop(): QEventLoop() {};
	MiqtVirtualQEventLoop(QObject* parent): QEventLoop(parent) {};

	virtual ~MiqtVirtualQEventLoop() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QEventLoop::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QEventLoop_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QEventLoop::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QEventLoop::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QEventLoop_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QEventLoop::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QEventLoop::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QEventLoop_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QEventLoop::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QEventLoop::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QEventLoop_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QEventLoop::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QEventLoop::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QEventLoop_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QEventLoop::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QEventLoop::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QEventLoop_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QEventLoop::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QEventLoop::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QEventLoop_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QEventLoop::disconnectNotify(*signal);

	}

};

QEventLoop* QEventLoop_new() {
	return new MiqtVirtualQEventLoop();
}

QEventLoop* QEventLoop_new2(QObject* parent) {
	return new MiqtVirtualQEventLoop(parent);
}

void QEventLoop_virtbase(QEventLoop* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QEventLoop_MetaObject(const QEventLoop* self) {
	return (QMetaObject*) self->metaObject();
}

void* QEventLoop_Metacast(QEventLoop* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QEventLoop_Tr(const char* s) {
	QString _ret = QEventLoop::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventLoop_ProcessEvents(QEventLoop* self) {
	return self->processEvents();
}

void QEventLoop_ProcessEvents2(QEventLoop* self, int flags, int maximumTime) {
	self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maximumTime));
}

int QEventLoop_Exec(QEventLoop* self) {
	return self->exec();
}

bool QEventLoop_IsRunning(const QEventLoop* self) {
	return self->isRunning();
}

void QEventLoop_WakeUp(QEventLoop* self) {
	self->wakeUp();
}

bool QEventLoop_Event(QEventLoop* self, QEvent* event) {
	return self->event(event);
}

void QEventLoop_Exit(QEventLoop* self) {
	self->exit();
}

void QEventLoop_Quit(QEventLoop* self) {
	self->quit();
}

struct miqt_string QEventLoop_Tr2(const char* s, const char* c) {
	QString _ret = QEventLoop::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventLoop_Tr3(const char* s, const char* c, int n) {
	QString _ret = QEventLoop::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventLoop_ProcessEvents1(QEventLoop* self, int flags) {
	return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

int QEventLoop_Exec1(QEventLoop* self, int flags) {
	return self->exec(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QEventLoop_Exit1(QEventLoop* self, int returnCode) {
	self->exit(static_cast<int>(returnCode));
}

void QEventLoop_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) )->handle__Event = slot;
}

bool QEventLoop_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQEventLoop*)(self) )->virtualbase_Event(event);
}

void QEventLoop_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) )->handle__EventFilter = slot;
}

bool QEventLoop_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQEventLoop*)(self) )->virtualbase_EventFilter(watched, event);
}

void QEventLoop_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) )->handle__TimerEvent = slot;
}

void QEventLoop_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQEventLoop*)(self) )->virtualbase_TimerEvent(event);
}

void QEventLoop_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) )->handle__ChildEvent = slot;
}

void QEventLoop_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQEventLoop*)(self) )->virtualbase_ChildEvent(event);
}

void QEventLoop_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) )->handle__CustomEvent = slot;
}

void QEventLoop_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQEventLoop*)(self) )->virtualbase_CustomEvent(event);
}

void QEventLoop_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) )->handle__ConnectNotify = slot;
}

void QEventLoop_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQEventLoop*)(self) )->virtualbase_ConnectNotify(signal);
}

void QEventLoop_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) )->handle__DisconnectNotify = slot;
}

void QEventLoop_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQEventLoop*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QEventLoop_Delete(QEventLoop* self) {
	delete self;
}

QEventLoopLocker* QEventLoopLocker_new() {
	return new QEventLoopLocker();
}

QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop) {
	return new QEventLoopLocker(loop);
}

QEventLoopLocker* QEventLoopLocker_new3(QThread* thread) {
	return new QEventLoopLocker(thread);
}

void QEventLoopLocker_Delete(QEventLoopLocker* self) {
	delete self;
}

