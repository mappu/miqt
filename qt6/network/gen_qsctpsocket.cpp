#include <QAbstractSocket>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaObject>
#include <QNetworkDatagram>
#include <QObject>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <qsctpsocket.h>
#include "gen_qsctpsocket.h"
#include "_cgo_export.h"

class MiqtVirtualQSctpSocket : public virtual QSctpSocket {
public:

	MiqtVirtualQSctpSocket(): QSctpSocket() {};
	MiqtVirtualQSctpSocket(QObject* parent): QSctpSocket(parent) {};

	virtual ~MiqtVirtualQSctpSocket() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QSctpSocket::close();
			return;
		}
		

		miqt_exec_callback_QSctpSocket_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QSctpSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__DisconnectFromHost == 0) {
			QSctpSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QSctpSocket_DisconnectFromHost(this, handle__DisconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectFromHost() {

		QSctpSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QSctpSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QSctpSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QSctpSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QSctpSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

};

QSctpSocket* QSctpSocket_new() {
	return new MiqtVirtualQSctpSocket();
}

QSctpSocket* QSctpSocket_new2(QObject* parent) {
	return new MiqtVirtualQSctpSocket(parent);
}

void QSctpSocket_virtbase(QSctpSocket* src, QTcpSocket** outptr_QTcpSocket) {
	*outptr_QTcpSocket = static_cast<QTcpSocket*>(src);
}

QMetaObject* QSctpSocket_MetaObject(const QSctpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSctpSocket_Metacast(QSctpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSctpSocket_Tr(const char* s) {
	QString _ret = QSctpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpSocket_Close(QSctpSocket* self) {
	self->close();
}

void QSctpSocket_DisconnectFromHost(QSctpSocket* self) {
	self->disconnectFromHost();
}

void QSctpSocket_SetMaximumChannelCount(QSctpSocket* self, int count) {
	self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpSocket_MaximumChannelCount(const QSctpSocket* self) {
	return self->maximumChannelCount();
}

bool QSctpSocket_IsInDatagramMode(const QSctpSocket* self) {
	return self->isInDatagramMode();
}

QNetworkDatagram* QSctpSocket_ReadDatagram(QSctpSocket* self) {
	return new QNetworkDatagram(self->readDatagram());
}

bool QSctpSocket_WriteDatagram(QSctpSocket* self, QNetworkDatagram* datagram) {
	return self->writeDatagram(*datagram);
}

struct miqt_string QSctpSocket_Tr2(const char* s, const char* c) {
	QString _ret = QSctpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSctpSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSctpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpSocket_override_virtual_Close(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) )->handle__Close = slot;
}

void QSctpSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Close();
}

void QSctpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) )->handle__DisconnectFromHost = slot;
}

void QSctpSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_DisconnectFromHost();
}

void QSctpSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) )->handle__ReadData = slot;
}

long long QSctpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

void QSctpSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) )->handle__ReadLineData = slot;
}

long long QSctpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

void QSctpSocket_Delete(QSctpSocket* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSctpSocket*>( self );
	} else {
		delete self;
	}
}

