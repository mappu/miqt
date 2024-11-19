#include <QAbstractSocket>
#include <QAuthenticator>
#include <QHostAddress>
#include <QIODevice>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qabstractsocket.h>
#include "gen_qabstractsocket.h"
#include "_cgo_export.h"

class MiqtVirtualQAbstractSocket : public virtual QAbstractSocket {
public:

	MiqtVirtualQAbstractSocket(QAbstractSocket::SocketType socketType, QObject* parent): QAbstractSocket(socketType, parent) {};

	virtual ~MiqtVirtualQAbstractSocket() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__Resume == 0) {
			QAbstractSocket::resume();
			return;
		}
		

		miqt_exec_callback_QAbstractSocket_Resume(this, handle__Resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Resume() {

		QAbstractSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODevice::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__ConnectToHost == 0) {
			QAbstractSocket::connectToHost(hostName, port, mode, protocol);
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
		QIODevice::OpenMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QAbstractSocket::NetworkLayerProtocol protocol_ret = protocol;
		int sigval4 = static_cast<int>(protocol_ret);

		miqt_exec_callback_QAbstractSocket_ConnectToHost(this, handle__ConnectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectToHost(struct miqt_string hostName, uint16_t port, int mode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QAbstractSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectToHost2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QHostAddress& address, quint16 port, QIODevice::OpenMode mode) override {
		if (handle__ConnectToHost2 == 0) {
			QAbstractSocket::connectToHost(address, port, mode);
			return;
		}
		
		const QHostAddress& address_ret = address;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&address_ret);
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QIODevice::OpenMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		miqt_exec_callback_QAbstractSocket_ConnectToHost2(this, handle__ConnectToHost2, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectToHost2(QHostAddress* address, uint16_t port, int mode) {

		QAbstractSocket::connectToHost(*address, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__DisconnectFromHost == 0) {
			QAbstractSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QAbstractSocket_DisconnectFromHost(this, handle__DisconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectFromHost() {

		QAbstractSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QAbstractSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_BytesAvailable(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QAbstractSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QAbstractSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_BytesToWrite(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QAbstractSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QAbstractSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_CanReadLine(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QAbstractSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__SetReadBufferSize == 0) {
			QAbstractSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QAbstractSocket_SetReadBufferSize(this, handle__SetReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetReadBufferSize(long long size) {

		QAbstractSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__SocketDescriptor == 0) {
			return QAbstractSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QAbstractSocket_SocketDescriptor(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__SocketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_SocketDescriptor() const {

		qintptr _ret = QAbstractSocket::socketDescriptor();
		return static_cast<intptr_t>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODevice::OpenMode openMode) override {
		if (handle__SetSocketDescriptor == 0) {
			return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = static_cast<intptr_t>(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODevice::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_SetSocketDescriptor(this, handle__SetSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QAbstractSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__SetSocketOption == 0) {
			QAbstractSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QAbstractSocket_SetSocketOption(this, handle__SetSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSocketOption(int option, QVariant* value) {

		QAbstractSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__SocketOption == 0) {
			return QAbstractSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractSocket_SocketOption(this, handle__SocketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_SocketOption(int option) {

		return new QVariant(QAbstractSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QAbstractSocket::close();
			return;
		}
		

		miqt_exec_callback_QAbstractSocket_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QAbstractSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QAbstractSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_IsSequential(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QAbstractSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QAbstractSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_AtEnd(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QAbstractSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__WaitForConnected == 0) {
			return QAbstractSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_WaitForConnected(this, handle__WaitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForConnected(int msecs) {

		return QAbstractSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QAbstractSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QAbstractSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QAbstractSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QAbstractSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__WaitForDisconnected == 0) {
			return QAbstractSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_WaitForDisconnected(this, handle__WaitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForDisconnected(int msecs) {

		return QAbstractSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QAbstractSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QAbstractSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QAbstractSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QAbstractSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QAbstractSocket::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QAbstractSocket::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (handle__Open == 0) {
			return QAbstractSocket::open(mode);
		}
		
		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int mode) {

		return QAbstractSocket::open(static_cast<QIODevice::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QAbstractSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_Pos(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QAbstractSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QAbstractSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_Size(const_cast<MiqtVirtualQAbstractSocket*>(this), handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QAbstractSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QAbstractSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QAbstractSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QAbstractSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QAbstractSocket::reset();

	}

};

void QAbstractSocket_new(int socketType, QObject* parent, QAbstractSocket** outptr_QAbstractSocket, QIODevice** outptr_QIODevice, QObject** outptr_QObject) {
	MiqtVirtualQAbstractSocket* ret = new MiqtVirtualQAbstractSocket(static_cast<QAbstractSocket::SocketType>(socketType), parent);
	*outptr_QAbstractSocket = ret;
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QAbstractSocket_MetaObject(const QAbstractSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSocket_Metacast(QAbstractSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSocket_Tr(const char* s) {
	QString _ret = QAbstractSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_TrUtf8(const char* s) {
	QString _ret = QAbstractSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_Resume(QAbstractSocket* self) {
	self->resume();
}

int QAbstractSocket_PauseMode(const QAbstractSocket* self) {
	QAbstractSocket::PauseModes _ret = self->pauseMode();
	return static_cast<int>(_ret);
}

void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode) {
	self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

bool QAbstractSocket_Bind(QAbstractSocket* self, QHostAddress* address) {
	return self->bind(*address);
}

bool QAbstractSocket_Bind2(QAbstractSocket* self) {
	return self->bind();
}

void QAbstractSocket_ConnectToHost(QAbstractSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
	self->connectToHost(*address, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode));
}

void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self) {
	self->disconnectFromHost();
}

bool QAbstractSocket_IsValid(const QAbstractSocket* self) {
	return self->isValid();
}

long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_CanReadLine(const QAbstractSocket* self) {
	return self->canReadLine();
}

uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self) {
	quint16 _ret = self->localPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->localAddress());
}

uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self) {
	quint16 _ret = self->peerPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->peerAddress());
}

struct miqt_string QAbstractSocket_PeerName(const QAbstractSocket* self) {
	QString _ret = self->peerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

void QAbstractSocket_Abort(QAbstractSocket* self) {
	self->abort();
}

intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self) {
	qintptr _ret = self->socketDescriptor();
	return static_cast<intptr_t>(_ret);
}

bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));
}

void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QAbstractSocket_SocketType(const QAbstractSocket* self) {
	QAbstractSocket::SocketType _ret = self->socketType();
	return static_cast<int>(_ret);
}

int QAbstractSocket_State(const QAbstractSocket* self) {
	QAbstractSocket::SocketState _ret = self->state();
	return static_cast<int>(_ret);
}

int QAbstractSocket_Error(const QAbstractSocket* self) {
	QAbstractSocket::SocketError _ret = self->error();
	return static_cast<int>(_ret);
}

void QAbstractSocket_Close(QAbstractSocket* self) {
	self->close();
}

bool QAbstractSocket_IsSequential(const QAbstractSocket* self) {
	return self->isSequential();
}

bool QAbstractSocket_AtEnd(const QAbstractSocket* self) {
	return self->atEnd();
}

bool QAbstractSocket_Flush(QAbstractSocket* self) {
	return self->flush();
}

bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

void QAbstractSocket_SetProxy(QAbstractSocket* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self) {
	return new QNetworkProxy(self->proxy());
}

struct miqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self) {
	QString _ret = self->protocolTag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, struct miqt_string tag) {
	QString tag_QString = QString::fromUtf8(tag.data, tag.len);
	self->setProtocolTag(tag_QString);
}

void QAbstractSocket_HostFound(QAbstractSocket* self) {
	self->hostFound();
}

void QAbstractSocket_connect_HostFound(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::hostFound), self, [=]() {
		miqt_exec_callback_QAbstractSocket_HostFound(slot);
	});
}

void QAbstractSocket_Connected(QAbstractSocket* self) {
	self->connected();
}

void QAbstractSocket_connect_Connected(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::connected), self, [=]() {
		miqt_exec_callback_QAbstractSocket_Connected(slot);
	});
}

void QAbstractSocket_Disconnected(QAbstractSocket* self) {
	self->disconnected();
}

void QAbstractSocket_connect_Disconnected(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::disconnected), self, [=]() {
		miqt_exec_callback_QAbstractSocket_Disconnected(slot);
	});
}

void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1) {
	self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void QAbstractSocket_connect_StateChanged(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketState)>(&QAbstractSocket::stateChanged), self, [=](QAbstractSocket::SocketState param1) {
		QAbstractSocket::SocketState param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_StateChanged(slot, sigval1);
	});
}

void QAbstractSocket_ErrorWithQAbstractSocketSocketError(QAbstractSocket* self, int param1) {
	self->error(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_connect_ErrorWithQAbstractSocketSocketError(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::error), self, [=](QAbstractSocket::SocketError param1) {
		QAbstractSocket::SocketError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_ErrorWithQAbstractSocketSocketError(slot, sigval1);
	});
}

void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1) {
	self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::errorOccurred), self, [=](QAbstractSocket::SocketError param1) {
		QAbstractSocket::SocketError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_ErrorOccurred(slot, sigval1);
	});
}

void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QAbstractSocket_connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(const QNetworkProxy&, QAuthenticator*)>(&QAbstractSocket::proxyAuthenticationRequired), self, [=](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
		const QNetworkProxy& proxy_ret = proxy;
		// Cast returned reference into pointer
		QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QAbstractSocket_ProxyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

struct miqt_string QAbstractSocket_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSocket_Bind22(QAbstractSocket* self, QHostAddress* address, uint16_t port) {
	return self->bind(*address, static_cast<quint16>(port));
}

bool QAbstractSocket_Bind3(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
	return self->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port) {
	return self->bind(static_cast<quint16>(port));
}

bool QAbstractSocket_Bind23(QAbstractSocket* self, uint16_t port, int mode) {
	return self->bind(static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

void QAbstractSocket_override_virtual_Resume(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__Resume = slot;
}

void QAbstractSocket_virtualbase_Resume(void* self) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_Resume();
}

void QAbstractSocket_override_virtual_ConnectToHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__ConnectToHost = slot;
}

void QAbstractSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_ConnectToHost(hostName, port, mode, protocol);
}

void QAbstractSocket_override_virtual_ConnectToHost2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__ConnectToHost2 = slot;
}

void QAbstractSocket_virtualbase_ConnectToHost2(void* self, QHostAddress* address, uint16_t port, int mode) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_ConnectToHost2(address, port, mode);
}

void QAbstractSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__DisconnectFromHost = slot;
}

void QAbstractSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_DisconnectFromHost();
}

void QAbstractSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__BytesAvailable = slot;
}

long long QAbstractSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_BytesAvailable();
}

void QAbstractSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__BytesToWrite = slot;
}

long long QAbstractSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_BytesToWrite();
}

void QAbstractSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__CanReadLine = slot;
}

bool QAbstractSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_CanReadLine();
}

void QAbstractSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__SetReadBufferSize = slot;
}

void QAbstractSocket_virtualbase_SetReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_SetReadBufferSize(size);
}

void QAbstractSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__SocketDescriptor = slot;
}

