#include <QBuffer>
#include <QByteArray>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qbuffer.h"

#include "gen_qbuffer.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QBuffer* QBuffer_new() {
	return new QBuffer();
}

QBuffer* QBuffer_new2(QByteArray* buf) {
	return new QBuffer(buf);
}

QBuffer* QBuffer_new3(QObject* parent) {
	return new QBuffer(parent);
}

QBuffer* QBuffer_new4(QByteArray* buf, QObject* parent) {
	return new QBuffer(buf, parent);
}

QMetaObject* QBuffer_MetaObject(const QBuffer* self) {
	return (QMetaObject*) self->metaObject();
}

void QBuffer_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QBuffer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBuffer_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QBuffer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QBuffer_Buffer(QBuffer* self) {
	QByteArray& ret = self->buffer();
	// Cast returned reference into pointer
	return &ret;
}

QByteArray* QBuffer_Buffer2(const QBuffer* self) {
	const QByteArray& ret = self->buffer();
	// Cast returned reference into pointer
	return const_cast<QByteArray*>(&ret);
}

void QBuffer_SetBuffer(QBuffer* self, QByteArray* a) {
	self->setBuffer(a);
}

void QBuffer_SetData(QBuffer* self, QByteArray* data) {
	self->setData(*data);
}

void QBuffer_SetData2(QBuffer* self, const char* data, int lenVal) {
	self->setData(data, static_cast<int>(lenVal));
}

QByteArray* QBuffer_Data(const QBuffer* self) {
	const QByteArray& ret = self->data();
	// Cast returned reference into pointer
	return const_cast<QByteArray*>(&ret);
}

bool QBuffer_Open(QBuffer* self, int openMode) {
	return self->open(static_cast<QIODevice::OpenMode>(openMode));
}

void QBuffer_Close(QBuffer* self) {
	self->close();
}

long long QBuffer_Size(const QBuffer* self) {
	return self->size();
}

long long QBuffer_Pos(const QBuffer* self) {
	return self->pos();
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

void QBuffer_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QBuffer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBuffer_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QBuffer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBuffer_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QBuffer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBuffer_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QBuffer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBuffer_Delete(QBuffer* self) {
	delete self;
}

