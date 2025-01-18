#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qiodevice.h>
#include "gen_qiodevice.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QIODevice_ReadyRead(intptr_t);
void miqt_exec_callback_QIODevice_ChannelReadyRead(intptr_t, int);
void miqt_exec_callback_QIODevice_BytesWritten(intptr_t, long long);
void miqt_exec_callback_QIODevice_ChannelBytesWritten(intptr_t, int, long long);
void miqt_exec_callback_QIODevice_AboutToClose(intptr_t);
void miqt_exec_callback_QIODevice_ReadChannelFinished(intptr_t);
bool miqt_exec_callback_QIODevice_IsSequential(void*, intptr_t);
bool miqt_exec_callback_QIODevice_Open(void*, intptr_t, int);
void miqt_exec_callback_QIODevice_Close(void*, intptr_t);
long long miqt_exec_callback_QIODevice_Pos(void*, intptr_t);
long long miqt_exec_callback_QIODevice_Size(void*, intptr_t);
bool miqt_exec_callback_QIODevice_Seek(void*, intptr_t, long long);
bool miqt_exec_callback_QIODevice_AtEnd(void*, intptr_t);
bool miqt_exec_callback_QIODevice_Reset(void*, intptr_t);
long long miqt_exec_callback_QIODevice_BytesAvailable(void*, intptr_t);
long long miqt_exec_callback_QIODevice_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QIODevice_CanReadLine(void*, intptr_t);
bool miqt_exec_callback_QIODevice_WaitForReadyRead(void*, intptr_t, int);
bool miqt_exec_callback_QIODevice_WaitForBytesWritten(void*, intptr_t, int);
long long miqt_exec_callback_QIODevice_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QIODevice_ReadLineData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QIODevice_SkipData(void*, intptr_t, long long);
long long miqt_exec_callback_QIODevice_WriteData(void*, intptr_t, const char*, long long);
bool miqt_exec_callback_QIODevice_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QIODevice_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIODevice_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIODevice_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIODevice_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QIODevice_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIODevice_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIODevice final : public QIODevice {
public:

	MiqtVirtualQIODevice(): QIODevice() {};
	MiqtVirtualQIODevice(QObject* parent): QIODevice(parent) {};

	virtual ~MiqtVirtualQIODevice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QIODevice::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_IsSequential(const_cast<MiqtVirtualQIODevice*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QIODevice::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (handle__Open == 0) {
			return QIODevice::open(mode);
		}
		
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QIODevice_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int mode) {

		return QIODevice::open(static_cast<QIODeviceBase::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QIODevice::close();
			return;
		}
		

		miqt_exec_callback_QIODevice_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QIODevice::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QIODevice::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_Pos(const_cast<MiqtVirtualQIODevice*>(this), handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QIODevice::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QIODevice::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_Size(const_cast<MiqtVirtualQIODevice*>(this), handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QIODevice::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QIODevice::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QIODevice_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QIODevice::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QIODevice::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_AtEnd(const_cast<MiqtVirtualQIODevice*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QIODevice::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QIODevice::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QIODevice::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QIODevice::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_BytesAvailable(const_cast<MiqtVirtualQIODevice*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QIODevice::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QIODevice::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_BytesToWrite(const_cast<MiqtVirtualQIODevice*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QIODevice::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QIODevice::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_CanReadLine(const_cast<MiqtVirtualQIODevice*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QIODevice::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QIODevice::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QIODevice_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QIODevice::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QIODevice::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QIODevice_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QIODevice::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QIODevice_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QIODevice::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QIODevice_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QIODevice::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QIODevice::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QIODevice_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QIODevice::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QIODevice_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QIODevice::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QIODevice_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QIODevice::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QIODevice::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QIODevice_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QIODevice::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QIODevice::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QIODevice_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QIODevice::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QIODevice::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QIODevice_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QIODevice::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QIODevice::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QIODevice_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QIODevice::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QIODevice::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIODevice_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QIODevice::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QIODevice::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIODevice_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QIODevice::disconnectNotify(*signal);

	}

};

QIODevice* QIODevice_new() {
	return new MiqtVirtualQIODevice();
}

QIODevice* QIODevice_new2(QObject* parent) {
	return new MiqtVirtualQIODevice(parent);
}

void QIODevice_virtbase(QIODevice* src, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(src);
}

QMetaObject* QIODevice_MetaObject(const QIODevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIODevice_Metacast(QIODevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIODevice_Tr(const char* s) {
	QString _ret = QIODevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIODevice_OpenMode(const QIODevice* self) {
	QIODeviceBase::OpenMode _ret = self->openMode();
	return static_cast<int>(_ret);
}

void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled) {
	self->setTextModeEnabled(enabled);
}

bool QIODevice_IsTextModeEnabled(const QIODevice* self) {
	return self->isTextModeEnabled();
}

bool QIODevice_IsOpen(const QIODevice* self) {
	return self->isOpen();
}

bool QIODevice_IsReadable(const QIODevice* self) {
	return self->isReadable();
}

bool QIODevice_IsWritable(const QIODevice* self) {
	return self->isWritable();
}

bool QIODevice_IsSequential(const QIODevice* self) {
	return self->isSequential();
}

int QIODevice_ReadChannelCount(const QIODevice* self) {
	return self->readChannelCount();
}

int QIODevice_WriteChannelCount(const QIODevice* self) {
	return self->writeChannelCount();
}

int QIODevice_CurrentReadChannel(const QIODevice* self) {
	return self->currentReadChannel();
}

void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel) {
	self->setCurrentReadChannel(static_cast<int>(channel));
}

int QIODevice_CurrentWriteChannel(const QIODevice* self) {
	return self->currentWriteChannel();
}

void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel) {
	self->setCurrentWriteChannel(static_cast<int>(channel));
}

bool QIODevice_Open(QIODevice* self, int mode) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

void QIODevice_Close(QIODevice* self) {
	self->close();
}

long long QIODevice_Pos(const QIODevice* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

long long QIODevice_Size(const QIODevice* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QIODevice_Seek(QIODevice* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

bool QIODevice_AtEnd(const QIODevice* self) {
	return self->atEnd();
}

bool QIODevice_Reset(QIODevice* self) {
	return self->reset();
}

long long QIODevice_BytesAvailable(const QIODevice* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QIODevice_BytesToWrite(const QIODevice* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

long long QIODevice_Read(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->read(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_ReadWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->read(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_ReadAll(QIODevice* self) {
	QByteArray _qb = self->readAll();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->readLine(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_ReadLine2(QIODevice* self) {
	QByteArray _qb = self->readLine();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QIODevice_CanReadLine(const QIODevice* self) {
	return self->canReadLine();
}

void QIODevice_StartTransaction(QIODevice* self) {
	self->startTransaction();
}

void QIODevice_CommitTransaction(QIODevice* self) {
	self->commitTransaction();
}

void QIODevice_RollbackTransaction(QIODevice* self) {
	self->rollbackTransaction();
}

bool QIODevice_IsTransactionStarted(const QIODevice* self) {
	return self->isTransactionStarted();
}

long long QIODevice_Write(QIODevice* self, const char* data, long long lenVal) {
	qint64 _ret = self->write(data, static_cast<qint64>(lenVal));
	return static_cast<long long>(_ret);
}

long long QIODevice_WriteWithData(QIODevice* self, const char* data) {
	qint64 _ret = self->write(data);
	return static_cast<long long>(_ret);
}

long long QIODevice_Write2(QIODevice* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	qint64 _ret = self->write(data_QByteArray);
	return static_cast<long long>(_ret);
}

long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->peek(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_PeekWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->peek(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_Skip(QIODevice* self, long long maxSize) {
	qint64 _ret = self->skip(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QIODevice_WaitForReadyRead(QIODevice* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QIODevice_WaitForBytesWritten(QIODevice* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

void QIODevice_UngetChar(QIODevice* self, char c) {
	self->ungetChar(static_cast<char>(c));
}

bool QIODevice_PutChar(QIODevice* self, char c) {
	return self->putChar(static_cast<char>(c));
}

bool QIODevice_GetChar(QIODevice* self, char* c) {
	return self->getChar(c);
}

struct miqt_string QIODevice_ErrorString(const QIODevice* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIODevice_ReadyRead(QIODevice* self) {
	self->readyRead();
}

void QIODevice_connect_ReadyRead(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readyRead), self, [=]() {
		miqt_exec_callback_QIODevice_ReadyRead(slot);
	});
}

void QIODevice_ChannelReadyRead(QIODevice* self, int channel) {
	self->channelReadyRead(static_cast<int>(channel));
}

void QIODevice_connect_ChannelReadyRead(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)(int)>(&QIODevice::channelReadyRead), self, [=](int channel) {
		int sigval1 = channel;
		miqt_exec_callback_QIODevice_ChannelReadyRead(slot, sigval1);
	});
}

void QIODevice_BytesWritten(QIODevice* self, long long bytes) {
	self->bytesWritten(static_cast<qint64>(bytes));
}

void QIODevice_connect_BytesWritten(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)(qint64)>(&QIODevice::bytesWritten), self, [=](qint64 bytes) {
		qint64 bytes_ret = bytes;
		long long sigval1 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_BytesWritten(slot, sigval1);
	});
}

void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes) {
	self->channelBytesWritten(static_cast<int>(channel), static_cast<qint64>(bytes));
}

void QIODevice_connect_ChannelBytesWritten(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)(int, qint64)>(&QIODevice::channelBytesWritten), self, [=](int channel, qint64 bytes) {
		int sigval1 = channel;
		qint64 bytes_ret = bytes;
		long long sigval2 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_ChannelBytesWritten(slot, sigval1, sigval2);
	});
}

void QIODevice_AboutToClose(QIODevice* self) {
	self->aboutToClose();
}

void QIODevice_connect_AboutToClose(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::aboutToClose), self, [=]() {
		miqt_exec_callback_QIODevice_AboutToClose(slot);
	});
}

void QIODevice_ReadChannelFinished(QIODevice* self) {
	self->readChannelFinished();
}

void QIODevice_connect_ReadChannelFinished(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readChannelFinished), self, [=]() {
		miqt_exec_callback_QIODevice_ReadChannelFinished(slot);
	});
}

struct miqt_string QIODevice_Tr2(const char* s, const char* c) {
	QString _ret = QIODevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIODevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_ReadLine1(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->readLine(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QIODevice_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QIODevice_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_IsSequential();
}

bool QIODevice_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QIODevice_virtualbase_Open(void* self, int mode) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_Open(mode);
}

bool QIODevice_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QIODevice_virtualbase_Close(void* self) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_Close();
}

bool QIODevice_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QIODevice_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_Pos();
}

bool QIODevice_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QIODevice_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_Size();
}

bool QIODevice_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QIODevice_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_Seek(pos);
}

bool QIODevice_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QIODevice_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_AtEnd();
}

bool QIODevice_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QIODevice_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_Reset();
}

bool QIODevice_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QIODevice_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_BytesAvailable();
}

bool QIODevice_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QIODevice_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_BytesToWrite();
}

bool QIODevice_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QIODevice_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_CanReadLine();
}

bool QIODevice_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QIODevice_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QIODevice_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QIODevice_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QIODevice_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

bool QIODevice_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QIODevice_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QIODevice_override_virtual_SkipData(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SkipData = slot;
	return true;
}

long long QIODevice_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_SkipData(maxSize);
}

bool QIODevice_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

bool QIODevice_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QIODevice_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_Event(event);
}

bool QIODevice_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QIODevice_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QIODevice_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QIODevice_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_TimerEvent(event);
}

bool QIODevice_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QIODevice_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_ChildEvent(event);
}

bool QIODevice_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QIODevice_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_CustomEvent(event);
}

bool QIODevice_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QIODevice_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QIODevice_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QIODevice_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QIODevice_Delete(QIODevice* self) {
	delete self;
}