intptr_t QAbstractSocket_virtualbase_SocketDescriptor(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_SocketDescriptor();
}

void QAbstractSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__SetSocketDescriptor = slot;
}

bool QAbstractSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_SetSocketDescriptor(socketDescriptor, state, openMode);
}

void QAbstractSocket_override_virtual_SetSocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__SetSocketOption = slot;
}

void QAbstractSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_SetSocketOption(option, value);
}

void QAbstractSocket_override_virtual_SocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__SocketOption = slot;
}

QVariant* QAbstractSocket_virtualbase_SocketOption(void* self, int option) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_SocketOption(option);
}

void QAbstractSocket_override_virtual_Close(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__Close = slot;
}

void QAbstractSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_Close();
}

void QAbstractSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__IsSequential = slot;
}

bool QAbstractSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_IsSequential();
}

void QAbstractSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__AtEnd = slot;
}

bool QAbstractSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_AtEnd();
}

void QAbstractSocket_override_virtual_WaitForConnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__WaitForConnected = slot;
}

bool QAbstractSocket_virtualbase_WaitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_WaitForConnected(msecs);
}

void QAbstractSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__WaitForReadyRead = slot;
}

bool QAbstractSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

void QAbstractSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__WaitForBytesWritten = slot;
}

bool QAbstractSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

void QAbstractSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__WaitForDisconnected = slot;
}

bool QAbstractSocket_virtualbase_WaitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_WaitForDisconnected(msecs);
}

void QAbstractSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__ReadData = slot;
}

long long QAbstractSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

void QAbstractSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__ReadLineData = slot;
}

long long QAbstractSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

void QAbstractSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__WriteData = slot;
}

long long QAbstractSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_WriteData(data, lenVal);
}

void QAbstractSocket_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__Open = slot;
}

bool QAbstractSocket_virtualbase_Open(void* self, int mode) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_Open(mode);
}

void QAbstractSocket_override_virtual_Pos(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__Pos = slot;
}

long long QAbstractSocket_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_Pos();
}

void QAbstractSocket_override_virtual_Size(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__Size = slot;
}

long long QAbstractSocket_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_Size();
}

void QAbstractSocket_override_virtual_Seek(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__Seek = slot;
}

bool QAbstractSocket_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_Seek(pos);
}

void QAbstractSocket_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) )->handle__Reset = slot;
}

bool QAbstractSocket_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_Reset();
}

void QAbstractSocket_Delete(QAbstractSocket* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractSocket*>( self );
	} else {
		delete self;
	}
}

