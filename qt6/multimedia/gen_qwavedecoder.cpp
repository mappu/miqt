#include <QAudioFormat>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWaveDecoder>
#include <qwavedecoder.h>
#include "gen_qwavedecoder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWaveDecoder_FormatKnown(intptr_t);
void miqt_exec_callback_QWaveDecoder_ParsingError(intptr_t);
bool miqt_exec_callback_QWaveDecoder_Open(void*, intptr_t, int);
void miqt_exec_callback_QWaveDecoder_Close(void*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_Seek(void*, intptr_t, long long);
long long miqt_exec_callback_QWaveDecoder_Pos(void*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_Size(void*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_IsSequential(void*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_BytesAvailable(void*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_AtEnd(void*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_Reset(void*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_CanReadLine(void*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_WaitForReadyRead(void*, intptr_t, int);
bool miqt_exec_callback_QWaveDecoder_WaitForBytesWritten(void*, intptr_t, int);
long long miqt_exec_callback_QWaveDecoder_ReadLineData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QWaveDecoder_SkipData(void*, intptr_t, long long);
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
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (handle__Open == 0) {
			return QWaveDecoder::open(mode);
		}
		
		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int mode) {

		return QWaveDecoder::open(static_cast<QIODevice::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QWaveDecoder::close();
			return;
		}
		

		miqt_exec_callback_QWaveDecoder_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QWaveDecoder::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QWaveDecoder::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QWaveDecoder::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QWaveDecoder::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_Pos(const_cast<MiqtVirtualQWaveDecoder*>(this), handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QWaveDecoder::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QWaveDecoder::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_Size(const_cast<MiqtVirtualQWaveDecoder*>(this), handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QWaveDecoder::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QWaveDecoder::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_IsSequential(const_cast<MiqtVirtualQWaveDecoder*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QWaveDecoder::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QWaveDecoder::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_BytesAvailable(const_cast<MiqtVirtualQWaveDecoder*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QWaveDecoder::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QWaveDecoder::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_AtEnd(const_cast<MiqtVirtualQWaveDecoder*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QWaveDecoder::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QWaveDecoder::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QWaveDecoder::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QWaveDecoder::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_BytesToWrite(const_cast<MiqtVirtualQWaveDecoder*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QWaveDecoder::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QWaveDecoder::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_CanReadLine(const_cast<MiqtVirtualQWaveDecoder*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QWaveDecoder::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QWaveDecoder::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QWaveDecoder::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QWaveDecoder::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QWaveDecoder::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QWaveDecoder::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QWaveDecoder::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SkipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__SkipData == 0) {
			return QWaveDecoder::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_SkipData(this, handle__SkipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_SkipData(long long maxSize) {

		qint64 _ret = QWaveDecoder::skipData(static_cast<qint64>(maxSize));
		return static_cast<long long>(_ret);

	}

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

QMetaObject* QWaveDecoder_MetaObject(const QWaveDecoder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWaveDecoder_Metacast(QWaveDecoder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWaveDecoder_Tr(const char* s) {
	QString _ret = QWaveDecoder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self) {
	return self->getDevice();
}

int QWaveDecoder_Duration(const QWaveDecoder* self) {
	return self->duration();
}

long long QWaveDecoder_HeaderLength() {
	qint64 _ret = QWaveDecoder::headerLength();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_Open(QWaveDecoder* self, int mode) {
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QWaveDecoder_Close(QWaveDecoder* self) {
	self->close();
}

bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

long long QWaveDecoder_Pos(const QWaveDecoder* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

long long QWaveDecoder_Size(const QWaveDecoder* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_IsSequential(const QWaveDecoder* self) {
	return self->isSequential();
}

long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

void QWaveDecoder_FormatKnown(QWaveDecoder* self) {
	self->formatKnown();
}

void QWaveDecoder_connect_FormatKnown(QWaveDecoder* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::formatKnown), self, [=]() {
		miqt_exec_callback_QWaveDecoder_FormatKnown(slot);
	});
}

void QWaveDecoder_ParsingError(QWaveDecoder* self) {
	self->parsingError();
}

void QWaveDecoder_connect_ParsingError(QWaveDecoder* self, intptr_t slot) {
	MiqtVirtualQWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::parsingError), self, [=]() {
		miqt_exec_callback_QWaveDecoder_ParsingError(slot);
	});
}

struct miqt_string QWaveDecoder_Tr2(const char* s, const char* c) {
	QString _ret = QWaveDecoder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWaveDecoder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWaveDecoder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWaveDecoder_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__Open = slot;
}

bool QWaveDecoder_virtualbase_Open(void* self, int mode) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_Open(mode);
}

void QWaveDecoder_override_virtual_Close(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__Close = slot;
}

void QWaveDecoder_virtualbase_Close(void* self) {
	( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_Close();
}

void QWaveDecoder_override_virtual_Seek(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__Seek = slot;
}

bool QWaveDecoder_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_Seek(pos);
}

void QWaveDecoder_override_virtual_Pos(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__Pos = slot;
}

long long QWaveDecoder_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_Pos();
}

void QWaveDecoder_override_virtual_Size(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__Size = slot;
}

long long QWaveDecoder_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_Size();
}

void QWaveDecoder_override_virtual_IsSequential(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__IsSequential = slot;
}

bool QWaveDecoder_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_IsSequential();
}

void QWaveDecoder_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__BytesAvailable = slot;
}

long long QWaveDecoder_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_BytesAvailable();
}

void QWaveDecoder_override_virtual_AtEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__AtEnd = slot;
}

bool QWaveDecoder_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_AtEnd();
}

void QWaveDecoder_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__Reset = slot;
}

bool QWaveDecoder_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_Reset();
}

void QWaveDecoder_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__BytesToWrite = slot;
}

long long QWaveDecoder_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_BytesToWrite();
}

void QWaveDecoder_override_virtual_CanReadLine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__CanReadLine = slot;
}

bool QWaveDecoder_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQWaveDecoder*)(self) )->virtualbase_CanReadLine();
}

void QWaveDecoder_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__WaitForReadyRead = slot;
}

bool QWaveDecoder_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

void QWaveDecoder_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__WaitForBytesWritten = slot;
}

bool QWaveDecoder_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

void QWaveDecoder_override_virtual_ReadLineData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__ReadLineData = slot;
}

long long QWaveDecoder_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

void QWaveDecoder_override_virtual_SkipData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) )->handle__SkipData = slot;
}

long long QWaveDecoder_virtualbase_SkipData(void* self, long long maxSize) {
	return ( (MiqtVirtualQWaveDecoder*)(self) )->virtualbase_SkipData(maxSize);
}

void QWaveDecoder_Delete(QWaveDecoder* self) {
	delete self;
}

