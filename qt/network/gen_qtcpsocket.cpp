#include <QAbstractSocket>
#include <QIODevice>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QVariant>
#include <qtcpsocket.h>
#include "gen_qtcpsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTcpSocket_Resume(void*, intptr_t);
void miqt_exec_callback_QTcpSocket_ConnectToHost(void*, intptr_t, struct miqt_string, uint16_t, int, int);
void miqt_exec_callback_QTcpSocket_DisconnectFromHost(void*, intptr_t);
long long miqt_exec_callback_QTcpSocket_BytesAvailable(void*, intptr_t);
long long miqt_exec_callback_QTcpSocket_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QTcpSocket_CanReadLine(void*, intptr_t);
void miqt_exec_callback_QTcpSocket_SetReadBufferSize(void*, intptr_t, long long);
intptr_t miqt_exec_callback_QTcpSocket_SocketDescriptor(void*, intptr_t);
bool miqt_exec_callback_QTcpSocket_SetSocketDescriptor(void*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QTcpSocket_SetSocketOption(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QTcpSocket_SocketOption(void*, intptr_t, int);
void miqt_exec_callback_QTcpSocket_Close(void*, intptr_t);
bool miqt_exec_callback_QTcpSocket_IsSequential(void*, intptr_t);
bool miqt_exec_callback_QTcpSocket_AtEnd(void*, intptr_t);
bool miqt_exec_callback_QTcpSocket_WaitForConnected(void*, intptr_t, int);
bool miqt_exec_callback_QTcpSocket_WaitForReadyRead(void*, intptr_t, int);
bool miqt_exec_callback_QTcpSocket_WaitForBytesWritten(void*, intptr_t, int);
bool miqt_exec_callback_QTcpSocket_WaitForDisconnected(void*, intptr_t, int);
long long miqt_exec_callback_QTcpSocket_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QTcpSocket_ReadLineData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QTcpSocket_WriteData(void*, intptr_t, const char*, long long);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTcpSocket final : public QTcpSocket {
public:

	MiqtVirtualQTcpSocket(): QTcpSocket() {};
	MiqtVirtualQTcpSocket(QObject* parent): QTcpSocket(parent) {};

	virtual ~MiqtVirtualQTcpSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__Resume == 0) {
			QTcpSocket::resume();
			return;
		}
		

		miqt_exec_callback_QTcpSocket_Resume(this, handle__Resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Resume() {

		QTcpSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODevice::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__ConnectToHost == 0) {
			QTcpSocket::connectToHost(hostName, port, mode, protocol);
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

		miqt_exec_callback_QTcpSocket_ConnectToHost(this, handle__ConnectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectToHost(struct miqt_string hostName, uint16_t port, int mode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QTcpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__DisconnectFromHost == 0) {
			QTcpSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QTcpSocket_DisconnectFromHost(this, handle__DisconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectFromHost() {

		QTcpSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QTcpSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QTcpSocket_BytesAvailable(const_cast<MiqtVirtualQTcpSocket*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QTcpSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QTcpSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QTcpSocket_BytesToWrite(const_cast<MiqtVirtualQTcpSocket*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QTcpSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QTcpSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QTcpSocket_CanReadLine(const_cast<MiqtVirtualQTcpSocket*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QTcpSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__SetReadBufferSize == 0) {
			QTcpSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QTcpSocket_SetReadBufferSize(this, handle__SetReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetReadBufferSize(long long size) {

		QTcpSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__SocketDescriptor == 0) {
			return QTcpSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QTcpSocket_SocketDescriptor(const_cast<MiqtVirtualQTcpSocket*>(this), handle__SocketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_SocketDescriptor() const {

		qintptr _ret = QTcpSocket::socketDescriptor();
		return (intptr_t)(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODevice::OpenMode openMode) override {
		if (handle__SetSocketDescriptor == 0) {
			return QTcpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODevice::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QTcpSocket_SetSocketDescriptor(this, handle__SetSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QTcpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__SetSocketOption == 0) {
			QTcpSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QTcpSocket_SetSocketOption(this, handle__SetSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSocketOption(int option, QVariant* value) {

		QTcpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__SocketOption == 0) {
			return QTcpSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTcpSocket_SocketOption(this, handle__SocketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_SocketOption(int option) {

		return new QVariant(QTcpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QTcpSocket::close();
			return;
		}
		

		miqt_exec_callback_QTcpSocket_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QTcpSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QTcpSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QTcpSocket_IsSequential(const_cast<MiqtVirtualQTcpSocket*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QTcpSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QTcpSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QTcpSocket_AtEnd(const_cast<MiqtVirtualQTcpSocket*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QTcpSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__WaitForConnected == 0) {
			return QTcpSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTcpSocket_WaitForConnected(this, handle__WaitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForConnected(int msecs) {

		return QTcpSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QTcpSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTcpSocket_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QTcpSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QTcpSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTcpSocket_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QTcpSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__WaitForDisconnected == 0) {
			return QTcpSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTcpSocket_WaitForDisconnected(this, handle__WaitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForDisconnected(int msecs) {

		return QTcpSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QTcpSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QTcpSocket_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QTcpSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QTcpSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QTcpSocket_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QTcpSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QTcpSocket::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QTcpSocket_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QTcpSocket::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

};

QTcpSocket* QTcpSocket_new() {
	return new MiqtVirtualQTcpSocket();
}

QTcpSocket* QTcpSocket_new2(QObject* parent) {
	return new MiqtVirtualQTcpSocket(parent);
}

void QTcpSocket_virtbase(QTcpSocket* src, QAbstractSocket** outptr_QAbstractSocket) {
	*outptr_QAbstractSocket = static_cast<QAbstractSocket*>(src);
}

QMetaObject* QTcpSocket_MetaObject(const QTcpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTcpSocket_Metacast(QTcpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTcpSocket_Tr(const char* s) {
	QString _ret = QTcpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_TrUtf8(const char* s) {
	QString _ret = QTcpSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_Tr2(const char* s, const char* c) {
	QString _ret = QTcpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTcpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_TrUtf82(const char* s, const char* c) {
	QString _ret = QTcpSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTcpSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTcpSocket_override_virtual_Resume(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__Resume = slot;
}

void QTcpSocket_virtualbase_Resume(void* self) {
	( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_Resume();
}

void QTcpSocket_override_virtual_ConnectToHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__ConnectToHost = slot;
}

void QTcpSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_ConnectToHost(hostName, port, mode, protocol);
}

void QTcpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__DisconnectFromHost = slot;
}

void QTcpSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_DisconnectFromHost();
}

void QTcpSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__BytesAvailable = slot;
}

long long QTcpSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQTcpSocket*)(self) )->virtualbase_BytesAvailable();
}

void QTcpSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__BytesToWrite = slot;
}

long long QTcpSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQTcpSocket*)(self) )->virtualbase_BytesToWrite();
}

void QTcpSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__CanReadLine = slot;
}

bool QTcpSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQTcpSocket*)(self) )->virtualbase_CanReadLine();
}

void QTcpSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__SetReadBufferSize = slot;
}

void QTcpSocket_virtualbase_SetReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_SetReadBufferSize(size);
}

void QTcpSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__SocketDescriptor = slot;
}

intptr_t QTcpSocket_virtualbase_SocketDescriptor(const void* self) {
	return ( (const MiqtVirtualQTcpSocket*)(self) )->virtualbase_SocketDescriptor();
}

void QTcpSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__SetSocketDescriptor = slot;
}

bool QTcpSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_SetSocketDescriptor(socketDescriptor, state, openMode);
}

void QTcpSocket_override_virtual_SetSocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__SetSocketOption = slot;
}

void QTcpSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_SetSocketOption(option, value);
}

void QTcpSocket_override_virtual_SocketOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__SocketOption = slot;
}

QVariant* QTcpSocket_virtualbase_SocketOption(void* self, int option) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_SocketOption(option);
}

void QTcpSocket_override_virtual_Close(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__Close = slot;
}

void QTcpSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_Close();
}

void QTcpSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__IsSequential = slot;
}

bool QTcpSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQTcpSocket*)(self) )->virtualbase_IsSequential();
}

void QTcpSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__AtEnd = slot;
}

bool QTcpSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQTcpSocket*)(self) )->virtualbase_AtEnd();
}

void QTcpSocket_override_virtual_WaitForConnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__WaitForConnected = slot;
}

bool QTcpSocket_virtualbase_WaitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_WaitForConnected(msecs);
}

void QTcpSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__WaitForReadyRead = slot;
}

bool QTcpSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

void QTcpSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__WaitForBytesWritten = slot;
}

bool QTcpSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

void QTcpSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__WaitForDisconnected = slot;
}

bool QTcpSocket_virtualbase_WaitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_WaitForDisconnected(msecs);
}

void QTcpSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__ReadData = slot;
}

long long QTcpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

void QTcpSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__ReadLineData = slot;
}

long long QTcpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

void QTcpSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTcpSocket*>( (QTcpSocket*)(self) )->handle__WriteData = slot;
}

long long QTcpSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQTcpSocket*)(self) )->virtualbase_WriteData(data, lenVal);
}

void QTcpSocket_Delete(QTcpSocket* self) {
	delete self;
}

