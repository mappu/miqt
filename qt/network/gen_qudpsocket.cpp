#include <QAbstractSocket>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
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

void miqt_exec_callback_QUdpSocket_resume(QUdpSocket*, intptr_t);
void miqt_exec_callback_QUdpSocket_connectToHost(QUdpSocket*, intptr_t, struct miqt_string, uint16_t, int, int);
void miqt_exec_callback_QUdpSocket_disconnectFromHost(QUdpSocket*, intptr_t);
long long miqt_exec_callback_QUdpSocket_bytesAvailable(const QUdpSocket*, intptr_t);
long long miqt_exec_callback_QUdpSocket_bytesToWrite(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_canReadLine(const QUdpSocket*, intptr_t);
void miqt_exec_callback_QUdpSocket_setReadBufferSize(QUdpSocket*, intptr_t, long long);
intptr_t miqt_exec_callback_QUdpSocket_socketDescriptor(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_setSocketDescriptor(QUdpSocket*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QUdpSocket_setSocketOption(QUdpSocket*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QUdpSocket_socketOption(QUdpSocket*, intptr_t, int);
void miqt_exec_callback_QUdpSocket_close(QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_isSequential(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_atEnd(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_waitForConnected(QUdpSocket*, intptr_t, int);
bool miqt_exec_callback_QUdpSocket_waitForReadyRead(QUdpSocket*, intptr_t, int);
bool miqt_exec_callback_QUdpSocket_waitForBytesWritten(QUdpSocket*, intptr_t, int);
bool miqt_exec_callback_QUdpSocket_waitForDisconnected(QUdpSocket*, intptr_t, int);
long long miqt_exec_callback_QUdpSocket_readData(QUdpSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QUdpSocket_readLineData(QUdpSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QUdpSocket_writeData(QUdpSocket*, intptr_t, const char*, long long);
bool miqt_exec_callback_QUdpSocket_open(QUdpSocket*, intptr_t, int);
long long miqt_exec_callback_QUdpSocket_pos(const QUdpSocket*, intptr_t);
long long miqt_exec_callback_QUdpSocket_size(const QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_seek(QUdpSocket*, intptr_t, long long);
bool miqt_exec_callback_QUdpSocket_reset(QUdpSocket*, intptr_t);
bool miqt_exec_callback_QUdpSocket_event(QUdpSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QUdpSocket_eventFilter(QUdpSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QUdpSocket_timerEvent(QUdpSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUdpSocket_childEvent(QUdpSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUdpSocket_customEvent(QUdpSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QUdpSocket_connectNotify(QUdpSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUdpSocket_disconnectNotify(QUdpSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQUdpSocket final : public QUdpSocket {
public:

	MiqtVirtualQUdpSocket(): QUdpSocket() {};
	MiqtVirtualQUdpSocket(QObject* parent): QUdpSocket(parent) {};

	virtual ~MiqtVirtualQUdpSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__resume == 0) {
			QUdpSocket::resume();
			return;
		}
		

		miqt_exec_callback_QUdpSocket_resume(this, handle__resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resume() {

		QUdpSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODevice::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__connectToHost == 0) {
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
		QIODevice::OpenMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QAbstractSocket::NetworkLayerProtocol protocol_ret = protocol;
		int sigval4 = static_cast<int>(protocol_ret);

		miqt_exec_callback_QUdpSocket_connectToHost(this, handle__connectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectToHost(struct miqt_string hostName, uint16_t port, int mode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QUdpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__disconnectFromHost == 0) {
			QUdpSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QUdpSocket_disconnectFromHost(this, handle__disconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectFromHost() {

		QUdpSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QUdpSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QUdpSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QUdpSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QUdpSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QUdpSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QUdpSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__setReadBufferSize == 0) {
			QUdpSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QUdpSocket_setReadBufferSize(this, handle__setReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setReadBufferSize(long long size) {

		QUdpSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__socketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__socketDescriptor == 0) {
			return QUdpSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QUdpSocket_socketDescriptor(this, handle__socketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_socketDescriptor() const {

		qintptr _ret = QUdpSocket::socketDescriptor();
		return (intptr_t)(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODevice::OpenMode openMode) override {
		if (handle__setSocketDescriptor == 0) {
			return QUdpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODevice::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QUdpSocket_setSocketDescriptor(this, handle__setSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QUdpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__setSocketOption == 0) {
			QUdpSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QUdpSocket_setSocketOption(this, handle__setSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSocketOption(int option, QVariant* value) {

		QUdpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__socketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__socketOption == 0) {
			return QUdpSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QUdpSocket_socketOption(this, handle__socketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_socketOption(int option) {

		return new QVariant(QUdpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QUdpSocket::close();
			return;
		}
		

		miqt_exec_callback_QUdpSocket_close(this, handle__close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_close() {

		QUdpSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QUdpSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QUdpSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QUdpSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QUdpSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__waitForConnected == 0) {
			return QUdpSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_waitForConnected(this, handle__waitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForConnected(int msecs) {

		return QUdpSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QUdpSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QUdpSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QUdpSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QUdpSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__waitForDisconnected == 0) {
			return QUdpSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_waitForDisconnected(this, handle__waitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForDisconnected(int msecs) {

		return QUdpSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return QUdpSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QUdpSocket_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readData(char* data, long long maxlen) {

		qint64 _ret = QUdpSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QUdpSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QUdpSocket_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxlen) {

		qint64 _ret = QUdpSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return QUdpSocket::writeData(data, len);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);

		long long callback_return_value = miqt_exec_callback_QUdpSocket_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_writeData(const char* data, long long len) {

		qint64 _ret = QUdpSocket::writeData(data, static_cast<qint64>(len));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (handle__open == 0) {
			return QUdpSocket::open(mode);
		}
		
		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QUdpSocket_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int mode) {

		return QUdpSocket::open(static_cast<QIODevice::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QUdpSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QUdpSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QUdpSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QUdpSocket_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QUdpSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__seek == 0) {
			return QUdpSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QUdpSocket_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long pos) {

		return QUdpSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QUdpSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QUdpSocket_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QUdpSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QUdpSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QUdpSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QUdpSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QUdpSocket_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QUdpSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QUdpSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QUdpSocket_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QUdpSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QUdpSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QUdpSocket_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QUdpSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QUdpSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QUdpSocket_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QUdpSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QUdpSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUdpSocket_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QUdpSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QUdpSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QUdpSocket_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QUdpSocket::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QUdpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QUdpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
	friend void QUdpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
	friend void QUdpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QUdpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, uint16_t port);
	friend void QUdpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QUdpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QUdpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QUdpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QUdpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUdpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUdpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUdpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QUdpSocket_metaObject(const QUdpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUdpSocket_metacast(QUdpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUdpSocket_tr(const char* s) {
	QString _ret = QUdpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUdpSocket_trUtf8(const char* s) {
	QString _ret = QUdpSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUdpSocket_joinMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress) {
	return self->joinMulticastGroup(*groupAddress);
}

bool QUdpSocket_joinMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface) {
	return self->joinMulticastGroup(*groupAddress, *iface);
}

bool QUdpSocket_leaveMulticastGroup(QUdpSocket* self, QHostAddress* groupAddress) {
	return self->leaveMulticastGroup(*groupAddress);
}

bool QUdpSocket_leaveMulticastGroup2(QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface) {
	return self->leaveMulticastGroup(*groupAddress, *iface);
}

QNetworkInterface* QUdpSocket_multicastInterface(const QUdpSocket* self) {
	return new QNetworkInterface(self->multicastInterface());
}

void QUdpSocket_setMulticastInterface(QUdpSocket* self, QNetworkInterface* iface) {
	self->setMulticastInterface(*iface);
}

bool QUdpSocket_hasPendingDatagrams(const QUdpSocket* self) {
	return self->hasPendingDatagrams();
}

long long QUdpSocket_pendingDatagramSize(const QUdpSocket* self) {
	qint64 _ret = self->pendingDatagramSize();
	return static_cast<long long>(_ret);
}

QNetworkDatagram* QUdpSocket_receiveDatagram(QUdpSocket* self) {
	return new QNetworkDatagram(self->receiveDatagram());
}

long long QUdpSocket_readDatagram(QUdpSocket* self, char* data, long long maxlen) {
	qint64 _ret = self->readDatagram(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

long long QUdpSocket_writeDatagram(QUdpSocket* self, QNetworkDatagram* datagram) {
	qint64 _ret = self->writeDatagram(*datagram);
	return static_cast<long long>(_ret);
}

long long QUdpSocket_writeDatagram2(QUdpSocket* self, const char* data, long long len, QHostAddress* host, uint16_t port) {
	qint64 _ret = self->writeDatagram(data, static_cast<qint64>(len), *host, static_cast<quint16>(port));
	return static_cast<long long>(_ret);
}

long long QUdpSocket_writeDatagram3(QUdpSocket* self, struct miqt_string datagram, QHostAddress* host, uint16_t port) {
	QByteArray datagram_QByteArray(datagram.data, datagram.len);
	qint64 _ret = self->writeDatagram(datagram_QByteArray, *host, static_cast<quint16>(port));
	return static_cast<long long>(_ret);
}

struct miqt_string QUdpSocket_tr2(const char* s, const char* c) {
	QString _ret = QUdpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUdpSocket_tr3(const char* s, const char* c, int n) {
	QString _ret = QUdpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUdpSocket_trUtf82(const char* s, const char* c) {
	QString _ret = QUdpSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUdpSocket_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QUdpSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QNetworkDatagram* QUdpSocket_receiveDatagram1(QUdpSocket* self, long long maxSize) {
	return new QNetworkDatagram(self->receiveDatagram(static_cast<qint64>(maxSize)));
}

long long QUdpSocket_readDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host) {
	qint64 _ret = self->readDatagram(data, static_cast<qint64>(maxlen), host);
	return static_cast<long long>(_ret);
}

long long QUdpSocket_readDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port) {
	qint64 _ret = self->readDatagram(data, static_cast<qint64>(maxlen), host, static_cast<quint16*>(port));
	return static_cast<long long>(_ret);
}

bool QUdpSocket_override_virtual_resume(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resume = slot;
	return true;
}

void QUdpSocket_virtualbase_resume(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_resume();
}

bool QUdpSocket_override_virtual_connectToHost(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectToHost = slot;
	return true;
}

void QUdpSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_connectToHost(hostName, port, mode, protocol);
}

bool QUdpSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectFromHost = slot;
	return true;
}

void QUdpSocket_virtualbase_disconnectFromHost(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_disconnectFromHost();
}

bool QUdpSocket_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QUdpSocket_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_bytesAvailable();
}

bool QUdpSocket_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QUdpSocket_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_bytesToWrite();
}

bool QUdpSocket_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QUdpSocket_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_canReadLine();
}

bool QUdpSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setReadBufferSize = slot;
	return true;
}

void QUdpSocket_virtualbase_setReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_setReadBufferSize(size);
}

bool QUdpSocket_override_virtual_socketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__socketDescriptor = slot;
	return true;
}

intptr_t QUdpSocket_virtualbase_socketDescriptor(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_socketDescriptor();
}

bool QUdpSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSocketDescriptor = slot;
	return true;
}

bool QUdpSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_setSocketDescriptor(socketDescriptor, state, openMode);
}

bool QUdpSocket_override_virtual_setSocketOption(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSocketOption = slot;
	return true;
}

void QUdpSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_setSocketOption(option, value);
}

bool QUdpSocket_override_virtual_socketOption(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__socketOption = slot;
	return true;
}

QVariant* QUdpSocket_virtualbase_socketOption(void* self, int option) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_socketOption(option);
}

bool QUdpSocket_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QUdpSocket_virtualbase_close(void* self) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_close();
}

bool QUdpSocket_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QUdpSocket_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_isSequential();
}

bool QUdpSocket_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QUdpSocket_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_atEnd();
}

bool QUdpSocket_override_virtual_waitForConnected(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForConnected = slot;
	return true;
}

bool QUdpSocket_virtualbase_waitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_waitForConnected(msecs);
}

bool QUdpSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QUdpSocket_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QUdpSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QUdpSocket_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QUdpSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForDisconnected = slot;
	return true;
}

bool QUdpSocket_virtualbase_waitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_waitForDisconnected(msecs);
}

bool QUdpSocket_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

long long QUdpSocket_virtualbase_readData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_readData(data, maxlen);
}

bool QUdpSocket_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QUdpSocket_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_readLineData(data, maxlen);
}

bool QUdpSocket_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

long long QUdpSocket_virtualbase_writeData(void* self, const char* data, long long len) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_writeData(data, len);
}

bool QUdpSocket_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QUdpSocket_virtualbase_open(void* self, int mode) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_open(mode);
}

bool QUdpSocket_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QUdpSocket_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_pos();
}

bool QUdpSocket_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QUdpSocket_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQUdpSocket*)(self) )->virtualbase_size();
}

bool QUdpSocket_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QUdpSocket_virtualbase_seek(void* self, long long pos) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_seek(pos);
}

bool QUdpSocket_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QUdpSocket_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_reset();
}

bool QUdpSocket_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QUdpSocket_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_event(event);
}

bool QUdpSocket_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QUdpSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QUdpSocket_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QUdpSocket_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_timerEvent(event);
}

bool QUdpSocket_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QUdpSocket_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_childEvent(event);
}

bool QUdpSocket_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QUdpSocket_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_customEvent(event);
}

bool QUdpSocket_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QUdpSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_connectNotify(signal);
}

bool QUdpSocket_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QUdpSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQUdpSocket*)(self) )->virtualbase_disconnectNotify(signal);
}

void QUdpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setSocketState(static_cast<MiqtVirtualQUdpSocket::SocketState>(state));

}

void QUdpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setSocketError(static_cast<MiqtVirtualQUdpSocket::SocketError>(socketError));

}

void QUdpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, uint16_t port) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLocalPort(static_cast<quint16>(port));

}

void QUdpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setLocalAddress(*address);

}

void QUdpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, uint16_t port) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPeerPort(static_cast<quint16>(port));

}

void QUdpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setPeerAddress(*address);

}

void QUdpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	self_cast->setPeerName(name_QString);

}

void QUdpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQUdpSocket::OpenMode>(openMode));

}

void QUdpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QUdpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QUdpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QUdpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QUdpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQUdpSocket* self_cast = dynamic_cast<MiqtVirtualQUdpSocket*>( (QUdpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QUdpSocket_delete(QUdpSocket* self) {
	delete self;
}

