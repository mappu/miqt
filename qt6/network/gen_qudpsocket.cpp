#include <QAbstractSocket>
#include <QByteArray>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaObject>
#include <QNetworkDatagram>
#include <QNetworkInterface>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUdpSocket>
#include <QVariant>
#include <qudpsocket.h>
#include "gen_qudpsocket.h"
#include "_cgo_export.h"

class MiqtVirtualQUdpSocket : public virtual QUdpSocket {
public:

	MiqtVirtualQUdpSocket(): QUdpSocket() {};
	MiqtVirtualQUdpSocket(QObject* parent): QUdpSocket(parent) {};

	virtual ~MiqtVirtualQUdpSocket() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__Resume == 0) {
			QUdpSocket::resume();
			return;
		}
		

		miqt_exec_callback_QUdpSocket_Resume(this, handle__Resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Resume() {

		QUdpSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
		if (handle__Bind == 0) {
			return QUdpSocket::bind(address, port, mode);
		}
		
		const QHostAddress& address_ret = address;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&address_ret);
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QAbstractSocket::BindMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QUdpSocket_Bind(this, handle__Bind, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Bind(QHostAddress* address, uint16_t port, int mode) {

		return QUdpSocket::bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__ConnectToHost == 0) {
			QUdpSocket::connectToHost(hostName, port, mode, protocol);
			return;
		}
		
		const QString hostName_ret = hostName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray hostName_b = hostName_ret.toUtf8();
		struct miqt_string hostName_ms;
		hostName_ms.len = hostName_b.length();
		hostName_ms.data = static_cast<char*>(malloc(hostName_ms.len));
		memcpy(hostName_ms.data, hostName_b.data(), hostName_ms.len);
		struct miqt_string sigval1 = hostName_ms;
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QAbstractSocket::NetworkLayerProtocol protocol_ret = protocol;
		int sigval4 = static_cast<int>(protocol_ret);

		miqt_exec_callback_QUdpSocket_ConnectToHost(this, handle__ConnectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectToHost(struct miqt_string hostName, uint16_t port, int mode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QUdpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__DisconnectFromHost == 0) {
			QUdpSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QUdpSocket_DisconnectFromHost(this, handle__DisconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectFromHost() {

		QUdpSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QUdpSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_BytesAvailable(const_cast<MiqtVirtualQUdpSocket*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QUdpSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QUdpSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_BytesToWrite(const_cast<MiqtVirtualQUdpSocket*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QUdpSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__SetReadBufferSize == 0) {
			QUdpSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QUdpSocket_SetReadBufferSize(this, handle__SetReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetReadBufferSize(long long size) {

		QUdpSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__SocketDescriptor == 0) {
			return QUdpSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QUdpSocket_SocketDescriptor(const_cast<MiqtVirtualQUdpSocket*>(this), handle__SocketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_SocketDescriptor() const {

		qintptr _ret = QUdpSocket::socketDescriptor();
		return static_cast<intptr_t>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (handle__SetSocketDescriptor == 0) {
			return QUdpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = static_cast<intptr_t>(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QUdpSocket_SetSocketDescriptor(this, handle__SetSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QUdpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__SetSocketOption == 0) {
			QUdpSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QUdpSocket_SetSocketOption(this, handle__SetSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSocketOption(int option, QVariant* value) {

		QUdpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__SocketOption == 0) {
			return QUdpSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QUdpSocket_SocketOption(this, handle__SocketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_SocketOption(int option) {

		return new QVariant(QUdpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QUdpSocket::close();
			return;
		}
		

		miqt_exec_callback_QUdpSocket_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QUdpSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QUdpSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_IsSequential(const_cast<MiqtVirtualQUdpSocket*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QUdpSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__WaitForConnected == 0) {
			return QUdpSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_WaitForConnected(this, handle__WaitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForConnected(int msecs) {

		return QUdpSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QUdpSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QUdpSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QUdpSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QUdpSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__WaitForDisconnected == 0) {
			return QUdpSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_WaitForDisconnected(this, handle__WaitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForDisconnected(int msecs) {

		return QUdpSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QUdpSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QUdpSocket_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QUdpSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QUdpSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QUdpSocket_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QUdpSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QUdpSocket::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QUdpSocket_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QUdpSocket::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QUdpSocket::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QUdpSocket_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QUdpSocket::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

};

void QUdpSocket_new(QUdpSocket** outptr_QUdpSocket, QAbstractSocket** outptr_QAbstractSocket, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	MiqtVirtualQUdpSocket* ret = new MiqtVirtualQUdpSocket();
	*outptr_QUdpSocket = ret;
	*outptr_QAbstractSocket = static_cast<QAbstractSocket*>(ret);
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
}

void QUdpSocket_new2(QObject* parent, QUdpSocket** outptr_QUdpSocket, QAbstractSocket** outptr_QAbstractSocket, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	MiqtVirtualQUdpSocket* ret = new MiqtVirtualQUdpSocket(parent);
	*outptr_QUdpSocket = ret;
	*outptr_QAbstractSocket = static_cast<QAbstractSocket*>(ret);
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
}

QMetaObject* QUdpSocket_MetaObject(const QUdpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUdpSocket_Metacast(QUdpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUdpSocket_Tr(const char* s) {
	QString _ret = QUdpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUdpSocket_Bind(QUdpSocket* self, int addr) {
	return self->bind(static_cast<QHostAddress::SpecialAddress>(addr));
}

bool QUdpSocket_JoinMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress) {
	return self->joinMulticastGroup(*groupAddress);
}

bool QUdpSocket_JoinMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface) {
	return self->joinMulticastGroup(*groupAddress, *iface);
}

bool QUdpSocket_LeaveMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress) {
	return self->leaveMulticastGroup(*groupAddress);
}

bool QUdpSocket_LeaveMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface) {
	return self->leaveMulticastGroup(*groupAddress, *iface);
}

QNetworkInterface* QUdpSocket_MulticastInterface(const QUdpSocket* self) {
	return new QNetworkInterface(self->multicastInterface());
}

void QUdpSocket_SetMulticastInterface(QUdpSocket* self, QNetworkInterface* iface) {
	self->setMulticastInterface(*iface);
}

bool QUdpSocket_HasPendingDatagrams(const QUdpSocket* self) {
	return self->hasPendingDatagrams();
}

long long QUdpSocket_PendingDatagramSize(const QUdpSocket* self) {
	qint64 _ret = self->pendingDatagramSize();
	return static_cast<long long>(_ret);
}

QNetworkDatagram* QUdpSocket_ReceiveDatagram(QUdpSocket* self) {
	return new QNetworkDatagram(self->receiveDatagram());
}

long long QUdpSocket_ReadDatagram(QUdpSocket* self, char* data, long long maxlen) {
	qint64 _ret = self->readDatagram(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

long long QUdpSocket_WriteDatagram(QUdpSocket* self, QNetworkDatagram* datagram) {
	qint64 _ret = self->writeDatagram(*datagram);
	return static_cast<long long>(_ret);
}

long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long lenVal, QHostAddress* host, uint16_t port) {
	qint64 _ret = self->writeDatagram(data, static_cast<qint64>(lenVal), *host, static_cast<quint16>(port));
	return static_cast<long long>(_ret);
}

long long QUdpSocket_WriteDatagram3(QUdpSocket* self, struct miqt_string datagram, QHostAddress* host, uint16_t port) {
	QByteArray datagram_QByteArray(datagram.data, datagram.len);
	qint64 _ret = self->writeDatagram(datagram_QByteArray, *host, static_cast<quint16>(port));
	return static_cast<long long>(_ret);
}

struct miqt_string QUdpSocket_Tr2(const char* s, const char* c) {
	QString _ret = QUdpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUdpSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUdpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUdpSocket_Bind2(QUdpSocket* self, int addr, uint16_t port) {
	return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), static_cast<quint16>(port));
}

bool QUdpSocket_Bind3(QUdpSocket* self, int addr, uint16_t port, int mode) {
	return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

QNetworkDatagram* QUdpSocket_ReceiveDatagram1(QUdpSocket* self, long long maxSize) {
	return new QNetworkDatagram(self->receiveDatagram(static_cast<qint64>(maxSize)));
}

long long QUdpSocket_ReadDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host) {
	qint64 _ret = self->readDatagram(data, static_cast<qint64>(maxlen), host);
	return static_cast<long long>(_ret);
}

long long QUdpSocket_ReadDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port) {
	qint64 _ret = self->readDatagram(data, static_cast<qint64>(maxlen), host, static_cast<quint16*>(port));
	return static_cast<long long>(_ret);
}

void QUdpSocket_override_virtual_Resume(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__Resume = slot;
}

void QUdpSocket_virtualbase_Resume(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Resume();
}

void QUdpSocket_override_virtual_Bind(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__Bind = slot;
}

bool QUdpSocket_virtualbase_Bind(void* self, QHostAddress* address, uint16_t port, int mode) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Bind(address, port, mode);
}

void QUdpSocket_override_virtual_ConnectToHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__ConnectToHost = slot;
}

void QUdpSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ConnectToHost(hostName, port, mode, protocol);
}

void QUdpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__DisconnectFromHost = slot;
}

void QUdpSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_DisconnectFromHost();
}

void QUdpSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__BytesAvailable = slot;
}

long long QUdpSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_BytesAvailable();
}

void QUdpSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__BytesToWrite = slot;
}

long long QUdpSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_BytesToWrite();
}

void QUdpSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__SetReadBufferSize = slot;
}

void QUdpSocket_virtualbase_SetReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SetReadBufferSize(size);
}

void QUdpSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__SocketDescriptor = slot;
}

intptr_t QUdpSocket_virtualbase_SocketDescriptor(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_SocketDescriptor();
}

void QUdpSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__SetSocketDescriptor = slot;
}

bool QUdpSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SetSocketDescriptor(socketDescriptor, state, openMode);
}

void QUdpSocket_override_virtual_SetSocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__SetSocketOption = slot;
}

void QUdpSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SetSocketOption(option, value);
}

void QUdpSocket_override_virtual_SocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__SocketOption = slot;
}

QVariant* QUdpSocket_virtualbase_SocketOption(void* self, int option) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SocketOption(option);
}

void QUdpSocket_override_virtual_Close(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__Close = slot;
}

void QUdpSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Close();
}

void QUdpSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__IsSequential = slot;
}

bool QUdpSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_IsSequential();
}

void QUdpSocket_override_virtual_WaitForConnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__WaitForConnected = slot;
}

bool QUdpSocket_virtualbase_WaitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForConnected(msecs);
}

void QUdpSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__WaitForReadyRead = slot;
}

bool QUdpSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

void QUdpSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__WaitForBytesWritten = slot;
}

bool QUdpSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

void QUdpSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__WaitForDisconnected = slot;
}

bool QUdpSocket_virtualbase_WaitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForDisconnected(msecs);
}

void QUdpSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__ReadData = slot;
}

long long QUdpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

void QUdpSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__ReadLineData = slot;
}

long long QUdpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

void QUdpSocket_override_virtual_SkipData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__SkipData = slot;
}

long long QUdpSocket_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SkipData(maxSize);
}

void QUdpSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) )->handle__WriteData = slot;
}

long long QUdpSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WriteData(data, lenVal);
}

void QUdpSocket_Delete(QUdpSocket* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQUdpSocket*>( self );
	} else {
		delete self;
	}
}

