#include <QAudioFormat>
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
#include <QWaveDecoder>
#include <qwavedecoder.h>
#include "gen_qwavedecoder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWaveDecoder_formatKnown(intptr_t);
void miqt_exec_callback_QWaveDecoder_parsingError(intptr_t);
bool miqt_exec_callback_QWaveDecoder_open(QWaveDecoder*, intptr_t, int);
void miqt_exec_callback_QWaveDecoder_close(QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_seek(QWaveDecoder*, intptr_t, long long);
long long miqt_exec_callback_QWaveDecoder_pos(const QWaveDecoder*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_size(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_isSequential(const QWaveDecoder*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_bytesAvailable(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_atEnd(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_reset(QWaveDecoder*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_bytesToWrite(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_canReadLine(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_waitForReadyRead(QWaveDecoder*, intptr_t, int);
bool miqt_exec_callback_QWaveDecoder_waitForBytesWritten(QWaveDecoder*, intptr_t, int);
long long miqt_exec_callback_QWaveDecoder_readLineData(QWaveDecoder*, intptr_t, char*, long long);
long long miqt_exec_callback_QWaveDecoder_skipData(QWaveDecoder*, intptr_t, long long);
bool miqt_exec_callback_QWaveDecoder_event(QWaveDecoder*, intptr_t, QEvent*);
bool miqt_exec_callback_QWaveDecoder_eventFilter(QWaveDecoder*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWaveDecoder_timerEvent(QWaveDecoder*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWaveDecoder_childEvent(QWaveDecoder*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWaveDecoder_customEvent(QWaveDecoder*, intptr_t, QEvent*);
void miqt_exec_callback_QWaveDecoder_connectNotify(QWaveDecoder*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWaveDecoder_disconnectNotify(QWaveDecoder*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWaveDecoder final : public QWaveDecoder {
public:

	MiqtVirtualQWaveDecoder(QIODevice* device): QWaveDecoder(device) {};
	MiqtVirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format): QWaveDecoder(device, format) {};
	MiqtVirtualQWaveDecoder(QIODevice* device, QObject* parent): QWaveDecoder(device, parent) {};
	MiqtVirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format, QObject* parent): QWaveDecoder(device, format, parent) {};

	virtual ~MiqtVirtualQWaveDecoder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (handle__open == 0) {
			return QWaveDecoder::open(mode);
		}
		
		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_open(this, handle__open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_open(int mode) {

		return QWaveDecoder::open(static_cast<QIODevice::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QWaveDecoder::close();
			return;
		}
		

		miqt_exec_callback_QWaveDecoder_close(this, handle__close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_close() {

		QWaveDecoder::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__seek == 0) {
			return QWaveDecoder::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_seek(long long pos) {

		return QWaveDecoder::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QWaveDecoder::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_pos() const {

		qint64 _ret = QWaveDecoder::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QWaveDecoder::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_size() const {

		qint64 _ret = QWaveDecoder::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QWaveDecoder::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isSequential() const {

		return QWaveDecoder::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QWaveDecoder::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesAvailable() const {

		qint64 _ret = QWaveDecoder::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QWaveDecoder::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_atEnd() const {

		return QWaveDecoder::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QWaveDecoder::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_reset(this, handle__reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_reset() {

		return QWaveDecoder::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QWaveDecoder::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_bytesToWrite() const {

		qint64 _ret = QWaveDecoder::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QWaveDecoder::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canReadLine() const {

		return QWaveDecoder::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QWaveDecoder::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForReadyRead(int msecs) {

		return QWaveDecoder::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QWaveDecoder::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_waitForBytesWritten(int msecs) {

		return QWaveDecoder::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QWaveDecoder::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_readLineData(char* data, long long maxlen) {

		qint64 _ret = QWaveDecoder::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__skipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__skipData == 0) {
			return QWaveDecoder::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_skipData(this, handle__skipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_skipData(long long maxSize) {

		qint64 _ret = QWaveDecoder::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWaveDecoder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWaveDecoder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWaveDecoder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWaveDecoder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWaveDecoder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWaveDecoder_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWaveDecoder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWaveDecoder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWaveDecoder_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWaveDecoder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWaveDecoder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWaveDecoder_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWaveDecoder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWaveDecoder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWaveDecoder_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWaveDecoder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWaveDecoder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWaveDecoder_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWaveDecoder::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QWaveDecoder_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QWaveDecoder_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QWaveDecoder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWaveDecoder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWaveDecoder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWaveDecoder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWaveDecoder* QWaveDecoder_new(QIODevice* device) {
	return new MiqtVirtualQWaveDecoder(device);
}

QWaveDecoder* QWaveDecoder_new2(QIODevice* device, QAudioFormat* format) {
	return new MiqtVirtualQWaveDecoder(device, *format);
}

QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent) {
	return new MiqtVirtualQWaveDecoder(device, parent);
}

QWaveDecoder* QWaveDecoder_new4(QIODevice* device, QAudioFormat* format, QObject* parent) {
	return new MiqtVirtualQWaveDecoder(device, *format, parent);
}

void QWaveDecoder_virtbase(QWaveDecoder* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QWaveDecoder_metaObject(const QWaveDecoder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWaveDecoder_metacast(QWaveDecoder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWaveDecoder_tr(const char* s) {
	QString _ret = QWaveDecoder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QWaveDecoder_audioFormat(const QWaveDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

QIODevice* QWaveDecoder_getDevice(QWaveDecoder* self) {
	return self->getDevice();
}

int QWaveDecoder_duration(const QWaveDecoder* self) {
	return self->duration();
}

long long QWaveDecoder_headerLength() {
	qint64 _ret = QWaveDecoder::headerLength();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_open(QWaveDecoder* self, int mode) {
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QWaveDecoder_close(QWaveDecoder* self) {
	self->close();
}

bool QWaveDecoder_seek(QWaveDecoder* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

long long QWaveDecoder_pos(const QWaveDecoder* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

long long QWaveDecoder_size(const QWaveDecoder* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_isSequential(const QWaveDecoder* self) {
	return self->isSequential();
}

long long QWaveDecoder_bytesAvailable(const QWaveDecoder* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

void QWaveDecoder_formatKnown(QWaveDecoder* self) {
	self->formatKnown();
}

void QWaveDecoder_connect_formatKnown(QWaveDecoder* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::formatKnown), self, [=]() {
		miqt_exec_callback_QWaveDecoder_formatKnown(slot);
	});
}

void QWaveDecoder_parsingError(QWaveDecoder* self) {
	self->parsingError();
}

void QWaveDecoder_connect_parsingError(QWaveDecoder* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::parsingError), self, [=]() {
		miqt_exec_callback_QWaveDecoder_parsingError(slot);
	});
}

struct miqt_string QWaveDecoder_tr2(const char* s, const char* c) {
	QString _ret = QWaveDecoder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWaveDecoder_tr3(const char* s, const char* c, int n) {
	QString _ret = QWaveDecoder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWaveDecoder_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

bool QWaveDecoder_virtualbase_open(void* self, int mode) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_open(mode);
}

bool QWaveDecoder_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QWaveDecoder_virtualbase_close(void* self) {
	( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_close();
}

bool QWaveDecoder_override_virtual_seek(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QWaveDecoder_virtualbase_seek(void* self, long long pos) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_seek(pos);
}

bool QWaveDecoder_override_virtual_pos(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QWaveDecoder_virtualbase_pos(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_pos();
}

bool QWaveDecoder_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QWaveDecoder_virtualbase_size(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_size();
}

bool QWaveDecoder_override_virtual_isSequential(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QWaveDecoder_virtualbase_isSequential(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_isSequential();
}

bool QWaveDecoder_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QWaveDecoder_virtualbase_bytesAvailable(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_bytesAvailable();
}

bool QWaveDecoder_override_virtual_atEnd(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QWaveDecoder_virtualbase_atEnd(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_atEnd();
}

bool QWaveDecoder_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QWaveDecoder_virtualbase_reset(void* self) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_reset();
}

bool QWaveDecoder_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QWaveDecoder_virtualbase_bytesToWrite(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_bytesToWrite();
}

bool QWaveDecoder_override_virtual_canReadLine(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QWaveDecoder_virtualbase_canReadLine(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_canReadLine();
}

bool QWaveDecoder_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QWaveDecoder_virtualbase_waitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_waitForReadyRead(msecs);
}

bool QWaveDecoder_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QWaveDecoder_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_waitForBytesWritten(msecs);
}

bool QWaveDecoder_override_virtual_readLineData(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QWaveDecoder_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_readLineData(data, maxlen);
}

bool QWaveDecoder_override_virtual_skipData(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__skipData = slot;
	return true;
}

long long QWaveDecoder_virtualbase_skipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_skipData(maxSize);
}

bool QWaveDecoder_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWaveDecoder_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_event(event);
}

bool QWaveDecoder_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWaveDecoder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWaveDecoder_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWaveDecoder_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_timerEvent(event);
}

bool QWaveDecoder_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWaveDecoder_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_childEvent(event);
}

bool QWaveDecoder_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWaveDecoder_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_customEvent(event);
}

bool QWaveDecoder_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWaveDecoder_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_connectNotify(signal);
}

bool QWaveDecoder_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWaveDecoder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_disconnectNotify(signal);
}

void QWaveDecoder_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<MiqtVirtualQWaveDecoder::OpenMode>(openMode));

}

void QWaveDecoder_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QWaveDecoder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWaveDecoder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWaveDecoder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWaveDecoder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWaveDecoder_delete(QWaveDecoder* self) {
	delete self;
}

