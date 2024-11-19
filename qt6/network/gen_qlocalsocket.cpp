#include <QIODevice>
#include <QIODeviceBase>
#include <QLocalSocket>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlocalsocket.h>
#include "gen_qlocalsocket.h"
#include "_cgo_export.h"

class MiqtVirtualQLocalSocket : public virtual QLocalSocket {
public:

	MiqtVirtualQLocalSocket(): QLocalSocket() {};
	MiqtVirtualQLocalSocket(QObject* parent): QLocalSocket(parent) {};

	virtual ~MiqtVirtualQLocalSocket() = default;

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
	virtual bool open(QIODeviceBase::OpenMode openMode) override {
		if (handle__Open == 0) {
			return QLocalSocket::open(openMode);
		}
		
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval1 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QLocalSocket_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int openMode) {

		return QLocalSocket::open(static_cast<QIODeviceBase::OpenMode>(openMode));

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
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxSize) override {
		if (handle__ReadLineData == 0) {
			return QLocalSocket::readLineData(data, maxSize);
		}
		
		char* sigval1 = data;
		qint64 maxSize_ret = maxSize;
		long long sigval2 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxSize) {

		qint64 _ret = QLocalSocket::readLineData(data, static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QLocalSocket::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QLocalSocket_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QLocalSocket::skipData(static_cast<qint64>(maxSize));
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

};

void QLocalSocket_new(QLocalSocket** outptr_QLocalSocket, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	MiqtVirtualQLocalSocket* ret = new MiqtVirtualQLocalSocket();
	*outptr_QLocalSocket = ret;
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
}

void QLocalSocket_new2(QObject* parent, QLocalSocket** outptr_QLocalSocket, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	MiqtVirtualQLocalSocket* ret = new MiqtVirtualQLocalSocket(parent);
	*outptr_QLocalSocket = ret;
	*outptr_QIODevice = static_cast<QIODevice*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(ret);
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
	return self->open(static_cast<QIODeviceBase::OpenMode>(openMode));
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

void QLocalSocket_SetSocketOptions(QLocalSocket* self, int option) {
	self->setSocketOptions(static_cast<QLocalSocket::SocketOptions>(option));
}

int QLocalSocket_SocketOptions(const QLocalSocket* self) {
	QLocalSocket::SocketOptions _ret = self->socketOptions();
	return static_cast<int>(_ret);
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

void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode) {
	self->connectToServer(static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QLocalSocket_ConnectToServer2(QLocalSocket* self, struct miqt_string name, int openMode) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->connectToServer(name_QString, static_cast<QIODeviceBase::OpenMode>(openMode));
}

bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState));
}

bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState), static_cast<QIODeviceBase::OpenMode>(openMode));
}

bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

void QLocalSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__IsSequential = slot;
}

bool QLocalSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_IsSequential();
}

void QLocalSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__BytesAvailable = slot;
}

long long QLocalSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_BytesAvailable();
}

void QLocalSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__BytesToWrite = slot;
}

long long QLocalSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_BytesToWrite();
}

void QLocalSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__CanReadLine = slot;
}

bool QLocalSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_CanReadLine();
}

void QLocalSocket_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__Open = slot;
}

bool QLocalSocket_virtualbase_Open(void* self, int openMode) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Open(openMode);
}

void QLocalSocket_override_virtual_Close(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__Close = slot;
}

void QLocalSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Close();
}

void QLocalSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__WaitForBytesWritten = slot;
}

bool QLocalSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

void QLocalSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__WaitForReadyRead = slot;
}

bool QLocalSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

void QLocalSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__ReadData = slot;
}

long long QLocalSocket_virtualbase_ReadData(void* self, char* param1, long long param2) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_ReadData(param1, param2);
}

void QLocalSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__ReadLineData = slot;
}

long long QLocalSocket_virtualbase_ReadLineData(void* self, char* data, long long maxSize) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_ReadLineData(data, maxSize);
}

void QLocalSocket_override_virtual_SkipData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__SkipData = slot;
}

long long QLocalSocket_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_SkipData(maxSize);
}

void QLocalSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__WriteData = slot;
}

long long QLocalSocket_virtualbase_WriteData(void* self, const char* param1, long long param2) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_WriteData(param1, param2);
}

void QLocalSocket_override_virtual_Pos(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__Pos = slot;
}

long long QLocalSocket_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_Pos();
}

void QLocalSocket_override_virtual_Size(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__Size = slot;
}

long long QLocalSocket_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_Size();
}

void QLocalSocket_override_virtual_Seek(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__Seek = slot;
}

bool QLocalSocket_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Seek(pos);
}

void QLocalSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__AtEnd = slot;
}

bool QLocalSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQLocalSocket*)(self) )->virtualbase_AtEnd();
}

void QLocalSocket_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQLocalSocket*>( (QLocalSocket*)(self) )->handle__Reset = slot;
}

bool QLocalSocket_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQLocalSocket*)(self) )->virtualbase_Reset();
}

void QLocalSocket_Delete(QLocalSocket* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQLocalSocket*>( self );
	} else {
		delete self;
	}
}

