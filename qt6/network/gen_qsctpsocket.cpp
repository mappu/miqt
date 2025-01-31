#include <QAbstractSocket>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkDatagram>
#include <QObject>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QVariant>
#include <qsctpsocket.h>
#include "gen_qsctpsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSctpSocket_Close(QSctpSocket*, intptr_t);
void miqt_exec_callback_QSctpSocket_DisconnectFromHost(QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_ReadData(QSctpSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QSctpSocket_ReadLineData(QSctpSocket*, intptr_t, char*, long long);
void miqt_exec_callback_QSctpSocket_Resume(QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_Bind(QSctpSocket*, intptr_t, QHostAddress*, uint16_t, int);
void miqt_exec_callback_QSctpSocket_ConnectToHost(QSctpSocket*, intptr_t, struct miqt_string, uint16_t, int, int);
long long miqt_exec_callback_QSctpSocket_BytesAvailable(const QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_BytesToWrite(const QSctpSocket*, intptr_t);
void miqt_exec_callback_QSctpSocket_SetReadBufferSize(QSctpSocket*, intptr_t, long long);
intptr_t miqt_exec_callback_QSctpSocket_SocketDescriptor(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_SetSocketDescriptor(QSctpSocket*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QSctpSocket_SetSocketOption(QSctpSocket*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QSctpSocket_SocketOption(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_IsSequential(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_WaitForConnected(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_WaitForReadyRead(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_WaitForBytesWritten(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_WaitForDisconnected(QSctpSocket*, intptr_t, int);
long long miqt_exec_callback_QSctpSocket_SkipData(QSctpSocket*, intptr_t, long long);
long long miqt_exec_callback_QSctpSocket_WriteData(QSctpSocket*, intptr_t, const char*, long long);
bool miqt_exec_callback_QSctpSocket_Open(QSctpSocket*, intptr_t, int);
long long miqt_exec_callback_QSctpSocket_Pos(const QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_Size(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_Seek(QSctpSocket*, intptr_t, long long);
bool miqt_exec_callback_QSctpSocket_AtEnd(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_Reset(QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_CanReadLine(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_Event(QSctpSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QSctpSocket_EventFilter(QSctpSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSctpSocket_TimerEvent(QSctpSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSctpSocket_ChildEvent(QSctpSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSctpSocket_CustomEvent(QSctpSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QSctpSocket_ConnectNotify(QSctpSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSctpSocket_DisconnectNotify(QSctpSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSctpSocket final : public QSctpSocket {
public:

	MiqtVirtualQSctpSocket(): QSctpSocket() {};
	MiqtVirtualQSctpSocket(QObject* parent): QSctpSocket(parent) {};

	virtual ~MiqtVirtualQSctpSocket() override = default;

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__Resume == 0) {
			QSctpSocket::resume();
			return;
		}
		

		miqt_exec_callback_QSctpSocket_Resume(this, handle__Resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Resume() {

		QSctpSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
		if (handle__Bind == 0) {
			return QSctpSocket::bind(address, port, mode);
		}
		
		const QHostAddress& address_ret = address;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&address_ret);
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QAbstractSocket::BindMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_Bind(this, handle__Bind, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Bind(QHostAddress* address, uint16_t port, int mode) {

		return QSctpSocket::bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__ConnectToHost == 0) {
			QSctpSocket::connectToHost(hostName, port, mode, protocol);
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

		miqt_exec_callback_QSctpSocket_ConnectToHost(this, handle__ConnectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectToHost(struct miqt_string hostName, uint16_t port, int mode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QSctpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QSctpSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_BytesAvailable(this, handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QSctpSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QSctpSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_BytesToWrite(this, handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QSctpSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__SetReadBufferSize == 0) {
			QSctpSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QSctpSocket_SetReadBufferSize(this, handle__SetReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetReadBufferSize(long long size) {

		QSctpSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__SocketDescriptor == 0) {
			return QSctpSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QSctpSocket_SocketDescriptor(this, handle__SocketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_SocketDescriptor() const {

		qintptr _ret = QSctpSocket::socketDescriptor();
		return (intptr_t)(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (handle__SetSocketDescriptor == 0) {
			return QSctpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_SetSocketDescriptor(this, handle__SetSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QSctpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__SetSocketOption == 0) {
			QSctpSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QSctpSocket_SetSocketOption(this, handle__SetSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSocketOption(int option, QVariant* value) {

		QSctpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__SocketOption == 0) {
			return QSctpSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSctpSocket_SocketOption(this, handle__SocketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_SocketOption(int option) {

		return new QVariant(QSctpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QSctpSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_IsSequential(this, handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QSctpSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__WaitForConnected == 0) {
			return QSctpSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_WaitForConnected(this, handle__WaitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForConnected(int msecs) {

		return QSctpSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QSctpSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QSctpSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QSctpSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QSctpSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__WaitForDisconnected == 0) {
			return QSctpSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_WaitForDisconnected(this, handle__WaitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForDisconnected(int msecs) {

		return QSctpSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QSctpSocket::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QSctpSocket::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QSctpSocket::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QSctpSocket::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (handle__Open == 0) {
			return QSctpSocket::open(mode);
		}
		
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int mode) {

		return QSctpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QSctpSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_Pos(this, handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QSctpSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QSctpSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_Size(this, handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QSctpSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QSctpSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QSctpSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QSctpSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_AtEnd(this, handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QSctpSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QSctpSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QSctpSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QSctpSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_CanReadLine(this, handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QSctpSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSctpSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSctpSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSctpSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSctpSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSctpSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSctpSocket_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSctpSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSctpSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSctpSocket_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSctpSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSctpSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSctpSocket_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSctpSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSctpSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpSocket_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSctpSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSctpSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpSocket_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSctpSocket::disconnectNotify(*signal);

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

bool QSctpSocket_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QSctpSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Close();
}

bool QSctpSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectFromHost = slot;
	return true;
}

void QSctpSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_DisconnectFromHost();
}

bool QSctpSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QSctpSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QSctpSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QSctpSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QSctpSocket_override_virtual_Resume(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Resume = slot;
	return true;
}

void QSctpSocket_virtualbase_Resume(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Resume();
}

bool QSctpSocket_override_virtual_Bind(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Bind = slot;
	return true;
}

bool QSctpSocket_virtualbase_Bind(void* self, QHostAddress* address, uint16_t port, int mode) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Bind(address, port, mode);
}

bool QSctpSocket_override_virtual_ConnectToHost(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectToHost = slot;
	return true;
}

void QSctpSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_ConnectToHost(hostName, port, mode, protocol);
}

bool QSctpSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QSctpSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_BytesAvailable();
}

bool QSctpSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QSctpSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_BytesToWrite();
}

bool QSctpSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetReadBufferSize = slot;
	return true;
}

void QSctpSocket_virtualbase_SetReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_SetReadBufferSize(size);
}

bool QSctpSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SocketDescriptor = slot;
	return true;
}

intptr_t QSctpSocket_virtualbase_SocketDescriptor(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_SocketDescriptor();
}

bool QSctpSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSocketDescriptor = slot;
	return true;
}

bool QSctpSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_SetSocketDescriptor(socketDescriptor, state, openMode);
}

bool QSctpSocket_override_virtual_SetSocketOption(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSocketOption = slot;
	return true;
}

void QSctpSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_SetSocketOption(option, value);
}

bool QSctpSocket_override_virtual_SocketOption(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SocketOption = slot;
	return true;
}

QVariant* QSctpSocket_virtualbase_SocketOption(void* self, int option) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_SocketOption(option);
}

bool QSctpSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QSctpSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_IsSequential();
}

bool QSctpSocket_override_virtual_WaitForConnected(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForConnected = slot;
	return true;
}

bool QSctpSocket_virtualbase_WaitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_WaitForConnected(msecs);
}

bool QSctpSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QSctpSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QSctpSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QSctpSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QSctpSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForDisconnected = slot;
	return true;
}

bool QSctpSocket_virtualbase_WaitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_WaitForDisconnected(msecs);
}

bool QSctpSocket_override_virtual_SkipData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SkipData = slot;
	return true;
}

long long QSctpSocket_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_SkipData(maxSize);
}

bool QSctpSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QSctpSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QSctpSocket_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QSctpSocket_virtualbase_Open(void* self, int mode) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Open(mode);
}

bool QSctpSocket_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QSctpSocket_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_Pos();
}

bool QSctpSocket_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QSctpSocket_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_Size();
}

bool QSctpSocket_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QSctpSocket_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Seek(pos);
}

bool QSctpSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QSctpSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_AtEnd();
}

bool QSctpSocket_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QSctpSocket_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Reset();
}

bool QSctpSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QSctpSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_CanReadLine();
}

bool QSctpSocket_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSctpSocket_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_Event(event);
}

bool QSctpSocket_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSctpSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSctpSocket_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSctpSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_TimerEvent(event);
}

bool QSctpSocket_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSctpSocket_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_ChildEvent(event);
}

bool QSctpSocket_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSctpSocket_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_CustomEvent(event);
}

bool QSctpSocket_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSctpSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSctpSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSctpSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSctpSocket_Delete(QSctpSocket* self) {
	delete self;
}

