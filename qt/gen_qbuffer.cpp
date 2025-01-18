#include <QBuffer>
#include <QByteArray>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qbuffer.h>
#include "gen_qbuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QBuffer_Open(void*, intptr_t, int);
void miqt_exec_callback_QBuffer_Close(void*, intptr_t);
long long miqt_exec_callback_QBuffer_Size(void*, intptr_t);
long long miqt_exec_callback_QBuffer_Pos(void*, intptr_t);
bool miqt_exec_callback_QBuffer_Seek(void*, intptr_t, long long);
bool miqt_exec_callback_QBuffer_AtEnd(void*, intptr_t);
bool miqt_exec_callback_QBuffer_CanReadLine(void*, intptr_t);
void miqt_exec_callback_QBuffer_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBuffer_DisconnectNotify(void*, intptr_t, QMetaMethod*);
long long miqt_exec_callback_QBuffer_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QBuffer_WriteData(void*, intptr_t, const char*, long long);
bool miqt_exec_callback_QBuffer_IsSequential(void*, intptr_t);
bool miqt_exec_callback_QBuffer_Reset(void*, intptr_t);
long long miqt_exec_callback_QBuffer_BytesAvailable(void*, intptr_t);
long long miqt_exec_callback_QBuffer_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QBuffer_WaitForReadyRead(void*, intptr_t, int);
bool miqt_exec_callback_QBuffer_WaitForBytesWritten(void*, intptr_t, int);
long long miqt_exec_callback_QBuffer_ReadLineData(void*, intptr_t, char*, long long);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBuffer final : public QBuffer {
public:

	MiqtVirtualQBuffer(): QBuffer() {};
	MiqtVirtualQBuffer(QObject* parent): QBuffer(parent) {};

	virtual ~MiqtVirtualQBuffer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode openMode) override {
		if (handle__Open == 0) {
			return QBuffer::open(openMode);
		}
		
		QIODevice::OpenMode openMode_ret = openMode;
		int sigval1 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QBuffer_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int openMode) {

		return QBuffer::open(static_cast<QIODevice::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QBuffer::close();
			return;
		}
		

		miqt_exec_callback_QBuffer_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QBuffer::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QBuffer::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QBuffer_Size(const_cast<MiqtVirtualQBuffer*>(this), handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QBuffer::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QBuffer::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QBuffer_Pos(const_cast<MiqtVirtualQBuffer*>(this), handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QBuffer::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 off) override {
		if (handle__Seek == 0) {
			return QBuffer::seek(off);
		}
		
		qint64 off_ret = off;
		long long sigval1 = static_cast<long long>(off_ret);

		bool callback_return_value = miqt_exec_callback_QBuffer_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long off) {

		return QBuffer::seek(static_cast<qint64>(off));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QBuffer::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QBuffer_AtEnd(const_cast<MiqtVirtualQBuffer*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QBuffer::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QBuffer::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QBuffer_CanReadLine(const_cast<MiqtVirtualQBuffer*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QBuffer::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& param1) override {
		if (handle__ConnectNotify == 0) {
			QBuffer::connectNotify(param1);
			return;
		}
		
		const QMetaMethod& param1_ret = param1;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&param1_ret);

		miqt_exec_callback_QBuffer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* param1) {

		QBuffer::connectNotify(*param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& param1) override {
		if (handle__DisconnectNotify == 0) {
			QBuffer::disconnectNotify(param1);
			return;
		}
		
		const QMetaMethod& param1_ret = param1;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&param1_ret);

		miqt_exec_callback_QBuffer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* param1) {

		QBuffer::disconnectNotify(*param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QBuffer::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QBuffer_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QBuffer::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QBuffer::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QBuffer_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QBuffer::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QBuffer::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QBuffer_IsSequential(const_cast<MiqtVirtualQBuffer*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QBuffer::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QBuffer::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QBuffer_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QBuffer::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QBuffer::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QBuffer_BytesAvailable(const_cast<MiqtVirtualQBuffer*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QBuffer::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QBuffer::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QBuffer_BytesToWrite(const_cast<MiqtVirtualQBuffer*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QBuffer::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QBuffer::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QBuffer_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QBuffer::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QBuffer::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QBuffer_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QBuffer::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QBuffer::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QBuffer_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QBuffer::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

};

QBuffer* QBuffer_new() {
	return new MiqtVirtualQBuffer();
}

QBuffer* QBuffer_new2(QObject* parent) {
	return new MiqtVirtualQBuffer(parent);
}

void QBuffer_virtbase(QBuffer* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QBuffer_MetaObject(const QBuffer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBuffer_Metacast(QBuffer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBuffer_Tr(const char* s) {
	QString _ret = QBuffer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_TrUtf8(const char* s) {
	QString _ret = QBuffer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_Buffer(QBuffer* self) {
	QByteArray _qb = self->buffer();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_Buffer2(const QBuffer* self) {
	const QByteArray _qb = self->buffer();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QBuffer_SetData(QBuffer* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setData(data_QByteArray);
}

void QBuffer_SetData2(QBuffer* self, const char* data, int lenVal) {
	self->setData(data, static_cast<int>(lenVal));
}

struct miqt_string QBuffer_Data(const QBuffer* self) {
	const QByteArray _qb = self->data();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QBuffer_Open(QBuffer* self, int openMode) {
	return self->open(static_cast<QIODevice::OpenMode>(openMode));
}

void QBuffer_Close(QBuffer* self) {
	self->close();
}

long long QBuffer_Size(const QBuffer* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

long long QBuffer_Pos(const QBuffer* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

bool QBuffer_Seek(QBuffer* self, long long off) {
	return self->seek(static_cast<qint64>(off));
}

bool QBuffer_AtEnd(const QBuffer* self) {
	return self->atEnd();
}

bool QBuffer_CanReadLine(const QBuffer* self) {
	return self->canReadLine();
}

struct miqt_string QBuffer_Tr2(const char* s, const char* c) {
	QString _ret = QBuffer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBuffer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_TrUtf82(const char* s, const char* c) {
	QString _ret = QBuffer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QBuffer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBuffer_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QBuffer_virtualbase_Open(void* self, int openMode) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_Open(openMode);
}

bool QBuffer_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QBuffer_virtualbase_Close(void* self) {
	( (MiqtVirtualQBuffer*)(self) )->virtualbase_Close();
}

bool QBuffer_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QBuffer_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQBuffer*)(self) )->virtualbase_Size();
}

bool QBuffer_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QBuffer_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQBuffer*)(self) )->virtualbase_Pos();
}

bool QBuffer_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QBuffer_virtualbase_Seek(void* self, long long off) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_Seek(off);
}

bool QBuffer_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QBuffer_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQBuffer*)(self) )->virtualbase_AtEnd();
}

bool QBuffer_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QBuffer_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQBuffer*)(self) )->virtualbase_CanReadLine();
}

bool QBuffer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QBuffer_virtualbase_ConnectNotify(void* self, QMetaMethod* param1) {
	( (MiqtVirtualQBuffer*)(self) )->virtualbase_ConnectNotify(param1);
}

bool QBuffer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QBuffer_virtualbase_DisconnectNotify(void* self, QMetaMethod* param1) {
	( (MiqtVirtualQBuffer*)(self) )->virtualbase_DisconnectNotify(param1);
}

bool QBuffer_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QBuffer_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QBuffer_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QBuffer_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QBuffer_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QBuffer_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQBuffer*)(self) )->virtualbase_IsSequential();
}

bool QBuffer_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QBuffer_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_Reset();
}

bool QBuffer_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QBuffer_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQBuffer*)(self) )->virtualbase_BytesAvailable();
}

bool QBuffer_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QBuffer_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQBuffer*)(self) )->virtualbase_BytesToWrite();
}

bool QBuffer_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QBuffer_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QBuffer_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QBuffer_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QBuffer_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QBuffer_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQBuffer*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

void QBuffer_Delete(QBuffer* self) {
	delete self;
}

