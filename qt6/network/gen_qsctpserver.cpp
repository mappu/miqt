#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSctpServer>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimerEvent>
#include <qsctpserver.h>
#include "gen_qsctpserver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSctpServer_IncomingConnection(void*, intptr_t, intptr_t);
bool miqt_exec_callback_QSctpServer_HasPendingConnections(void*, intptr_t);
QTcpSocket* miqt_exec_callback_QSctpServer_NextPendingConnection(void*, intptr_t);
bool miqt_exec_callback_QSctpServer_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSctpServer_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSctpServer_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSctpServer_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSctpServer_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSctpServer_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSctpServer_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSctpServer final : public QSctpServer {
public:

	MiqtVirtualQSctpServer(): QSctpServer() {};
	MiqtVirtualQSctpServer(QObject* parent): QSctpServer(parent) {};

	virtual ~MiqtVirtualQSctpServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IncomingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual void incomingConnection(qintptr handle) override {
		if (handle__IncomingConnection == 0) {
			QSctpServer::incomingConnection(handle);
			return;
		}
		
		qintptr handle_ret = handle;
		intptr_t sigval1 = (intptr_t)(handle_ret);

		miqt_exec_callback_QSctpServer_IncomingConnection(this, handle__IncomingConnection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_IncomingConnection(intptr_t handle) {

		QSctpServer::incomingConnection((qintptr)(handle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasPendingConnections = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingConnections() const override {
		if (handle__HasPendingConnections == 0) {
			return QSctpServer::hasPendingConnections();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpServer_HasPendingConnections(const_cast<MiqtVirtualQSctpServer*>(this), handle__HasPendingConnections);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasPendingConnections() const {

		return QSctpServer::hasPendingConnections();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QTcpSocket* nextPendingConnection() override {
		if (handle__NextPendingConnection == 0) {
			return QSctpServer::nextPendingConnection();
		}
		

		QTcpSocket* callback_return_value = miqt_exec_callback_QSctpServer_NextPendingConnection(this, handle__NextPendingConnection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTcpSocket* virtualbase_NextPendingConnection() {

		return QSctpServer::nextPendingConnection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSctpServer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSctpServer_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSctpServer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSctpServer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSctpServer_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSctpServer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSctpServer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSctpServer_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSctpServer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSctpServer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSctpServer_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSctpServer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSctpServer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSctpServer_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSctpServer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSctpServer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpServer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSctpServer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSctpServer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpServer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSctpServer::disconnectNotify(*signal);

	}

};

QSctpServer* QSctpServer_new() {
	return new MiqtVirtualQSctpServer();
}

QSctpServer* QSctpServer_new2(QObject* parent) {
	return new MiqtVirtualQSctpServer(parent);
}

void QSctpServer_virtbase(QSctpServer* src, QTcpServer** outptr_QTcpServer) {
	*outptr_QTcpServer = static_cast<QTcpServer*>(src);
}

QMetaObject* QSctpServer_MetaObject(const QSctpServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSctpServer_Metacast(QSctpServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSctpServer_Tr(const char* s) {
	QString _ret = QSctpServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpServer_SetMaximumChannelCount(QSctpServer* self, int count) {
	self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpServer_MaximumChannelCount(const QSctpServer* self) {
	return self->maximumChannelCount();
}

QSctpSocket* QSctpServer_NextPendingDatagramConnection(QSctpServer* self) {
	return self->nextPendingDatagramConnection();
}

struct miqt_string QSctpServer_Tr2(const char* s, const char* c) {
	QString _ret = QSctpServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSctpServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSctpServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSctpServer_override_virtual_IncomingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IncomingConnection = slot;
	return true;
}

void QSctpServer_virtualbase_IncomingConnection(void* self, intptr_t handle) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_IncomingConnection(handle);
}

bool QSctpServer_override_virtual_HasPendingConnections(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasPendingConnections = slot;
	return true;
}

bool QSctpServer_virtualbase_HasPendingConnections(const void* self) {
	return ( (const MiqtVirtualQSctpServer*)(self) )->virtualbase_HasPendingConnections();
}

bool QSctpServer_override_virtual_NextPendingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextPendingConnection = slot;
	return true;
}

QTcpSocket* QSctpServer_virtualbase_NextPendingConnection(void* self) {
	return ( (MiqtVirtualQSctpServer*)(self) )->virtualbase_NextPendingConnection();
}

bool QSctpServer_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSctpServer_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSctpServer*)(self) )->virtualbase_Event(event);
}

bool QSctpServer_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSctpServer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSctpServer*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSctpServer_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSctpServer_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_TimerEvent(event);
}

bool QSctpServer_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSctpServer_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_ChildEvent(event);
}

bool QSctpServer_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSctpServer_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_CustomEvent(event);
}

bool QSctpServer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSctpServer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSctpServer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSctpServer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSctpServer_Delete(QSctpServer* self) {
	delete self;
}

