#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
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

void miqt_exec_callback_QLocalSocket_Connected(intptr_t);
void miqt_exec_callback_QLocalSocket_Disconnected(intptr_t);
void miqt_exec_callback_QLocalSocket_ErrorWithSocketError(intptr_t, int);
void miqt_exec_callback_QLocalSocket_ErrorOccurred(intptr_t, int);
void miqt_exec_callback_QLocalSocket_StateChanged(intptr_t, int);
bool miqt_exec_callback_QLocalSocket_IsSequential(void*, intptr_t);
long long miqt_exec_callback_QLocalSocket_BytesAvailable(void*, intptr_t);
long long miqt_exec_callback_QLocalSocket_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QLocalSocket_CanReadLine(void*, intptr_t);
bool miqt_exec_callback_QLocalSocket_Open(void*, intptr_t, int);
void miqt_exec_callback_QLocalSocket_Close(void*, intptr_t);
bool miqt_exec_callback_QLocalSocket_WaitForBytesWritten(void*, intptr_t, int);
bool miqt_exec_callback_QLocalSocket_WaitForReadyRead(void*, intptr_t, int);
long long miqt_exec_callback_QLocalSocket_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QLocalSocket_WriteData(void*, intptr_t, const char*, long long);
long long miqt_exec_callback_QLocalSocket_Pos(void*, intptr_t);
long long miqt_exec_callback_QLocalSocket_Size(void*, intptr_t);
bool miqt_exec_callback_QLocalSocket_Seek(void*, intptr_t, long long);
bool miqt_exec_callback_QLocalSocket_AtEnd(void*, intptr_t);
bool miqt_exec_callback_QLocalSocket_Reset(void*, intptr_t);
long long miqt_exec_callback_QLocalSocket_ReadLineData(void*, intptr_t, char*, long long);
bool miqt_exec_callback_QLocalSocket_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QLocalSocket_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLocalSocket_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLocalSocket_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLocalSocket_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLocalSocket_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLocalSocket_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLocalSocket final : public QLocalSocket {
public:

	MiqtVirtualQLocalSocket(): QLocalSocket() {};
	MiqtVirtualQLocalSocket(QObject* parent): QLocalSocket(parent) {};

	virtual ~MiqtVirtualQLocalSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QLocalSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_IsSequential(const_cast<MiqtVirtualQLocalSocket*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QLocalSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QLocalSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_BytesAvailable(const_cast<MiqtVirtualQLocalSocket*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QLocalSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QLocalSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_BytesToWrite(const_cast<MiqtVirtualQLocalSocket*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QLocalSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QLocalSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_CanReadLine(const_cast<MiqtVirtualQLocalSocket*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QLocalSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode openMode) override {
		if (handle__Open == 0) {
			return QLocalSocket::open(openMode);
		}
		
		QIODevice::OpenMode openMode_ret = openMode;
		int sigval1 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QLocalSocket_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int openMode) {

		return QLocalSocket::open(static_cast<QIODevice::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QLocalSocket::close();
			return;
		}
		

		miqt_exec_callback_QLocalSocket_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QLocalSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QLocalSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QLocalSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QLocalSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QLocalSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* param1, qint64 param2) override {
		if (handle__ReadData == 0) {
			return QLocalSocket::readData(param1, param2);
		}
		
		char* sigval1 = param1;
		qint64 param2_ret = param2;
		long long sigval2 = static_cast<long long>(param2_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* param1, long long param2) {

		qint64 _ret = QLocalSocket::readData(param1, static_cast<qint64>(param2));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* param1, qint64 param2) override {
		if (handle__WriteData == 0) {
			return QLocalSocket::writeData(param1, param2);
		}
		
		const char* sigval1 = (const char*) param1;
		qint64 param2_ret = param2;
		long long sigval2 = static_cast<long long>(param2_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* param1, long long param2) {

		qint64 _ret = QLocalSocket::writeData(param1, static_cast<qint64>(param2));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QLocalSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_Pos(const_cast<MiqtVirtualQLocalSocket*>(this), handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QLocalSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QLocalSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QLocalSocket_Size(const_cast<MiqtVirtualQLocalSocket*>(this), handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QLocalSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QLocalSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QLocalSocket_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QLocalSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QLocalSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_AtEnd(const_cast<MiqtVirtualQLocalSocket*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QLocalSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QLocalSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QLocalSocket_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QLocalSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QLocalSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QLocalSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QLocalSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QLocalSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QLocalSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLocalSocket_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QLocalSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QLocalSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLocalSocket_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QLocalSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QLocalSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLocalSocket_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QLocalSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QLocalSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLocalSocket_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QLocalSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QLocalSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLocalSocket_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QLocalSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QLocalSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLocalSocket_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QLocalSocket::disconnectNotify(*signal);

	}

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

QMetaObject* QLocalSocket_MetaObject(const QLocalSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLocalSocket_Metacast(QLocalSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLocalSocket_Tr(const char* s) {
	QString _ret = QLocalSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalSocket_TrUtf8(const char* s) {
	QString _ret = QLocalSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalSocket_ConnectToServer(QLocalSocket* self) {
	self->connectToServer();
}

void QLocalSocket_ConnectToServerWithName(QLocalSocket* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->connectToServer(name_QString);
}

void QLocalSocket_DisconnectFromServer(QLocalSocket* self) {
	self->disconnectFromServer();
}

void QLocalSocket_SetServerName(QLocalSocket* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setServerName(name_QString);
}

struct miqt_string QLocalSocket_ServerName(const QLocalSocket* self) {
	QString _ret = self->serverName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalSocket_FullServerName(const QLocalSocket* self) {
	QString _ret = self->fullServerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalSocket_Abort(QLocalSocket* self) {
	self->abort();
}

bool QLocalSocket_IsSequential(const QLocalSocket* self) {
	return self->isSequential();
}

long long QLocalSocket_BytesAvailable(const QLocalSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QLocalSocket_BytesToWrite(const QLocalSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QLocalSocket_CanReadLine(const QLocalSocket* self) {
	return self->canReadLine();
}

bool QLocalSocket_Open(QLocalSocket* self, int openMode) {
	return self->open(static_cast<QIODevice::OpenMode>(openMode));
}

void QLocalSocket_Close(QLocalSocket* self) {
	self->close();
}

int QLocalSocket_Error(const QLocalSocket* self) {
	QLocalSocket::LocalSocketError _ret = self->error();
	return static_cast<int>(_ret);
}

bool QLocalSocket_Flush(QLocalSocket* self) {
	return self->flush();
}

bool QLocalSocket_IsValid(const QLocalSocket* self) {
	return self->isValid();
}

long long QLocalSocket_ReadBufferSize(const QLocalSocket* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QLocalSocket_SetReadBufferSize(QLocalSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

bool QLocalSocket_SetSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

intptr_t QLocalSocket_SocketDescriptor(const QLocalSocket* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

int QLocalSocket_State(const QLocalSocket* self) {
	QLocalSocket::LocalSocketState _ret = self->state();
	return static_cast<int>(_ret);
}

bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QLocalSocket_WaitForConnected(QLocalSocket* self) {
	return self->waitForConnected();
}

bool QLocalSocket_WaitForDisconnected(QLocalSocket* self) {
	return self->waitForDisconnected();
}

bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

void QLocalSocket_Connected(QLocalSocket* self) {
	self->connected();
}

void QLocalSocket_connect_Connected(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)()>(&QLocalSocket::connected), self, [=]() {
		miqt_exec_callback_QLocalSocket_Connected(slot);
	});
}

void QLocalSocket_Disconnected(QLocalSocket* self) {
	self->disconnected();
}

void QLocalSocket_connect_Disconnected(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)()>(&QLocalSocket::disconnected), self, [=]() {
		miqt_exec_callback_QLocalSocket_Disconnected(slot);
	});
}

void QLocalSocket_ErrorWithSocketError(QLocalSocket* self, int socketError) {
	self->error(static_cast<QLocalSocket::LocalSocketError>(socketError));
}

void QLocalSocket_connect_ErrorWithSocketError(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketError)>(&QLocalSocket::error), self, [=](QLocalSocket::LocalSocketError socketError) {
		QLocalSocket::LocalSocketError socketError_ret = socketError;
		int sigval1 = static_cast<int>(socketError_ret);
		miqt_exec_callback_QLocalSocket_ErrorWithSocketError(slot, sigval1);
	});
}

void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError) {
	self->errorOccurred(static_cast<QLocalSocket::LocalSocketError>(socketError));
}

void QLocalSocket_connect_ErrorOccurred(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketError)>(&QLocalSocket::errorOccurred), self, [=](QLocalSocket::LocalSocketError socketError) {
		QLocalSocket::LocalSocketError socketError_ret = socketError;
		int sigval1 = static_cast<int>(socketError_ret);
		miqt_exec_callback_QLocalSocket_ErrorOccurred(slot, sigval1);
	});
}

void QLocalSocket_StateChanged(QLocalSocket* self, int socketState) {
	self->stateChanged(static_cast<QLocalSocket::LocalSocketState>(socketState));
}

void QLocalSocket_connect_StateChanged(QLocalSocket* self, intptr_t slot) {
	MiqtVirtualQLocalSocket::connect(self, static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketState)>(&QLocalSocket::stateChanged), self, [=](QLocalSocket::LocalSocketState socketState) {
		QLocalSocket::LocalSocketState socketState_ret = socketState;
		int sigval1 = static_cast<int>(socketState_ret);
		miqt_exec_callback_QLocalSocket_StateChanged(slot, sigval1);
	});
}

struct miqt_string QLocalSocket_Tr2(const char* s, const char* c) {
	QString _ret = QLocalSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLocalSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalSocket_TrUtf82(const char* s, const char* c) {
	QString _ret = QLocalSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalSocket_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QLocalSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode) {
	self->connectToServer(static_cast<QIODevice::OpenMode>(openMode));
}

void QLocalSocket_ConnectToServer2(QLocalSocket* self, struct miqt_string name, int openMode) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->connectToServer(name_QString, static_cast<QIODevice::OpenMode>(openMode));
}

bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState));
}

bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState), static_cast<QIODevice::OpenMode>(openMode));
}

bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

bool QLocalSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QLocalSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_IsSequential();
}

bool QLocalSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QLocalSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_BytesAvailable();
}

bool QLocalSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QLocalSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_BytesToWrite();
}

bool QLocalSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QLocalSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_CanReadLine();
}

