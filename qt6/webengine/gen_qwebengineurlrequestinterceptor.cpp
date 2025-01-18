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

void miqt_exec_callback_QWebEngineUrlRequestInterceptor_InterceptRequest(void*, intptr_t, QWebEngineUrlRequestInfo*);
bool miqt_exec_callback_QWebEngineUrlRequestInterceptor_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebEngineUrlRequestInterceptor_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineUrlRequestInterceptor final : public QWebEngineUrlRequestInterceptor {
public:

	MiqtVirtualQWebEngineUrlRequestInterceptor(): QWebEngineUrlRequestInterceptor() {};
	MiqtVirtualQWebEngineUrlRequestInterceptor(QObject* p): QWebEngineUrlRequestInterceptor(p) {};

	virtual ~MiqtVirtualQWebEngineUrlRequestInterceptor() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InterceptRequest = 0;

	// Subclass to allow providing a Go implementation
	virtual void interceptRequest(QWebEngineUrlRequestInfo& info) override {
		if (handle__InterceptRequest == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QWebEngineUrlRequestInfo& info_ret = info;
		// Cast returned reference into pointer
		QWebEngineUrlRequestInfo* sigval1 = &info_ret;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_InterceptRequest(this, handle__InterceptRequest, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWebEngineUrlRequestInterceptor::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlRequestInterceptor_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWebEngineUrlRequestInterceptor::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineUrlRequestInterceptor_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebEngineUrlRequestInterceptor::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebEngineUrlRequestInterceptor::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebEngineUrlRequestInterceptor::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebEngineUrlRequestInterceptor::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebEngineUrlRequestInterceptor::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebEngineUrlRequestInterceptor::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebEngineUrlRequestInterceptor::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebEngineUrlRequestInterceptor::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebEngineUrlRequestInterceptor::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineUrlRequestInterceptor_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebEngineUrlRequestInterceptor::disconnectNotify(*signal);

	}

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

QMetaObject* QWebEngineUrlRequestInterceptor_MetaObject(const QWebEngineUrlRequestInterceptor* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineUrlRequestInterceptor_Metacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineUrlRequestInterceptor_Tr(const char* s) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlRequestInterceptor_InterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
	self->interceptRequest(*info);
}

struct miqt_string QWebEngineUrlRequestInterceptor_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlRequestInterceptor_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlRequestInterceptor_override_virtual_InterceptRequest(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InterceptRequest = slot;
	return true;
}

bool QWebEngineUrlRequestInterceptor_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWebEngineUrlRequestInterceptor_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_Event(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWebEngineUrlRequestInterceptor_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_TimerEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_ChildEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_CustomEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineUrlRequestInterceptor*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebEngineUrlRequestInterceptor_Delete(QWebEngineUrlRequestInterceptor* self) {
	delete self;
}

