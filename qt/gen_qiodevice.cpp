#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
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

void miqt_exec_callback_QIODevice_readyRead(intptr_t);
void miqt_exec_callback_QIODevice_channelReadyRead(intptr_t, int);
void miqt_exec_callback_QIODevice_bytesWritten(intptr_t, long long);
void miqt_exec_callback_QIODevice_channelBytesWritten(intptr_t, int, long long);
void miqt_exec_callback_QIODevice_aboutToClose(intptr_t);
void miqt_exec_callback_QIODevice_readChannelFinished(intptr_t);
bool miqt_exec_callback_QIODevice_isSequential(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_open(QIODevice*, intptr_t, int);
void miqt_exec_callback_QIODevice_close(QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_pos(const QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_size(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_seek(QIODevice*, intptr_t, long long);
bool miqt_exec_callback_QIODevice_atEnd(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_reset(QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_bytesAvailable(const QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_bytesToWrite(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_canReadLine(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_waitForReadyRead(QIODevice*, intptr_t, int);
bool miqt_exec_callback_QIODevice_waitForBytesWritten(QIODevice*, intptr_t, int);
long long miqt_exec_callback_QIODevice_readData(QIODevice*, intptr_t, char*, long long);
long long miqt_exec_callback_QIODevice_readLineData(QIODevice*, intptr_t, char*, long long);
long long miqt_exec_callback_QIODevice_writeData(QIODevice*, intptr_t, const char*, long long);
bool miqt_exec_callback_QIODevice_event(QIODevice*, intptr_t, QEvent*);
bool miqt_exec_callback_QIODevice_eventFilter(QIODevice*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIODevice_timerEvent(QIODevice*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIODevice_childEvent(QIODevice*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIODevice_customEvent(QIODevice*, intptr_t, QEvent*);
void miqt_exec_callback_QIODevice_connectNotify(QIODevice*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIODevice_disconnectNotify(QIODevice*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIODevice final : public QIODevice {
public:

	MiqtVirtualQIODevice(): QIODevice() {};
	MiqtVirtualQIODevice(QObject* parent): QIODevice(parent) {};

	virtual ~MiqtVirtualQIODevice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QIODevice::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QIODevice::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (handle__open == 0) {
			return QIODevice::open(mode);
		}
		
		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QIODevice_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int mode) {

		return QIODevice::open(static_cast<QIODevice::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QIODevice::close();
			return;
		}
		

		miqt_exec_callback_QIODevice_close(this, handle__close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_close() {

		QIODevice::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QIODevice::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QIODevice::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QIODevice::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QIODevice::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__seek == 0) {
			return QIODevice::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QIODevice_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long pos) {

		return QIODevice::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QIODevice::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QIODevice::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QIODevice::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QIODevice::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QIODevice::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QIODevice::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QIODevice::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QIODevice_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QIODevice::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QIODevice::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QIODevice_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QIODevice::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QIODevice::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QIODevice_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QIODevice::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QIODevice::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QIODevice_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QIODevice::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QIODevice_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QIODevice::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QIODevice_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxlen) {

		qint64 _ret = QIODevice::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);

		long long callback_return_value = miqt_exec_callback_QIODevice_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QIODevice::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QIODevice_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QIODevice::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QIODevice::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QIODevice_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QIODevice::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QIODevice::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QIODevice_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QIODevice::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QIODevice::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QIODevice_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QIODevice::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QIODevice::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QIODevice_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QIODevice::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QIODevice::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIODevice_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QIODevice::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QIODevice::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIODevice_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QIODevice::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QIODevice_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QIODevice_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QIODevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QIODevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QIODevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QIODevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QIODevice* QIODevice_new() {
	return new MiqtVirtualQIODevice();
}

QIODevice* QIODevice_new2(QObject* parent) {
	return new MiqtVirtualQIODevice(parent);
}

void QIODevice_virtbase(QIODevice* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QIODevice_metaObject(const QIODevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIODevice_metacast(QIODevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIODevice_tr(const char* s) {
	QString _ret = QIODevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_trUtf8(const char* s) {
	QString _ret = QIODevice::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIODevice_openMode(const QIODevice* self) {
	QIODevice::OpenMode _ret = self->openMode();
	return static_cast<int>(_ret);
}

void QIODevice_setTextModeEnabled(QIODevice* self, bool enabled) {
	self->setTextModeEnabled(enabled);
}

bool QIODevice_isTextModeEnabled(const QIODevice* self) {
	return self->isTextModeEnabled();
}

bool QIODevice_isOpen(const QIODevice* self) {
	return self->isOpen();
}

bool QIODevice_isReadable(const QIODevice* self) {
	return self->isReadable();
}

bool QIODevice_isWritable(const QIODevice* self) {
	return self->isWritable();
}

bool QIODevice_isSequential(const QIODevice* self) {
	return self->isSequential();
}

int QIODevice_readChannelCount(const QIODevice* self) {
	return self->readChannelCount();
}

int QIODevice_writeChannelCount(const QIODevice* self) {
	return self->writeChannelCount();
}

int QIODevice_currentReadChannel(const QIODevice* self) {
	return self->currentReadChannel();
}

void QIODevice_setCurrentReadChannel(QIODevice* self, int channel) {
	self->setCurrentReadChannel(static_cast<int>(channel));
}

int QIODevice_currentWriteChannel(const QIODevice* self) {
	return self->currentWriteChannel();
}

void QIODevice_setCurrentWriteChannel(QIODevice* self, int channel) {
	self->setCurrentWriteChannel(static_cast<int>(channel));
}

bool QIODevice_open(QIODevice* self, int mode) {
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QIODevice_close(QIODevice* self) {
	self->close();
}

long long QIODevice_pos(const QIODevice* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

long long QIODevice_size(const QIODevice* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QIODevice_seek(QIODevice* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

bool QIODevice_atEnd(const QIODevice* self) {
	return self->atEnd();
}

bool QIODevice_reset(QIODevice* self) {
	return self->reset();
}

long long QIODevice_bytesAvailable(const QIODevice* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QIODevice_bytesToWrite(const QIODevice* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

long long QIODevice_read(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->read(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_readWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->read(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_readAll(QIODevice* self) {
	QByteArray _qb = self->readAll();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_readLine(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->readLine(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_readLine2(QIODevice* self) {
	QByteArray _qb = self->readLine();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QIODevice_canReadLine(const QIODevice* self) {
	return self->canReadLine();
}

void QIODevice_startTransaction(QIODevice* self) {
	self->startTransaction();
}

void QIODevice_commitTransaction(QIODevice* self) {
	self->commitTransaction();
}

void QIODevice_rollbackTransaction(QIODevice* self) {
	self->rollbackTransaction();
}

bool QIODevice_isTransactionStarted(const QIODevice* self) {
	return self->isTransactionStarted();
}

long long QIODevice_write(QIODevice* self, const char* data, long long len) {
	qint64 _ret = self->write(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

long long QIODevice_writeWithData(QIODevice* self, const char* data) {
	qint64 _ret = self->write(data);
	return static_cast<long long>(_ret);
}

long long QIODevice_write2(QIODevice* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	qint64 _ret = self->write(data_QByteArray);
	return static_cast<long long>(_ret);
}

long long QIODevice_peek(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->peek(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_peekWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->peek(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_skip(QIODevice* self, long long maxSize) {
	qint64 _ret = self->skip(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QIODevice_waitForReadyRead(QIODevice* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QIODevice_waitForBytesWritten(QIODevice* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

void QIODevice_ungetChar(QIODevice* self, char c) {
	self->ungetChar(static_cast<char>(c));
}

bool QIODevice_putChar(QIODevice* self, char c) {
	return self->putChar(static_cast<char>(c));
}

bool QIODevice_getChar(QIODevice* self, char* c) {
	return self->getChar(c);
}

struct miqt_string QIODevice_errorString(const QIODevice* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIODevice_readyRead(QIODevice* self) {
	self->readyRead();
}

void QIODevice_connect_readyRead(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readyRead), self, [=]() {
		miqt_exec_callback_QIODevice_readyRead(slot);
	});
}

void QIODevice_channelReadyRead(QIODevice* self, int channel) {
	self->channelReadyRead(static_cast<int>(channel));
}

void QIODevice_connect_channelReadyRead(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)(int)>(&QIODevice::channelReadyRead), self, [=](int channel) {
		int sigval1 = channel;
		miqt_exec_callback_QIODevice_channelReadyRead(slot, sigval1);
	});
}

void QIODevice_bytesWritten(QIODevice* self, long long bytes) {
	self->bytesWritten(static_cast<qint64>(bytes));
}

void QIODevice_connect_bytesWritten(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)(qint64)>(&QIODevice::bytesWritten), self, [=](qint64 bytes) {
		qint64 bytes_ret = bytes;
		long long sigval1 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_bytesWritten(slot, sigval1);
	});
}

void QIODevice_channelBytesWritten(QIODevice* self, int channel, long long bytes) {
	self->channelBytesWritten(static_cast<int>(channel), static_cast<qint64>(bytes));
}

void QIODevice_connect_channelBytesWritten(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)(int, qint64)>(&QIODevice::channelBytesWritten), self, [=](int channel, qint64 bytes) {
		int sigval1 = channel;
		qint64 bytes_ret = bytes;
		long long sigval2 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_channelBytesWritten(slot, sigval1, sigval2);
	});
}

void QIODevice_aboutToClose(QIODevice* self) {
	self->aboutToClose();
}

void QIODevice_connect_aboutToClose(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::aboutToClose), self, [=]() {
		miqt_exec_callback_QIODevice_aboutToClose(slot);
	});
}

void QIODevice_readChannelFinished(QIODevice* self) {
	self->readChannelFinished();
}

void QIODevice_connect_readChannelFinished(QIODevice* self, intptr_t slot) {
	MiqtVirtualQIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readChannelFinished), self, [=]() {
		miqt_exec_callback_QIODevice_readChannelFinished(slot);
	});
}

struct miqt_string QIODevice_tr2(const char* s, const char* c) {
	QString _ret = QIODevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QIODevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_trUtf82(const char* s, const char* c) {
	QString _ret = QIODevice::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QIODevice::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_readLine1(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->readLine(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QIODevice_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QIODevice_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_isSequential();
}

bool QIODevice_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QIODevice_virtualbase_open(void* self, int mode) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_open(mode);
}

bool QIODevice_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QIODevice_virtualbase_close(void* self) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_close();
}

bool QIODevice_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QIODevice_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_pos();
}

bool QIODevice_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QIODevice_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_size();
}

bool QIODevice_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QIODevice_virtualbase_seek(void* self, long long pos) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_seek(pos);
}

bool QIODevice_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QIODevice_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_atEnd();
}

bool QIODevice_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QIODevice_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_reset();
}

bool QIODevice_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QIODevice_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_bytesAvailable();
}

bool QIODevice_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QIODevice_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_bytesToWrite();
}

bool QIODevice_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QIODevice_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQIODevice*)(self) )->virtualbase_canReadLine();
}

bool QIODevice_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QIODevice_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QIODevice_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QIODevice_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QIODevice_override_virtual_readData(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

bool QIODevice_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QIODevice_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_readLineData(data, maxlen);
}

bool QIODevice_override_virtual_writeData(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

bool QIODevice_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QIODevice_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_event(event);
}

bool QIODevice_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QIODevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQIODevice*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QIODevice_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QIODevice_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_timerEvent(event);
}

bool QIODevice_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QIODevice_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_childEvent(event);
}

bool QIODevice_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QIODevice_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_customEvent(event);
}

bool QIODevice_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QIODevice_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_connectNotify(signal);
}

bool QIODevice_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QIODevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIODevice*)(self) )->virtualbase_disconnectNotify(signal);
}

void QIODevice_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQIODevice::OpenMode>(openMode));

}

void QIODevice_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QIODevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QIODevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QIODevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QIODevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QIODevice_delete(QIODevice* self) {
	delete self;
}

