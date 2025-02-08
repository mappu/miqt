#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QObjectCleanupHandler>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qobjectcleanuphandler.h>
#include "gen_qobjectcleanuphandler.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QObjectCleanupHandler_event(QObjectCleanupHandler*, intptr_t, QEvent*);
bool miqt_exec_callback_QObjectCleanupHandler_eventFilter(QObjectCleanupHandler*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QObjectCleanupHandler_timerEvent(QObjectCleanupHandler*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QObjectCleanupHandler_childEvent(QObjectCleanupHandler*, intptr_t, QChildEvent*);
void miqt_exec_callback_QObjectCleanupHandler_customEvent(QObjectCleanupHandler*, intptr_t, QEvent*);
void miqt_exec_callback_QObjectCleanupHandler_connectNotify(QObjectCleanupHandler*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QObjectCleanupHandler_disconnectNotify(QObjectCleanupHandler*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQObjectCleanupHandler final : public QObjectCleanupHandler {
public:

	MiqtVirtualQObjectCleanupHandler(): QObjectCleanupHandler() {};

	virtual ~MiqtVirtualQObjectCleanupHandler() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QObjectCleanupHandler::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QObjectCleanupHandler_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QObjectCleanupHandler::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QObjectCleanupHandler::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QObjectCleanupHandler_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QObjectCleanupHandler::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QObjectCleanupHandler::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QObjectCleanupHandler_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QObjectCleanupHandler::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QObjectCleanupHandler::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QObjectCleanupHandler_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QObjectCleanupHandler::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QObjectCleanupHandler::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QObjectCleanupHandler_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QObjectCleanupHandler::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QObjectCleanupHandler::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QObjectCleanupHandler_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QObjectCleanupHandler::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QObjectCleanupHandler::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QObjectCleanupHandler_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QObjectCleanupHandler::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QObjectCleanupHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QObjectCleanupHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QObjectCleanupHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QObjectCleanupHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QObjectCleanupHandler* QObjectCleanupHandler_new() {
	return new MiqtVirtualQObjectCleanupHandler();
}

void QObjectCleanupHandler_virtbase(QObjectCleanupHandler* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QObjectCleanupHandler_metaObject(const QObjectCleanupHandler* self) {
	return (QMetaObject*) self->metaObject();
}

void* QObjectCleanupHandler_metacast(QObjectCleanupHandler* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QObjectCleanupHandler_tr(const char* s) {
	QString _ret = QObjectCleanupHandler::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QObjectCleanupHandler_add(QObjectCleanupHandler* self, QObject* object) {
	return self->add(object);
}

void QObjectCleanupHandler_remove(QObjectCleanupHandler* self, QObject* object) {
	self->remove(object);
}

bool QObjectCleanupHandler_isEmpty(const QObjectCleanupHandler* self) {
	return self->isEmpty();
}

void QObjectCleanupHandler_clear(QObjectCleanupHandler* self) {
	self->clear();
}

struct miqt_string QObjectCleanupHandler_tr2(const char* s, const char* c) {
	QString _ret = QObjectCleanupHandler::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_tr3(const char* s, const char* c, int n) {
	QString _ret = QObjectCleanupHandler::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QObjectCleanupHandler_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QObjectCleanupHandler_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_event(event);
}

bool QObjectCleanupHandler_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QObjectCleanupHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QObjectCleanupHandler_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_timerEvent(event);
}

bool QObjectCleanupHandler_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_childEvent(event);
}

bool QObjectCleanupHandler_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_customEvent(event);
}

bool QObjectCleanupHandler_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_connectNotify(signal);
}

bool QObjectCleanupHandler_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QObjectCleanupHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQObjectCleanupHandler*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QObjectCleanupHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QObjectCleanupHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QObjectCleanupHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QObjectCleanupHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QObjectCleanupHandler_delete(QObjectCleanupHandler* self) {
	delete self;
}

