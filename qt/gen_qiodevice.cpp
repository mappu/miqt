#include "gen_qiodevice.h"
#include "qiodevice.h"

#include <QByteArray>
#include <QIODevice>
#include <QMetaObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QIODevice_MetaObject(QIODevice* self) {
	return (QMetaObject*) self->metaObject();
}

void QIODevice_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled) {
	self->setTextModeEnabled(enabled);
}

bool QIODevice_IsTextModeEnabled(QIODevice* self) {
	return self->isTextModeEnabled();
}

bool QIODevice_IsOpen(QIODevice* self) {
	return self->isOpen();
}

bool QIODevice_IsReadable(QIODevice* self) {
	return self->isReadable();
}

bool QIODevice_IsWritable(QIODevice* self) {
	return self->isWritable();
}

bool QIODevice_IsSequential(QIODevice* self) {
	return self->isSequential();
}

int QIODevice_ReadChannelCount(QIODevice* self) {
	return self->readChannelCount();
}

int QIODevice_WriteChannelCount(QIODevice* self) {
	return self->writeChannelCount();
}

int QIODevice_CurrentReadChannel(QIODevice* self) {
	return self->currentReadChannel();
}

void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel) {
	self->setCurrentReadChannel(static_cast<int>(channel));
}

int QIODevice_CurrentWriteChannel(QIODevice* self) {
	return self->currentWriteChannel();
}

void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel) {
	self->setCurrentWriteChannel(static_cast<int>(channel));
}

void QIODevice_Close(QIODevice* self) {
	self->close();
}

int64_t QIODevice_Pos(QIODevice* self) {
	return self->pos();
}

int64_t QIODevice_Size(QIODevice* self) {
	return self->size();
}

bool QIODevice_Seek(QIODevice* self, int64_t pos) {
	return self->seek((qint64)(pos));
}

bool QIODevice_AtEnd(QIODevice* self) {
	return self->atEnd();
}

bool QIODevice_Reset(QIODevice* self) {
	return self->reset();
}

int64_t QIODevice_BytesAvailable(QIODevice* self) {
	return self->bytesAvailable();
}

int64_t QIODevice_BytesToWrite(QIODevice* self) {
	return self->bytesToWrite();
}

int64_t QIODevice_Read(QIODevice* self, char* data, int64_t maxlen) {
	return self->read(data, (qint64)(maxlen));
}

QByteArray* QIODevice_ReadWithMaxlen(QIODevice* self, int64_t maxlen) {
	QByteArray ret = self->read((qint64)(maxlen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QIODevice_ReadAll(QIODevice* self) {
	QByteArray ret = self->readAll();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

int64_t QIODevice_ReadLine(QIODevice* self, char* data, int64_t maxlen) {
	return self->readLine(data, (qint64)(maxlen));
}

QByteArray* QIODevice_ReadLine2(QIODevice* self) {
	QByteArray ret = self->readLine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QIODevice_CanReadLine(QIODevice* self) {
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

bool QIODevice_IsTransactionStarted(QIODevice* self) {
	return self->isTransactionStarted();
}

int64_t QIODevice_Write(QIODevice* self, char* data, int64_t lenVal) {
	return self->write(data, (qint64)(lenVal));
}

int64_t QIODevice_WriteWithData(QIODevice* self, char* data) {
	return self->write(data);
}

int64_t QIODevice_Write2(QIODevice* self, QByteArray* data) {
	return self->write(*data);
}

int64_t QIODevice_Peek(QIODevice* self, char* data, int64_t maxlen) {
	return self->peek(data, (qint64)(maxlen));
}

QByteArray* QIODevice_PeekWithMaxlen(QIODevice* self, int64_t maxlen) {
	QByteArray ret = self->peek((qint64)(maxlen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

int64_t QIODevice_Skip(QIODevice* self, int64_t maxSize) {
	return self->skip((qint64)(maxSize));
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

void QIODevice_ErrorString(QIODevice* self, char** _out, int* _out_Strlen) {
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

void QIODevice_BytesWritten(QIODevice* self, int64_t bytes) {
	self->bytesWritten((qint64)(bytes));
}

void QIODevice_connect_BytesWritten(QIODevice* self, void* slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)(qint64)>(&QIODevice::bytesWritten), self, [=](qint64 bytes) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, int64_t bytes) {
	self->channelBytesWritten(static_cast<int>(channel), (qint64)(bytes));
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

void QIODevice_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIODevice_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIODevice::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QIODevice_ReadLine1(QIODevice* self, int64_t maxlen) {
	QByteArray ret = self->readLine((qint64)(maxlen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QIODevice_Delete(QIODevice* self) {
	delete self;
}

