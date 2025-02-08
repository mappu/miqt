#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QLocalSocket>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qlocalsocket.h>
#include "gen_qlocalsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLocalSocket_connected(intptr_t);
void miqt_exec_callback_QLocalSocket_disconnected(intptr_t);
void miqt_exec_callback_QLocalSocket_errorOccurred(intptr_t, int);
void miqt_exec_callback_QLocalSocket_stateChanged(intptr_t, int);
bool miqt_exec_callback_QLocalSocket_isSequential(const QLocalSocket*, intptr_t);
long long miqt_exec_callback_QLocalSocket_bytesAvailable(const QLocalSocket*, intptr_t);
long long miqt_exec_callback_QLocalSocket_bytesToWrite(const QLocalSocket*, intptr_t);
bool miqt_exec_callback_QLocalSocket_canReadLine(const QLocalSocket*, intptr_t);
bool miqt_exec_callback_QLocalSocket_open(QLocalSocket*, intptr_t, int);
void miqt_exec_callback_QLocalSocket_close(QLocalSocket*, intptr_t);
bool miqt_exec_callback_QLocalSocket_waitForBytesWritten(QLocalSocket*, intptr_t, int);
bool miqt_exec_callback_QLocalSocket_waitForReadyRead(QLocalSocket*, intptr_t, int);
long long miqt_exec_callback_QLocalSocket_readData(QLocalSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QLocalSocket_readLineData(QLocalSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QLocalSocket_skipData(QLocalSocket*, intptr_t, long long);
long long miqt_exec_callback_QLocalSocket_writeData(QLocalSocket*, intptr_t, const char*, long long);
long long miqt_exec_callback_QLocalSocket_pos(const QLocalSocket*, intptr_t);
long long miqt_exec_callback_QLocalSocket_size(const QLocalSocket*, intptr_t);
bool miqt_exec_callback_QLocalSocket_seek(QLocalSocket*, intptr_t, long long);
bool miqt_exec_callback_QLocalSocket_atEnd(const QLocalSocket*, intptr_t);
bool miqt_exec_callback_QLocalSocket_reset(QLocalSocket*, intptr_t);
bool miqt_exec_callback_QLocalSocket_event(QLocalSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QLocalSocket_eventFilter(QLocalSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLocalSocket_timerEvent(QLocalSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLocalSocket_childEvent(QLocalSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLocalSocket_customEvent(QLocalSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QLocalSocket_connectNotify(QLocalSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLocalSocket_disconnectNotify(QLocalSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLocalSocket final : public QLocalSocket {
public:

	MiqtVirtualQLocalSocket(): QLocalSocket() {};
	MiqtVirtualQLocalSocket(QObject* parent): QLocalSocket(parent) {};

	virtual ~MiqtVirtualQLocalSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QLocalSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QLocalSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QLocalSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QLocalSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QLocalSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QLocalSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QLocalSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QLocalSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode openMode) override {
		if (handle__open == 0) {
			return QLocalSocket::open(openMode);
		}
		
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval1 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QLocalSocket_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int openMode) {

		return QLocalSocket::open(static_cast<QIODeviceBase::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QLocalSocket::close();
			return;
		}
		

		miqt_exec_callback_QLocalSocket_close(this, handle__close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_close() {

		QLocalSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QLocalSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QLocalSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QLocalSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QLocalSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* param1, qint64 param2) override {
		if (handle__readData == 0) {
			return QLocalSocket::readData(param1, param2);
		}
		
		char* sigval1 = param1;
		qint64 param2_ret = param2;
		long long sigval2 = static_cast<long long>(param2_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readData(char* param1, long long param2) {

		qint64 _ret = QLocalSocket::readData(param1, static_cast<qint64>(param2));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxSize) override {
		if (handle__readLineData == 0) {
			return QLocalSocket::readLineData(data, maxSize);
		}
		
		char* sigval1 = data;
		qint64 maxSize_ret = maxSize;
		long long sigval2 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxSize) {

		qint64 _ret = QLocalSocket::readLineData(data, static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__skipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__skipData == 0) {
			return QLocalSocket::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_skipData(this, handle__skipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_skipData(long long maxSize) {

		qint64 _ret = QLocalSocket::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* param1, qint64 param2) override {
		if (handle__writeData == 0) {
			return QLocalSocket::writeData(param1, param2);
		}
		
		const char* sigval1 = (const char*) param1;
		qint64 param2_ret = param2;
		long long sigval2 = static_cast<long long>(param2_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_writeData(const char* param1, long long param2) {

		qint64 _ret = QLocalSocket::writeData(param1, static_cast<qint64>(param2));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QLocalSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QLocalSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QLocalSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QLocalSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__seek == 0) {
			return QLocalSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QLocalSocket_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long pos) {

		return QLocalSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QLocalSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QLocalSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QLocalSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QLocalSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QLocalSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QLocalSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLocalSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QLocalSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QLocalSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLocalSocket_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QLocalSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QLocalSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLocalSocket_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QLocalSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLocalSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLocalSocket_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QLocalSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLocalSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLocalSocket_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QLocalSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLocalSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLocalSocket_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QLocalSocket::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QLocalSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QLocalSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QLocalSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLocalSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLocalSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLocalSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLocalSocket* QLocalSocket_new() {
	return new MiqtVirtualQLocalSocket();
}

QLocalSocket* QLocalSocket_new2(QObject* parent) {
	return new MiqtVirtualQLocalSocket(parent);
}

void QLocalSocket_virtbase(QLocalSocket* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QLocalSocket_metaObject(const QLocalSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLocalSocket_metacast(QLocalSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLocalSocket_tr(const char* s) {
	QString _ret = QLocalSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalSocket_connectToServer(QLocalSocket* self) {
	self->connectToServer();
}

void QLocalSocket_connectToServerWithName(QLocalSocket* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->connectToServer(name_QString);
}

void QLocalSocket_disconnectFromServer(QLocalSocket* self) {
	self->disconnectFromServer();
}

void QLocalSocket_setServerName(QLocalSocket* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setServerName(name_QString);
}

struct miqt_string QLocalSocket_serverName(const QLocalSocket* self) {
	QString _ret = self->serverName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalSocket_fullServerName(const QLocalSocket* self) {
	QString _ret = self->fullServerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalSocket_abort(QLocalSocket* self) {
	self->abort();
}

bool QLocalSocket_isSequential(const QLocalSocket* self) {
	return self->isSequential();
}

long long QLocalSocket_bytesAvailable(const QLocalSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QLocalSocket_bytesToWrite(const QLocalSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QLocalSocket_canReadLine(const QLocalSocket* self) {
	return self->canReadLine();
}

bool QLocalSocket_open(QLocalSocket* self, int openMode) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QLocalSocket_close(QLocalSocket* self) {
	self->close();
}

int QLocalSocket_error(const QLocalSocket* self) {
	QLocalSocket::LocalSocketError _ret = self->error();
	return static_cast<int>(_ret);
}

bool QLocalSocket_flush(QLocalSocket* self) {
	return self->flush();
}

bool QLocalSocket_isValid(const QLocalSocket* self) {
	return self->isValid();
}

long long QLocalSocket_readBufferSize(const QLocalSocket* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QLocalSocket_setReadBufferSize(QLocalSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

bool QLocalSocket_setSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

intptr_t QLocalSocket_socketDescriptor(const QLocalSocket* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

void QLocalSocket_setSocketOptions(QLocalSocket* self, int option) {
	self->setSocketOptions(static_cast<QLocalSocket::SocketOptions>(option));
}

int QLocalSocket_socketOptions(const QLocalSocket* self) {
	QLocalSocket::SocketOptions _ret = self->socketOptions();
	return static_cast<int>(_ret);
}

int QLocalSocket_state(const QLocalSocket* self) {
	QLocalSocket::LocalSocketState _ret = self->state();
	return static_cast<int>(_ret);
}

bool QLocalSocket_waitForBytesWritten(QLocalSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QLocalSocket_waitForConnected(QLocalSocket* self) {
	return self->waitForConnected();
}

bool QLocalSocket_waitForDisconnected(QLocalSocket* self) {
	return self->waitForDisconnected();
}

bool QLocalSocket_waitForReadyRead(QLocalSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

void QLocalSocket_connected(QLocalSocket* self) {
	self->connected();
}

void QLocalSocket_connect_connected(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)()>(&QLocalSocket::connected), self, [=]() {
		miqt_exec_callback_QLocalSocket_connected(slot);
	});
}

void QLocalSocket_disconnected(QLocalSocket* self) {
	self->disconnected();
}

void QLocalSocket_connect_disconnected(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)()>(&QLocalSocket::disconnected), self, [=]() {
		miqt_exec_callback_QLocalSocket_disconnected(slot);
	});
}

void QLocalSocket_errorOccurred(QLocalSocket* self, int socketError) {
	self->errorOccurred(static_cast<QLocalSocket::LocalSocketError>(socketError));
}

void QLocalSocket_connect_errorOccurred(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketError)>(&QLocalSocket::errorOccurred), self, [=](QLocalSocket::LocalSocketError socketError) {
		QLocalSocket::LocalSocketError socketError_ret = socketError;
		int sigval1 = static_cast<int>(socketError_ret);
		miqt_exec_callback_QLocalSocket_errorOccurred(slot, sigval1);
	});
}

void QLocalSocket_stateChanged(QLocalSocket* self, int socketState) {
	self->stateChanged(static_cast<QLocalSocket::LocalSocketState>(socketState));
}

void QLocalSocket_connect_stateChanged(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketState)>(&QLocalSocket::stateChanged), self, [=](QLocalSocket::LocalSocketState socketState) {
		QLocalSocket::LocalSocketState socketState_ret = socketState;
		int sigval1 = static_cast<int>(socketState_ret);
		miqt_exec_callback_QLocalSocket_stateChanged(slot, sigval1);
	});
}

struct miqt_string QLocalSocket_tr2(const char* s, const char* c) {
	QString _ret = QLocalSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalSocket_tr3(const char* s, const char* c, int n) {
	QString _ret = QLocalSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalSocket_connectToServer1(QLocalSocket* self, int openMode) {
	self->connectToServer(static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QLocalSocket_connectToServer2(QLocalSocket* self, struct miqt_string name, int openMode) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->connectToServer(name_QString, static_cast<QIODeviceBase::OpenMode>(openMode));
}

bool QLocalSocket_setSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState));
}

bool QLocalSocket_setSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState), static_cast<QIODeviceBase::OpenMode>(openMode));
}

bool QLocalSocket_waitForConnected1(QLocalSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QLocalSocket_waitForDisconnected1(QLocalSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

bool QLocalSocket_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QLocalSocket_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_isSequential();
}

bool QLocalSocket_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QLocalSocket_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_bytesAvailable();
}

bool QLocalSocket_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QLocalSocket_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_bytesToWrite();
}

bool QLocalSocket_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QLocalSocket_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_canReadLine();
}

bool QLocalSocket_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QLocalSocket_virtualbase_open(void* self, int openMode) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_open(openMode);
}

bool QLocalSocket_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QLocalSocket_virtualbase_close(void* self) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_close();
}

bool QLocalSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QLocalSocket_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QLocalSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QLocalSocket_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QLocalSocket_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

long long QLocalSocket_virtualbase_readData(void* self, char* param1, long long param2) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_readData(param1, param2);
}

bool QLocalSocket_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QLocalSocket_virtualbase_readLineData(void* self, char* data, long long maxSize) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_readLineData(data, maxSize);
}

bool QLocalSocket_override_virtual_skipData(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__skipData = slot;
	return true;
}

long long QLocalSocket_virtualbase_skipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_skipData(maxSize);
}

bool QLocalSocket_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

long long QLocalSocket_virtualbase_writeData(void* self, const char* param1, long long param2) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_writeData(param1, param2);
}

bool QLocalSocket_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QLocalSocket_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_pos();
}

bool QLocalSocket_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QLocalSocket_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_size();
}

bool QLocalSocket_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QLocalSocket_virtualbase_seek(void* self, long long pos) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_seek(pos);
}

bool QLocalSocket_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QLocalSocket_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_atEnd();
}

bool QLocalSocket_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QLocalSocket_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_reset();
}

bool QLocalSocket_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QLocalSocket_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_event(event);
}

bool QLocalSocket_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLocalSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QLocalSocket_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QLocalSocket_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_timerEvent(event);
}

bool QLocalSocket_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QLocalSocket_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_childEvent(event);
}

bool QLocalSocket_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QLocalSocket_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_customEvent(event);
}

bool QLocalSocket_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QLocalSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_connectNotify(signal);
}

bool QLocalSocket_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLocalSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_disconnectNotify(signal);
}

void QLocalSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQLocalSocket::OpenMode>(openMode));

}

void QLocalSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QLocalSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QLocalSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QLocalSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QLocalSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QLocalSocket_delete(QLocalSocket* self) {
	delete self;
}