bool QLocalSocket_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QLocalSocket_virtualbase_Open(void* self, int openMode) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Open(openMode);
}

bool QLocalSocket_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QLocalSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Close();
}

bool QLocalSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QLocalSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QLocalSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QLocalSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QLocalSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QLocalSocket_virtualbase_ReadData(void* self, char* param1, long long param2) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_ReadData(param1, param2);
}

bool QLocalSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QLocalSocket_virtualbase_WriteData(void* self, const char* param1, long long param2) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_WriteData(param1, param2);
}

bool QLocalSocket_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QLocalSocket_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_Pos();
}

bool QLocalSocket_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QLocalSocket_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_Size();
}

bool QLocalSocket_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QLocalSocket_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Seek(pos);
}

bool QLocalSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QLocalSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_AtEnd();
}

bool QLocalSocket_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QLocalSocket_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Reset();
}

bool QLocalSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QLocalSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QLocalSocket_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QLocalSocket_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Event(event);
}

bool QLocalSocket_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QLocalSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QLocalSocket_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QLocalSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_TimerEvent(event);
}

bool QLocalSocket_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QLocalSocket_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_ChildEvent(event);
}

bool QLocalSocket_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QLocalSocket_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_CustomEvent(event);
}

bool QLocalSocket_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QLocalSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QLocalSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLocalSocket* self_cast = dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QLocalSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QLocalSocket_Delete(QLocalSocket* self) {
	delete self;
}

