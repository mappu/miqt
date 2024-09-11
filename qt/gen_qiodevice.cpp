#include <QByteArray>
#include <QIODevice>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qiodevice.h"

#include "gen_qiodevice.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QIODevice_MetaObject(const QIODevice* self) {
	return (QMetaObject*) self->metaObject();
}

void QIODevice_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QIODevice_OpenMode(const QIODevice* self) {
	QIODevice::OpenMode ret = self->openMode();
	return static_cast<int>(ret);
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
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QIODevice_Close(QIODevice* self) {
	self->close();
}

long long QIODevice_Pos(const QIODevice* self) {
	return self->pos();
}

long long QIODevice_Size(const QIODevice* self) {
	return self->size();
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
	return self->bytesAvailable();
}

long long QIODevice_BytesToWrite(const QIODevice* self) {
	return self->bytesToWrite();
}

long long QIODevice_Read(QIODevice* self, char* data, long long maxlen) {
	return self->read(data, static_cast<qint64>(maxlen));
}

QByteArray* QIODevice_ReadWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray ret = self->read(static_cast<qint64>(maxlen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QIODevice_ReadAll(QIODevice* self) {
	QByteArray ret = self->readAll();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen) {
	return self->readLine(data, static_cast<qint64>(maxlen));
}

QByteArray* QIODevice_ReadLine2(QIODevice* self) {
	QByteArray ret = self->readLine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
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
	return self->write(data, static_cast<qint64>(lenVal));
}

long long QIODevice_WriteWithData(QIODevice* self, const char* data) {
	return self->write(data);
}

long long QIODevice_Write2(QIODevice* self, QByteArray* data) {
	return self->write(*data);
}

long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen) {
	return self->peek(data, static_cast<qint64>(maxlen));
}

QByteArray* QIODevice_PeekWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray ret = self->peek(static_cast<qint64>(maxlen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

long long QIODevice_Skip(QIODevice* self, long long maxSize) {
	return self->skip(static_cast<qint64>(maxSize));
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

void QIODevice_ErrorString(const QIODevice* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_ReadyRead(QIODevice* self) {
	self->readyRead();
}

void QIODevice_connect_ReadyRead(QIODevice* self, void* slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readyRead), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIODevice_ChannelReadyRead(QIODevice* self, int channel) {
	self->channelReadyRead(static_cast<int>(channel));
}

void QIODevice_connect_ChannelReadyRead(QIODevice* self, void* slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)(int)>(&QIODevice::channelReadyRead), self, [=](int channel) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIODevice_BytesWritten(QIODevice* self, long long bytes) {
	self->bytesWritten(static_cast<qint64>(bytes));
}

void QIODevice_connect_BytesWritten(QIODevice* self, void* slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)(qint64)>(&QIODevice::bytesWritten), self, [=](qint64 bytes) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes) {
	self->channelBytesWritten(static_cast<int>(channel), static_cast<qint64>(bytes));
}

void QIODevice_connect_ChannelBytesWritten(QIODevice* self, void* slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)(int, qint64)>(&QIODevice::channelBytesWritten), self, [=](int channel, qint64 bytes) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIODevice_AboutToClose(QIODevice* self) {
	self->aboutToClose();
}

void QIODevice_connect_AboutToClose(QIODevice* self, void* slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::aboutToClose), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIODevice_ReadChannelFinished(QIODevice* self) {
	self->readChannelFinished();
}

void QIODevice_connect_ReadChannelFinished(QIODevice* self, void* slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readChannelFinished), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIODevice_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QIODevice_ReadLine1(QIODevice* self, long long maxlen) {
	QByteArray ret = self->readLine(static_cast<qint64>(maxlen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QIODevice_Delete(QIODevice* self) {
	delete self;
}

