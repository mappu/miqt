#include <QAbstractSocket>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkDatagram>
#include <QNetworkInterface>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUdpSocket>
#include <QVariant>
#include <qudpsocket.h>
#include "gen_qudpsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QUdpSocket_Resume(QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_Bind(QUdpSocket*, intptr_t, QHostAddress*, uint16_t, int);
void miqt_exec_callback_QUdpSocket_ConnectToHost(QUdpSocket*, intptr_t, struct miqt_string, uint16_t, int, int);
void miqt_exec_callback_QUdpSocket_DisconnectFromHost(QUdpSocket*, intptr_t);
long long miqt_exec_callback_QUdpSocket_BytesAvailable(const QUdpSocket*, intptr_t);
long long miqt_exec_callback_QUdpSocket_BytesToWrite(const QUdpSocket*, intptr_t);
void miqt_exec_callback_QUdpSocket_SetReadBufferSize(QUdpSocket*, intptr_t, long long);
intptr_t miqt_exec_callback_QUdpSocket_SocketDescriptor(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_SetSocketDescriptor(QUdpSocket*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QUdpSocket_SetSocketOption(QUdpSocket*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QUdpSocket_SocketOption(QUdpSocket*, intptr_t, int);
void miqt_exec_callback_QUdpSocket_Close(QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_IsSequential(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_WaitForConnected(QUdpSocket*, intptr_t, int);
bool miqt_exec_callback_QUdpSocket_WaitForReadyRead(QUdpSocket*, intptr_t, int);
bool miqt_exec_callback_QUdpSocket_WaitForBytesWritten(QUdpSocket*, intptr_t, int);
bool miqt_exec_callback_QUdpSocket_WaitForDisconnected(QUdpSocket*, intptr_t, int);
long long miqt_exec_callback_QUdpSocket_ReadData(QUdpSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QUdpSocket_ReadLineData(QUdpSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QUdpSocket_SkipData(QUdpSocket*, intptr_t, long long);
long long miqt_exec_callback_QUdpSocket_WriteData(QUdpSocket*, intptr_t, const char*, long long);
bool miqt_exec_callback_QUdpSocket_Open(QUdpSocket*, intptr_t, int);
long long miqt_exec_callback_QUdpSocket_Pos(const QUdpSocket*, intptr_t);
long long miqt_exec_callback_QUdpSocket_Size(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_Seek(QUdpSocket*, intptr_t, long long);
bool miqt_exec_callback_QUdpSocket_AtEnd(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_Reset(QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_CanReadLine(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_Event(QUdpSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QUdpSocket_EventFilter(QUdpSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QUdpSocket_TimerEvent(QUdpSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUdpSocket_ChildEvent(QUdpSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUdpSocket_CustomEvent(QUdpSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QUdpSocket_ConnectNotify(QUdpSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUdpSocket_DisconnectNotify(QUdpSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQUdpSocket final : public QUdpSocket {
public:

	MiqtVirtualQUdpSocket(): QUdpSocket() {};
	MiqtVirtualQUdpSocket(QObject* parent): QUdpSocket(parent) {};

	virtual ~MiqtVirtualQUdpSocket() override = default;

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
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_BytesAvailable(this, handle__BytesAvailable);

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
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_BytesToWrite(this, handle__BytesToWrite);

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
		

		intptr_t callback_return_value = miqt_exec_callback_QUdpSocket_SocketDescriptor(this, handle__SocketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_SocketDescriptor() const {

		qintptr _ret = QUdpSocket::socketDescriptor();
		return (intptr_t)(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (handle__SetSocketDescriptor == 0) {
			return QUdpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
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
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_IsSequential(this, handle__IsSequential);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (handle__Open == 0) {
			return QUdpSocket::open(mode);
		}
		
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QUdpSocket_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int mode) {

		return QUdpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QUdpSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_Pos(this, handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QUdpSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QUdpSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_Size(this, handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QUdpSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QUdpSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QUdpSocket_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QUdpSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QUdpSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_AtEnd(this, handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QUdpSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QUdpSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QUdpSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QUdpSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_CanReadLine(this, handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QUdpSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QUdpSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QUdpSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QUdpSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QUdpSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QUdpSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QUdpSocket_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QUdpSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QUdpSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUdpSocket_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QUdpSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QUdpSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUdpSocket_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QUdpSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QUdpSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUdpSocket_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QUdpSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QUdpSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUdpSocket_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QUdpSocket::disconnectNotify(*signal);

	}

};

QUdpSocket* QUdpSocket_new() {
	return new MiqtVirtualQUdpSocket();
}

QUdpSocket* QUdpSocket_new2(QObject* parent) {
	return new MiqtVirtualQUdpSocket(parent);
}

void QUdpSocket_virtbase(QUdpSocket* src, QAbstractSocket** outptr_QAbstractSocket) {
	*outptr_QAbstractSocket = static_cast<QAbstractSocket*>(src);
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

bool QUdpSocket_override_virtual_Resume(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Resume = slot;
	return true;
}

void QUdpSocket_virtualbase_Resume(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Resume();
}

bool QUdpSocket_override_virtual_Bind(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Bind = slot;
	return true;
}

bool QUdpSocket_virtualbase_Bind(void* self, QHostAddress* address, uint16_t port, int mode) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Bind(address, port, mode);
}

bool QUdpSocket_override_virtual_ConnectToHost(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectToHost = slot;
	return true;
}

void QUdpSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ConnectToHost(hostName, port, mode, protocol);
}

bool QUdpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectFromHost = slot;
	return true;
}

void QUdpSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_DisconnectFromHost();
}

bool QUdpSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QUdpSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_BytesAvailable();
}

bool QUdpSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QUdpSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_BytesToWrite();
}

bool QUdpSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetReadBufferSize = slot;
	return true;
}

void QUdpSocket_virtualbase_SetReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SetReadBufferSize(size);
}

bool QUdpSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SocketDescriptor = slot;
	return true;
}

intptr_t QUdpSocket_virtualbase_SocketDescriptor(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_SocketDescriptor();
}

bool QUdpSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSocketDescriptor = slot;
	return true;
}

bool QUdpSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SetSocketDescriptor(socketDescriptor, state, openMode);
}

bool QUdpSocket_override_virtual_SetSocketOption(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSocketOption = slot;
	return true;
}

void QUdpSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SetSocketOption(option, value);
}

bool QUdpSocket_override_virtual_SocketOption(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SocketOption = slot;
	return true;
}

QVariant* QUdpSocket_virtualbase_SocketOption(void* self, int option) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SocketOption(option);
}

bool QUdpSocket_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QUdpSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Close();
}

bool QUdpSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QUdpSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_IsSequential();
}

bool QUdpSocket_override_virtual_WaitForConnected(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForConnected = slot;
	return true;
}

bool QUdpSocket_virtualbase_WaitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForConnected(msecs);
}

bool QUdpSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QUdpSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QUdpSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QUdpSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QUdpSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForDisconnected = slot;
	return true;
}

bool QUdpSocket_virtualbase_WaitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WaitForDisconnected(msecs);
}

bool QUdpSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QUdpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QUdpSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QUdpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QUdpSocket_override_virtual_SkipData(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SkipData = slot;
	return true;
}

long long QUdpSocket_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_SkipData(maxSize);
}

bool QUdpSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QUdpSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QUdpSocket_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QUdpSocket_virtualbase_Open(void* self, int mode) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Open(mode);
}

bool QUdpSocket_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QUdpSocket_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_Pos();
}

bool QUdpSocket_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QUdpSocket_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_Size();
}

bool QUdpSocket_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QUdpSocket_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Seek(pos);
}

bool QUdpSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QUdpSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_AtEnd();
}

bool QUdpSocket_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QUdpSocket_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Reset();
}

bool QUdpSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QUdpSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_CanReadLine();
}

bool QUdpSocket_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QUdpSocket_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_Event(event);
}

bool QUdpSocket_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QUdpSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QUdpSocket_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QUdpSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_TimerEvent(event);
}

bool QUdpSocket_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QUdpSocket_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ChildEvent(event);
}

bool QUdpSocket_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QUdpSocket_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_CustomEvent(event);
}

bool QUdpSocket_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QUdpSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QUdpSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QUdpSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QUdpSocket_Delete(QUdpSocket* self) {
	delete self;
}

