#include <QAbstractSocket>
#include <QAuthenticator>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractsocket.h>
#include "gen_qabstractsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractSocket_hostFound(intptr_t);
void miqt_exec_callback_QAbstractSocket_connected(intptr_t);
void miqt_exec_callback_QAbstractSocket_disconnected(intptr_t);
void miqt_exec_callback_QAbstractSocket_stateChanged(intptr_t, int);
void miqt_exec_callback_QAbstractSocket_errorOccurred(intptr_t, int);
void miqt_exec_callback_QAbstractSocket_proxyAuthenticationRequired(intptr_t, QNetworkProxy*, QAuthenticator*);
void miqt_exec_callback_QAbstractSocket_resume(QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_bind(QAbstractSocket*, intptr_t, QHostAddress*, uint16_t, int);
void miqt_exec_callback_QAbstractSocket_connectToHost(QAbstractSocket*, intptr_t, struct miqt_string, uint16_t, int, int);
void miqt_exec_callback_QAbstractSocket_disconnectFromHost(QAbstractSocket*, intptr_t);
long long miqt_exec_callback_QAbstractSocket_bytesAvailable(const QAbstractSocket*, intptr_t);
long long miqt_exec_callback_QAbstractSocket_bytesToWrite(const QAbstractSocket*, intptr_t);
void miqt_exec_callback_QAbstractSocket_setReadBufferSize(QAbstractSocket*, intptr_t, long long);
intptr_t miqt_exec_callback_QAbstractSocket_socketDescriptor(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_setSocketDescriptor(QAbstractSocket*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QAbstractSocket_setSocketOption(QAbstractSocket*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QAbstractSocket_socketOption(QAbstractSocket*, intptr_t, int);
void miqt_exec_callback_QAbstractSocket_close(QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_isSequential(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_waitForConnected(QAbstractSocket*, intptr_t, int);
bool miqt_exec_callback_QAbstractSocket_waitForReadyRead(QAbstractSocket*, intptr_t, int);
bool miqt_exec_callback_QAbstractSocket_waitForBytesWritten(QAbstractSocket*, intptr_t, int);
bool miqt_exec_callback_QAbstractSocket_waitForDisconnected(QAbstractSocket*, intptr_t, int);
long long miqt_exec_callback_QAbstractSocket_readData(QAbstractSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QAbstractSocket_readLineData(QAbstractSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QAbstractSocket_skipData(QAbstractSocket*, intptr_t, long long);
long long miqt_exec_callback_QAbstractSocket_writeData(QAbstractSocket*, intptr_t, const char*, long long);
bool miqt_exec_callback_QAbstractSocket_open(QAbstractSocket*, intptr_t, int);
long long miqt_exec_callback_QAbstractSocket_pos(const QAbstractSocket*, intptr_t);
long long miqt_exec_callback_QAbstractSocket_size(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_seek(QAbstractSocket*, intptr_t, long long);
bool miqt_exec_callback_QAbstractSocket_atEnd(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_reset(QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_canReadLine(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_event(QAbstractSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractSocket_eventFilter(QAbstractSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractSocket_timerEvent(QAbstractSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractSocket_childEvent(QAbstractSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractSocket_customEvent(QAbstractSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSocket_connectNotify(QAbstractSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractSocket_disconnectNotify(QAbstractSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractSocket final : public QAbstractSocket {
public:

	MiqtVirtualQAbstractSocket(QAbstractSocket::SocketType socketType, QObject* parent): QAbstractSocket(socketType, parent) {};

	virtual ~MiqtVirtualQAbstractSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__resume == 0) {
			QAbstractSocket::resume();
			return;
		}
		

		miqt_exec_callback_QAbstractSocket_resume(this, handle__resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resume() {

		QAbstractSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
		if (handle__bind == 0) {
			return QAbstractSocket::bind(address, port, mode);
		}
		
		const QHostAddress& address_ret = address;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&address_ret);
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QAbstractSocket::BindMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_bind(this, handle__bind, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_bind(QHostAddress* address, uint16_t port, int mode) {

		return QAbstractSocket::bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__connectToHost == 0) {
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
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QAbstractSocket::NetworkLayerProtocol protocol_ret = protocol;
		int sigval4 = static_cast<int>(protocol_ret);

		miqt_exec_callback_QAbstractSocket_connectToHost(this, handle__connectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectToHost(struct miqt_string hostName, uint16_t port, int mode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QAbstractSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__disconnectFromHost == 0) {
			QAbstractSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QAbstractSocket_disconnectFromHost(this, handle__disconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectFromHost() {

		QAbstractSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QAbstractSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QAbstractSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QAbstractSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QAbstractSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__setReadBufferSize == 0) {
			QAbstractSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QAbstractSocket_setReadBufferSize(this, handle__setReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setReadBufferSize(long long size) {

		QAbstractSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__socketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__socketDescriptor == 0) {
			return QAbstractSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QAbstractSocket_socketDescriptor(this, handle__socketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_socketDescriptor() const {

		qintptr _ret = QAbstractSocket::socketDescriptor();
		return (intptr_t)(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (handle__setSocketDescriptor == 0) {
			return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_setSocketDescriptor(this, handle__setSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QAbstractSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__setSocketOption == 0) {
			QAbstractSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QAbstractSocket_setSocketOption(this, handle__setSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSocketOption(int option, QVariant* value) {

		QAbstractSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__socketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__socketOption == 0) {
			return QAbstractSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractSocket_socketOption(this, handle__socketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_socketOption(int option) {

		return new QVariant(QAbstractSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QAbstractSocket::close();
			return;
		}
		

		miqt_exec_callback_QAbstractSocket_close(this, handle__close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_close() {

		QAbstractSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QAbstractSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QAbstractSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__waitForConnected == 0) {
			return QAbstractSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForConnected(this, handle__waitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForConnected(int msecs) {

		return QAbstractSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QAbstractSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QAbstractSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QAbstractSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QAbstractSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__waitForDisconnected == 0) {
			return QAbstractSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForDisconnected(this, handle__waitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForDisconnected(int msecs) {

		return QAbstractSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return QAbstractSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readData(char* data, long long maxlen) {

		qint64 _ret = QAbstractSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QAbstractSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxlen) {

		qint64 _ret = QAbstractSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__skipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__skipData == 0) {
			return QAbstractSocket::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_skipData(this, handle__skipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_skipData(long long maxSize) {

		qint64 _ret = QAbstractSocket::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return QAbstractSocket::writeData(data, len);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_writeData(const char* data, long long len) {

		qint64 _ret = QAbstractSocket::writeData(data, static_cast<qint64>(len));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (handle__open == 0) {
			return QAbstractSocket::open(mode);
		}
		
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int mode) {

		return QAbstractSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QAbstractSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QAbstractSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QAbstractSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QAbstractSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__seek == 0) {
			return QAbstractSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long pos) {

		return QAbstractSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QAbstractSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QAbstractSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QAbstractSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QAbstractSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QAbstractSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QAbstractSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSocket_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSocket_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSocket_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSocket_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSocket_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractSocket::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QAbstractSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
	friend void QAbstractSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
	friend void QAbstractSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QAbstractSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
	friend void QAbstractSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QAbstractSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QAbstractSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QAbstractSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QAbstractSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent) {
	return new MiqtVirtualQAbstractSocket(static_cast<QAbstractSocket::SocketType>(socketType), parent);
}

void QAbstractSocket_virtbase(QAbstractSocket* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QAbstractSocket_metaObject(const QAbstractSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSocket_metacast(QAbstractSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSocket_tr(const char* s) {
	QString _ret = QAbstractSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_resume(QAbstractSocket* self) {
	self->resume();
}

int QAbstractSocket_pauseMode(const QAbstractSocket* self) {
	QAbstractSocket::PauseModes _ret = self->pauseMode();
	return static_cast<int>(_ret);
}

void QAbstractSocket_setPauseMode(QAbstractSocket* self, int pauseMode) {
	self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

bool QAbstractSocket_bind(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
	return self->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

bool QAbstractSocket_bind2(QAbstractSocket* self) {
	return self->bind();
}

void QAbstractSocket_connectToHost(QAbstractSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QAbstractSocket_connectToHost2(QAbstractSocket* self, QHostAddress* address, uint16_t port) {
	self->connectToHost(*address, static_cast<quint16>(port));
}

void QAbstractSocket_disconnectFromHost(QAbstractSocket* self) {
	self->disconnectFromHost();
}

bool QAbstractSocket_isValid(const QAbstractSocket* self) {
	return self->isValid();
}

long long QAbstractSocket_bytesAvailable(const QAbstractSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QAbstractSocket_bytesToWrite(const QAbstractSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

uint16_t QAbstractSocket_localPort(const QAbstractSocket* self) {
	quint16 _ret = self->localPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QAbstractSocket_localAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->localAddress());
}

uint16_t QAbstractSocket_peerPort(const QAbstractSocket* self) {
	quint16 _ret = self->peerPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QAbstractSocket_peerAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->peerAddress());
}

struct miqt_string QAbstractSocket_peerName(const QAbstractSocket* self) {
	QString _ret = self->peerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QAbstractSocket_readBufferSize(const QAbstractSocket* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QAbstractSocket_setReadBufferSize(QAbstractSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

void QAbstractSocket_abort(QAbstractSocket* self) {
	self->abort();
}

intptr_t QAbstractSocket_socketDescriptor(const QAbstractSocket* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

bool QAbstractSocket_setSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QAbstractSocket_setSocketOption(QAbstractSocket* self, int option, QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QAbstractSocket_socketOption(QAbstractSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QAbstractSocket_socketType(const QAbstractSocket* self) {
	QAbstractSocket::SocketType _ret = self->socketType();
	return static_cast<int>(_ret);
}

int QAbstractSocket_state(const QAbstractSocket* self) {
	QAbstractSocket::SocketState _ret = self->state();
	return static_cast<int>(_ret);
}

int QAbstractSocket_error(const QAbstractSocket* self) {
	QAbstractSocket::SocketError _ret = self->error();
	return static_cast<int>(_ret);
}

void QAbstractSocket_close(QAbstractSocket* self) {
	self->close();
}

bool QAbstractSocket_isSequential(const QAbstractSocket* self) {
	return self->isSequential();
}

bool QAbstractSocket_flush(QAbstractSocket* self) {
	return self->flush();
}

bool QAbstractSocket_waitForConnected(QAbstractSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QAbstractSocket_waitForReadyRead(QAbstractSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QAbstractSocket_waitForBytesWritten(QAbstractSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QAbstractSocket_waitForDisconnected(QAbstractSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

void QAbstractSocket_setProxy(QAbstractSocket* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_proxy(const QAbstractSocket* self) {
	return new QNetworkProxy(self->proxy());
}

struct miqt_string QAbstractSocket_protocolTag(const QAbstractSocket* self) {
	QString _ret = self->protocolTag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_setProtocolTag(QAbstractSocket* self, struct miqt_string tag) {
	QString tag_QString = QString::fromUtf8(tag.data, tag.len);
	self->setProtocolTag(tag_QString);
}

void QAbstractSocket_hostFound(QAbstractSocket* self) {
	self->hostFound();
}

void QAbstractSocket_connect_hostFound(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::hostFound), self, [=]() {
		miqt_exec_callback_QAbstractSocket_hostFound(slot);
	});
}

void QAbstractSocket_connected(QAbstractSocket* self) {
	self->connected();
}

void QAbstractSocket_connect_connected(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::connected), self, [=]() {
		miqt_exec_callback_QAbstractSocket_connected(slot);
	});
}

void QAbstractSocket_disconnected(QAbstractSocket* self) {
	self->disconnected();
}

void QAbstractSocket_connect_disconnected(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::disconnected), self, [=]() {
		miqt_exec_callback_QAbstractSocket_disconnected(slot);
	});
}

void QAbstractSocket_stateChanged(QAbstractSocket* self, int param1) {
	self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void QAbstractSocket_connect_stateChanged(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketState)>(&QAbstractSocket::stateChanged), self, [=](QAbstractSocket::SocketState param1) {
		QAbstractSocket::SocketState param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_stateChanged(slot, sigval1);
	});
}

void QAbstractSocket_errorOccurred(QAbstractSocket* self, int param1) {
	self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_connect_errorOccurred(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::errorOccurred), self, [=](QAbstractSocket::SocketError param1) {
		QAbstractSocket::SocketError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_errorOccurred(slot, sigval1);
	});
}

void QAbstractSocket_proxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QAbstractSocket_connect_proxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(const QNetworkProxy&, QAuthenticator*)>(&QAbstractSocket::proxyAuthenticationRequired), self, [=](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
		const QNetworkProxy& proxy_ret = proxy;
		// Cast returned reference into pointer
		QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QAbstractSocket_proxyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

struct miqt_string QAbstractSocket_tr2(const char* s, const char* c) {
	QString _ret = QAbstractSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSocket_bind1(QAbstractSocket* self, uint16_t port) {
	return self->bind(static_cast<quint16>(port));
}

bool QAbstractSocket_bind22(QAbstractSocket* self, uint16_t port, int mode) {
	return self->bind(static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

void QAbstractSocket_connectToHost3(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
	self->connectToHost(*address, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QAbstractSocket_override_virtual_resume(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resume = slot;
	return true;
}

void QAbstractSocket_virtualbase_resume(void* self) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_resume();
}

bool QAbstractSocket_override_virtual_bind(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bind = slot;
	return true;
}

bool QAbstractSocket_virtualbase_bind(void* self, QHostAddress* address, uint16_t port, int mode) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_bind(address, port, mode);
}

bool QAbstractSocket_override_virtual_connectToHost(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectToHost = slot;
	return true;
}

void QAbstractSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_connectToHost(hostName, port, mode, protocol);
}

bool QAbstractSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectFromHost = slot;
	return true;
}

void QAbstractSocket_virtualbase_disconnectFromHost(void* self) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_disconnectFromHost();
}

bool QAbstractSocket_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QAbstractSocket_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_bytesAvailable();
}

bool QAbstractSocket_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QAbstractSocket_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_bytesToWrite();
}

bool QAbstractSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setReadBufferSize = slot;
	return true;
}

void QAbstractSocket_virtualbase_setReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_setReadBufferSize(size);
}

bool QAbstractSocket_override_virtual_socketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__socketDescriptor = slot;
	return true;
}

intptr_t QAbstractSocket_virtualbase_socketDescriptor(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_socketDescriptor();
}

bool QAbstractSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSocketDescriptor = slot;
	return true;
}

bool QAbstractSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_setSocketDescriptor(socketDescriptor, state, openMode);
}

bool QAbstractSocket_override_virtual_setSocketOption(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSocketOption = slot;
	return true;
}

void QAbstractSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_setSocketOption(option, value);
}

bool QAbstractSocket_override_virtual_socketOption(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__socketOption = slot;
	return true;
}

QVariant* QAbstractSocket_virtualbase_socketOption(void* self, int option) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_socketOption(option);
}

bool QAbstractSocket_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QAbstractSocket_virtualbase_close(void* self) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_close();
}

bool QAbstractSocket_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QAbstractSocket_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_isSequential();
}

bool QAbstractSocket_override_virtual_waitForConnected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForConnected = slot;
	return true;
}

bool QAbstractSocket_virtualbase_waitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_waitForConnected(msecs);
}

bool QAbstractSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QAbstractSocket_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QAbstractSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QAbstractSocket_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QAbstractSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForDisconnected = slot;
	return true;
}

bool QAbstractSocket_virtualbase_waitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_waitForDisconnected(msecs);
}

bool QAbstractSocket_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

long long QAbstractSocket_virtualbase_readData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_readData(data, maxlen);
}

bool QAbstractSocket_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QAbstractSocket_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_readLineData(data, maxlen);
}

bool QAbstractSocket_override_virtual_skipData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__skipData = slot;
	return true;
}

long long QAbstractSocket_virtualbase_skipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_skipData(maxSize);
}

bool QAbstractSocket_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

long long QAbstractSocket_virtualbase_writeData(void* self, const char* data, long long len) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_writeData(data, len);
}

bool QAbstractSocket_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QAbstractSocket_virtualbase_open(void* self, int mode) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_open(mode);
}

bool QAbstractSocket_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QAbstractSocket_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_pos();
}

bool QAbstractSocket_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QAbstractSocket_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_size();
}

bool QAbstractSocket_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QAbstractSocket_virtualbase_seek(void* self, long long pos) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_seek(pos);
}

bool QAbstractSocket_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QAbstractSocket_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_atEnd();
}

bool QAbstractSocket_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QAbstractSocket_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_reset();
}

bool QAbstractSocket_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QAbstractSocket_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQAbstractSocket*)(self) )->virtualbase_canReadLine();
}

bool QAbstractSocket_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractSocket_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_event(event);
}

bool QAbstractSocket_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractSocket_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractSocket_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractSocket_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractSocket_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractSocket_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractSocket_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractSocket_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractSocket_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSocket*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setSocketState(static_cast<MiqtVirtualQAbstractSocket::SocketState>(state));

}

void QAbstractSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setSocketError(static_cast<MiqtVirtualQAbstractSocket::SocketError>(socketError));

}

void QAbstractSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, uint16_t port) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLocalPort(static_cast<quint16>(port));

}

void QAbstractSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLocalAddress(*address);

}

void QAbstractSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, uint16_t port) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPeerPort(static_cast<quint16>(port));

}

void QAbstractSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPeerAddress(*address);

}

void QAbstractSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	self_cast->setPeerName(name_QString);

}

void QAbstractSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQAbstractSocket::OpenMode>(openMode));

}

void QAbstractSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QAbstractSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractSocket_delete(QAbstractSocket* self) {
	delete self;
}

