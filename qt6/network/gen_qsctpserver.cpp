#include <QMetaObject>
#include <QObject>
#include <QSctpServer>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <qsctpserver.h>
#include "gen_qsctpserver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSctpServer_IncomingConnection(void*, intptr_t, intptr_t);
bool miqt_exec_callback_QSctpServer_HasPendingConnections(void*, intptr_t);
QTcpSocket* miqt_exec_callback_QSctpServer_NextPendingConnection(void*, intptr_t);
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

void QSctpServer_Delete(QSctpServer* self) {
	delete self;
}

