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

void miqt_exec_callback_QSctpSocket_close(QSctpSocket*, intptr_t);
void miqt_exec_callback_QSctpSocket_disconnectFromHost(QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_readData(QSctpSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QSctpSocket_readLineData(QSctpSocket*, intptr_t, char*, long long);
void miqt_exec_callback_QSctpSocket_resume(QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_bind(QSctpSocket*, intptr_t, QHostAddress*, uint16_t, int);
void miqt_exec_callback_QSctpSocket_connectToHost(QSctpSocket*, intptr_t, struct miqt_string, uint16_t, int, int);
long long miqt_exec_callback_QSctpSocket_bytesAvailable(const QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_bytesToWrite(const QSctpSocket*, intptr_t);
void miqt_exec_callback_QSctpSocket_setReadBufferSize(QSctpSocket*, intptr_t, long long);
intptr_t miqt_exec_callback_QSctpSocket_socketDescriptor(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_setSocketDescriptor(QSctpSocket*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QSctpSocket_setSocketOption(QSctpSocket*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QSctpSocket_socketOption(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_isSequential(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_waitForConnected(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_waitForReadyRead(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_waitForBytesWritten(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_waitForDisconnected(QSctpSocket*, intptr_t, int);
long long miqt_exec_callback_QSctpSocket_skipData(QSctpSocket*, intptr_t, long long);
long long miqt_exec_callback_QSctpSocket_writeData(QSctpSocket*, intptr_t, const char*, long long);
bool miqt_exec_callback_QSctpSocket_open(QSctpSocket*, intptr_t, int);
long long miqt_exec_callback_QSctpSocket_pos(const QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_size(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_seek(QSctpSocket*, intptr_t, long long);
bool miqt_exec_callback_QSctpSocket_atEnd(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_reset(QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_canReadLine(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_event(QSctpSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QSctpSocket_eventFilter(QSctpSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSctpSocket_timerEvent(QSctpSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSctpSocket_childEvent(QSctpSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSctpSocket_customEvent(QSctpSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QSctpSocket_connectNotify(QSctpSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSctpSocket_disconnectNotify(QSctpSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSctpSocket final : public QSctpSocket {
public:

	MiqtVirtualQSctpSocket(): QSctpSocket() {};
	MiqtVirtualQSctpSocket(QObject* parent): QSctpSocket(parent) {};

	virtual ~MiqtVirtualQSctpSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QSctpSocket::close();
			return;
		}
		

		miqt_exec_callback_QSctpSocket_close(this, handle__close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_close() {

		QSctpSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__disconnectFromHost == 0) {
			QSctpSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QSctpSocket_disconnectFromHost(this, handle__disconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectFromHost() {

		QSctpSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return QSctpSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readData(char* data, long long maxlen) {

		qint64 _ret = QSctpSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QSctpSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxlen) {

		qint64 _ret = QSctpSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__resume == 0) {
			QSctpSocket::resume();
			return;
		}
		

		miqt_exec_callback_QSctpSocket_resume(this, handle__resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resume() {

		QSctpSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
		if (handle__bind == 0) {
			return QSctpSocket::bind(address, port, mode);
		}
		
		const QHostAddress& address_ret = address;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&address_ret);
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QAbstractSocket::BindMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_bind(this, handle__bind, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_bind(QHostAddress* address, uint16_t port, int mode) {

		return QSctpSocket::bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__connectToHost == 0) {
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

		miqt_exec_callback_QSctpSocket_connectToHost(this, handle__connectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectToHost(struct miqt_string hostName, uint16_t port, int mode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QSctpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QSctpSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QSctpSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QSctpSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QSctpSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__setReadBufferSize == 0) {
			QSctpSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QSctpSocket_setReadBufferSize(this, handle__setReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setReadBufferSize(long long size) {

		QSctpSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__socketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__socketDescriptor == 0) {
			return QSctpSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QSctpSocket_socketDescriptor(this, handle__socketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_socketDescriptor() const {

		qintptr _ret = QSctpSocket::socketDescriptor();
		return (intptr_t)(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (handle__setSocketDescriptor == 0) {
			return QSctpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_setSocketDescriptor(this, handle__setSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QSctpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__setSocketOption == 0) {
			QSctpSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QSctpSocket_setSocketOption(this, handle__setSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSocketOption(int option, QVariant* value) {

		QSctpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__socketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__socketOption == 0) {
			return QSctpSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSctpSocket_socketOption(this, handle__socketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_socketOption(int option) {

		return new QVariant(QSctpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QSctpSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QSctpSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__waitForConnected == 0) {
			return QSctpSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForConnected(this, handle__waitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForConnected(int msecs) {

		return QSctpSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QSctpSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QSctpSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QSctpSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QSctpSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__waitForDisconnected == 0) {
			return QSctpSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForDisconnected(this, handle__waitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForDisconnected(int msecs) {

		return QSctpSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__skipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__skipData == 0) {
			return QSctpSocket::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_skipData(this, handle__skipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_skipData(long long maxSize) {

		qint64 _ret = QSctpSocket::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return QSctpSocket::writeData(data, len);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);

		long long callback_return_value = miqt_exec_callback_QSctpSocket_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_writeData(const char* data, long long len) {

		qint64 _ret = QSctpSocket::writeData(data, static_cast<qint64>(len));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (handle__open == 0) {
			return QSctpSocket::open(mode);
		}
		
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int mode) {

		return QSctpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QSctpSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QSctpSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QSctpSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QSctpSocket_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QSctpSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__seek == 0) {
			return QSctpSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QSctpSocket_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long pos) {

		return QSctpSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QSctpSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QSctpSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QSctpSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QSctpSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QSctpSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QSctpSocket_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QSctpSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSctpSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSctpSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSctpSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSctpSocket_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSctpSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSctpSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSctpSocket_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSctpSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSctpSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSctpSocket_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSctpSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSctpSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSctpSocket_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSctpSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSctpSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpSocket_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSctpSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSctpSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSctpSocket_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSctpSocket::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QSctpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QSctpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
	friend void QSctpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
	friend void QSctpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QSctpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
	friend void QSctpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QSctpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QSctpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QSctpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QSctpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSctpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSctpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSctpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QSctpSocket_metaObject(const QSctpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSctpSocket_metacast(QSctpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSctpSocket_tr(const char* s) {
	QString _ret = QSctpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpSocket_close(QSctpSocket* self) {
	self->close();
}

void QSctpSocket_disconnectFromHost(QSctpSocket* self) {
	self->disconnectFromHost();
}

void QSctpSocket_setMaximumChannelCount(QSctpSocket* self, int count) {
	self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpSocket_maximumChannelCount(const QSctpSocket* self) {
	return self->maximumChannelCount();
}

bool QSctpSocket_isInDatagramMode(const QSctpSocket* self) {
	return self->isInDatagramMode();
}

QNetworkDatagram* QSctpSocket_readDatagram(QSctpSocket* self) {
	return new QNetworkDatagram(self->readDatagram());
}

bool QSctpSocket_writeDatagram(QSctpSocket* self, QNetworkDatagram* datagram) {
	return self->writeDatagram(*datagram);
}

struct miqt_string QSctpSocket_tr2(const char* s, const char* c) {
	QString _ret = QSctpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSctpSocket_tr3(const char* s, const char* c, int n) {
	QString _ret = QSctpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSctpSocket_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QSctpSocket_virtualbase_close(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_close();
}

bool QSctpSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectFromHost = slot;
	return true;
}

void QSctpSocket_virtualbase_disconnectFromHost(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_disconnectFromHost();
}

bool QSctpSocket_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

long long QSctpSocket_virtualbase_readData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_readData(data, maxlen);
}

bool QSctpSocket_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QSctpSocket_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_readLineData(data, maxlen);
}

bool QSctpSocket_override_virtual_resume(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resume = slot;
	return true;
}

void QSctpSocket_virtualbase_resume(void* self) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_resume();
}

bool QSctpSocket_override_virtual_bind(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bind = slot;
	return true;
}

bool QSctpSocket_virtualbase_bind(void* self, QHostAddress* address, uint16_t port, int mode) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_bind(address, port, mode);
}

bool QSctpSocket_override_virtual_connectToHost(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectToHost = slot;
	return true;
}

void QSctpSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_connectToHost(hostName, port, mode, protocol);
}

bool QSctpSocket_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QSctpSocket_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_bytesAvailable();
}

bool QSctpSocket_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QSctpSocket_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_bytesToWrite();
}

bool QSctpSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setReadBufferSize = slot;
	return true;
}

void QSctpSocket_virtualbase_setReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_setReadBufferSize(size);
}

bool QSctpSocket_override_virtual_socketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__socketDescriptor = slot;
	return true;
}

intptr_t QSctpSocket_virtualbase_socketDescriptor(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_socketDescriptor();
}

bool QSctpSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSocketDescriptor = slot;
	return true;
}

bool QSctpSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_setSocketDescriptor(socketDescriptor, state, openMode);
}

bool QSctpSocket_override_virtual_setSocketOption(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSocketOption = slot;
	return true;
}

void QSctpSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_setSocketOption(option, value);
}

bool QSctpSocket_override_virtual_socketOption(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__socketOption = slot;
	return true;
}

QVariant* QSctpSocket_virtualbase_socketOption(void* self, int option) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_socketOption(option);
}

bool QSctpSocket_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QSctpSocket_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_isSequential();
}

bool QSctpSocket_override_virtual_waitForConnected(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForConnected = slot;
	return true;
}

bool QSctpSocket_virtualbase_waitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_waitForConnected(msecs);
}

bool QSctpSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QSctpSocket_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QSctpSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QSctpSocket_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QSctpSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForDisconnected = slot;
	return true;
}

bool QSctpSocket_virtualbase_waitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_waitForDisconnected(msecs);
}

bool QSctpSocket_override_virtual_skipData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__skipData = slot;
	return true;
}

long long QSctpSocket_virtualbase_skipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_skipData(maxSize);
}

bool QSctpSocket_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

long long QSctpSocket_virtualbase_writeData(void* self, const char* data, long long len) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_writeData(data, len);
}

bool QSctpSocket_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QSctpSocket_virtualbase_open(void* self, int mode) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_open(mode);
}

bool QSctpSocket_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QSctpSocket_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_pos();
}

bool QSctpSocket_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QSctpSocket_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_size();
}

bool QSctpSocket_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QSctpSocket_virtualbase_seek(void* self, long long pos) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_seek(pos);
}

bool QSctpSocket_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QSctpSocket_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_atEnd();
}

bool QSctpSocket_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QSctpSocket_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_reset();
}

bool QSctpSocket_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QSctpSocket_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQSctpSocket*)(self) )->virtualbase_canReadLine();
}

bool QSctpSocket_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSctpSocket_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_event(event);
}

bool QSctpSocket_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSctpSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSctpSocket_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSctpSocket_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_timerEvent(event);
}

bool QSctpSocket_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSctpSocket_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_childEvent(event);
}

bool QSctpSocket_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSctpSocket_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_customEvent(event);
}

bool QSctpSocket_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSctpSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_connectNotify(signal);
}

bool QSctpSocket_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSctpSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSctpSocket*)(self) )->virtualbase_disconnectNotify(signal);
}

void QSctpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setSocketState(static_cast<MiqtVirtualQSctpSocket::SocketState>(state));

}

void QSctpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setSocketError(static_cast<MiqtVirtualQSctpSocket::SocketError>(socketError));

}

void QSctpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, uint16_t port) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLocalPort(static_cast<quint16>(port));

}

void QSctpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLocalAddress(*address);

}

void QSctpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, uint16_t port) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPeerPort(static_cast<quint16>(port));

}

void QSctpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPeerAddress(*address);

}

void QSctpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	self_cast->setPeerName(name_QString);

}

void QSctpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQSctpSocket::OpenMode>(openMode));

}

void QSctpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QSctpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSctpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSctpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSctpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSctpSocket_delete(QSctpSocket* self) {
	delete self;
}

