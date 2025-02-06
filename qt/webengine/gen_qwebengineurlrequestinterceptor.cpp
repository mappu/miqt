#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWebEngineUrlRequestInfo>
#include <QWebEngineUrlRequestInterceptor>
#include <qwebengineurlrequestinterceptor.h>
#include "gen_qwebengineurlrequestinterceptor.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineUrlRequestInterceptor_interceptRequest(QWebEngineUrlRequestInterceptor*, intptr_t, QWebEngineUrlRequestInfo*);
bool miqt_exec_callback_QWebEngineUrlRequestInterceptor_event(QWebEngineUrlRequestInterceptor*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter(QWebEngineUrlRequestInterceptor*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent(QWebEngineUrlRequestInterceptor*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent(QWebEngineUrlRequestInterceptor*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent(QWebEngineUrlRequestInterceptor*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify(QWebEngineUrlRequestInterceptor*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify(QWebEngineUrlRequestInterceptor*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineUrlRequestInterceptor final : public QWebEngineUrlRequestInterceptor {
public:

	MiqtVirtualQWebEngineUrlRequestInterceptor(): QWebEngineUrlRequestInterceptor() {};
	MiqtVirtualQWebEngineUrlRequestInterceptor(QObject* p): QWebEngineUrlRequestInterceptor(p) {};

	virtual ~MiqtVirtualQWebEngineUrlRequestInterceptor() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__interceptRequest = 0;

	// Subclass to allow providing a Go implementation
	virtual void interceptRequest(QWebEngineUrlRequestInfo& info) override {
		if (handle__interceptRequest == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QWebEngineUrlRequestInfo& info_ret = info;
		// Cast returned reference into pointer
		QWebEngineUrlRequestInfo* sigval1 = &info_ret;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_interceptRequest(this, handle__interceptRequest, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWebEngineUrlRequestInterceptor::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlRequestInterceptor_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWebEngineUrlRequestInterceptor::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebEngineUrlRequestInterceptor::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebEngineUrlRequestInterceptor::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebEngineUrlRequestInterceptor::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebEngineUrlRequestInterceptor::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebEngineUrlRequestInterceptor::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebEngineUrlRequestInterceptor::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebEngineUrlRequestInterceptor::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebEngineUrlRequestInterceptor::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebEngineUrlRequestInterceptor::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebEngineUrlRequestInterceptor::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QWebEngineUrlRequestInterceptor_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlRequestInterceptor_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlRequestInterceptor_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebEngineUrlRequestInterceptor_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new() {
	return new MiqtVirtualQWebEngineUrlRequestInterceptor();
}

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new2(QObject* p) {
	return new MiqtVirtualQWebEngineUrlRequestInterceptor(p);
}

void QWebEngineUrlRequestInterceptor_virtbase(QWebEngineUrlRequestInterceptor* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineUrlRequestInterceptor_metaObject(const QWebEngineUrlRequestInterceptor* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineUrlRequestInterceptor_metacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineUrlRequestInterceptor_tr(const char* s) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlRequestInterceptor_trUtf8(const char* s) {
	QString _ret = QWebEngineUrlRequestInterceptor::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlRequestInterceptor_interceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
	self->interceptRequest(*info);
}

struct miqt_string QWebEngineUrlRequestInterceptor_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlRequestInterceptor_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlRequestInterceptor_trUtf82(const char* s, const char* c) {
	QString _ret = QWebEngineUrlRequestInterceptor::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlRequestInterceptor_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlRequestInterceptor::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlRequestInterceptor_override_virtual_interceptRequest(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__interceptRequest = slot;
	return true;
}

bool QWebEngineUrlRequestInterceptor_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebEngineUrlRequestInterceptor_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_event(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebEngineUrlRequestInterceptor_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_timerEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_childEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_customEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QWebEngineUrlRequestInterceptor_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebEngineUrlRequestInterceptor_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebEngineUrlRequestInterceptor_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebEngineUrlRequestInterceptor_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebEngineUrlRequestInterceptor_delete(QWebEngineUrlRequestInterceptor* self) {
	delete self;
}

