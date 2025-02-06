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

void miqt_exec_callback_QSctpServer_incomingConnection(QSctpServer*, intptr_t, intptr_t);
bool miqt_exec_callback_QSctpServer_hasPendingConnections(const QSctpServer*, intptr_t);
QTcpSocket* miqt_exec_callback_QSctpServer_nextPendingConnection(QSctpServer*, intptr_t);
bool miqt_exec_callback_QSctpServer_event(QSctpServer*, intptr_t, QEvent*);
bool miqt_exec_callback_QSctpServer_eventFilter(QSctpServer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSctpServer_timerEvent(QSctpServer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSctpServer_childEvent(QSctpServer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSctpServer_customEvent(QSctpServer*, intptr_t, QEvent*);
void miqt_exec_callback_QSctpServer_connectNotify(QSctpServer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSctpServer_disconnectNotify(QSctpServer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSctpServer final : public QSctpServer {
public:

	MiqtVirtualQSctpServer(): QSctpServer() {};
	MiqtVirtualQSctpServer(QObject* parent): QSctpServer(parent) {};

	virtual ~MiqtVirtualQSctpServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__incomingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual void incomingConnection(qintptr handle) override {
		if (handle__incomingConnection == 0) {
			QSctpServer::incomingConnection(handle);
			return;
		}
		
		qintptr handle_ret = handle;
		intptr_t sigval1 = (intptr_t)(handle_ret);

		miqt_exec_callback_QSctpServer_incomingConnection(this, handle__incomingConnection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_incomingConnection(intptr_t handle) {

		QSctpServer::incomingConnection((qintptr)(handle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasPendingConnections = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingConnections() const override {
		if (handle__hasPendingConnections == 0) {
			return QSctpServer::hasPendingConnections();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpServer_hasPendingConnections(this, handle__hasPendingConnections);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasPendingConnections() const {

		return QSctpServer::hasPendingConnections();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QTcpSocket* nextPendingConnection() override {
		if (handle__nextPendingConnection == 0) {
			return QSctpServer::nextPendingConnection();
		}
		

		QTcpSocket* callback_return_value = miqt_exec_callback_QSctpServer_nextPendingConnection(this, handle__nextPendingConnection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTcpSocket* virtualbase_nextPendingConnection() {

		return QSctpServer::nextPendingConnection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSctpServer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSctpServer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSctpServer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSctpServer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSctpServer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSctpServer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSctpServer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSctpServer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSctpServer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSctpServer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSctpServer_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSctpServer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSctpServer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSctpServer_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSctpServer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSctpServer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpServer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSctpServer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSctpServer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpServer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSctpServer::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QSctpServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket);
	friend QObject* QSctpServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSctpServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSctpServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSctpServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QSctpServer_metaObject(const QSctpServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSctpServer_metacast(QSctpServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSctpServer_tr(const char* s) {
	QString _ret = QSctpServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpServer_setMaximumChannelCount(QSctpServer* self, int count) {
	self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpServer_maximumChannelCount(const QSctpServer* self) {
	return self->maximumChannelCount();
}

QSctpSocket* QSctpServer_nextPendingDatagramConnection(QSctpServer* self) {
	return self->nextPendingDatagramConnection();
}

struct miqt_string QSctpServer_tr2(const char* s, const char* c) {
	QString _ret = QSctpServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSctpServer_tr3(const char* s, const char* c, int n) {
	QString _ret = QSctpServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSctpServer_override_virtual_incomingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__incomingConnection = slot;
	return true;
}

void QSctpServer_virtualbase_incomingConnection(void* self, intptr_t handle) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_incomingConnection(handle);
}

bool QSctpServer_override_virtual_hasPendingConnections(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasPendingConnections = slot;
	return true;
}

bool QSctpServer_virtualbase_hasPendingConnections(const void* self) {
	return ( (const MiqtVirtualQSctpServer*)(self) )->virtualbase_hasPendingConnections();
}

bool QSctpServer_override_virtual_nextPendingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextPendingConnection = slot;
	return true;
}

QTcpSocket* QSctpServer_virtualbase_nextPendingConnection(void* self) {
	return ( (MiqtVirtualQSctpServer*)(self) )->virtualbase_nextPendingConnection();
}

bool QSctpServer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSctpServer_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSctpServer*)(self) )->virtualbase_event(event);
}

bool QSctpServer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSctpServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSctpServer*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSctpServer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSctpServer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_timerEvent(event);
}

bool QSctpServer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSctpServer_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_childEvent(event);
}

bool QSctpServer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSctpServer_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_customEvent(event);
}

bool QSctpServer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSctpServer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_connectNotify(signal);
}

bool QSctpServer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSctpServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpServer*)(self) )->virtualbase_disconnectNotify(signal);
}

void QSctpServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addPendingConnection(socket);

}

QObject* QSctpServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSctpServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSctpServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSctpServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSctpServer* self_cast = dynamic_cast<MiqtVirtualQSctpServer*>( (QSctpServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSctpServer_delete(QSctpServer* self) {
	delete self;
}

